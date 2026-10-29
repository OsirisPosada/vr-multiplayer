#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9;
struct DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A;
struct Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368;
struct Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA;
struct Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B;
struct EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5;
struct EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17;
struct ICollection_1_t87B7FE77D9543571C0ED293068D162416EEBB9EF;
struct ICollection_1_tBC8673CEB347B402EC0323DA58BD11C925261E60;
struct ICollection_1_t88BE27AF70C6C641D8C2794C2C8C930B1A40C388;
struct ICollection_1_tE3D84BC3D72CBBD6505CEF35E8F2F7129EE10A7D;
struct ICollection_1_t1538615B8CEE675ECCEAFE8BA7690D82DD18F125;
struct ICollection_1_tC41DC28CAD2C18D06E93AD57C6142620707A233D;
struct ICollection_1_t03EA087489342703ED691AFD807C50289BADA136;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IDictionary_2_t6DA4C5D834C77536AAAE2FE97ECAA7156FEDA762;
struct IDictionary_2_tDB240DCA8DA6C24908B940DAFA2BD8C919C890D4;
struct IDictionary_2_t03702ED9DD9A4FE5DD769F6F609DE10239EE6BC0;
struct IDictionary_2_tA7C64E0E0D78C574FF3CE43046AB02336D49C929;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_t6AE452B8ADADE112F509173B509FD35F8DF67518;
struct IEnumerable_1_tC7C9FF21E4C5735049385577F54C1FED195CE636;
struct IEnumerable_1_tD2637952AC1FFF876B6B6D17BB08FC077B5A3DF0;
struct IEnumerable_1_tF1728A83D51A4E2E13A310C284DEEF7EC59293B3;
struct IEnumerable_1_tD72FB15F8150103CFE23F83DF1FC7B1C148827FC;
struct IEnumerable_1_t114D5E5E6CF4A56F768063D5EA233AED073FEF90;
struct IEnumerable_1_t1EC9EB35B0A130CF2CBCDE9C7A237D8621D4FCC6;
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerator_1_tC999C71D2D143FB6E6DC62BEE0F3C957B491D34F;
struct IEnumerator_1_t1736F145E0BFB57EFBDC939CAC0820903E84C4DC;
struct IEnumerator_1_t0CA9BD601B658BAEB75A6BDA95E39ABE0C06D8F2;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t2317CE1409ABE7A6E9385C420F8B9CF15190F246;
struct IEqualityComparer_1_t0245A747BBCC15163E67EAFE7C936727EE37C20B;
struct IEqualityComparer_1_t108077952846FC1EFB2A32FBC2B810B4206A538B;
struct IEqualityComparer_1_tC9ABF3D0CA43E60B65862983A56F4636626C69C3;
struct IEqualityComparer_1_tC1B0D6B8E6213478414769B9C94D350B921D57D9;
struct IEqualityComparer_1_tE51D83C5E9ED930B1CD9A0CFFE453C9F10110CFD;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IReadOnlyDictionary_2_tAAE73DD0F1693587789EB2283CCA3AEA0DFB6839;
struct KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F;
struct KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9;
struct KeyCollection_t28FA94D798683154019D389407AFEAD57389CA57;
struct KeyCollection_t0DE33B46F9C9378F95E9576EA68384EA741C88DA;
struct KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227;
struct KeyCollection_t08DF3D6192EE868A67D2AF39F51CD69D642303A0;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4;
struct Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB;
struct ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB;
struct ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3;
struct ValueCollection_tE510132A38D904B8EC4E98BD7E8FD8744CBFFF10;
struct ValueCollection_t9AD3DCFBED0F95738EEC66CECB200914A9D9905E;
struct ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3;
struct ValueCollection_tE4B06E261C455F9B94EC0D76ED7F76A65F21B25C;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB;
struct EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC;
struct EntryU5BU5D_tCD48165EEA1ABE08E68B4558321C919ED8880630;
struct EntryU5BU5D_t19A7090EC277BA3E9B0EFB7AE45C7844976D1DE2;
struct EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C;
struct EntryU5BU5D_t44235C319571A13B29C248B7CA2F4DA085AE5085;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88;
struct KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE;
struct KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralEE193863755293E8EB3CE5BF2A7A5140A90319A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB;
struct EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC;
struct EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C;
struct KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88;
struct KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE;
struct KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD  : public RuntimeObject
{
};
struct U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D  : public RuntimeObject
{
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_t11025E5862E2C4D0FD8923B7995FF3CA72AEC4B1  : public RuntimeObject
{
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB  : public RuntimeObject
{
};
struct DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_t6086817CC98620510D98FB742382358DA92C2D4C  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A  : public RuntimeObject
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____genericDictionary;
	RuntimeObject* ____readOnlyDictionary;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* ____keys;
	ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* ____keys;
	ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tECA510002AFF2F7309FEFDBD52922A22B7BEA245  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCD48165EEA1ABE08E68B4558321C919ED8880630* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t28FA94D798683154019D389407AFEAD57389CA57* ____keys;
	ValueCollection_tE510132A38D904B8EC4E98BD7E8FD8744CBFFF10* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t54C1839F4EE32A546D24F6AD598F3A048EE2AB9A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t19A7090EC277BA3E9B0EFB7AE45C7844976D1DE2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0DE33B46F9C9378F95E9576EA68384EA741C88DA* ____keys;
	ValueCollection_t9AD3DCFBED0F95738EEC66CECB200914A9D9905E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* ____keys;
	ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t1647B380F7D7C04598F0AAEF2C683B5FB7ABE52B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t44235C319571A13B29C248B7CA2F4DA085AE5085* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t08DF3D6192EE868A67D2AF39F51CD69D642303A0* ____keys;
	ValueCollection_tE4B06E261C455F9B94EC0D76ED7F76A65F21B25C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B  : public RuntimeObject
{
};
struct EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5  : public RuntimeObject
{
};
struct EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F  : public RuntimeObject
{
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ____dictionary;
};
struct KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9  : public RuntimeObject
{
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ____dictionary;
};
struct KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227  : public RuntimeObject
{
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ____dictionary;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4  : public RuntimeObject
{
	Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA* ___m_Stack;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnGet;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnRelease;
	bool ___m_CollectionCheck;
	int32_t ___U3CcountAllU3Ek__BackingField;
};
struct ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB  : public RuntimeObject
{
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ____dictionary;
};
struct ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3  : public RuntimeObject
{
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ____dictionary;
};
struct ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3  : public RuntimeObject
{
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
struct DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB 
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053 
{
	RuntimeObject* ____e;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___m_ToReturn;
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___m_Pool;
};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
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
struct ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 
{
	union
	{
		struct
		{
		};
		uint8_t ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292__padding[1];
	};
};
struct Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F 
{
	int32_t ___hashCode;
	int32_t ___next;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___key;
	uint32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___key;
	uint32_t ___value;
};
struct ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___Item1;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___Item2;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Entry_tFFAB552450751427A4CC719868437AD752FB6E92 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E 
{
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF 
{
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 
{
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
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
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Allocator;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	bool ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 
{
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17  : public MulticastDelegate_t
{
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB  : public MulticastDelegate_t
{
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields
{
	U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* ___U3CU3E9;
};
struct U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D_StaticFields
{
	U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D* ___U3CU3E9;
	Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* ___U3CU3E9__29_0;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields
{
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___s_Pool;
};
struct EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B_StaticFields
{
	EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* ___defaultComparer;
};
struct EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields
{
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* ___defaultComparer;
};
struct EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields
{
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
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
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_ByteArrayCache;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F m_Items[1];

	inline Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B m_Items[1];

	inline KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
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
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
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
struct EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFFAB552450751427A4CC719868437AD752FB6E92 m_Items[1];

	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFFAB552450751427A4CC719868437AD752FB6E92 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFFAB552450751427A4CC719868437AD752FB6E92 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 m_Items[1];

	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D m_Items[1];

	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 m_Items[1];

	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m30762D555762B489F2C27288DA8175585594603D_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m799C7E68D4A9B661A1539FA1AD64887BF3C6B690_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m77FCE3DD7F7387537CEE494E69732A886B79201E_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_2_get_Entry_mA9FCA0DD088F8A2D58E769612B91FE7EDD45D4C2_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_2_get_Key_mB1B3E656D88C36BB892A57A4858B92C75467A8F1_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_2_get_Value_m1833BB99169E7A10A1B94B82ADD64E9F2ED64933_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_2_get_Current_mB2264B3813E71A58982A4A62939586C97BC9AFA5_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_2_MoveNext_mD8A7D1B941AEB7ADA1091F3ABA9FEADC16A1A0C8_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_2_Reset_mF8330A60A65FFFED2A9EA40BC9E3FE926CC8AEED_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7EF874F8A3387E5172D0F595415903CDE6ACD2BF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBEE9A4473B29BA33A0CA56653FB7B403905BABFF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBA2A4780714D114D8FC043702FB920DA35DACE31_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36F412A8CC69D06358846FD86C26688BE6C294A1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01 (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_2__ctor_mB2404C7ABD77FE384388890F4B7EDB74070EEE25_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE8348C3A2AC0E69FD210E53733235CA505F04699_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_gshared_inline (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_gshared_inline (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7AE3948A8F1BCA5C92DFBF48D630C45DCB4DE082_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF329A4DB0B6E3A8EC8A049613F7A8183D1C2F37E_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB8A1EA9F3574053E31DD1210407BA6EEB388A66E_gshared (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD_gshared (Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E* __this, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA202807B5DB09E8E158EE9F9A7E1AA375988A250_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m13948BF6BE885080C230ED2D21B91E74C5EE017B_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* Dictionary_2_get_Keys_m4840AD0B83723A2D1C1C572D352C452D332A33F9_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* Dictionary_2_get_Values_m2F441BE90C485A7E9FD163C590D5D60D88BD9C4B_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB797122CEEF0A6F881D3DB9CFCCDCA23FC1898F5_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC5F3C79D9C959BE33A7086ACECABCECB211B5029_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B240B2C1B4372B67A5E41416ABB4653F9E966F7_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m847230406989CE61857CEACBB14BD403D56D28F4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295_gshared (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74_gshared (Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C (ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* Dictionary_2_get_Keys_m252A17215D266E7008BA17CC2C8F3F2A7B895847_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* Dictionary_2_get_Values_mEA7F9A568798F678C6C85E9FE1C5824B3ECD640D_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5D6B3794541EF9B9F96A1DEE10C62143BBB366FB_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m416E40997DE72A71300F861D6D4219CAACCEC693 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF (Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* Dictionary_2_get_Keys_mA64899EF1E0D3CF0CCF0B4879CD2E6F095291949 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* Dictionary_2_get_Values_mCDBD67B128B1E27ED880C522DDB496C535DF7CD3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m6582649287DBD0E7BCE67B28BB21DEA8AE99889A (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFF33FCD8E9425C9017B18C57DEC4794D68971EFD (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m556E2C02530764D05030F387C8FBE7FB6AA24E63_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AA937B90B0CEB5250851747EF2F86B52A28969E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m63BB4F5002A00DEC6A44B9A5C7D8F82E24C54527_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22F05E4166BD259AEBE58A798FCAC53DB1FC9698_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* EqualityComparer_1_CreateComparer_mE68FB4DB7CDD12D3820AC40505D14159EE784FEA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_CreateComparer_mA52E4277838226FFABAEEB6001833A3AE12D11C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_CreateComparer_m3C58D527F5C7E5B0BA994273A014FA76550155ED (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;

inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43 (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43_gshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Key_m30762D555762B489F2C27288DA8175585594603D (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB*, const RuntimeMethod*))DictionaryEnumerator_get_Key_m30762D555762B489F2C27288DA8175585594603D_gshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Value_m799C7E68D4A9B661A1539FA1AD64887BF3C6B690 (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB*, const RuntimeMethod*))DictionaryEnumerator_get_Value_m799C7E68D4A9B661A1539FA1AD64887BF3C6B690_gshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Current_m77FCE3DD7F7387537CEE494E69732A886B79201E (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB*, const RuntimeMethod*))DictionaryEnumerator_get_Current_m77FCE3DD7F7387537CEE494E69732A886B79201E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_fshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_fshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_fshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_fshared)(__this, method);
}
inline bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_fshared)(__this, method);
}
inline void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_2_get_Entry_mA9FCA0DD088F8A2D58E769612B91FE7EDD45D4C2 (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))DictionaryEnumerator_2_get_Entry_mA9FCA0DD088F8A2D58E769612B91FE7EDD45D4C2_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
inline RuntimeObject* DictionaryEnumerator_2_get_Key_mB1B3E656D88C36BB892A57A4858B92C75467A8F1 (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))DictionaryEnumerator_2_get_Key_mB1B3E656D88C36BB892A57A4858B92C75467A8F1_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
inline RuntimeObject* DictionaryEnumerator_2_get_Value_m1833BB99169E7A10A1B94B82ADD64E9F2ED64933 (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))DictionaryEnumerator_2_get_Value_m1833BB99169E7A10A1B94B82ADD64E9F2ED64933_fshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_2_get_Current_mB2264B3813E71A58982A4A62939586C97BC9AFA5 (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))DictionaryEnumerator_2_get_Current_mB2264B3813E71A58982A4A62939586C97BC9AFA5_fshared)(__this, method);
}
inline bool DictionaryEnumerator_2_MoveNext_mD8A7D1B941AEB7ADA1091F3ABA9FEADC16A1A0C8 (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))DictionaryEnumerator_2_MoveNext_mD8A7D1B941AEB7ADA1091F3ABA9FEADC16A1A0C8_fshared)(__this, method);
}
inline void DictionaryEnumerator_2_Reset_mF8330A60A65FFFED2A9EA40BC9E3FE926CC8AEED (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))DictionaryEnumerator_2_Reset_mF8330A60A65FFFED2A9EA40BC9E3FE926CC8AEED_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7EF874F8A3387E5172D0F595415903CDE6ACD2BF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBEE9A4473B29BA33A0CA56653FB7B403905BABFF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBA2A4780714D114D8FC043702FB920DA35DACE31_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36F412A8CC69D06358846FD86C26688BE6C294A1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01 (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
inline void DictionaryEnumerator_2__ctor_mB2404C7ABD77FE384388890F4B7EDB74070EEE25 (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, RuntimeObject* ___0_e, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, RuntimeObject*, const RuntimeMethod*))DictionaryEnumerator_2__ctor_mB2404C7ABD77FE384388890F4B7EDB74070EEE25_fshared)(__this, ___0_e, method);
}
inline void Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mE8348C3A2AC0E69FD210E53733235CA505F04699 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE8348C3A2AC0E69FD210E53733235CA505F04699_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD_gshared)(__this, ___0_key, ___1_value, method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B*, const RuntimeMethod*))KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m7AE3948A8F1BCA5C92DFBF48D630C45DCB4DE082 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7AE3948A8F1BCA5C92DFBF48D630C45DCB4DE082_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_mAAA1CB6D4B329AB289244C53D1DF6184EA426A57 (KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* __this, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F*, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA14E9841B248C38669FB8487737B8FD1B66F793D (ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* __this, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB*, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mF329A4DB0B6E3A8EC8A049613F7A8183D1C2F37E (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))Dictionary_2_Remove_mF329A4DB0B6E3A8EC8A049613F7A8183D1C2F37E_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m1763C44B10A331E4E1AD40729737614ECD50EBC0 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mB8A1EA9F3574053E31DD1210407BA6EEB388A66E (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB8A1EA9F3574053E31DD1210407BA6EEB388A66E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD (Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E* __this, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E*, Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, int32_t, const RuntimeMethod*))Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mA202807B5DB09E8E158EE9F9A7E1AA375988A250 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, const RuntimeMethod*))Dictionary_2_Resize_mA202807B5DB09E8E158EE9F9A7E1AA375988A250_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m13948BF6BE885080C230ED2D21B91E74C5EE017B (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m13948BF6BE885080C230ED2D21B91E74C5EE017B_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* Dictionary_2_get_Keys_m4840AD0B83723A2D1C1C572D352C452D332A33F9 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, const RuntimeMethod*))Dictionary_2_get_Keys_m4840AD0B83723A2D1C1C572D352C452D332A33F9_gshared)(__this, method);
}
inline ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* Dictionary_2_get_Values_m2F441BE90C485A7E9FD163C590D5D60D88BD9C4B (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, const RuntimeMethod*))Dictionary_2_get_Values_m2F441BE90C485A7E9FD163C590D5D60D88BD9C4B_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mB797122CEEF0A6F881D3DB9CFCCDCA23FC1898F5 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mB797122CEEF0A6F881D3DB9CFCCDCA23FC1898F5_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mC5F3C79D9C959BE33A7086ACECABCECB211B5029 (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))Dictionary_2_ContainsKey_mC5F3C79D9C959BE33A7086ACECABCECB211B5029_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline (const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m9B240B2C1B4372B67A5E41416ABB4653F9E966F7 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m9B240B2C1B4372B67A5E41416ABB4653F9E966F7_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 (*) (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m847230406989CE61857CEACBB14BD403D56D28F4 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m847230406989CE61857CEACBB14BD403D56D28F4_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mC03750B749463EFC7284DDAC2702598277B3E4E8 (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3*, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, const RuntimeMethod*))Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, const RuntimeMethod*))Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295 (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74 (Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84*, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C (ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* Dictionary_2_get_Keys_m252A17215D266E7008BA17CC2C8F3F2A7B895847 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))Dictionary_2_get_Keys_m252A17215D266E7008BA17CC2C8F3F2A7B895847_gshared)(__this, method);
}
inline ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* Dictionary_2_get_Values_mEA7F9A568798F678C6C85E9FE1C5824B3ECD640D (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))Dictionary_2_get_Values_mEA7F9A568798F678C6C85E9FE1C5824B3ECD640D_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m5D6B3794541EF9B9F96A1DEE10C62143BBB366FB (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, const RuntimeMethod*))Dictionary_2_ContainsKey_m5D6B3794541EF9B9F96A1DEE10C62143BBB366FB_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m416E40997DE72A71300F861D6D4219CAACCEC693 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline void KeyCollection__ctor_mB3DBE00FC09EA6CD3635140E5B39EADF53207325 (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227*, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m56C9177F580E830FC880BE239BECF9F8C45C9CCE (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3*, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF (Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* Dictionary_2_get_Keys_mA64899EF1E0D3CF0CCF0B4879CD2E6F095291949 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* Dictionary_2_get_Values_mCDBD67B128B1E27ED880C522DDB496C535DF7CD3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m6582649287DBD0E7BCE67B28BB21DEA8AE99889A (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFF33FCD8E9425C9017B18C57DEC4794D68971EFD (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m556E2C02530764D05030F387C8FBE7FB6AA24E63_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AA937B90B0CEB5250851747EF2F86B52A28969E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m63BB4F5002A00DEC6A44B9A5C7D8F82E24C54527_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22F05E4166BD259AEBE58A798FCAC53DB1FC9698_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* EqualityComparer_1_CreateComparer_mE68FB4DB7CDD12D3820AC40505D14159EE784FEA (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE68FB4DB7CDD12D3820AC40505D14159EE784FEA_gshared)(method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_CreateComparer_mA52E4277838226FFABAEEB6001833A3AE12D11C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_CreateComparer_m3C58D527F5C7E5B0BA994273A014FA76550155ED (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_additionalSizeRequired, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_m6C780C94D74FD288FD4F7CA7B91732A14486FC3E_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		__this->____dictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_0);
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (RuntimeObject*)L_1);
		__this->____enumerator = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_2);
		return;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_0), NULL);
		RuntimeObject* L_3 = __this->____enumerator;
		NullCheck(L_3);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_3);
		V_0 = L_4;
		Il2CppSharedGenericObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_0), NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), (RuntimeObject*)L_2, (RuntimeObject*)L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB>(__this);
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB _returnValue;
	_returnValue = DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m30762D555762B489F2C27288DA8175585594603D_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_0), NULL);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Key_m30762D555762B489F2C27288DA8175585594603D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Key_m30762D555762B489F2C27288DA8175585594603D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m799C7E68D4A9B661A1539FA1AD64887BF3C6B690_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_0), NULL);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Value_m799C7E68D4A9B661A1539FA1AD64887BF3C6B690_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Value_m799C7E68D4A9B661A1539FA1AD64887BF3C6B690(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m77FCE3DD7F7387537CEE494E69732A886B79201E_gshared (DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m0C74B2983185B1CD6A6DF1AA3E585F96EC664E43(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Current_m77FCE3DD7F7387537CEE494E69732A886B79201E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tF2C1963D57618219A0383A985C6B17ABF02F36AB>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Current_m77FCE3DD7F7387537CEE494E69732A886B79201E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11160
// Method Definition Index: 11161
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
// Method Definition Index: 11025
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 11026
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_2);
		return L_3;
	}
}
// Method Definition Index: 11027
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_2);
		return L_3;
	}
}
// Method Definition Index: 11028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// Method Definition Index: 11029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 11030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		__this->____dictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_0);
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (RuntimeObject*)L_1);
		__this->____enumerator = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_2);
		return;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095);
	const uint32_t SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	memset(V_0, 0, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77>(__this);
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB _returnValue;
	_returnValue = DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	memset(V_0, 0, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	memset(V_0, 0, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77>(__this);
	bool _returnValue;
	_returnValue = DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 11161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77>(__this);
	DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 75825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_2__ctor_mB2404C7ABD77FE384388890F4B7EDB74070EEE25_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_e;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, NULL);
		RuntimeObject* L_1 = ___0_e;
		__this->____e = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e), (void*)L_1);
		return;
	}
}
// Method Definition Index: 75826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_2_get_Entry_mA9FCA0DD088F8A2D58E769612B91FE7EDD45D4C2_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_0, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var)));
	}
}
IL2CPP_EXTERN_C  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_2_get_Entry_mA9FCA0DD088F8A2D58E769612B91FE7EDD45D4C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053>(__this);
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB _returnValue;
	_returnValue = DictionaryEnumerator_2_get_Entry_mA9FCA0DD088F8A2D58E769612B91FE7EDD45D4C2(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_2_get_Key_mB1B3E656D88C36BB892A57A4858B92C75467A8F1_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_2_get_Key_mB1B3E656D88C36BB892A57A4858B92C75467A8F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_2_get_Key_mB1B3E656D88C36BB892A57A4858B92C75467A8F1(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_2_get_Value_m1833BB99169E7A10A1B94B82ADD64E9F2ED64933_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_2_get_Value_m1833BB99169E7A10A1B94B82ADD64E9F2ED64933_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_2_get_Value_m1833BB99169E7A10A1B94B82ADD64E9F2ED64933(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_2_get_Current_mB2264B3813E71A58982A4A62939586C97BC9AFA5_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_TEnumeratorKey_t5CA50B980800A5B5C3AE9D67CA933D6125809DC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TEnumeratorKey_t5CA50B980800A5B5C3AE9D67CA933D6125809DC1);
	const uint32_t SizeOf_TEnumeratorValue_t98CD17B5F06DC5DE05FDE6AD4DCDDB7205E93710 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TEnumeratorValue_t98CD17B5F06DC5DE05FDE6AD4DCDDB7205E93710);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B);
	{
		RuntimeObject* L_0 = __this->____e;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2);
		RuntimeObject* L_4 = __this->____e;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t84DB2F95E252B7EFA71765F7BC6D77A3E707CD2B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_2_get_Current_mB2264B3813E71A58982A4A62939586C97BC9AFA5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053>(__this);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_2_get_Current_mB2264B3813E71A58982A4A62939586C97BC9AFA5(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_2_MoveNext_mD8A7D1B941AEB7ADA1091F3ABA9FEADC16A1A0C8_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____e;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool DictionaryEnumerator_2_MoveNext_mD8A7D1B941AEB7ADA1091F3ABA9FEADC16A1A0C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053>(__this);
	bool _returnValue;
	_returnValue = DictionaryEnumerator_2_MoveNext_mD8A7D1B941AEB7ADA1091F3ABA9FEADC16A1A0C8(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_2_Reset_mF8330A60A65FFFED2A9EA40BC9E3FE926CC8AEED_fshared (DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____e;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryEnumerator_2_Reset_mF8330A60A65FFFED2A9EA40BC9E3FE926CC8AEED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053>(__this);
	DictionaryEnumerator_2_Reset_mF8330A60A65FFFED2A9EA40BC9E3FE926CC8AEED(_thisAdjusted, method);
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
// Method Definition Index: 38674
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPool_2_Get_mEB0AE4A6875B6FF8955F907DA14A422892DD0003_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		NullCheck(L_0);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1;
		L_1 = InvokerFuncInvoker0< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return L_1;
	}
}
// Method Definition Index: 38675
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 DictionaryPool_2_Get_mE67FD48FA0C54FD3B783CB3ED89BCBC4C4BB9E2A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 L_2;
		L_2 = InvokerFuncInvoker1< PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 38676
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2_Release_mEE88BD2235C60774A51C490CE3550E97C48262B6_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_toRelease, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_toRelease;
		NullCheck(L_0);
		InvokerActionInvoker1< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0, L_1);
		return;
	}
}
// Method Definition Index: 38677
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2__cctor_mDA7E85399F499BFD3ECCDFA845F7A6F19627B6C4_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t12171AE4C8145C70D97ABF478F6E34688B2EA070_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t12171AE4C8145C70D97ABF478F6E34688B2EA070_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* L_0 = ((U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))->___U3CU3E9;
		UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* L_1 = (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		((  void (*) (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), NULL);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_2 = (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		((  void (*) (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_2, (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)NULL, L_1, (bool)1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool), (void*)L_2);
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
// Method Definition Index: 97859
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (int32_t)(1);
	}
}
// Method Definition Index: 97860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
// Method Definition Index: 97861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
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
// Method Definition Index: 68109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_Write_m4EAB76498C45AE36F39B10568B10A01D20E23B38_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const uint32_t SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const uint32_t SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	CHECKED_LOCAL(NetworkVariableSerialization_1_t36563CFAA0DC6F7F0ECBCD731B9612D7FDA3E319_StaticInit);
	CHECKED_LOCAL(NetworkVariableSerialization_1_t4C44BC3FF643991315642F2A70ECE49749C5B746_StaticInit);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_10 = alloca(SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_15 = alloca(SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 V_3 = alloca(SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	memset(V_3, 0, SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
	memset(V_4, 0, SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	memset(V_5, 0, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	memset(V_6, 0, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_0 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = *(L_0);
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		il2cpp_codegen_initobj((&V_1), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_2 = V_1;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7EF874F8A3387E5172D0F595415903CDE6ACD2BF_inline((&___0_writer), (&V_0), L_2, NULL);
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0083;
		}
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_4 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_5 = *(L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(L_5, NULL);
		V_2 = L_6;
		il2cpp_codegen_initobj((&V_1), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_7 = V_1;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBEE9A4473B29BA33A0CA56653FB7B403905BABFF_inline((&___0_writer), (&V_2), L_7, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_8 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_9 = *(L_8);
		NullCheck(L_9);
		InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), L_9, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_10);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{
				Il2CppConstrainedCallData L_12;
				Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_3, &L_12, L_11);
				typedef void ( *func_L_14)(void*,const RuntimeMethod*);
				((func_L_14)L_13)(L_12.thisPtr,L_12.method);
				return;
			}
		});
		try
		{
			{
				goto IL_006a_1;
			}

IL_003f_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_3, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_15);
				il2cpp_codegen_memcpy(V_4, L_15, SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_16);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_17);
				il2cpp_codegen_memcpy(V_6, L_17, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
				il2cpp_codegen_memcpy(V_5, L_16, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_18 = ___0_writer;
				CHECKED_LOCAL_INIT(NetworkVariableSerialization_1_t36563CFAA0DC6F7F0ECBCD731B9612D7FDA3E319_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_18, (Il2CppFullySharedGenericAny*)V_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_19 = ___0_writer;
				CHECKED_LOCAL_INIT(NetworkVariableSerialization_1_t4C44BC3FF643991315642F2A70ECE49749C5B746_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(L_19, (Il2CppFullySharedGenericAny*)V_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
			}

IL_006a_1:
			{
				bool L_20;
				L_20 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
				if (L_20)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_0083;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		return;
	}
}
// Method Definition Index: 68110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_Read_m8741537C1A4DB41E6169D98653A507F94635E459_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const uint32_t SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	CHECKED_LOCAL(NetworkVariableSerialization_1_t36563CFAA0DC6F7F0ECBCD731B9612D7FDA3E319_StaticInit);
	CHECKED_LOCAL(NetworkVariableSerialization_1_t4C44BC3FF643991315642F2A70ECE49749C5B746_StaticInit);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	memset(V_4, 0, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	memset(V_5, 0, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_0 = V_1;
		FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBA2A4780714D114D8FC043702FB920DA35DACE31_inline((&___0_reader), (&V_0), L_0, NULL);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_2 = ___1_value;
		*(((RuntimeObject**)L_2)) = NULL;
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)NULL);
		return;
	}

IL_0019:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_3 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = *(L_3);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_5 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_6 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		*(((RuntimeObject**)L_5)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_5), (void*)((RuntimeObject*)L_6));
		goto IL_002d;
	}

IL_0026:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_7 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_8 = *(L_7);
		NullCheck(L_8);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(L_8, NULL);
	}

IL_002d:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_9 = V_1;
		FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36F412A8CC69D06358846FD86C26688BE6C294A1_inline((&___0_reader), (&V_2), L_9, NULL);
		V_3 = 0;
		goto IL_0072;
	}

IL_0043:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_10 = ___0_reader;
		CHECKED_LOCAL_INIT(NetworkVariableSerialization_1_t36563CFAA0DC6F7F0ECBCD731B9612D7FDA3E319_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_10, (Il2CppFullySharedGenericAny*)V_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_11 = ___0_reader;
		CHECKED_LOCAL_INIT(NetworkVariableSerialization_1_t4C44BC3FF643991315642F2A70ECE49749C5B746_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_11, (Il2CppFullySharedGenericAny*)V_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_12 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_13 = *(L_12);
		il2cpp_codegen_memcpy(L_14, V_4, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
		il2cpp_codegen_memcpy(L_15, V_5, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
		NullCheck(L_13);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)) ? L_15: *(void**)L_15));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0072:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 68111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_WriteDelta_m9D8B108215F2B0022CF47BFB97B31FD819A4B9BD_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_value, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___2_previousValue, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_0 = ___0_writer;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___1_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_2 = ___2_previousValue;
		((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E**, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return;
	}
}
// Method Definition Index: 68112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_ReadDelta_mBBBCAF26DA5493616A267D2D1E0F043310FBCBFC_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_0 = ___0_reader;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___1_value;
		((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)))(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 68113
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_Unity_Netcode_INetworkVariableSerializerU3CSystem_Collections_Generic_DictionaryU3CTKeyU2CTValU3EU3E_ReadWithAllocator_mD026B76C7D370A55F1A160F78B302EBFCFF09951_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_value, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 68114
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_Duplicate_m0B9D9E18EEB10BFA58B9AB81FB2D1A47BE8A0E8F_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_value, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_duplicatedValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const uint32_t SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const uint32_t SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	CHECKED_LOCAL(NetworkVariableSerialization_1_t36563CFAA0DC6F7F0ECBCD731B9612D7FDA3E319_StaticInit);
	CHECKED_LOCAL(NetworkVariableSerialization_1_t4C44BC3FF643991315642F2A70ECE49749C5B746_StaticInit);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_11 = alloca(SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_16 = alloca(SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
	//<source_info:<no-source>:1>
	Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 V_0 = alloca(SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	memset(V_0, 0, SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	memset(V_2, 0, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	memset(V_3, 0, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	memset(V_4, 0, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	memset(V_5, 0, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_0 = ___0_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_2 = ___1_duplicatedValue;
		*(((RuntimeObject**)L_2)) = NULL;
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)NULL);
		return;
	}

IL_0008:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_3 = ___1_duplicatedValue;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = *(L_3);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_5 = ___1_duplicatedValue;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_6 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		*(((RuntimeObject**)L_5)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_5), (void*)((RuntimeObject*)L_6));
	}

IL_0013:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_7 = ___1_duplicatedValue;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_8 = *(L_7);
		NullCheck(L_8);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(L_8, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_9 = ___0_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_10 = *(L_9);
		NullCheck(L_10);
		InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), L_10, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_11);
		il2cpp_codegen_memcpy(V_0, L_11, SizeOf_Enumerator_tB9F1D51BF788BF171E8F8ECCAFFA09C838D0D554);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{
				Il2CppConstrainedCallData L_13;
				Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_0, &L_13, L_12);
				typedef void ( *func_L_15)(void*,const RuntimeMethod*);
				((func_L_15)L_14)(L_13.thisPtr,L_13.method);
				return;
			}
		});
		try
		{
			{
				goto IL_0069_1;
			}

IL_0024_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_16);
				il2cpp_codegen_memcpy(V_1, L_16, SizeOf_KeyValuePair_2_t0C12136FC1A272B097C89C8A75169F87B02A96ED);
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_17);
				il2cpp_codegen_memcpy(V_4, L_17, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
				CHECKED_LOCAL_INIT(NetworkVariableSerialization_1_t36563CFAA0DC6F7F0ECBCD731B9612D7FDA3E319_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))((Il2CppFullySharedGenericAny*)V_4, (Il2CppFullySharedGenericAny*)V_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_18);
				il2cpp_codegen_memcpy(V_5, L_18, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
				CHECKED_LOCAL_INIT(NetworkVariableSerialization_1_t4C44BC3FF643991315642F2A70ECE49749C5B746_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)),il2cpp_codegen_runtime_class_init_inline);
				((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))((Il2CppFullySharedGenericAny*)V_5, (Il2CppFullySharedGenericAny*)V_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_19 = ___1_duplicatedValue;
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_20 = *(L_19);
				il2cpp_codegen_memcpy(L_21, V_2, SizeOf_TKey_t858F1224E0A03CF87C81E693BF33F6AE1FAC6EF1);
				il2cpp_codegen_memcpy(L_22, V_3, SizeOf_TVal_tC040BC4CD79435E72A28C665B3D48662785C6C29);
				NullCheck(L_20);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)) ? L_22: *(void**)L_22));
			}

IL_0069_1:
			{
				bool L_23;
				L_23 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
				if (L_23)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_0082;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		return;
	}
}
// Method Definition Index: 68115
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2__ctor_mE35EB0BECD9D995CF15EFD27BE895A5419DBB43A_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 68116
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySerializer_2_Unity_Netcode_INetworkVariableSerializerU3CSystem_Collections_Generic_DictionaryU3CTKeyU2CTValU3EU3E_Duplicate_m03C5904C4A46EA131BB52EEEE4B7580732086B69_fshared (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_value, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___1_duplicatedValue, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_0 = ___0_value;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___1_duplicatedValue;
		((  void (*) (DictionarySerializer_2_t2792CC55746B572421041E41CB61728B993C34F9*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E**, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
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
// Method Definition Index: 75795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_get_GenericDictionary_m66EA8E67F58A3606571AC7E0AB651B510D9E7539_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____genericDictionary;
		return L_0;
	}
}
// Method Definition Index: 75796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_Add_m30988928CB5E7E72150CB5D236B1BDD9012B5D13_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_4);
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3, L_5);
		return;
	}

IL_0020:
	{
		RuntimeObject* L_6 = __this->____genericDictionary;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_7 = __this->____genericDictionary;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		NullCheck(L_7);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_9: *(void**)L_9));
		return;
	}

IL_0036:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_10 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}
}
// Method Definition Index: 75797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_ContainsKey_mFF234F67867B735DAB559A80390CD557516EE681_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_10 = L_2;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3);
		return L_4;
	}

IL_001a:
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_6 = __this->____readOnlyDictionary;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_7: *(void**)L_7));
		return L_8;
	}

IL_002f:
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		NullCheck(L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_10: *(void**)L_10));
		return L_11;
	}
}
// Method Definition Index: 75798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_get_Keys_mCED5AF5A451428078F68CC81678AF518D1ADE419_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4;
		L_4 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_4;
	}

IL_001e:
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_6 = __this->____readOnlyDictionary;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_6);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8;
		L_8 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_8;
	}

IL_0037:
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9);
		return L_10;
	}
}
// Method Definition Index: 75799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_Remove_m53BF0B6CC6D8BC85AA55FD29E7F3B1852799CEC2_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_11 = L_2;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_5 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_5, L_7);
		return (bool)1;
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		RuntimeObject* L_8 = __this->____readOnlyDictionary;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003e:
	{
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		NullCheck(L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_11: *(void**)L_11));
		return L_12;
	}
}
// Method Definition Index: 75800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_TryGetValue_m75B883D24EB90BF2B5FCADE42654D5EA6CBE5876_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_16 = L_2;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_5 = ___1_value;
		il2cpp_codegen_initobj(L_5, SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		return (bool)0;
	}

IL_0024:
	{
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		RuntimeObject* L_7 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_8);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_7, L_9);
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_11);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)));
		return (bool)1;
	}

IL_0042:
	{
		RuntimeObject* L_13 = __this->____readOnlyDictionary;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_14 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0050:
	{
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		Il2CppFullySharedGenericAny* L_17 = ___1_value;
		NullCheck(L_15);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_16: *(void**)L_16), L_17);
		return L_18;
	}
}
// Method Definition Index: 75801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_get_Values_m8720E884894ACA317D54609937BD48E7C32BFEAC_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4;
		L_4 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (RuntimeObject*)L_4;
	}

IL_001e:
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_6 = __this->____readOnlyDictionary;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_6);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8;
		L_8 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (RuntimeObject*)L_8;
	}

IL_0037:
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9);
		return L_10;
	}
}
// Method Definition Index: 75802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_get_Item_m254B476F2B886E47A8DD9EE938406781A7BF28C2_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_9 = L_2;
	const Il2CppFullySharedGenericAny L_12 = L_2;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const Il2CppFullySharedGenericAny L_10 = L_5;
	const Il2CppFullySharedGenericAny L_13 = L_5;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3);
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6)), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		return;
	}

IL_001f:
	{
		RuntimeObject* L_7 = __this->____readOnlyDictionary;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = __this->____readOnlyDictionary;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		NullCheck(L_8);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		NullCheck(L_11);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		return;
	}
}
// Method Definition Index: 75803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_set_Item_mA68D9E03DA6751BC1F88BC878FD45C9F6101A4EE_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_9 = L_2;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const Il2CppFullySharedGenericAny L_10 = L_4;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_4);
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3, L_5);
		return;
	}

IL_0020:
	{
		RuntimeObject* L_6 = __this->____readOnlyDictionary;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_7 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002e:
	{
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_key : &___0_key), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___1_value : &___1_value), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
		NullCheck(L_8);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_10: *(void**)L_10));
		return;
	}
}
// Method Definition Index: 75804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_Add_mD6000EE4701EDCE2A7EAA0C059FF7C2F3F3DC940_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_2 = alloca(SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_9 = L_2;
	//<source_info:<no-source>:1>
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, ___0_item, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), L_2);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), L_3);
		return;
	}

IL_0020:
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_6 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002e:
	{
		RuntimeObject* L_7 = __this->____genericDictionary;
		RuntimeObject* L_8 = L_7;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0039;
		}
		G_B5_0 = L_8;
	}
	{
		return;
	}

IL_0039:
	{
		il2cpp_codegen_memcpy(L_9, ___0_item, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
		NullCheck((RuntimeObject*)G_B6_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)G_B6_0, L_9);
		return;
	}
}
// Method Definition Index: 75805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_Clear_m1B7C24948E0D60322B03740BBDCA1BAD5CA4CEEC_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(6, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		return;
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->____readOnlyDictionary;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_3 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_4);
		return;
	}
}
// Method Definition Index: 75806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_Contains_m2D4F676001BB0A33703588D0C234E598E6180215_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_2 = alloca(SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = L_2;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_10 = L_2;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_2, ___0_item, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), L_2);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), L_3);
		return L_4;
	}

IL_001f:
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = __this->____readOnlyDictionary;
		il2cpp_codegen_memcpy(L_7, ___0_item, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, RuntimeObject*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25), NULL, (RuntimeObject*)L_6, L_7);
		return L_8;
	}

IL_0034:
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_10, ___0_item, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
		NullCheck((RuntimeObject*)L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_9, L_10);
		return L_11;
	}
}
// Method Definition Index: 75807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_CopyTo_mEA4221D2775B40300CA92C0FCADF29EB7A853C0F_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_18 = alloca(SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_3 = V_0;
					RuntimeObject* L_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					if (L_4)
					{
						G_B8_0 = L_4;
						goto IL_005c;
					}
					G_B7_0 = L_4;
				}
				{
					goto IL_0061;
				}

IL_005c:
				{
					NullCheck(G_B8_0);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B8_0);
				}

IL_0061:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_0016_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
				L_6 = InterfaceFuncInvoker0< DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB >::Invoke(2, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_7 = ___0_array;
				int32_t L_8 = ___1_arrayIndex;
				int32_t L_9 = L_8;
				___1_arrayIndex = ((int32_t)il2cpp_codegen_add(L_9, 1));
				RuntimeObject* L_10;
				L_10 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_1), NULL);
				void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_11);
				RuntimeObject* L_13;
				L_13 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_1), NULL);
				void* L_15 = UnBox_Any(L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_14);
				memset(L_18, 0, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
				KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? il2cpp_codegen_memcpy(L_16, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? il2cpp_codegen_memcpy(L_17, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15)), SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
				NullCheck(L_7);
				il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_18, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_18);
			}

IL_0046_1:
			{
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_007d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		RuntimeObject* L_21 = __this->____readOnlyDictionary;
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_22 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}

IL_0070:
	{
		RuntimeObject* L_23;
		L_23 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_24 = ___0_array;
		int32_t L_25 = ___1_arrayIndex;
		NullCheck((RuntimeObject*)L_23);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_23, L_24, L_25);
	}

IL_007d:
	{
		return;
	}
}
// Method Definition Index: 75808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryWrapper_2_get_Count_m4E4C2AEC2A8BE89266316B880A8F2C3B31A876C6_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____readOnlyDictionary;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 29), (RuntimeObject*)L_4);
		return L_5;
	}

IL_0028:
	{
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_6);
		return L_7;
	}
}
// Method Definition Index: 75809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_get_IsReadOnly_mB0FB8A1C2BF02269A1E99902116057BCEE64E880_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(7, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____readOnlyDictionary;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_4);
		return L_5;
	}
}
// Method Definition Index: 75810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_Remove_m0E084AE1B1990E22A839974CF83C13E1AD59F913_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_13 = L_2;
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_18 = alloca(SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_item, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_3);
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_5 = __this->____dictionary;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_item, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_6);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_5, L_7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_item, (Il2CppFullySharedGenericAny*)L_9);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_9);
		bool L_11;
		L_11 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_12 = __this->____dictionary;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_item, (Il2CppFullySharedGenericAny*)L_13);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_13);
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_12, L_14);
		return (bool)1;
	}

IL_0064:
	{
		return (bool)0;
	}

IL_0066:
	{
		return (bool)1;
	}

IL_0068:
	{
		RuntimeObject* L_15 = __this->____readOnlyDictionary;
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_16 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0076:
	{
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		il2cpp_codegen_memcpy(L_18, ___0_item, SizeOf_KeyValuePair_2_tA40DC4C981917B3F0FE2A094B267CD4E8DC580FC);
		NullCheck((RuntimeObject*)L_17);
		bool L_19;
		L_19 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_17, L_18);
		return L_19;
	}
}
// Method Definition Index: 75811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_GetEnumerator_mC4726D4E781AE93548C6ACF5672CAAD8DE665698_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(U3CU3Ec_tF3D48710CE0160D944BBC62F7FDDEECBAA08F451_StaticInit);
	//<source_info:<no-source>:1>
	Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeObject* L_2;
		L_2 = Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01(L_1, Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_RuntimeMethod_var);
		CHECKED_LOCAL_INIT(U3CU3Ec_tF3D48710CE0160D944BBC62F7FDDEECBAA08F451_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_3 = ((U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)))->___U3CU3E9__29_0;
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_4 = L_3;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0032;
		}
		G_B2_0 = L_4;
		G_B2_1 = L_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tF3D48710CE0160D944BBC62F7FDDEECBAA08F451_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D* L_5 = ((U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)))->___U3CU3E9;
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_6 = (Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 38));
		((  void (*) (Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(L_6, (RuntimeObject*)L_5, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)), NULL);
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_7 = L_6;
		((U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)))->___U3CU3E9__29_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE0233A1937614B185FD60ADB3FA850349CAC7C8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)))->___U3CU3E9__29_0), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0032:
	{
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40)))(G_B3_1, G_B3_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 41), L_8);
		return L_9;
	}

IL_003d:
	{
		RuntimeObject* L_10 = __this->____readOnlyDictionary;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_11 = __this->____readOnlyDictionary;
		NullCheck((RuntimeObject*)L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 41), (RuntimeObject*)L_11);
		return L_12;
	}

IL_0051:
	{
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 41), (RuntimeObject*)L_13);
		return L_14;
	}
}
// Method Definition Index: 75812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_mED322E837529FC87B1326E3D80BD3EB23B4A735D_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 75813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_System_Collections_IDictionary_Add_m90F8FFD05B351D78B6170C502D944D8C2147F986_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeObject* L_2 = ___0_key;
		RuntimeObject* L_3 = ___1_value;
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		RuntimeObject* L_7 = ___0_key;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_8);
		RuntimeObject* L_10 = ___1_value;
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_11);
		NullCheck(L_6);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))));
		return;
	}
}
// Method Definition Index: 75814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_System_Collections_IDictionary_get_Item_mB104642002B065AAD8DAFF6A062BE98145009DEF_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeObject* L_2 = ___0_key;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		RuntimeObject* L_6 = ___0_key;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_7);
		NullCheck(L_5);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))), (Il2CppFullySharedGenericAny*)L_9);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_9);
		return L_10;
	}

IL_0034:
	{
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		RuntimeObject* L_12 = ___0_key;
		void* L_14 = UnBox_Any(L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_13);
		NullCheck(L_11);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_14)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_14))), (Il2CppFullySharedGenericAny*)L_15);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_15);
		return L_16;
	}
}
// Method Definition Index: 75815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_System_Collections_IDictionary_set_Item_mB4F0D798B5F662BEEFE33191277ED7A8FDFB1C2D_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const uint32_t SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tE6D0DC974D710E3752A1AA2366E2F980EC738A8D);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeObject* L_2 = ___0_key;
		RuntimeObject* L_3 = ___1_value;
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		RuntimeObject* L_7 = ___0_key;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_8);
		RuntimeObject* L_10 = ___1_value;
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_11);
		NullCheck(L_6);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))));
		return;
	}
}
// Method Definition Index: 75816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_System_Collections_IDictionary_GetEnumerator_m1D40DE26BF4F1218EE6BD613B42D5BB6E40BE023_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____readOnlyDictionary;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 41), (RuntimeObject*)L_4);
		DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053 L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEnumerator_2__ctor_mB2404C7ABD77FE384388890F4B7EDB74070EEE25((&L_6), L_5, NULL);
		DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 45), &L_7);
		return (RuntimeObject*)L_8;
	}

IL_0032:
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		NullCheck((RuntimeObject*)L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 41), (RuntimeObject*)L_9);
		DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053 L_11;
		memset((&L_11), 0, sizeof(L_11));
		DictionaryEnumerator_2__ctor_mB2404C7ABD77FE384388890F4B7EDB74070EEE25((&L_11), L_10, NULL);
		DictionaryEnumerator_2_t827CAE8B365C778A2ED1CECFCFB13B0094739053 L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 45), &L_12);
		return (RuntimeObject*)L_13;
	}
}
// Method Definition Index: 75817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_System_Collections_IDictionary_Contains_m8858C982FD2DCB3684A92111A6B43C9D37786712_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	const Il2CppFullySharedGenericAny L_9 = L_3;
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____genericDictionary;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericDictionary;
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_3);
		NullCheck(L_1);
		bool L_5;
		L_5 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_001a:
	{
		RuntimeObject* L_6 = __this->____readOnlyDictionary;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_7 = __this->____readOnlyDictionary;
		RuntimeObject* L_8 = ___0_key;
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_9);
		NullCheck(L_7);
		bool L_11;
		L_11 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))));
		return L_11;
	}

IL_0034:
	{
		RuntimeObject* L_12 = __this->____dictionary;
		RuntimeObject* L_13 = ___0_key;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}
}
// Method Definition Index: 75818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_System_Collections_IDictionary_get_Keys_m14EB82B2E9AC7DB6895B4440830B0338BB6F60A6_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____genericDictionary;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericDictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_1);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3;
		L_3 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))((RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_3;
	}

IL_0019:
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_5);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7;
		L_7 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_7;
	}

IL_0032:
	{
		RuntimeObject* L_8 = __this->____dictionary;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_8);
		return L_9;
	}
}
// Method Definition Index: 75819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_Remove_m22660E3B514B9A4AA763ADFC398A1471D55F71DF_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TKey_tC9B2329877B3A856BD0D9F754469EBA4B4841835);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeObject* L_2 = ___0_key;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0015:
	{
		RuntimeObject* L_3 = __this->____readOnlyDictionary;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		RuntimeObject* L_6 = ___0_key;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))));
		return;
	}
}
// Method Definition Index: 75820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_System_Collections_IDictionary_get_Values_m7F7A888BF57F406E81D8F00A2E1C09C26D64D826_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____genericDictionary;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericDictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_1);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3;
		L_3 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))((RuntimeObject*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (RuntimeObject*)L_3;
	}

IL_0019:
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = __this->____readOnlyDictionary;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_5);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7;
		L_7 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (RuntimeObject*)L_7;
	}

IL_0032:
	{
		RuntimeObject* L_8 = __this->____dictionary;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_8);
		return L_9;
	}
}
// Method Definition Index: 75821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryWrapper_2_System_Collections_ICollection_CopyTo_mEB0EF9C17C67007CD4575F692F1AF1DFD640A3CB_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeArray* L_2 = ___0_array;
		int32_t L_3 = ___1_index;
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->____readOnlyDictionary;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		RuntimeArray* L_7 = ___0_array;
		int32_t L_8 = ___1_index;
		NullCheck((RuntimeObject*)L_6);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 22), (RuntimeObject*)L_6, ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)CastclassSealed((RuntimeObject*)L_7, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 46))), L_8);
		return;
	}
}
// Method Definition Index: 75822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryWrapper_2_System_Collections_ICollection_get_IsSynchronized_m0BA40552B47BC2E469FAEC13F0292955957EF4CA_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// Method Definition Index: 75823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_System_Collections_ICollection_get_SyncRoot_m9E38EC0BBC223B6E09E263288838325E64465602_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 75824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryWrapper_2_get_UnderlyingDictionary_m0EE5D50FB7D189623309CD8B0864BA50CB04A2B2_fshared (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____dictionary;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____dictionary;
		return L_1;
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->____readOnlyDictionary;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = __this->____readOnlyDictionary;
		return (RuntimeObject*)L_3;
	}

IL_001e:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (DictionaryWrapper_2_t6507F5D7882296450058A699B581ED2798B3B42A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, NULL);
		return (RuntimeObject*)L_4;
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
// Method Definition Index: 11191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m060743B32276B3401A6D2301D7A8F7CA09887A5A_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB529E95CA8116DE2B932068851C64BEEDA5FB451_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m78596A133C6123AAD2A8220C87E5798E7CA2D122_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_5;
		L_5 = EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8DB9A48877DBCEBFED22857533E36540E91E124E_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mE8348C3A2AC0E69FD210E53733235CA505F04699(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE8348C3A2AC0E69FD210E53733235CA505F04699_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* G_B2_0 = NULL;
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* L_9 = ((Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_30;
				L_30 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline((&V_4), NULL);
				Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA3817E2C7A705C461E5BE34CB07359E42F6E1C9_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_m7AE3948A8F1BCA5C92DFBF48D630C45DCB4DE082(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7AE3948A8F1BCA5C92DFBF48D630C45DCB4DE082_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mE14A325BEA0E94C2976C5A5C0938C45D21D36556(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_11;
				L_11 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline((&V_1), NULL);
				Il2CppSharedGenericObject* L_12;
				L_12 = KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline((&V_1), NULL);
				Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11199
// Method Definition Index: 11200
// Method Definition Index: 11201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* Dictionary_2_get_Keys_m4840AD0B83723A2D1C1C572D352C452D332A33F9_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_1 = (KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mAAA1CB6D4B329AB289244C53D1DF6184EA426A57(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mD19D7BFA2769834F0CF14995DC2C9624CC2BA0B5_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_1 = (KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mAAA1CB6D4B329AB289244C53D1DF6184EA426A57(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mB7525B279972C1DED2EB8152C191CA4645E450C6_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_1 = (KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mAAA1CB6D4B329AB289244C53D1DF6184EA426A57(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* Dictionary_2_get_Values_m2F441BE90C485A7E9FD163C590D5D60D88BD9C4B_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_1 = (ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_mA14E9841B248C38669FB8487737B8FD1B66F793D(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m77ADAF86D01E26D3700E773B82A0423DF56594DC_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_1 = (ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_mA14E9841B248C38669FB8487737B8FD1B66F793D(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m491580A7960BAFBFAD68D959AE269DD239197737_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_1 = (ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_mA14E9841B248C38669FB8487737B8FD1B66F793D(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m3237DB0B79B1D00A32192814D4068ECFD29321AA_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6 = ___0_key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 11208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB797122CEEF0A6F881D3DB9CFCCDCA23FC1898F5_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mC5A64D23DFD1F0F70B9F0F0CB675FD73D56D0E72_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0;
		L_0 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m46F29386D80B07D71FC9CF125D7F7719501AD527_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0;
		L_0 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7DFD6792EE391E308746D1A08B0D268F10EFFC82_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0;
		L_0 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_9;
		L_9 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_mF329A4DB0B6E3A8EC8A049613F7A8183D1C2F37E(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11213
// Method Definition Index: 11214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC5F3C79D9C959BE33A7086ACECABCECB211B5029_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m8AD59C6029D2861B50343F91ACD54160F00D966C_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m1763C44B10A331E4E1AD40729737614ECD50EBC0(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mB8A1EA9F3574053E31DD1210407BA6EEB388A66E((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E Dictionary_2_GetEnumerator_mBA4ED41A76230BD32462AC777A32680F38BEBAFE_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2DE1527ACD2C02F5EF5976298FF4742426E2F61A_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD((&L_0), __this, 2, NULL);
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mF26DDDB9EF6343A799AB9FEA23ADFB9E7D687DDD_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_6;
		L_6 = EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m1763C44B10A331E4E1AD40729737614ECD50EBC0(__this, NULL);
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_15 = (KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88*)(KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_16 = V_0;
		Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_6(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), ___0_key);
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)(L_9%L_11));
		int32_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
	}

IL_0066:
	{
		int32_t L_15 = V_0;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		if ((!(((uint32_t)L_15) < ((uint32_t)L_17))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_22;
		L_22 = EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_26 = ___0_key;
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(8, L_22, L_25, L_26);
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_35 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_36 = ___0_key;
		NullCheck(L_35);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_35, L_36);
		V_8 = ((int32_t)(L_37&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_1;
		int32_t L_39 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		NullCheck(L_38);
		int32_t L_42 = ((int32_t)(L_39%L_41));
		int32_t L_43 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
	}

IL_012b:
	{
		int32_t L_44 = V_0;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((!(((uint32_t)L_44) < ((uint32_t)L_46))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_8;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_51 = V_4;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_51, L_54, L_55);
		if (L_56)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_57 = V_2;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___next;
		V_0 = L_59;
		int32_t L_60 = V_3;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_61 = V_2;
		NullCheck(L_61);
		int32_t L_62 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_61)->max_length),NULL));
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_63 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_64 = V_0;
		return L_64;
	}
}
// Method Definition Index: 11221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_5 = (EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB*)(EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* V_10 = NULL;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_10(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), ___0_key);
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%L_15)))));
		int32_t* L_16 = V_4;
		int32_t L_17 = *(L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
	}

IL_0091:
	{
		int32_t L_20 = V_5;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((!(((uint32_t)L_20) < ((uint32_t)L_22))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_27;
		L_27 = EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_31 = ___0_key;
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(8, L_27, L_30, L_31);
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Il2CppSharedGenericObject* L_36 = ___1_value;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value), (void*)L_36);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_38 = ___0_key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_39);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_40, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_41 = V_0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___next;
		V_5 = L_43;
		int32_t L_44 = V_3;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_48 = V_5;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_49)->max_length),NULL));
		if ((!(((uint32_t)L_48) < ((uint32_t)L_50))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___hashCode;
		int32_t L_54 = V_2;
		if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_55 = V_1;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_59 = ___0_key;
		NullCheck(L_55);
		bool L_60;
		L_60 = InterfaceFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_55, L_58, L_59);
		if (!L_60)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_62 = V_0;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		Il2CppSharedGenericObject* L_64 = ___1_value;
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___value = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___value), (void*)L_64);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_65 = ___2_behavior;
		if ((!(((uint32_t)L_65) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_66 = ___0_key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_67 = L_66;
		RuntimeObject* L_68 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_67);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_68, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___next;
		V_5 = L_71;
		int32_t L_72 = V_3;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_76 = __this->____freeCount;
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_77 = __this->____freeList;
		V_8 = L_77;
		V_7 = (bool)1;
		int32_t L_78 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_79 = __this->____count;
		V_13 = L_79;
		int32_t L_80 = V_13;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((!(((uint32_t)L_80) == ((uint32_t)L_82))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA202807B5DB09E8E158EE9F9A7E1AA375988A250(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_83 = V_13;
		V_8 = L_83;
		int32_t L_84 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_84, 1));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_85 = __this->____entries;
		V_0 = L_85;
	}

IL_0250:
	{
		bool L_86 = V_6;
		if (L_86)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_87 = V_4;
		G_B51_0 = L_87;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = __this->____buckets;
		int32_t L_89 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->____buckets;
		NullCheck(L_90);
		int32_t L_91 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_90)->max_length),NULL));
		NullCheck(L_88);
		G_B51_0 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_89%L_91)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_92 = V_0;
		int32_t L_93 = V_8;
		NullCheck(L_92);
		V_10 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93)));
		bool L_94 = V_7;
		if (!L_94)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_95 = V_10;
		int32_t L_96 = L_95->___next;
		__this->____freeList = L_96;
	}

IL_028a:
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_97 = V_10;
		int32_t L_98 = V_2;
		L_97->___hashCode = L_98;
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_99 = V_10;
		int32_t* L_100 = V_9;
		int32_t L_101 = *(L_100);
		L_99->___next = ((int32_t)il2cpp_codegen_subtract(L_101, 1));
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_102 = V_10;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_103 = ___0_key;
		L_102->___key = L_103;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_102->___key))->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_102->___key))->___value), (void*)NULL);
		#endif
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_104 = V_10;
		Il2CppSharedGenericObject* L_105 = ___1_value;
		L_104->___value = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&L_104->___value), (void*)L_105);
		int32_t* L_106 = V_9;
		int32_t L_107 = V_8;
		*(L_106) = ((int32_t)il2cpp_codegen_add(L_107, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m4DC3329CF01BDD9A02EFA655E811A2ABBBE8FCFC_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_21;
		L_21 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_24;
		L_24 = KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA202807B5DB09E8E158EE9F9A7E1AA375988A250_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m13948BF6BE885080C230ED2D21B91E74C5EE017B(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m13948BF6BE885080C230ED2D21B91E74C5EE017B_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_1 = NULL;
	int32_t V_2 = 0;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_3 = (EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB*)(EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_5 = __this->____entries;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_17 = (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_18(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), *L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
// Method Definition Index: 11226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF329A4DB0B6E3A8EC8A049613F7A8183D1C2F37E_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_4(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), ___0_key);
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = ((int32_t)(L_8%L_10));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_17 = V_4;
		int32_t L_18 = L_17->___hashCode;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_22;
		L_22 = EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_23 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_24 = L_23->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_25 = ___0_key;
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(8, L_22, L_24, L_25);
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_27 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_28 = L_27->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_29 = ___0_key;
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_28, L_29);
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_34 = V_4;
		int32_t L_35 = L_34->___next;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_38 = V_4;
		int32_t L_39 = L_38->___next;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_39;
	}

IL_00d6:
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_40 = V_4;
		L_40->___hashCode = (-1);
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		L_41->___next = L_42;
	}
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_43 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_44 = (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)(&L_43->___key);
		il2cpp_codegen_initobj(L_44, sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
	}

IL_00ff:
	{
	}
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9873EBB72A309A32BD78AE30F76A12732187A0BE_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_4(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), ___0_key);
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = ((int32_t)(L_8%L_10));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_17 = V_4;
		int32_t L_18 = L_17->___hashCode;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_22;
		L_22 = EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_23 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_24 = L_23->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_25 = ___0_key;
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(8, L_22, L_24, L_25);
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_27 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_28 = L_27->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_29 = ___0_key;
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_28, L_29);
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_34 = V_4;
		int32_t L_35 = L_34->___next;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_38 = V_4;
		int32_t L_39 = L_38->___next;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_39;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_40 = ___1_value;
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_41 = V_4;
		Il2CppSharedGenericObject* L_42 = L_41->___value;
		*(Il2CppSharedGenericObject**)L_40 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_40, (void*)L_42);
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_43 = V_4;
		L_43->___hashCode = (-1);
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_44 = V_4;
		int32_t L_45 = __this->____freeList;
		L_44->___next = L_45;
	}
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_46 = V_4;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_47 = (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)(&L_46->___key);
		il2cpp_codegen_initobj(L_47, sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
	}

IL_010c:
	{
	}
	{
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_48 = V_4;
		Il2CppSharedGenericObject** L_49 = (Il2CppSharedGenericObject**)(&L_48->___value);
		il2cpp_codegen_initobj(L_49, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_50 = V_3;
		__this->____freeList = L_50;
		int32_t L_51 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_52, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_53 = V_3;
		V_2 = L_53;
		Entry_tBBE8DB8A5EB13B6A1616B017132277FDA69A509F* L_54 = V_4;
		int32_t L_55 = L_54->___next;
		V_3 = L_55;
	}

IL_014f:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_57 = ___1_value;
		il2cpp_codegen_initobj(L_57, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 11228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5858EC1E2CC074546F95C1775C2DF0F6759155D8_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 11229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6F06B0BAB3CC6BA8C4093EFA03378FEE2E80ECD7_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m6A719946A474BD545E6F747A075887FD67B1F823(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11230
// Method Definition Index: 11231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59C7C6C8305312E518897DD380E3431864027ECF_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBE6CD3BD81B661F9B4EDED7C16F51E92D28A37F3_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m1763C44B10A331E4E1AD40729737614ECD50EBC0(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t575583FF81DA9455DF348191443F67D960660C88* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m5A6946C2000233ECAC8AC7013B7FFB8A7E5519FD(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mB8A1EA9F3574053E31DD1210407BA6EEB388A66E((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mF9DA9C8E249B1F754990FB4C87CAB3916A09E284_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD((&L_0), __this, 2, NULL);
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mD7834B8EA65AF225E39EF717CE9245D6A3E22DEB_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m0557DBB810B4EDFAC532101885D87EF6574CD5F7(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m13948BF6BE885080C230ED2D21B91E74C5EE017B(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11235
// Method Definition Index: 11236
// Method Definition Index: 11237
// Method Definition Index: 11238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m142F7795C2BC106DCE7DD136C5280CC684CEA65E_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t40FE564B9093C98FB1BA912D87129AF080B0DD4F* L_0;
		L_0 = Dictionary_2_get_Keys_m4840AD0B83723A2D1C1C572D352C452D332A33F9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m8977BE9CD2AE24D8389EAE366A500D40413FC7A3_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tF4D53CF48F409D70C4866BBC8376BB8A971ACCCB* L_0;
		L_0 = Dictionary_2_get_Values_m2F441BE90C485A7E9FD163C590D5D60D88BD9C4B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mFC4834F9409AC7ED47F998E149D93588F5F803EE_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m43E8EA3343E794000579907799C3F7798DA8BFD8(__this, ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tFFCB16B20AC30A77A169107159D63D33B73615FB* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return (RuntimeObject*)L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m2702FFE0EC8648306B03E0CA3894274B188141BC_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mB797122CEEF0A6F881D3DB9CFCCDCA23FC1898F5(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m9780A6F01AF158E6FC0AB191D459F9A775BFE10A_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m1410EC115B6191FC48798E0CF79F2EF0A766E5BD(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD3FE7470AB46B5954431BE430F67DF0B0F5DDE72_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC5F3C79D9C959BE33A7086ACECABCECB211B5029(__this, ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m041FCEF829D4AAB0B424030B3AE0435297858EE2_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2284D2E425A611FF3E25989C9C819DF33DC69AD((&L_0), __this, 1, NULL);
		Enumerator_tF18A9B90788F0EAC0D01DB257C7699A362C6E36E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mBB0EA44B19EE4D20F136CCD5FC457ACE77C57124_gshared (Dictionary_2_t16363E647DC03674627508A7FE540103B5B8E368* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m325C3D464C269875A270A97768ACFB9032F90A29(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mF329A4DB0B6E3A8EC8A049613F7A8183D1C2F37E(__this, ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF7EE9B3C1F88ABD4FAF6DF5CF18CCC24FD1598E4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA358128F8B3241363137A5E2C4A3FAB3B55AF5EB_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D82D9EF66C6BB63DD5C8243C6948D728478CE29_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_5;
		L_5 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEC32A8E3364AB31ECDBA47BA702645B8C41D3B12_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m9B240B2C1B4372B67A5E41416ABB4653F9E966F7(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B240B2C1B4372B67A5E41416ABB4653F9E966F7_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* G_B2_0 = NULL;
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* L_9 = ((Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_30;
				L_30 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&V_4), NULL);
				Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m875327C00EC22F2AF1085C5F2BF603F57705EB6F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_m847230406989CE61857CEACBB14BD403D56D28F4(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m847230406989CE61857CEACBB14BD403D56D28F4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_11;
				L_11 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&V_1), NULL);
				Il2CppSharedGenericObject* L_12;
				L_12 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&V_1), NULL);
				Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11199
// Method Definition Index: 11200
// Method Definition Index: 11201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* Dictionary_2_get_Keys_m252A17215D266E7008BA17CC2C8F3F2A7B895847_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_1 = (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m39C4ADE91A5651C939D4A4297E6D944B6BE407D2_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_1 = (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m980E71E14FC0944D3D9C673486D5BF0C58520ACE_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_1 = (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* Dictionary_2_get_Values_mEA7F9A568798F678C6C85E9FE1C5824B3ECD640D_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_1 = (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_mC03750B749463EFC7284DDAC2702598277B3E4E8(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m6725C0C2642503408C577D9941DA57252BB2F644_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_1 = (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_mC03750B749463EFC7284DDAC2702598277B3E4E8(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mDC5C973AFAEF37719137CFC5F89A01A99E97FDBD_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_1 = (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_mC03750B749463EFC7284DDAC2702598277B3E4E8(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mE403A6AB66A327894DD9C5712BE4F5FF6194FAD4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_6 = ___0_key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 11208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9B7C8B3113679DA4F593AD50BC9A9ABC43EE32E4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0;
		L_0 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF03EC825CD2A47C3D224AE41BFE3670892D192F2_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0;
		L_0 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCC850DB64DE5F6E48BE2B8F8CDD34850FBE70C3D_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0;
		L_0 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_9;
		L_9 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11213
// Method Definition Index: 11214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5D6B3794541EF9B9F96A1DEE10C62143BBB366FB_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m562604FAB25A1D70534A2B81FCE08A9A6D6EBF86_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 Dictionary_2_GetEnumerator_mF5EAF3C93EE5DB6F55D9F5B8206C8F9CD5848C85_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m858DB354A19715E0FE9215763598A9B05471B660_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 2, NULL);
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0BCE27D46EB8245FC47A30476154343F6981431F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_6;
		L_6 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED(__this, NULL);
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_15 = (KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)(KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_16 = V_0;
		Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_21;
		L_21 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 11221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = (EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)(EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFFAB552450751427A4CC719868437AD752FB6E92* V_10 = NULL;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_26;
		L_26 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_37 = ___0_key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_65 = ___0_key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_101 = V_10;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m2D415A06A0F1E18664670377C70D829C1432DBA9_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_21;
		L_21 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24;
		L_24 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_3 = (EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)(EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = __this->____entries;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7));
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7* L_17 = (ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFFAB552450751427A4CC719868437AD752FB6E92* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_21;
		L_21 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_22 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_23 = L_22->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_26 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_27 = L_26->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1D140CEDA3CAB1ED5005387AA5CDFD46185E68B3_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFFAB552450751427A4CC719868437AD752FB6E92* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_21;
		L_21 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_22 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_23 = L_22->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_26 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_27 = L_26->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 11228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEC8136680E035B9F0AA4E41766651DDDBE6E0AF9_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 11229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m609CC1BBFBA50B155ED0AD13824BFC68EFA99F66_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11230
// Method Definition Index: 11231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA3A77A01289754BEBEDD0BBD63199EA9E291DE86_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m678E9354439761476972AABAB79F473A98CC2195_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mDB3425886CA60379E76D7FA776BBE1408472926E_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 2, NULL);
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mDD8BE6C88B9A039DD34AB4B4D650BAA7FF90F780_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11235
// Method Definition Index: 11236
// Method Definition Index: 11237
// Method Definition Index: 11238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m66169F374551899A729152A817599E9DA1DB4823_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_0;
		L_0 = Dictionary_2_get_Keys_m252A17215D266E7008BA17CC2C8F3F2A7B895847(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m2FBD3D8192F3F6929858F86DE0D74D3B1D59E417_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_0;
		L_0 = Dictionary_2_get_Values_mEA7F9A568798F678C6C85E9FE1C5824B3ECD640D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m21A30F538C0651763FF0865DDDD922D71D268B3E_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, ((*(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return (RuntimeObject*)L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m89BBC06ED9389928FE919A10F9964FB1B7844166_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mC051B1D402CB65C1CD4DA5AA75A8D3EBE41E30BD_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m57F64970799A6195F9C00C0CE9C11644C0E85D1A_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5D6B3794541EF9B9F96A1DEE10C62143BBB366FB(__this, ((*(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m487F9785068361C5886317669D5321EBAE9D824B_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 1, NULL);
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mFADE6EE616080E04452FB8852187ED76F1B7C66E_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEAF78A228FAB496EA9EDA45BB668F999A5D4683C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95(__this, ((*(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11191
// Method Definition Index: 11192
// Method Definition Index: 11193
// Method Definition Index: 11194
// Method Definition Index: 11195
// Method Definition Index: 11196
// Method Definition Index: 11197
// Method Definition Index: 11198
// Method Definition Index: 11199
// Method Definition Index: 11200
// Method Definition Index: 11201
// Method Definition Index: 11202
// Method Definition Index: 11203
// Method Definition Index: 11204
// Method Definition Index: 11205
// Method Definition Index: 11206
// Method Definition Index: 11207
// Method Definition Index: 11208
// Method Definition Index: 11209
// Method Definition Index: 11210
// Method Definition Index: 11211
// Method Definition Index: 11212
// Method Definition Index: 11213
// Method Definition Index: 11214
// Method Definition Index: 11215
// Method Definition Index: 11216
// Method Definition Index: 11217
// Method Definition Index: 11218
// Method Definition Index: 11219
// Method Definition Index: 11220
// Method Definition Index: 11221
// Method Definition Index: 11222
// Method Definition Index: 11223
// Method Definition Index: 11224
// Method Definition Index: 11225
// Method Definition Index: 11226
// Method Definition Index: 11227
// Method Definition Index: 11228
// Method Definition Index: 11229
// Method Definition Index: 11230
// Method Definition Index: 11231
// Method Definition Index: 11232
// Method Definition Index: 11233
// Method Definition Index: 11234
// Method Definition Index: 11235
// Method Definition Index: 11236
// Method Definition Index: 11237
// Method Definition Index: 11238
// Method Definition Index: 11239
// Method Definition Index: 11240
// Method Definition Index: 11241
// Method Definition Index: 11242
// Method Definition Index: 11243
// Method Definition Index: 11244
// Method Definition Index: 11245
// Method Definition Index: 11246
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11191
// Method Definition Index: 11192
// Method Definition Index: 11193
// Method Definition Index: 11194
// Method Definition Index: 11195
// Method Definition Index: 11196
// Method Definition Index: 11197
// Method Definition Index: 11198
// Method Definition Index: 11199
// Method Definition Index: 11200
// Method Definition Index: 11201
// Method Definition Index: 11202
// Method Definition Index: 11203
// Method Definition Index: 11204
// Method Definition Index: 11205
// Method Definition Index: 11206
// Method Definition Index: 11207
// Method Definition Index: 11208
// Method Definition Index: 11209
// Method Definition Index: 11210
// Method Definition Index: 11211
// Method Definition Index: 11212
// Method Definition Index: 11213
// Method Definition Index: 11214
// Method Definition Index: 11215
// Method Definition Index: 11216
// Method Definition Index: 11217
// Method Definition Index: 11218
// Method Definition Index: 11219
// Method Definition Index: 11220
// Method Definition Index: 11221
// Method Definition Index: 11222
// Method Definition Index: 11223
// Method Definition Index: 11224
// Method Definition Index: 11225
// Method Definition Index: 11226
// Method Definition Index: 11227
// Method Definition Index: 11228
// Method Definition Index: 11229
// Method Definition Index: 11230
// Method Definition Index: 11231
// Method Definition Index: 11232
// Method Definition Index: 11233
// Method Definition Index: 11234
// Method Definition Index: 11235
// Method Definition Index: 11236
// Method Definition Index: 11237
// Method Definition Index: 11238
// Method Definition Index: 11239
// Method Definition Index: 11240
// Method Definition Index: 11241
// Method Definition Index: 11242
// Method Definition Index: 11243
// Method Definition Index: 11244
// Method Definition Index: 11245
// Method Definition Index: 11246
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9AB7A5AB75F44BED696A5014507B3353CD9A3656 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC08EC5E30FFF5F565D55C1BB6533C45E18FE9C14 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m73F921036A3DF64F9BD8A257DAB42F7C0314CED7 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_5;
		L_5 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5BE528DD15F256890CECBFA6F6E91ADEA55FAB0 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B2_0 = NULL;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* L_9 = ((Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		uint32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_30;
				L_30 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&V_4), NULL);
				uint32_t L_31;
				L_31 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&V_4), NULL);
				Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F621238D61DEFAE2C1125B30F6E4AABC23A30B2 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_m416E40997DE72A71300F861D6D4219CAACCEC693(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m416E40997DE72A71300F861D6D4219CAACCEC693 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_11;
				L_11 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&V_1), NULL);
				uint32_t L_12;
				L_12 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&V_1), NULL);
				Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11199
// Method Definition Index: 11200
// Method Definition Index: 11201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* Dictionary_2_get_Keys_mA64899EF1E0D3CF0CCF0B4879CD2E6F095291949 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_1 = (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mB3DBE00FC09EA6CD3635140E5B39EADF53207325(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m870FEB52C46DEE287DACB11E8AB0C051BBE4B1A4 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_1 = (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mB3DBE00FC09EA6CD3635140E5B39EADF53207325(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m57BA8F5860B3F39FEDE72CF99DD0106DAFAF84D3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_1 = (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mB3DBE00FC09EA6CD3635140E5B39EADF53207325(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* Dictionary_2_get_Values_mCDBD67B128B1E27ED880C522DDB496C535DF7CD3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_1 = (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m56C9177F580E830FC880BE239BECF9F8C45C9CCE(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mE501807442243DAABBB874FE08054DEE23CD7734 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_1 = (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m56C9177F580E830FC880BE239BECF9F8C45C9CCE(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m64ABA20A26324C1688346B1EA92322E593F0F67E (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_1 = (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m56C9177F580E830FC880BE239BECF9F8C45C9CCE(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_m9666D2519BD3F39CF9EA6BF2FBE6DA6FAD1E6CEE (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		uint32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_6 = ___0_key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 11208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCC4031138496CF2AD91A8A92A71FFB1D1A3FC02A (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0;
		L_0 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		uint32_t L_1;
		L_1 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mB07F28BEE723DD5D48BB1FACDF57B6E613012C39 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0;
		L_0 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m0F7705D81F4BCB6400C7CFDC4F57BBBDC05B0140 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0;
		L_0 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_9;
		L_9 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11213
// Method Definition Index: 11214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFF33FCD8E9425C9017B18C57DEC4794D68971EFD (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2EFA52B0B46CCDFA3B6381408B6380CB8744457C (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(uint32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		uint32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		uint32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		uint32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF Dictionary_2_GetEnumerator_m4794B6986DD9EE0231B93557DE95BA18C5B8281A (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m241C0722597D7856AABC8C0F9004154B123C7DD4 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 2, NULL);
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m100E7289E3E068C4263B4C1A52A4EC0C3B6DF3DC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_6;
		L_6 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666(__this, NULL);
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_15 = (KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)(KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_16 = V_0;
		Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_21;
		L_21 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 11221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_5 = (EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)(EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* V_10 = NULL;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_26;
		L_26 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		uint32_t L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_37 = ___0_key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		uint32_t L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_65 = ___0_key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_101 = V_10;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_103 = V_10;
		uint32_t L_104 = ___1_value;
		L_103->___value = L_104;
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 11223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m0E05CDD040FE789F3746CA26184430A6FC4FD952 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_21;
		L_21 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24;
		L_24 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		uint32_t L_27;
		L_27 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_3 = (EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)(EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_5 = __this->____entries;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_17 = (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_21;
		L_21 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_22 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_23 = L_22->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_26 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_27 = L_26->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_42 = V_3;
		__this->____freeList = L_42;
		int32_t L_43 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_44, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_45 = V_3;
		V_2 = L_45;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_46 = V_4;
		int32_t L_47 = L_46->___next;
		V_3 = L_47;
	}

IL_0142:
	{
		int32_t L_48 = V_3;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m67D9AD29B37CEB5F99BC601ADB7A200E5D940BF0 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_21;
		L_21 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_22 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_23 = L_22->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_26 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_27 = L_26->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		uint32_t* L_39 = ___1_value;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_40 = V_4;
		uint32_t L_41 = L_40->___value;
		*(uint32_t*)L_39 = L_41;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_014f:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		uint32_t* L_52 = ___1_value;
		il2cpp_codegen_initobj(L_52, sizeof(uint32_t));
		return (bool)0;
	}
}
// Method Definition Index: 11228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0CFCB75B1A7F2DC2B2E46B6D030A7C3AC148024E (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t* L_3 = ___1_value;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(uint32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		uint32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(uint32_t));
		return (bool)0;
	}
}
// Method Definition Index: 11229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mEE44A88B4F268938825F1E9AFF9AC2EFECE1C5F3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11230
// Method Definition Index: 11231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mBAB39C608332DD6CCA4E37BC38AD011167DCD7D1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m55DB3C97A19E8D5D271AA2022E88FFC5CEA28648 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		uint32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		uint32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			uint32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A((&L_55), L_51, L_54, NULL);
			KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mBD71ECA19B507C327D8540ADA75AEC4448CE7CB7 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 2, NULL);
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m8B7013485B3149444BA63860215089D72342FC81 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11235
// Method Definition Index: 11236
// Method Definition Index: 11237
// Method Definition Index: 11238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mB0FC18828CB7301BEC145B98A926436B86E4DFFE (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_0;
		L_0 = Dictionary_2_get_Keys_mA64899EF1E0D3CF0CCF0B4879CD2E6F095291949(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return L_0;
	}
}
// Method Definition Index: 11239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mACA3BEF59C88DD015A1BC7C1BE94C167419F6AC0 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_0;
		L_0 = Dictionary_2_get_Values_mCDBD67B128B1E27ED880C522DDB496C535DF7CD3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return L_0;
	}
}
// Method Definition Index: 11240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m8541B5A49B0EC82F135FAA7A92DA5D2C56270131 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m6582649287DBD0E7BCE67B28BB21DEA8AE99889A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		uint32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m777CE5A12D3627B0F950531051BBFD114894420D (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF(__this, L_3, ((*(uint32_t*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m6582649287DBD0E7BCE67B28BB21DEA8AE99889A (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m25E1FB2617741EDDA01D5240683138B45A27DE3D (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_3, ((*(uint32_t*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m00EA494CAA71670699BF87700F67F8E671EBB39E (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m6582649287DBD0E7BCE67B28BB21DEA8AE99889A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFF33FCD8E9425C9017B18C57DEC4794D68971EFD(__this, ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17D460F3016405411A624636A1CA12BD32F841FF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 1, NULL);
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mB2E5ECADD081D1B6B06F7B129D5D71A63108B5DC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m6582649287DBD0E7BCE67B28BB21DEA8AE99889A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF(__this, ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11191
// Method Definition Index: 11192
// Method Definition Index: 11193
// Method Definition Index: 11194
// Method Definition Index: 11195
// Method Definition Index: 11196
// Method Definition Index: 11197
// Method Definition Index: 11198
// Method Definition Index: 11199
// Method Definition Index: 11200
// Method Definition Index: 11201
// Method Definition Index: 11202
// Method Definition Index: 11203
// Method Definition Index: 11204
// Method Definition Index: 11205
// Method Definition Index: 11206
// Method Definition Index: 11207
// Method Definition Index: 11208
// Method Definition Index: 11209
// Method Definition Index: 11210
// Method Definition Index: 11211
// Method Definition Index: 11212
// Method Definition Index: 11213
// Method Definition Index: 11214
// Method Definition Index: 11215
// Method Definition Index: 11216
// Method Definition Index: 11217
// Method Definition Index: 11218
// Method Definition Index: 11219
// Method Definition Index: 11220
// Method Definition Index: 11221
// Method Definition Index: 11222
// Method Definition Index: 11223
// Method Definition Index: 11224
// Method Definition Index: 11225
// Method Definition Index: 11226
// Method Definition Index: 11227
// Method Definition Index: 11228
// Method Definition Index: 11229
// Method Definition Index: 11230
// Method Definition Index: 11231
// Method Definition Index: 11232
// Method Definition Index: 11233
// Method Definition Index: 11234
// Method Definition Index: 11235
// Method Definition Index: 11236
// Method Definition Index: 11237
// Method Definition Index: 11238
// Method Definition Index: 11239
// Method Definition Index: 11240
// Method Definition Index: 11241
// Method Definition Index: 11242
// Method Definition Index: 11243
// Method Definition Index: 11244
// Method Definition Index: 11245
// Method Definition Index: 11246
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 10466
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____key;
		return L_0;
	}
}
// Method Definition Index: 10467
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____value;
		return L_0;
	}
}
// Method Definition Index: 11334
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 68972
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7EF874F8A3387E5172D0F595415903CDE6ACD2BF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	//<source_info:<no-source>:1>
	{
		bool* L_0 = ___0_value;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_WriteUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m556E2C02530764D05030F387C8FBE7FB6AA24E63_inline(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 68972
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBEE9A4473B29BA33A0CA56653FB7B403905BABFF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___0_value;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_WriteUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AA937B90B0CEB5250851747EF2F86B52A28969E_inline(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 68849
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBA2A4780714D114D8FC043702FB920DA35DACE31_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool* L_0 = ___0_value;
		FastBufferReader_ReadUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m63BB4F5002A00DEC6A44B9A5C7D8F82E24C54527_inline(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 68849
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36F412A8CC69D06358846FD86C26688BE6C294A1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___0_value;
		FastBufferReader_ReadUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22F05E4166BD259AEBE58A798FCAC53DB1FC9698_inline(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 11577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* EqualityComparer_1_get_Default_mFE4AB53A888CF5334AD080B67216BE94761E9FE7_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* V_0 = NULL;
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_0 = ((EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE68FB4DB7CDD12D3820AC40505D14159EE784FEA(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t4F27F00684F00C40E16356E2E7A18BD2D715D83B* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11334
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 KeyValuePair_2_get_Key_mF86F44AB45A4691C419859DABBE02D7F3D601D10_gshared_inline (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m5B6FDBBECF76E1E9303BC02AE333DCA532DBDC95_gshared_inline (KeyValuePair_2_tA3AA4C9A59C3F862B7742227991D706451DD508B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* V_0 = NULL;
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_0 = ((EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA52E4277838226FFABAEEB6001833A3AE12D11C0(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11334
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* V_0 = NULL;
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_0 = ((EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3C58D527F5C7E5B0BA994273A014FA76550155ED(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11334
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint32_t L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 68950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m556E2C02530764D05030F387C8FBE7FB6AA24E63_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	//<source_info:<no-source>:1>
	bool* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		bool* L_0 = ___0_value;
		V_0 = L_0;
		bool* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,bool*,intptr_t,false,false>(L_1,NULL));
		V_1 = (uint8_t*)L_2;
		uint8_t* L_3 = V_1;
		uint32_t L_4 = sizeof(bool);
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline(__this, L_3, (int32_t)L_4, 0, NULL);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool*)L_5;
		return;
	}
}
// Method Definition Index: 68950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AA937B90B0CEB5250851747EF2F86B52A28969E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		int32_t* L_0 = ___0_value;
		V_0 = L_0;
		int32_t* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(L_1,NULL));
		V_1 = (uint8_t*)L_2;
		uint8_t* L_3 = V_1;
		uint32_t L_4 = sizeof(int32_t);
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline(__this, L_3, (int32_t)L_4, 0, NULL);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (int32_t*)L_5;
		return;
	}
}
// Method Definition Index: 68829
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m63BB4F5002A00DEC6A44B9A5C7D8F82E24C54527_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		bool* L_0 = ___0_value;
		V_0 = L_0;
		bool* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,bool*,intptr_t,false,false>(L_1,NULL));
		V_1 = (uint8_t*)L_2;
		uint8_t* L_3 = V_1;
		uint32_t L_4 = sizeof(bool);
		FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline(__this, L_3, (int32_t)L_4, 0, NULL);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool*)L_5;
		return;
	}
}
// Method Definition Index: 68829
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22F05E4166BD259AEBE58A798FCAC53DB1FC9698_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		int32_t* L_0 = ___0_value;
		V_0 = L_0;
		int32_t* L_1 = V_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(L_1,NULL));
		V_1 = (uint8_t*)L_2;
		uint8_t* L_3 = V_1;
		uint32_t L_4 = sizeof(int32_t);
		FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline(__this, L_3, (int32_t)L_4, 0, NULL);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (int32_t*)L_5;
		return;
	}
}
// Method Definition Index: 68936
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_size;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Capacity;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_6, L_8));
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE193863755293E8EB3CE5BF2A7A5140A90319A6)), L_4, L_10, NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_12 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var)));
	}

IL_003b:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_13 = __this->___Handle;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___BufferPointer;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_15 = __this->___Handle;
		NullCheck(L_15);
		int32_t L_16 = L_15->___Position;
		uint8_t* L_17 = ___0_value;
		int32_t L_18 = ___2_offset;
		int32_t L_19 = ___1_size;
		int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_19,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_16)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18)), L_20, NULL);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_21 = __this->___Handle;
		NullCheck(L_21);
		int32_t* L_22 = (int32_t*)(&L_21->___Position);
		int32_t* L_23 = L_22;
		int32_t L_24 = *(L_23);
		int32_t L_25 = ___1_size;
		*(L_23) = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		return;
	}
}
// Method Definition Index: 68825
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_size;
		bool L_1;
		L_1 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var)));
	}

IL_0014:
	{
		uint8_t* L_3 = ___0_value;
		int32_t L_4 = ___2_offset;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_5 = __this->___Handle;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___BufferPointer;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position;
		int32_t L_9 = ___1_size;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)), L_10, NULL);
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_11 = __this->___Handle;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position);
		int32_t* L_13 = L_12;
		int32_t L_14 = *(L_13);
		int32_t L_15 = ___1_size;
		*(L_13) = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		return;
	}
}
// Method Definition Index: 68919
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit);
	//<source_info:<no-source>:1>
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		int32_t L_2 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position;
		int32_t L_7 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = ___0_bytes;
		CHECKED_LOCAL_INIT(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticInit,(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		return (bool)0;
	}

IL_0059:
	{
		return (bool)1;
	}
}
// Method Definition Index: 68805
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		int32_t L_2 = ___0_bytes;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_3 = __this->___Handle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		return (bool)1;
	}
}

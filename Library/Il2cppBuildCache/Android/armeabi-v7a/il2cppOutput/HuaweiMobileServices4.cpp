#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.HistoryVersion>
struct DriveRequest_1_tD68EEDBB65F9A471421A66AEAD21824A5337AC67;
// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.HistoryVersionList>
struct DriveRequest_1_t8BE00A1879A09027D7E06C4C22AA5A9DCF910C2E;
// HuaweiMobileServices.Drive.DriveRequest`1<System.Object>
struct DriveRequest_1_t9A37F1D1805E020DC3C7AC186E3601D09F405560;
// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.Reply>
struct DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494;
// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.ReplyList>
struct DriveRequest_1_tC8583511F896648169244F0B4671ADD00F01D926;
// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Utils.Void>
struct DriveRequest_1_t2809A8C96B903CE9D5B52539FB072C3EDC3EB76F;
// HuaweiMobileServices.Scan.HmsScan[]
struct HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// HuaweiMobileServices.Drive.HistoryVersion
struct HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D;
// HuaweiMobileServices.Drive.HistoryVersionList
struct HistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB;
// HuaweiMobileServices.Scan.HmsScan
struct HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276;
// HuaweiMobileServices.Ads.InstallReferrer.IInstallReferrerStateCallback
struct IInstallReferrerStateCallback_t4FB2B19F84E9CB1161FADAEF7D59CB48F778D858;
// HuaweiMobileServices.Location.ILocationCallback
struct ILocationCallback_t75752CB10D875F4AE2E958AEEFEA21AFA81D05F5;
// HuaweiMobileServices.Scan.IOnLightVisibleCallBack
struct IOnLightVisibleCallBack_tDB10AA43C21E6939C5671B24A3D063F614F4E2B6;
// HuaweiMobileServices.Scan.IOnResultCallback
struct IOnResultCallback_tF319D5ACE7F718BA56AAF77F0B98B582430E93EB;
// HuaweiMobileServices.Nearby.Discovery.IScanEndpointCallback
struct IScanEndpointCallback_t879A7E6D7C477F0E07812D449295D552DC7A1F6C;
// HuaweiMobileServices.Nearby.WifiShare.IWifiShareCallback
struct IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701;
// HuaweiMobileServices.Utils.JavaObjectWrapper
struct JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB;
// HuaweiMobileServices.Location.Location.LocationAvailability
struct LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA;
// HuaweiMobileServices.Location.Location.LocationResult
struct LocationResult_t15549459BA8F419415326C413D2726D30404B370;
// HuaweiMobileServices.Drive.Reply
struct Reply_t0171021529C9997DFC1906A4B034648CF15B5149;
// HuaweiMobileServices.Drive.ReplyList
struct ReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4;
// HuaweiMobileServices.Nearby.Discovery.ScanEndpointInfo
struct ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface
struct InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68;
// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface
struct LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904;
// HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper
struct OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE;
// HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper
struct OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617;
// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface
struct ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5;
// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface
struct WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653;
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete
struct Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829;
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get
struct Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B;
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List
struct List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20;
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update
struct Update_t8532DFDDA24FE533E3366D008599459B3B293FCE;
// HuaweiMobileServices.Drive.Drive/Replies/Create
struct Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B;
// HuaweiMobileServices.Drive.Drive/Replies/Delete
struct Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE;
// HuaweiMobileServices.Drive.Drive/Replies/Get
struct Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A;
// HuaweiMobileServices.Drive.Drive/Replies/List
struct List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65;
// HuaweiMobileServices.Drive.Drive/Replies/Update
struct Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF;
// HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail
struct Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115;
// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tF5B480D0999654BF6CFC68623D7A771AFC4AD586;
// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB3CA5EB7D5E75523ECFC2BB8003F4884704E8AA4;
// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t76DC2AEF0E82A33E3115325C67118AABB7D55F22;
// HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t2DAF6F58C0CA0C1C3BE0E3B5584EB1C2D5BC621F;
// HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0C0943749D55D576013042BB6E398B955973D792;
// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA;
// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tC031A29DA8B071DD33C66B3330139A77059812D7;
// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A;
// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD83835C0ABAA21A0619D9294D5C00C85D46CC1AB;
// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10;
// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectExtensions_tFCC175D238DC33DD76F565A022E073CEFA2D040F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstallReferrerStateCallback_t4FB2B19F84E9CB1161FADAEF7D59CB48F778D858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocationCallback_t75752CB10D875F4AE2E958AEEFEA21AFA81D05F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOnLightVisibleCallBack_tDB10AA43C21E6939C5671B24A3D063F614F4E2B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOnResultCallback_tF319D5ACE7F718BA56AAF77F0B98B582430E93EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScanEndpointCallback_t879A7E6D7C477F0E07812D449295D552DC7A1F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9B0773C54AEDB8FF66154429206301DE88955E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040;
IL2CPP_EXTERN_C String_t* _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA;
IL2CPP_EXTERN_C String_t* _stringLiteral1F89869CF7D2EC13EE502BE3675C19819886C251;
IL2CPP_EXTERN_C String_t* _stringLiteral39FFE0FA7259735020EE279762B70763547117F8;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB93FBF6D3E84B3FF482C78D0BF9665FD503B94;
IL2CPP_EXTERN_C String_t* _stringLiteral3B12C646C29E391B362D63816AD0CA2485B81B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral4339B11820CB84A7A0DBE3CE35782BCF8AABD8B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4CA274C629331A270E1D046374566982C488DAA5;
IL2CPP_EXTERN_C String_t* _stringLiteral4EFC06B98096DB8E72027B3F2FB77E9D2FCE194A;
IL2CPP_EXTERN_C String_t* _stringLiteral5C357E6BAFB604E5567E03E831937FE9B8F25E8C;
IL2CPP_EXTERN_C String_t* _stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8;
IL2CPP_EXTERN_C String_t* _stringLiteral7CECD6D34F7459767BDB94A975C93F74C51C244A;
IL2CPP_EXTERN_C String_t* _stringLiteral82F35651E6F21E41DCB425DE18460E0883658397;
IL2CPP_EXTERN_C String_t* _stringLiteral82F6634CE542422F6C3C867FE3D4604421E3150B;
IL2CPP_EXTERN_C String_t* _stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B;
IL2CPP_EXTERN_C String_t* _stringLiteral8BC725DD3D7458900C8A2BA1A3497C0F9C839B6E;
IL2CPP_EXTERN_C String_t* _stringLiteral9310A656D2C30C1DF465C32637E887A231C35786;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EEB94E0E6FA43C83114AE6D96D86854855406E;
IL2CPP_EXTERN_C String_t* _stringLiteralA836F86C4CABAFBBEA3C8DC63A0D47E4D1243A70;
IL2CPP_EXTERN_C String_t* _stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C014178907B74F3A7DFF6E20EDA86243546AD4;
IL2CPP_EXTERN_C String_t* _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF8C65C51E9857FE51B4B7906F64838F5A449E7;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348;
IL2CPP_EXTERN_C String_t* _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE7914412BA2609A9AC12A9C27BA640D0BDF262;
IL2CPP_EXTERN_C String_t* _stringLiteralFF71DC910646836341C1A26B92E121A75EDF6EDD;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveRequest_1__ctor_m3B64BC5DAB5EA2213B7D1E5D2D56ADD2FCAED62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveRequest_1__ctor_mB1682DD66722E39DC7F924742F7F4F7ADA1AC758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisHistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB_mEE39A71DC0EF9921FB9403F1444C85349C870AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4_mCBCAAEFAD02147D94B012D48FA2DD1E6F16C3693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var;

struct HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// HuaweiMobileServices.Utils.JavaObjectWrapper
struct JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject HuaweiMobileServices.Utils.JavaObjectWrapper::<JavaObject>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CJavaObjectU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CJavaObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB, ___U3CJavaObjectU3Ek__BackingField_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CJavaObjectU3Ek__BackingField_0() const { return ___U3CJavaObjectU3Ek__BackingField_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CJavaObjectU3Ek__BackingField_0() { return &___U3CJavaObjectU3Ek__BackingField_0; }
	inline void set_U3CJavaObjectU3Ek__BackingField_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CJavaObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJavaObjectU3Ek__BackingField_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tF5B480D0999654BF6CFC68623D7A771AFC4AD586  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface/<>c__DisplayClass2_0::<>4__this
	InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68 * ___U3CU3E4__this_0;
	// System.Int32 HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface/<>c__DisplayClass2_0::responseCode
	int32_t ___responseCode_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tF5B480D0999654BF6CFC68623D7A771AFC4AD586, ___U3CU3E4__this_0)); }
	inline InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_responseCode_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tF5B480D0999654BF6CFC68623D7A771AFC4AD586, ___responseCode_1)); }
	inline int32_t get_responseCode_1() const { return ___responseCode_1; }
	inline int32_t* get_address_of_responseCode_1() { return &___responseCode_1; }
	inline void set_responseCode_1(int32_t value)
	{
		___responseCode_1 = value;
	}
};


// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB3CA5EB7D5E75523ECFC2BB8003F4884704E8AA4  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass2_0::<>4__this
	LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * ___U3CU3E4__this_0;
	// HuaweiMobileServices.Location.Location.LocationAvailability HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass2_0::locationAvailability
	LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA * ___locationAvailability_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tB3CA5EB7D5E75523ECFC2BB8003F4884704E8AA4, ___U3CU3E4__this_0)); }
	inline LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_locationAvailability_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tB3CA5EB7D5E75523ECFC2BB8003F4884704E8AA4, ___locationAvailability_1)); }
	inline LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA * get_locationAvailability_1() const { return ___locationAvailability_1; }
	inline LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA ** get_address_of_locationAvailability_1() { return &___locationAvailability_1; }
	inline void set_locationAvailability_1(LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA * value)
	{
		___locationAvailability_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locationAvailability_1), (void*)value);
	}
};


// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t76DC2AEF0E82A33E3115325C67118AABB7D55F22  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass3_0::<>4__this
	LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * ___U3CU3E4__this_0;
	// HuaweiMobileServices.Location.Location.LocationResult HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass3_0::locationResult
	LocationResult_t15549459BA8F419415326C413D2726D30404B370 * ___locationResult_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t76DC2AEF0E82A33E3115325C67118AABB7D55F22, ___U3CU3E4__this_0)); }
	inline LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_locationResult_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t76DC2AEF0E82A33E3115325C67118AABB7D55F22, ___locationResult_1)); }
	inline LocationResult_t15549459BA8F419415326C413D2726D30404B370 * get_locationResult_1() const { return ___locationResult_1; }
	inline LocationResult_t15549459BA8F419415326C413D2726D30404B370 ** get_address_of_locationResult_1() { return &___locationResult_1; }
	inline void set_locationResult_1(LocationResult_t15549459BA8F419415326C413D2726D30404B370 * value)
	{
		___locationResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locationResult_1), (void*)value);
	}
};


// HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t2DAF6F58C0CA0C1C3BE0E3B5584EB1C2D5BC621F  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper/<>c__DisplayClass2_0::<>4__this
	OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE * ___U3CU3E4__this_0;
	// System.Boolean HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper/<>c__DisplayClass2_0::visible
	bool ___visible_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t2DAF6F58C0CA0C1C3BE0E3B5584EB1C2D5BC621F, ___U3CU3E4__this_0)); }
	inline OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_visible_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t2DAF6F58C0CA0C1C3BE0E3B5584EB1C2D5BC621F, ___visible_1)); }
	inline bool get_visible_1() const { return ___visible_1; }
	inline bool* get_address_of_visible_1() { return &___visible_1; }
	inline void set_visible_1(bool value)
	{
		___visible_1 = value;
	}
};


// HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0C0943749D55D576013042BB6E398B955973D792  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper/<>c__DisplayClass2_0::<>4__this
	OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617 * ___U3CU3E4__this_0;
	// HuaweiMobileServices.Scan.HmsScan[] HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper/<>c__DisplayClass2_0::result
	HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119* ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t0C0943749D55D576013042BB6E398B955973D792, ___U3CU3E4__this_0)); }
	inline OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t0C0943749D55D576013042BB6E398B955973D792, ___result_1)); }
	inline HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119* get_result_1() const { return ___result_1; }
	inline HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119* value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0::<>4__this
	ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * ___U3CU3E4__this_0;
	// System.String HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0::p0
	String_t* ___p0_1;
	// UnityEngine.AndroidJavaObject HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0::p1
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___p1_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA, ___U3CU3E4__this_0)); }
	inline ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_p0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA, ___p0_1)); }
	inline String_t* get_p0_1() const { return ___p0_1; }
	inline String_t** get_address_of_p0_1() { return &___p0_1; }
	inline void set_p0_1(String_t* value)
	{
		___p0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p0_1), (void*)value);
	}

	inline static int32_t get_offset_of_p1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA, ___p1_2)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_p1_2() const { return ___p1_2; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_p1_2() { return &___p1_2; }
	inline void set_p1_2(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___p1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_2), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tC031A29DA8B071DD33C66B3330139A77059812D7  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass3_0::<>4__this
	ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * ___U3CU3E4__this_0;
	// System.String HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass3_0::p0
	String_t* ___p0_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tC031A29DA8B071DD33C66B3330139A77059812D7, ___U3CU3E4__this_0)); }
	inline ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_p0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tC031A29DA8B071DD33C66B3330139A77059812D7, ___p0_1)); }
	inline String_t* get_p0_1() const { return ___p0_1; }
	inline String_t** get_address_of_p0_1() { return &___p0_1; }
	inline void set_p0_1(String_t* value)
	{
		___p0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p0_1), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0::<>4__this
	WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * ___U3CU3E4__this_0;
	// System.String HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0::endpointId
	String_t* ___endpointId_1;
	// UnityEngine.AndroidJavaObject HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0::info
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___info_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A, ___U3CU3E4__this_0)); }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_endpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A, ___endpointId_1)); }
	inline String_t* get_endpointId_1() const { return ___endpointId_1; }
	inline String_t** get_address_of_endpointId_1() { return &___endpointId_1; }
	inline void set_endpointId_1(String_t* value)
	{
		___endpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A, ___info_2)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_info_2() const { return ___info_2; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_2), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD83835C0ABAA21A0619D9294D5C00C85D46CC1AB  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass3_0::<>4__this
	WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * ___U3CU3E4__this_0;
	// System.String HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass3_0::endpointId
	String_t* ___endpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD83835C0ABAA21A0619D9294D5C00C85D46CC1AB, ___U3CU3E4__this_0)); }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_endpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD83835C0ABAA21A0619D9294D5C00C85D46CC1AB, ___endpointId_1)); }
	inline String_t* get_endpointId_1() const { return ___endpointId_1; }
	inline String_t** get_address_of_endpointId_1() { return &___endpointId_1; }
	inline void set_endpointId_1(String_t* value)
	{
		___endpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointId_1), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0::<>4__this
	WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * ___U3CU3E4__this_0;
	// System.String HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0::endpointId
	String_t* ___endpointId_1;
	// System.String HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0::authCode
	String_t* ___authCode_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10, ___U3CU3E4__this_0)); }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_endpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10, ___endpointId_1)); }
	inline String_t* get_endpointId_1() const { return ___endpointId_1; }
	inline String_t** get_address_of_endpointId_1() { return &___endpointId_1; }
	inline void set_endpointId_1(String_t* value)
	{
		___endpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_authCode_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10, ___authCode_2)); }
	inline String_t* get_authCode_2() const { return ___authCode_2; }
	inline String_t** get_address_of_authCode_2() { return &___authCode_2; }
	inline void set_authCode_2(String_t* value)
	{
		___authCode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authCode_2), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB  : public RuntimeObject
{
public:
	// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0::<>4__this
	WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * ___U3CU3E4__this_0;
	// System.String HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0::endpointId
	String_t* ___endpointId_1;
	// System.Int32 HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0::statusCode
	int32_t ___statusCode_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB, ___U3CU3E4__this_0)); }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_endpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB, ___endpointId_1)); }
	inline String_t* get_endpointId_1() const { return ___endpointId_1; }
	inline String_t** get_address_of_endpointId_1() { return &___endpointId_1; }
	inline void set_endpointId_1(String_t* value)
	{
		___endpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB, ___statusCode_2)); }
	inline int32_t get_statusCode_2() const { return ___statusCode_2; }
	inline int32_t* get_address_of_statusCode_2() { return &___statusCode_2; }
	inline void set_statusCode_2(int32_t value)
	{
		___statusCode_2 = value;
	}
};


// HuaweiMobileServices.Drive.AbstractClientRequest`1<HuaweiMobileServices.Drive.HistoryVersion>
struct AbstractClientRequest_1_t4B80F2229EE4698198A6EAFF66EB3335543B0A88  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractClientRequest`1<HuaweiMobileServices.Drive.HistoryVersionList>
struct AbstractClientRequest_1_t98211A1E9BD4EE333A3EE836F2020483366A0EA8  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractClientRequest`1<HuaweiMobileServices.Drive.Reply>
struct AbstractClientRequest_1_tE789F2CCD46B99AE1A37D590A56A462FD9EA2668  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractClientRequest`1<HuaweiMobileServices.Drive.ReplyList>
struct AbstractClientRequest_1_t18D98F682B6E165BC9898CD02829FB1B3A0E0E85  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractClientRequest`1<HuaweiMobileServices.Utils.Void>
struct AbstractClientRequest_1_tF02F107C736DCA1BDF132FA2D7147F82A87B8D9C  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// HuaweiMobileServices.Drive.HistoryVersion
struct HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.HistoryVersionList
struct HistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Scan.HmsScan
struct HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};

struct HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass HuaweiMobileServices.Scan.HmsScan::sJavaClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___sJavaClass_1;

public:
	inline static int32_t get_offset_of_sJavaClass_1() { return static_cast<int32_t>(offsetof(HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276_StaticFields, ___sJavaClass_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_sJavaClass_1() const { return ___sJavaClass_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_sJavaClass_1() { return &___sJavaClass_1; }
	inline void set_sJavaClass_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___sJavaClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sJavaClass_1), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// HuaweiMobileServices.Location.Location.LocationAvailability
struct LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};

struct LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass HuaweiMobileServices.Location.Location.LocationAvailability::javaClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaClass_1;

public:
	inline static int32_t get_offset_of_javaClass_1() { return static_cast<int32_t>(offsetof(LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA_StaticFields, ___javaClass_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaClass_1() const { return ___javaClass_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaClass_1() { return &___javaClass_1; }
	inline void set_javaClass_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaClass_1), (void*)value);
	}
};


// HuaweiMobileServices.Location.Location.LocationResult
struct LocationResult_t15549459BA8F419415326C413D2726D30404B370  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};

struct LocationResult_t15549459BA8F419415326C413D2726D30404B370_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass HuaweiMobileServices.Location.Location.LocationResult::javaClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaClass_1;

public:
	inline static int32_t get_offset_of_javaClass_1() { return static_cast<int32_t>(offsetof(LocationResult_t15549459BA8F419415326C413D2726D30404B370_StaticFields, ___javaClass_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaClass_1() const { return ___javaClass_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaClass_1() { return &___javaClass_1; }
	inline void set_javaClass_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaClass_1), (void*)value);
	}
};


// HuaweiMobileServices.Drive.Reply
struct Reply_t0171021529C9997DFC1906A4B034648CF15B5149  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.ReplyList
struct ReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Nearby.Discovery.ScanEndpointInfo
struct ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail
struct Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115  : public JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractJsonClientRequest`1<HuaweiMobileServices.Drive.HistoryVersion>
struct AbstractJsonClientRequest_1_t91789ED1ED3B5AA025A7982D45AD97A75567F1D3  : public AbstractClientRequest_1_t4B80F2229EE4698198A6EAFF66EB3335543B0A88
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractJsonClientRequest`1<HuaweiMobileServices.Drive.HistoryVersionList>
struct AbstractJsonClientRequest_1_t6D50F926E1F542779ED0818290A25F9C130A6537  : public AbstractClientRequest_1_t98211A1E9BD4EE333A3EE836F2020483366A0EA8
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractJsonClientRequest`1<HuaweiMobileServices.Drive.Reply>
struct AbstractJsonClientRequest_1_tD39277D6B401E33AE52A7A59009CDA9FB7066146  : public AbstractClientRequest_1_tE789F2CCD46B99AE1A37D590A56A462FD9EA2668
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractJsonClientRequest`1<HuaweiMobileServices.Drive.ReplyList>
struct AbstractJsonClientRequest_1_t88F0B76BD5B9AEB37A63E8851D88FFF9A8D7B805  : public AbstractClientRequest_1_t18D98F682B6E165BC9898CD02829FB1B3A0E0E85
{
public:

public:
};


// HuaweiMobileServices.Drive.AbstractJsonClientRequest`1<HuaweiMobileServices.Utils.Void>
struct AbstractJsonClientRequest_1_t19453DDB1A49241FB266A670331BDE17B264A9A8  : public AbstractClientRequest_1_tF02F107C736DCA1BDF132FA2D7147F82A87B8D9C
{
public:

public:
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.HistoryVersion>
struct DriveRequest_1_tD68EEDBB65F9A471421A66AEAD21824A5337AC67  : public AbstractJsonClientRequest_1_t91789ED1ED3B5AA025A7982D45AD97A75567F1D3
{
public:

public:
};


// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.HistoryVersionList>
struct DriveRequest_1_t8BE00A1879A09027D7E06C4C22AA5A9DCF910C2E  : public AbstractJsonClientRequest_1_t6D50F926E1F542779ED0818290A25F9C130A6537
{
public:

public:
};


// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.Reply>
struct DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494  : public AbstractJsonClientRequest_1_tD39277D6B401E33AE52A7A59009CDA9FB7066146
{
public:

public:
};


// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.ReplyList>
struct DriveRequest_1_tC8583511F896648169244F0B4671ADD00F01D926  : public AbstractJsonClientRequest_1_t88F0B76BD5B9AEB37A63E8851D88FFF9A8D7B805
{
public:

public:
};


// HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Utils.Void>
struct DriveRequest_1_t2809A8C96B903CE9D5B52539FB072C3EDC3EB76F  : public AbstractJsonClientRequest_1_t19453DDB1A49241FB266A670331BDE17B264A9A8
{
public:

public:
};


// HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface
struct InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// HuaweiMobileServices.Ads.InstallReferrer.IInstallReferrerStateCallback HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface
struct LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// HuaweiMobileServices.Location.ILocationCallback HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper
struct OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// HuaweiMobileServices.Scan.IOnLightVisibleCallBack HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper
struct OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// HuaweiMobileServices.Scan.IOnResultCallback HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface
struct ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// HuaweiMobileServices.Nearby.Discovery.IScanEndpointCallback HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface
struct WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// HuaweiMobileServices.Nearby.WifiShare.IWifiShareCallback HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete
struct Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829  : public DriveRequest_1_t2809A8C96B903CE9D5B52539FB072C3EDC3EB76F
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get
struct Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B  : public DriveRequest_1_tD68EEDBB65F9A471421A66AEAD21824A5337AC67
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/HistoryVersions/List
struct List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20  : public DriveRequest_1_t8BE00A1879A09027D7E06C4C22AA5A9DCF910C2E
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update
struct Update_t8532DFDDA24FE533E3366D008599459B3B293FCE  : public DriveRequest_1_tD68EEDBB65F9A471421A66AEAD21824A5337AC67
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/Replies/Create
struct Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B  : public DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/Replies/Delete
struct Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE  : public DriveRequest_1_t2809A8C96B903CE9D5B52539FB072C3EDC3EB76F
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/Replies/Get
struct Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A  : public DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/Replies/List
struct List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65  : public DriveRequest_1_tC8583511F896648169244F0B4671ADD00F01D926
{
public:

public:
};


// HuaweiMobileServices.Drive.Drive/Replies/Update
struct Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF  : public DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HuaweiMobileServices.Scan.HmsScan[]
struct HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 * m_Items[1];

public:
	inline HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HmsScan_tBDDB6D7C0931BCB54A58A4DFBB105C39BA9D9276 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void HuaweiMobileServices.Drive.DriveRequest`1<System.Object>::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveRequest_1__ctor_m49B2E4AB9EF98F25890193DDE9114A230FD39D55_gshared (DriveRequest_1_t9A37F1D1805E020DC3C7AC186E3601D09F405560 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.JavaObjectWrapper::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaObjectWrapper_Call_TisRuntimeObject_mB2A82B55E4A477BB9BF2F74DBDFE89773CF36381_gshared (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.JavaObjectWrapper::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_gshared (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.AndroidJavaObjectExtensions::AsWrapper<System.Object>(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObjectExtensions_AsWrapper_TisRuntimeObject_m52E1B21C361CA94FC4CD20077E883862260A7324_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method);

// System.Void HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Utils.Void>::.ctor(UnityEngine.AndroidJavaObject)
inline void DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB (DriveRequest_1_t2809A8C96B903CE9D5B52539FB072C3EDC3EB76F * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	((  void (*) (DriveRequest_1_t2809A8C96B903CE9D5B52539FB072C3EDC3EB76F *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))DriveRequest_1__ctor_m49B2E4AB9EF98F25890193DDE9114A230FD39D55_gshared)(__this, ___javaObject0, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete>(System.String,System.Object[])
inline Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// System.Void HuaweiMobileServices.Utils.JavaObjectWrapper::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaObjectWrapper_Call_mC429419BCD4D33F8F277FB3C6BDF3F857F5A8229 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.HistoryVersion>::.ctor(UnityEngine.AndroidJavaObject)
inline void DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E (DriveRequest_1_tD68EEDBB65F9A471421A66AEAD21824A5337AC67 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	((  void (*) (DriveRequest_1_tD68EEDBB65F9A471421A66AEAD21824A5337AC67 *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))DriveRequest_1__ctor_m49B2E4AB9EF98F25890193DDE9114A230FD39D55_gshared)(__this, ___javaObject0, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/HistoryVersions/Get>(System.String,System.Object[])
inline Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::Call<System.String>(System.String,System.Object[])
inline String_t* JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_Call_TisRuntimeObject_mB2A82B55E4A477BB9BF2F74DBDFE89773CF36381_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsBool(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JavaObjectWrapper_CallAsBool_mBC06042325422F0E0D6FB6D78994CF0BF37D3190 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.JavaObjectWrapper::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_Call_TisRuntimeObject_mB2A82B55E4A477BB9BF2F74DBDFE89773CF36381_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.HistoryVersion>(System.String,System.Object[])
inline HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D * JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.HistoryVersionList>::.ctor(UnityEngine.AndroidJavaObject)
inline void DriveRequest_1__ctor_mB1682DD66722E39DC7F924742F7F4F7ADA1AC758 (DriveRequest_1_t8BE00A1879A09027D7E06C4C22AA5A9DCF910C2E * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	((  void (*) (DriveRequest_1_t8BE00A1879A09027D7E06C4C22AA5A9DCF910C2E *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))DriveRequest_1__ctor_m49B2E4AB9EF98F25890193DDE9114A230FD39D55_gshared)(__this, ___javaObject0, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/HistoryVersions/List>(System.String,System.Object[])
inline List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::Call<System.Int32>(System.String,System.Object[])
inline int32_t JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.HistoryVersionList>(System.String,System.Object[])
inline HistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB * JavaObjectWrapper_CallAsWrapper_TisHistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB_mEE39A71DC0EF9921FB9403F1444C85349C870AC8 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  HistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/HistoryVersions/Update>(System.String,System.Object[])
inline Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.Reply>::.ctor(UnityEngine.AndroidJavaObject)
inline void DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE (DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	((  void (*) (DriveRequest_1_tDCD95C049F51FE71EF3D85D74EBD95BB2E3F0494 *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))DriveRequest_1__ctor_m49B2E4AB9EF98F25890193DDE9114A230FD39D55_gshared)(__this, ___javaObject0, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Reply>(System.String,System.Object[])
inline Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/Replies/Create>(System.String,System.Object[])
inline Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/Replies/Delete>(System.String,System.Object[])
inline Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/Replies/Get>(System.String,System.Object[])
inline Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void HuaweiMobileServices.Drive.DriveRequest`1<HuaweiMobileServices.Drive.ReplyList>::.ctor(UnityEngine.AndroidJavaObject)
inline void DriveRequest_1__ctor_m3B64BC5DAB5EA2213B7D1E5D2D56ADD2FCAED62C (DriveRequest_1_tC8583511F896648169244F0B4671ADD00F01D926 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	((  void (*) (DriveRequest_1_tC8583511F896648169244F0B4671ADD00F01D926 *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))DriveRequest_1__ctor_m49B2E4AB9EF98F25890193DDE9114A230FD39D55_gshared)(__this, ___javaObject0, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/Replies/List>(System.String,System.Object[])
inline List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.ReplyList>(System.String,System.Object[])
inline ReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4 * JavaObjectWrapper_CallAsWrapper_TisReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4_mCBCAAEFAD02147D94B012D48FA2DD1E6F16C3693 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  ReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4 * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.Drive/Replies/Update>(System.String,System.Object[])
inline Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void HuaweiMobileServices.Utils.JavaObjectWrapper::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaObjectWrapper__ctor_m33C88775137290382EEF5576934AB817544B383E (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method);
// System.Void HuaweiMobileServices.Utils.JavaObjectWrapper::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaObjectWrapper__ctor_m3E5537704A275FB5F8F6CAA1B7B4B161C3CA2D22 (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___javaObjectCanonicalName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.JavaObjectWrapper::CallAsWrapper<HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail>(System.String,System.Object[])
inline Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * (*) (JavaObjectWrapper_t48BC91D8E56C74EE27877DE87FF9ED702EC6DFFB *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))JavaObjectWrapper_CallAsWrapper_TisRuntimeObject_mE4612DA87690F3E4B4DDD4B91F376A3DDECF7D67_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// T HuaweiMobileServices.Utils.AndroidJavaObjectExtensions::AsWrapper<HuaweiMobileServices.Nearby.Discovery.ScanEndpointInfo>(UnityEngine.AndroidJavaObject)
inline ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1 * AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	return ((  ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1 * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))AndroidJavaObjectExtensions_AsWrapper_TisRuntimeObject_m52E1B21C361CA94FC4CD20077E883862260A7324_gshared)(___javaObject0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delete__ctor_m1CC71B6264D58597688EB9A874070073972402D1 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_Set_m5024DB9697860FD4442877C1389E3E631F95AE09 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_SetForm_m28E86C6A06F2C2E9479660FBC7BBA748E7283522 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_SetFields_m5A01ED8B97830E7F0DE0DEBDC2AE5C6F02A21F79 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_SetPrettyPrint_m5BD1F960C46A218B6642A3993DA5FF87B6FEFC95 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_SetQuotaId_m549F67508CBC2703387F32A97CC5FBD59029DDF4 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_SetFileId_m1E7AD726E80DA68FED2EFD1671E8A984248EB82C (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_GetFileId_m08702A803517C83D326CF08D09FB96989259B759 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::GetHistoryVersionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_GetHistoryVersionId_mB46319E5C91DDE60B3F5C6D4E9574126DAAE511D (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::SetHistoryVersionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * Delete_SetHistoryVersionId_m69EE69FA01251185D430C64F10BD259F87294F3A (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27(__this, _stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t197025ED946B41EDDD1134DEAE87DE1B28066829_mF2DCE2DCC55D3B08B06FB53771DC62EA0F40EA27_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void HuaweiMobileServices.Drive.Drive/HistoryVersions/Delete::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delete_Execute_mA0A03365CBD4E37819D5D14DCD1F9F0C92A5DDE7 (Delete_t197025ED946B41EDDD1134DEAE87DE1B28066829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		JavaObjectWrapper_Call_mC429419BCD4D33F8F277FB3C6BDF3F857F5A8229(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/NULL);
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
// System.Void HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Get__ctor_m58C8E7A248C7CACE0B1A8E6BDA1F5E666796CBBF (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetQuotaId_m291B399DEA41611785E648E8815044442F598E0E (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetPrettyPrint_m6CBAD1B3BCBAEB72AEBF9B4408E5613278B9DF81 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetFields_m427119DA21BC66A549ED8652FADE975296510EF0 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetForm_m7F201BB397AA8879BA2C95CA0C1393FE61097416 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_Set_m66E8E342B0248CDE29C27D20C50506099AD48210 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_5;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::GetHistoryVersionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Get_GetHistoryVersionId_mEA3F1B8F3AF71C51AB282E807237A9CCD7FF06AC (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetHistoryVersionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetHistoryVersionId_mAAAB7371DF5ED1CDB427200368D641191742DC50 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Get_GetFileId_mE527E712B2D2BA64AEEB402A1B5703AED2E3F1B5 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetFileId_m0107904EE3BFC1D83E18E59C8674AE99DD38996E (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Get HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::SetAcknowledgeDownloadRisk(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * Get_SetAcknowledgeDownloadRisk_m5ED291BC34A8F608D60EAC88B5965EB4061632A6 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EFC06B98096DB8E72027B3F2FB77E9D2FCE194A);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B(__this, _stringLiteral4EFC06B98096DB8E72027B3F2FB77E9D2FCE194A, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tFCBA9C68365E228B3B114B79DB858C105D963A1B_mAB5555A4AEEDCCB2B378528A45A7777F92F7895B_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::IsAcknowledgeDownloadRisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Get_IsAcknowledgeDownloadRisk_m36DCF992E1D8E878A901F5FF46E1154B4D82C62A (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6EEB94E0E6FA43C83114AE6D96D86854855406E);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		bool L_1;
		L_1 = JavaObjectWrapper_CallAsBool_mBC06042325422F0E0D6FB6D78994CF0BF37D3190(__this, _stringLiteralA6EEB94E0E6FA43C83114AE6D96D86854855406E, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::GetAcknowledgeDownloadRisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Get_GetAcknowledgeDownloadRisk_mCAB046E7EE1FCA8E73A476238A397C122E939265 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B12C646C29E391B362D63816AD0CA2485B81B2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		bool L_1;
		L_1 = JavaObjectWrapper_CallAsBool_mBC06042325422F0E0D6FB6D78994CF0BF37D3190(__this, _stringLiteral3B12C646C29E391B362D63816AD0CA2485B81B2B, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.AndroidJavaObject HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::ExecuteContentAsInputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Get_ExecuteContentAsInputStream_mA1789CE253A53552AC01477791AE5A86DE5F4936 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4339B11820CB84A7A0DBE3CE35782BCF8AABD8B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703(__this, _stringLiteral4339B11820CB84A7A0DBE3CE35782BCF8AABD8B0, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::ExecuteContentAndDownloadTo(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Get_ExecuteContentAndDownloadTo_m26A0AC2D97F1DD71241E584E7B17D5079AA89D76 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB93FBF6D3E84B3FF482C78D0BF9665FD503B94);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		JavaObjectWrapper_Call_mC429419BCD4D33F8F277FB3C6BDF3F857F5A8229(__this, _stringLiteral3AB93FBF6D3E84B3FF482C78D0BF9665FD503B94, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AndroidJavaObject HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::ExecuteContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Get_ExecuteContent_mDF82804D1A3E33B4107BC8D6B33E036815557E31 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F89869CF7D2EC13EE502BE3675C19819886C251);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703(__this, _stringLiteral1F89869CF7D2EC13EE502BE3675C19819886C251, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m83CA0A441AD418C625D40972FD699478CE5B7703_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.HistoryVersion HuaweiMobileServices.Drive.Drive/HistoryVersions/Get::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D * Get_Execute_m35DF9A6A465FFAB2BB4583FDA3F0A54A28592635 (Get_tFCBA9C68365E228B3B114B79DB858C105D963A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3_RuntimeMethod_var);
		return L_1;
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
// System.Void HuaweiMobileServices.Drive.Drive/HistoryVersions/List::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List__ctor_m19DF6CE8DD9F3F7BF3EE53FFC700EC9DE48C8A41 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_mB1682DD66722E39DC7F924742F7F4F7ADA1AC758_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_mB1682DD66722E39DC7F924742F7F4F7ADA1AC758(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_mB1682DD66722E39DC7F924742F7F4F7ADA1AC758_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetForm_m03FF0585438859EC877F2DB4908F2DA1F7969489 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetFields_m9E916338E23AD1D210C86306E81BC4EA94BE1EFD (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetPrettyPrint_m11A0218FFEDDEAA07130695FC031CD5050EAE023 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetQuotaId_m75541937AA50DA8AACFF6569C6BB6D7E943656E7 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/HistoryVersions/List::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* List_GetFileId_m073A4B47CF91D51162227D53C07661CBFDC5F343 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetFileId_m0775DA6DCFF6743CA414AC2626EE671B5F6B751D (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 HuaweiMobileServices.Drive.Drive/HistoryVersions/List::GetPageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_GetPageSize_mAF6A993478C4B8E54243B87E149E137CE3983BAA (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF71DC910646836341C1A26B92E121A75EDF6EDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		int32_t L_1;
		L_1 = JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4(__this, _stringLiteralFF71DC910646836341C1A26B92E121A75EDF6EDD, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetPageSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetPageSize_m1509502FDACEEF11C2B754BEFE452FCF9244381E (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, int32_t ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9B0773C54AEDB8FF66154429206301DE88955E);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = ___var10;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteral0C9B0773C54AEDB8FF66154429206301DE88955E, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_5;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/HistoryVersions/List::GetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* List_GetCursor_mD532F20261B7D6391D748203CDF0327E7DEBD2D2 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F6634CE542422F6C3C867FE3D4604421E3150B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral82F6634CE542422F6C3C867FE3D4604421E3150B, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::SetCursor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_SetCursor_mFA029BAC690E721F25A4329E3332F2E04DC1A12A (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C014178907B74F3A7DFF6E20EDA86243546AD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteralC5C014178907B74F3A7DFF6E20EDA86243546AD4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.HistoryVersionList HuaweiMobileServices.Drive.Drive/HistoryVersions/List::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB * List_Execute_m754206D676F78A886002DE3AD5F34351072FF449 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisHistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB_mEE39A71DC0EF9921FB9403F1444C85349C870AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		HistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisHistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB_mEE39A71DC0EF9921FB9403F1444C85349C870AC8(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisHistoryVersionList_t5B47B915A0206674704C66776C9BF7C62C1745BB_mEE39A71DC0EF9921FB9403F1444C85349C870AC8_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/List HuaweiMobileServices.Drive.Drive/HistoryVersions/List::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * List_Set_mED294BFEEBC047E7DC5E3EEC39872DB7445720D5 (List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		List_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_tA84CEA25C05900A2FA6C4181C5A2BBB6FD97DF20_m4FCBE14B898360D2C94DED17C5884679AED17177_RuntimeMethod_var);
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
// System.Void HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Update__ctor_mD5432697B9882521EE3CA6A77EDCC2461A1ED7F6 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_mA008E0A1D8680063E2B8F71E4A12D931AA1B0D3E_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_SetForm_mF20AD8524CBCD89B70554146D234F2632D3C4469 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_SetFields_m2786FF4E6081D117BC218581EBF05D206FEDD00B (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_SetPrettyPrint_m837BA929BBA1D4EA783F200B76C44A2A9CA08FBE (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_SetQuotaId_m46C97A5B1A172FCED16758ED6CF747EEC1A4BF28 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Update_GetFileId_m0BA5014DCE8E04943B6557CE427781BB500C8F56 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_SetFileId_mD5F0BEF340E0D2B56D74E24EA3379C98723EA277 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::GetHistoryVersionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Update_GetHistoryVersionId_m341E67AD1E9D89B77014F1730604A5AE3CFDC861 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteralBFF8DB106A276A9517AF863C926634B47C201D16, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::SetHistoryVersionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_SetHistoryVersionId_m118483C29DC8E0A96ACA7D47190E5D7FB72E21BE (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteral72B238B916FB6AE83F665473E6DE5DE342682AC8, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/HistoryVersions/Update HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * Update_Set_m61BEF29B3352A92CB4BB8F0CA9CFD9688DC439AC (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t8532DFDDA24FE533E3366D008599459B3B293FCE_m09B398BEFD1901A185675E5A177388AADB362C95_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.HistoryVersion HuaweiMobileServices.Drive.Drive/HistoryVersions/Update::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D * Update_Execute_mCC55D4506310BF8F7C6B171C5EF368A5EEA32741 (Update_t8532DFDDA24FE533E3366D008599459B3B293FCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		HistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisHistoryVersion_tE429770BFDF38526DBCAF99024FA2BB587BB753D_mA06984B5398822DE230CEACA18216606A6F042F3_RuntimeMethod_var);
		return L_1;
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
// System.Void HuaweiMobileServices.Drive.Drive/Replies/Create::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Create__ctor_m7CD3E3B0228DF0492DC534C28F54AC19C32D8C8D (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Reply HuaweiMobileServices.Drive.Drive/Replies/Create::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * Create_Execute_m31EE3CF13DADC87D7F17785259090C2A3E0B683B (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_SetForm_mED1CD838C02924200E3817D02E9699E3E8F9284B (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_SetFields_mB70CF4A36C66562637474BBB68ECA903329EEB99 (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_SetPrettyPrint_m80DFFBEEDE69BEB26E796B850A69CEE32B2DEFDF (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_SetQuotaId_mA7FAD81237067C68D94379582FFB86FD7215B1DC (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/Create::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Create_GetFileId_mD16AEE6283255E228E935EA126D0BBEB271781C9 (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_SetFileId_m991C5C6609CAF1870F5EC42BFF1BFA3DE26A36C8 (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/Create::GetCommentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Create_GetCommentId_m854EB85EF3A4C6F5CAFA2A8EAEF933C4E55A61DC (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::SetCommentId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_SetCommentId_m164986F158F08DDD7A46737BC24893097CDC3530 (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F35651E6F21E41DCB425DE18460E0883658397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteral82F35651E6F21E41DCB425DE18460E0883658397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Create HuaweiMobileServices.Drive.Drive/Replies/Create::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * Create_Set_mC1B262EEE40B82FDDCFA71D224898B1E7148BBF3 (Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Create_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisCreate_t4F4B42BB5C3AAE8D3BD4643E0FDBBE74C2EA8B2B_m937663E51DAB837552835152B1B9B56F35A9785F_RuntimeMethod_var);
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
// System.Void HuaweiMobileServices.Drive.Drive/Replies/Delete::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delete__ctor_m58541D6E7AE7327D4A3A584AB0FB91E4CFAE0FA8 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_m20E575D3CF41172457E03C4CD625A0E0983AC3FB_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetForm_m42085CE5D4DA27685C1FD5188C95CBF148DD2C6A (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetFields_mC039138DD95E18D79CA53177EF12A546F11843BB (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetFileId_m9EA24EAF5E3763ADD1775607EE45FC9B8784C5E4 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_GetFileId_mD011DD52629B4259B6117ED79BC81264E9A39FB5 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetCommentId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetCommentId_m01F273C3735B6396D7E4EED635BED3362DB038F3 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F35651E6F21E41DCB425DE18460E0883658397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteral82F35651E6F21E41DCB425DE18460E0883658397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::GetCommentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_GetCommentId_mA6FD94AA6242ECEB526E18FD37D64D7CBB67D632 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetReplyId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetReplyId_m81AFA69EEDA07F5466FE725039CD4A8EEFF7AA08 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA836F86C4CABAFBBEA3C8DC63A0D47E4D1243A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteralA836F86C4CABAFBBEA3C8DC63A0D47E4D1243A70, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::GetReplyId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_GetReplyId_m31659CB01C2C6C48164DAA5855727DC8F0300644 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE7914412BA2609A9AC12A9C27BA640D0BDF262);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteralFEE7914412BA2609A9AC12A9C27BA640D0BDF262, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetPrettyPrint_mAB936CA60C11F4F809F8A58785F9BF3D5866F386 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_SetQuotaId_m40064A4A6E8083543BC13246E3F8C304B59E5D9B (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Delete HuaweiMobileServices.Drive.Drive/Replies/Delete::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * Delete_Set_m7F9C7B8B98B736717A96C613F0638B4FD247C5BA (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisDelete_t49DF839823119CFE447B09D136B73C4CB1B703BE_m945139097E6B7A5C018E89D508527EEF08F15E95_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void HuaweiMobileServices.Drive.Drive/Replies/Delete::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delete_Execute_m7D213D015D631CC40152DF0C6356DEF59A5130A4 (Delete_t49DF839823119CFE447B09D136B73C4CB1B703BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		JavaObjectWrapper_Call_mC429419BCD4D33F8F277FB3C6BDF3F857F5A8229(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/NULL);
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
// System.Void HuaweiMobileServices.Drive.Drive/Replies/Get::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Get__ctor_m557D24DEDC56407FDD67546A63C7810D9B7FECFD (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var);
		return;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/Get::GetCommentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Get_GetCommentId_mB571C426772D67874D5BE0EEAC9CE9EE7D781CDD (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetCommentId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetCommentId_m3FD740DD7830AE5CFC283A385F018B303BDD1BE2 (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F35651E6F21E41DCB425DE18460E0883658397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteral82F35651E6F21E41DCB425DE18460E0883658397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/Get::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Get_GetFileId_m62FF3D2AF23460D801EC99542D8E95CA86AC332C (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetFileId_m1682AF09C3C3808B7561441217C7169407FE8EFE (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean HuaweiMobileServices.Drive.Drive/Replies/Get::IsIncludeDeleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Get_IsIncludeDeleted_mB4283D81FD300851C7782F472DA5F7D4F07CD955 (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		bool L_1;
		L_1 = JavaObjectWrapper_CallAsBool_mBC06042325422F0E0D6FB6D78994CF0BF37D3190(__this, _stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetIncludeDeleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetIncludeDeleted_m5E4ED035DC52CB11E9840CBABD1346BBAB86F00C (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_Set_m3B61E59F40AED8572DBD4064A42877AAC27D9852 (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetForm_mEB1AE2FFD21E70F61088E72FEFB4FEB66529B58E (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetFields_m4A305A38BD67D4EDC3C663798FCE21CC7A38975D (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetPrettyPrint_mC74DBF99F207EE31E874E4A35C6924A0264C427D (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Get HuaweiMobileServices.Drive.Drive/Replies/Get::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * Get_SetQuotaId_m64E46897C392CCD05CD081721E47DEC51CD6974B (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisGet_tC6CA489D34013A0490414CFD2F9D91FC641C353A_mD6022809244414D6CF9EC6E140961F34DBE2640E_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Reply HuaweiMobileServices.Drive.Drive/Replies/Get::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * Get_Execute_m64625A1374C2C1E70FEFCA60F1F4CC764BCC21E8 (Get_tC6CA489D34013A0490414CFD2F9D91FC641C353A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var);
		return L_1;
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
// System.Void HuaweiMobileServices.Drive.Drive/Replies/List::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List__ctor_m0600CE032D71C33EA99C1BD42A5247AF126FB729 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_m3B64BC5DAB5EA2213B7D1E5D2D56ADD2FCAED62C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_m3B64BC5DAB5EA2213B7D1E5D2D56ADD2FCAED62C(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_m3B64BC5DAB5EA2213B7D1E5D2D56ADD2FCAED62C_RuntimeMethod_var);
		return;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetForm_mAEA848005B399B69FF8A6920BE5CD5EA8AE1DD1F (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetFields_m56A5C70877A9B1375701E262B20744643FEF30FE (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetPrettyPrint_mBC666100E2BF668291358F1356863B19A64574BD (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetQuotaId_m4D37B9B55404749765B12453AA54AFD42F0FDBCF (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/List::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* List_GetFileId_mEBB9876AA2E71091BED7FC4A48E7DE405DBDE876 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetFileId_mAB1AF4CE12FED1D9D9C41B6DC10480C22F43D327 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/List::GetCommentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* List_GetCommentId_m96D2BDDBCE3AE8FB93EC38BC1364B2F290E66772 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral86300268BE680B846E0587B2B52CF3393D06E41B, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetCommentId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetCommentId_m306890F1E93826A07B0E6E681B1908DA9208EFE0 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, int32_t ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F35651E6F21E41DCB425DE18460E0883658397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = ___var10;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteral82F35651E6F21E41DCB425DE18460E0883658397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean HuaweiMobileServices.Drive.Drive/Replies/List::GetIncludeDeleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_GetIncludeDeleted_m72A9A4503C39607BAD52EBC3133654C41B7A3A67 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39FFE0FA7259735020EE279762B70763547117F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		bool L_1;
		L_1 = JavaObjectWrapper_CallAsBool_mBC06042325422F0E0D6FB6D78994CF0BF37D3190(__this, _stringLiteral39FFE0FA7259735020EE279762B70763547117F8, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean HuaweiMobileServices.Drive.Drive/Replies/List::IsIncludeDeleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_IsIncludeDeleted_mE2E13226217C8B31CB2DC72918F1ECB38E6AD0D0 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		bool L_1;
		L_1 = JavaObjectWrapper_CallAsBool_mBC06042325422F0E0D6FB6D78994CF0BF37D3190(__this, _stringLiteralA9CA5FC0CEDAD8E319DDE5C6BA7BCE2D951E5DD6, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetIncludeDeleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetIncludeDeleted_m4FFAF145AFB500DD2C04BB91AFFCF55B3826994A (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CECD6D34F7459767BDB94A975C93F74C51C244A);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteral7CECD6D34F7459767BDB94A975C93F74C51C244A, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_5;
	}
}
// System.Int32 HuaweiMobileServices.Drive.Drive/Replies/List::GetPageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_GetPageSize_m27D3C53A82D36E8A33F45DE5B0A71F916FB9C722 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF71DC910646836341C1A26B92E121A75EDF6EDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		int32_t L_1;
		L_1 = JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4(__this, _stringLiteralFF71DC910646836341C1A26B92E121A75EDF6EDD, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A58E89C8E4D9ACEFDEF7DFF9C861B6F6F7CB8A4_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetPageSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetPageSize_mC33795C88D53D83E1B3084ABECB66042F103FEA5 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, int32_t ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9B0773C54AEDB8FF66154429206301DE88955E);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = ___var10;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteral0C9B0773C54AEDB8FF66154429206301DE88955E, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_5;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/List::GetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* List_GetCursor_m097BBA0807EB8204AF17B54E52B45090B79C9EEF (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F6634CE542422F6C3C867FE3D4604421E3150B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral82F6634CE542422F6C3C867FE3D4604421E3150B, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::SetCursor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_SetCursor_m8391B2BFCE42694269D4F8427F5A480D02908FF4 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C014178907B74F3A7DFF6E20EDA86243546AD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteralC5C014178907B74F3A7DFF6E20EDA86243546AD4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.ReplyList HuaweiMobileServices.Drive.Drive/Replies/List::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4 * List_Execute_m6F1E70756BBA12808754440BE2FD9FFD3F808C68 (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4_mCBCAAEFAD02147D94B012D48FA2DD1E6F16C3693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		ReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4 * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4_mCBCAAEFAD02147D94B012D48FA2DD1E6F16C3693(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisReplyList_t44E9851203DCB3F8358BBA2EFB9A01C9FC0141C4_mCBCAAEFAD02147D94B012D48FA2DD1E6F16C3693_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/List HuaweiMobileServices.Drive.Drive/Replies/List::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * List_Set_m3873F190029D438B15AC0A814973ABBA38692F6D (List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		List_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisList_t12A1AAE7AAA8C19AE458019B9951A8BB84F70C65_m107670906674D93EEDE25828EC32F130C86CAC30_RuntimeMethod_var);
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
// System.Void HuaweiMobileServices.Drive.Drive/Replies/Update::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Update__ctor_mF778B16F1FBA0C306D3FCA6C567BE773484D85E7 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE(__this, L_0, /*hidden argument*/DriveRequest_1__ctor_m5BCA789844B70CD2F435DFD0B12A65F65868FAFE_RuntimeMethod_var);
		return;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/Update::GetFileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Update_GetFileId_m39EAA7A4A1D3362CD105C66B45AE64EC756EDB61 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA274C629331A270E1D046374566982C488DAA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteral4CA274C629331A270E1D046374566982C488DAA5, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::SetFileId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_SetFileId_mD75E4AA4DF80815042FAE481B03DC29F2D49A1C0 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteral08D186F18DF9D96806397AC1F98C8B24D2CE1397, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_3;
	}
}
// System.String HuaweiMobileServices.Drive.Drive/Replies/Update::GetReplyId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Update_GetReplyId_m636CC90B47E51C0E0E5CA22D9A38FE1DA73526E9 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE7914412BA2609A9AC12A9C27BA640D0BDF262);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9(__this, _stringLiteralFEE7914412BA2609A9AC12A9C27BA640D0BDF262, L_0, /*hidden argument*/JavaObjectWrapper_Call_TisString_t_m101ADDF59198F8C8E61D01D21285A1AE8DBA2DE9_RuntimeMethod_var);
		return L_1;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::SetReplyId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_SetReplyId_m137165019429E778D130B41884ED9AEBD7EB98E6 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA836F86C4CABAFBBEA3C8DC63A0D47E4D1243A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteralA836F86C4CABAFBBEA3C8DC63A0D47E4D1243A70, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::SetForm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_SetForm_m65F21E759FFF715EE03A35E5C89EB36D9937EF82 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteralEFD68A233CEA8908B98BDAE37329D7F77A2DB348, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::SetFields(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_SetFields_m5A4DDE696BAE7892EC011004923B51841E657FF1 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteral0EF148908BCE1F08A5ED8D48BA103564EB72B7EA, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::SetPrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_SetPrettyPrint_mB1ACFCB455924F4DB0D69AC69BC81377FC86E6E5 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC60960F233F944008D77E7241F609525CEB71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteralFC60960F233F944008D77E7241F609525CEB71D4, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::SetQuotaId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_SetQuotaId_mF56ABB2241098A8E4C23BB945B35F953A534729D (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteralD4814A207469EAFCC47962AC565A7B8A82660DF3, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.Drive/Replies/Update HuaweiMobileServices.Drive.Drive/Replies/Update::Set(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * Update_Set_m1E9EDAD9C169F1F50252E495C9A3F7B2B1F1E326 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, String_t* ___var10, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___var21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___var21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D(__this, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_3, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisUpdate_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF_m96D51E47565F0DE1969514A4ECFFD794EC63D40D_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.Reply HuaweiMobileServices.Drive.Drive/Replies/Update::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * Update_Execute_mCCF006DEFD614352B8793C38CFBC5C4DE69B5BD6 (Update_t086C6A2FB95DCC290123826ACEB79A3D7C9C2BFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		Reply_t0171021529C9997DFC1906A4B034648CF15B5149 * L_1;
		L_1 = JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A(__this, _stringLiteral0CE6DE47F8B7985E15988080F3E6A993C2B1B040, L_0, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisReply_t0171021529C9997DFC1906A4B034648CF15B5149_mDEC52A74CA8EF2EB730461133AE38FBD3CE7116A_RuntimeMethod_var);
		return L_1;
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
// System.Void HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thumbnail__ctor_m9EBA80CC754FED2D25CCAEEE23C3A4F864E4C6F1 (Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaObject0, const RuntimeMethod* method)
{
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___javaObject0;
		JavaObjectWrapper__ctor_m33C88775137290382EEF5576934AB817544B383E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thumbnail__ctor_m65A40B0E346D3BDE5D7B4AD9DEB6CDDA3278530B (Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9310A656D2C30C1DF465C32637E887A231C35786);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		JavaObjectWrapper__ctor_m3E5537704A275FB5F8F6CAA1B7B4B161C3CA2D22(__this, _stringLiteral9310A656D2C30C1DF465C32637E887A231C35786, L_0, /*hidden argument*/NULL);
		return;
	}
}
// HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail::SetThumbnailPublic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * Thumbnail_SetThumbnailPublic_m1EAE7AA6A4DB17B4B306E56A363396BCB0B6A28B (Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * __this, bool ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C357E6BAFB604E5567E03E831937FE9B8F25E8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___var10;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * L_5;
		L_5 = JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D(__this, _stringLiteral5C357E6BAFB604E5567E03E831937FE9B8F25E8C, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var);
		return L_5;
	}
}
// HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail::SetContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * Thumbnail_SetContent_m20DE55EC11D5A736628AC372024A55D41B1364EF (Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BC725DD3D7458900C8A2BA1A3497C0F9C839B6E);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D(__this, _stringLiteral8BC725DD3D7458900C8A2BA1A3497C0F9C839B6E, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var);
		return L_3;
	}
}
// HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail HuaweiMobileServices.Drive.File/ContentExtras/Thumbnail::SetMimeType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * Thumbnail_SetMimeType_m0BAC287B631ADB7BBEA0014D81D112CF2BC0533B (Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * __this, String_t* ___var10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF8C65C51E9857FE51B4B7906F64838F5A449E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___var10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		Thumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115 * L_3;
		L_3 = JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D(__this, _stringLiteralDFF8C65C51E9857FE51B4B7906F64838F5A449E7, L_1, /*hidden argument*/JavaObjectWrapper_CallAsWrapper_TisThumbnail_tC0431B1C2B315BB1FB1D477DF45F90184D652115_mE585001E9B54CE03C93FFD07BD168C27FD957E6D_RuntimeMethod_var);
		return L_3;
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
// System.Void HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF2BF61B329AE7D07125C668E0346ADEA3F04E810 (U3CU3Ec__DisplayClass2_0_tF5B480D0999654BF6CFC68623D7A771AFC4AD586 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Ads.InstallReferrer.InstallReferrerStateListener/InstallReferrerStateCallbackInterface/<>c__DisplayClass2_0::<OnInstallReferrerSetupFinished>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnInstallReferrerSetupFinishedU3Eb__0_mE90EB89DCE1BB92AC340F6EDB73DFB7CC77A0841 (U3CU3Ec__DisplayClass2_0_tF5B480D0999654BF6CFC68623D7A771AFC4AD586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallReferrerStateCallback_t4FB2B19F84E9CB1161FADAEF7D59CB48F778D858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstallReferrerStateCallbackInterface_t9E315FD5D82F0E0EB16C0A6A9FBB54A828535C68 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		int32_t L_2 = __this->get_responseCode_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void HuaweiMobileServices.Ads.InstallReferrer.IInstallReferrerStateCallback::onInstallReferrerSetupFinished(System.Int32) */, IInstallReferrerStateCallback_t4FB2B19F84E9CB1161FADAEF7D59CB48F778D858_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mBB2F19DA378AEF4D531FFA2D0E511570E889575F (U3CU3Ec__DisplayClass2_0_tB3CA5EB7D5E75523ECFC2BB8003F4884704E8AA4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass2_0::<OnLocationAvailability>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnLocationAvailabilityU3Eb__0_m0C2832F94587CD7EC1276DF6151BCBB02ED3790D (U3CU3Ec__DisplayClass2_0_tB3CA5EB7D5E75523ECFC2BB8003F4884704E8AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocationCallback_t75752CB10D875F4AE2E958AEEFEA21AFA81D05F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA * L_2 = __this->get_locationAvailability_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< LocationAvailability_t63CA2F5013D099F74C053B1556A4D5914F3D9EEA * >::Invoke(1 /* System.Void HuaweiMobileServices.Location.ILocationCallback::OnLocationAvailability(HuaweiMobileServices.Location.Location.LocationAvailability) */, ILocationCallback_t75752CB10D875F4AE2E958AEEFEA21AFA81D05F5_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m43321F56D1C893CBF4606AD7DB35C50FAB57A2EE (U3CU3Ec__DisplayClass3_0_t76DC2AEF0E82A33E3115325C67118AABB7D55F22 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Location.Location.LocationCallback/LocationCallbackInterface/<>c__DisplayClass3_0::<OnLocationResult>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnLocationResultU3Eb__0_m6C889F384CF6861B9C30B11C0BB8427CAE61D0F3 (U3CU3Ec__DisplayClass3_0_t76DC2AEF0E82A33E3115325C67118AABB7D55F22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocationCallback_t75752CB10D875F4AE2E958AEEFEA21AFA81D05F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocationCallbackInterface_tFA471B699C2626495BBC4FB49688583ACFE54904 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		LocationResult_t15549459BA8F419415326C413D2726D30404B370 * L_2 = __this->get_locationResult_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< LocationResult_t15549459BA8F419415326C413D2726D30404B370 * >::Invoke(0 /* System.Void HuaweiMobileServices.Location.ILocationCallback::OnLocationResult(HuaweiMobileServices.Location.Location.LocationResult) */, ILocationCallback_t75752CB10D875F4AE2E958AEEFEA21AFA81D05F5_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mAF075CF18A72C13265E3BE4A120DD893FF7ADFF2 (U3CU3Ec__DisplayClass2_0_t2DAF6F58C0CA0C1C3BE0E3B5584EB1C2D5BC621F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Scan.OnLightVisibleCallBackWrapper/OnLightVisibleCallBackInterfaceWrapper/<>c__DisplayClass2_0::<OnVisibleChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnVisibleChangedU3Eb__0_m52FC5730C04E5790873A9DDDC479DA9CA6EE68A5 (U3CU3Ec__DisplayClass2_0_t2DAF6F58C0CA0C1C3BE0E3B5584EB1C2D5BC621F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnLightVisibleCallBack_tDB10AA43C21E6939C5671B24A3D063F614F4E2B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnLightVisibleCallBackInterfaceWrapper_t4A17372621CC2EB75993B7F5D93CC12724EE4DDE * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		bool L_2 = __this->get_visible_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void HuaweiMobileServices.Scan.IOnLightVisibleCallBack::OnVisibleChanged(System.Boolean) */, IOnLightVisibleCallBack_tDB10AA43C21E6939C5671B24A3D063F614F4E2B6_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5A824546DB1868B1E9231548E1D30EB86FFE54D2 (U3CU3Ec__DisplayClass2_0_t0C0943749D55D576013042BB6E398B955973D792 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Scan.OnResultCallbackWrapper/OnResultCallbackInterfaceWrapper/<>c__DisplayClass2_0::<OnResult>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnResultU3Eb__0_m9AAB995781F91CE604123DDA10FA79FFDED8267D (U3CU3Ec__DisplayClass2_0_t0C0943749D55D576013042BB6E398B955973D792 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnResultCallback_tF319D5ACE7F718BA56AAF77F0B98B582430E93EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnResultCallbackInterfaceWrapper_t76F9FAD9BE45E1CA571F225FECF3F8CDB8193617 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119* L_2 = __this->get_result_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< HmsScanU5BU5D_t10B38A463D6DE1E3E74222E2B715787DA4A6C119* >::Invoke(0 /* System.Void HuaweiMobileServices.Scan.IOnResultCallback::OnResult(HuaweiMobileServices.Scan.HmsScan[]) */, IOnResultCallback_tF319D5ACE7F718BA56AAF77F0B98B582430E93EB_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mC9DD18F4B6E7613BF929BF9E7185A315C253866F (U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass2_0::<onFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConFoundU3Eb__0_m0E24973AEBB9CA9BB6034228AA9F54EDADD4B4BB (U3CU3Ec__DisplayClass2_0_t8154731F5FB443826852BCE3CD00863874D847DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectExtensions_tFCC175D238DC33DD76F565A022E073CEFA2D040F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScanEndpointCallback_t879A7E6D7C477F0E07812D449295D552DC7A1F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		String_t* L_2 = __this->get_p0_1();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = __this->get_p1_2();
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObjectExtensions_tFCC175D238DC33DD76F565A022E073CEFA2D040F_il2cpp_TypeInfo_var);
		ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1 * L_4;
		L_4 = AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C(L_3, /*hidden argument*/AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1 * >::Invoke(0 /* System.Void HuaweiMobileServices.Nearby.Discovery.IScanEndpointCallback::onFound(System.String,HuaweiMobileServices.Nearby.Discovery.ScanEndpointInfo) */, IScanEndpointCallback_t879A7E6D7C477F0E07812D449295D552DC7A1F6C_il2cpp_TypeInfo_var, L_1, L_2, L_4);
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
// System.Void HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m0F8DBBF548A576C0B455445D255966480130998B (U3CU3Ec__DisplayClass3_0_tC031A29DA8B071DD33C66B3330139A77059812D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Nearby.Discovery.ScanEndpointCallback/ScanEndpointCallbackInterface/<>c__DisplayClass3_0::<onLost>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3ConLostU3Eb__0_mC3040C24E64F0E010BB198D708F14E539195CB74 (U3CU3Ec__DisplayClass3_0_tC031A29DA8B071DD33C66B3330139A77059812D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScanEndpointCallback_t879A7E6D7C477F0E07812D449295D552DC7A1F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScanEndpointCallbackInterface_tAFCF0123B42E38B20C694B39DA341FE30FFAC2E5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		String_t* L_2 = __this->get_p0_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void HuaweiMobileServices.Nearby.Discovery.IScanEndpointCallback::onLost(System.String) */, IScanEndpointCallback_t879A7E6D7C477F0E07812D449295D552DC7A1F6C_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m84FD632A898309067D582A88F31EDEB31F346C2A (U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass2_0::<onFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConFoundU3Eb__0_m48E2CA3CDD45973B547A5347FC4F96E2033B9B11 (U3CU3Ec__DisplayClass2_0_t9A714AA16838240961C5F69B55F7E5976A8B806A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectExtensions_tFCC175D238DC33DD76F565A022E073CEFA2D040F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		String_t* L_2 = __this->get_endpointId_1();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = __this->get_info_2();
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObjectExtensions_tFCC175D238DC33DD76F565A022E073CEFA2D040F_il2cpp_TypeInfo_var);
		ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1 * L_4;
		L_4 = AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C(L_3, /*hidden argument*/AndroidJavaObjectExtensions_AsWrapper_TisScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1_m679804238A22E7786998D07E345749225F47706C_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, ScanEndpointInfo_t86F2886F90136CB368EFA2216A2B288CD7C0E9B1 * >::Invoke(0 /* System.Void HuaweiMobileServices.Nearby.WifiShare.IWifiShareCallback::onFound(System.String,HuaweiMobileServices.Nearby.Discovery.ScanEndpointInfo) */, IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var, L_1, L_2, L_4);
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
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3C9DEF18CEEBE7780C44D7FBB4FA7E8FC1DDE2E0 (U3CU3Ec__DisplayClass3_0_tD83835C0ABAA21A0619D9294D5C00C85D46CC1AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass3_0::<onLost>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3ConLostU3Eb__0_mC1E51E43BF7CD55A892160FB5A75274193FB8CE7 (U3CU3Ec__DisplayClass3_0_tD83835C0ABAA21A0619D9294D5C00C85D46CC1AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		String_t* L_2 = __this->get_endpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void HuaweiMobileServices.Nearby.WifiShare.IWifiShareCallback::onLost(System.String) */, IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3A931845824522CEB2BB38F42D12EF8712A52F85 (U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass4_0::<onFetchAuthCode>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3ConFetchAuthCodeU3Eb__0_mA9C245C3EEC460613A7CC722E2ED51855B1BFE32 (U3CU3Ec__DisplayClass4_0_t8F955086998F6471A952C4F7785CC9111568FC10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		String_t* L_2 = __this->get_endpointId_1();
		String_t* L_3 = __this->get_authCode_2();
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(2 /* System.Void HuaweiMobileServices.Nearby.WifiShare.IWifiShareCallback::onFetchAuthCode(System.String,System.String) */, IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var, L_1, L_2, L_3);
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
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4FD8D928C9E9F580BCD5E0791688FCBD27A83DAF (U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HuaweiMobileServices.Nearby.WifiShare.WifiShareCallback/WifiShareCallbackInterface/<>c__DisplayClass5_0::<onWifiShareResult>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3ConWifiShareResultU3Eb__0_mAFCB6084A6C72E574DC2966238756824D0B9B53F (U3CU3Ec__DisplayClass5_0_tA8F1E7AC57F9C5A682ADA3BB4D3FE835ADC147BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WifiShareCallbackInterface_tE5AE70E23A584F03C177D290A2B5C44D058B8653 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		String_t* L_2 = __this->get_endpointId_1();
		int32_t L_3 = __this->get_statusCode_2();
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void HuaweiMobileServices.Nearby.WifiShare.IWifiShareCallback::onWifiShareResult(System.String,System.Int32) */, IWifiShareCallback_tC9D0DAC33D999515A3FA8A2FABA9CA7E165BE701_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}

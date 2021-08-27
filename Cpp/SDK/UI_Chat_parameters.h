#pragma once

// Name: Polygon, Version: 0.3.13.76


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Chat.UI_Chat_C.OnKeyDown
struct UUI_Chat_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Chat.UI_Chat_C.OpenChat
struct UUI_Chat_C_OpenChat_Params
{
};

// Function UI_Chat.UI_Chat_C.BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Chat.UI_Chat_C.Construct
struct UUI_Chat_C_Construct_Params
{
};

// Function UI_Chat.UI_Chat_C.CloseChat
struct UUI_Chat_C_CloseChat_Params
{
};

// Function UI_Chat.UI_Chat_C.AddMessage
struct UUI_Chat_C_AddMessage_Params
{
	struct FChatMessage                                Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Chat.UI_Chat_C.StartPlayAnimationHiddenChat
struct UUI_Chat_C_StartPlayAnimationHiddenChat_Params
{
};

// Function UI_Chat.UI_Chat_C.PlayAnimationEvent
struct UUI_Chat_C_PlayAnimationEvent_Params
{
};

// Function UI_Chat.UI_Chat_C.HiddenChatEvent
struct UUI_Chat_C_HiddenChatEvent_Params
{
};

// Function UI_Chat.UI_Chat_C.SendMessage
struct UUI_Chat_C_SendMessage_Params
{
};

// Function UI_Chat.UI_Chat_C.BndEvt__Button_MessageType_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Button_MessageType_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Chat.UI_Chat_C.BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Chat.UI_Chat_C.SelectMessageType
struct UUI_Chat_C_SelectMessageType_Params
{
	POLYGON_EMessageType                               MessageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Chat.UI_Chat_C.BndEvt__Button_CloseChat_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Button_CloseChat_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Chat.UI_Chat_C.OnAddedToFocusPath
struct UUI_Chat_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
struct UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

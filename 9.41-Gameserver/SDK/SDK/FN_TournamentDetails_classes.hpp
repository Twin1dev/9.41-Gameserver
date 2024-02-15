#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x212 (0x802 - 0x5F0)
// WidgetBlueprintGeneratedClass TournamentDetails.TournamentDetails_C
class UTournamentDetails_C : public UFortTournamentDetailsPage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HidePosterFade;                                    // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CollapseLeaderboardSummary;                        // 0x600(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FullScreenContent;                                 // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x610(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BlurPoster;                                        // 0x618(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BlurBG;                                            // 0x620(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowEventWindowDetails;                            // 0x628(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowDetails;                                       // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PosterFlip;                                        // 0x638(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_Background;                         // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_PosterLayer;                        // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 Button_Back;                                       // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_EnableMFA;                                  // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPrimarySkewButton_C*                  Button_PlayNow;                                    // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_BGText;                               // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_ScoringBG;                            // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_ScoringTitleBG;                       // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_TournamentDescription;             // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_TournamentSubtitle;                // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_UnlockCriteria;                    // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_DetailsButtons;               // 0x698(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_FullScreenSwitch;             // 0x6A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_WindowsDetails;               // 0x6A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 DetailsPanelButton;                                // 0x6B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 DetailsSwitcher;                                   // 0x6B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardScreen_C*             EventLeaderboardScreen;                            // 0x6C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardSummary_C*            EventLeaderboardSummary;                           // 0x6C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            EventsScrollBox;                                   // 0x6D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PosterFade;                                  // 0x6D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MFA_WarningText;                                   // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MFAContainer;                                      // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverviewPanel;                                     // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 OverviewPanelButton;                               // 0x6F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_BGText;                                // 0x700(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_TimeCallout;                           // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_TournamentTimeCallout1;              // 0x710(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTile_C*                  ShowdownEventTile;                                 // 0x718(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTile_C*                  ShowdownEventTile_0;                               // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTile_C*                  ShowdownEventTile_1;                               // 0x728(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTile_C*                  ShowdownEventTile_2;                               // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule;              // 0x738(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_0;          // 0x740(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_1;          // 0x748(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_2;          // 0x750(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_3;          // 0x758(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_4;          // 0x760(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_5;          // 0x768(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_6;          // 0x770(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_PinUnlockScore;                               // 0x778(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentEventWindowDetails_C*       TournamentEventWindowDetails;                      // 0x780(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentMatchType;                               // 0x788(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentPayoutModal_C*              TournamentPayoutModal;                             // 0x790(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentPosterBack_C*       TournamentPosterBack;                              // 0x798(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentPosterFront_C*      TournamentPosterFront;                             // 0x7A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentRoundText;                               // 0x7A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            TournamentScoringRulesScrollBox;                   // 0x7B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentSubTitleBackground;                      // 0x7B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentLiveGames_C*                TournamentWatchList;                               // 0x7C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_TournamentScoringRules;           // 0x7C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        UnlockPinContent;                                  // 0x7D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         EventWindowDetailsShown;                           // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TournamentDetailsShown;                            // 0x7D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C86[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            BackActionSelected;                                // 0x7E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                               FirstActiveEvent;                                  // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastFocusedEvent;                                  // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCenteringScrollBox;                              // 0x800(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LeaderboardisCollapsed;                            // 0x801(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTournamentDetails_C* GetDefaultObj();

	void OnHandleBack(bool* bResult, bool CallFunc_Handle_Back_Passthrough);
	void RefreshViolators(class UShowdownEventTile_C* FocusedEvent, int32 CallFunc_GetNumEventRounds_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_GetEventWindowRoundNumber_ReturnValue, bool CallFunc_IsNullItem_Is_Null_Item, bool CallFunc_IsNullItem_Is_Null_Item_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue_1, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_GetEventWindowRoundNumber_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Handle_Back(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
	void RefreshDetailsPanel(class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UEventsSimpleButton_C*>& K2Node_MakeArray_Array, class UEventsSimpleButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const class FString& CallFunc_GetTournamentId_ReturnValue);
	void RefreshOverviewPanel(class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class EFortShowdownMatchType Temp_byte_Variable, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_1, class FText Temp_text_Variable_8, enum class EFortShowdownEventState Temp_byte_Variable_1, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, enum class EFortShowdownEventState CallFunc_GetTournamentTimeState_ReturnValue, bool Temp_bool_Variable_2, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class FText K2Node_Select_Default, const class FString& CallFunc_JoinStringArray_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, const struct FTimespan& CallFunc_GetTournamentTimeLeft_ReturnValue, class FText CallFunc_GetEventTimespanAsText_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, const class FString& CallFunc_GetTournamentId_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_3);
	void RefreshScoringRules(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UShowdownTournamentDetailsScoringRule_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, TArray<struct FFortShowdownScoringRuleInfo>& CallFunc_GetTournamentScoringRules_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFortShowdownScoringRuleInfo& CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void RefreshEvents(class UShowdownEventTile_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetTournamentId_ReturnValue, int32 Temp_int_Array_Index_Variable, class UShowdownEventEmptySpacer_C* CallFunc_Create_ReturnValue_1, TArray<class FString>& CallFunc_GetTournamentEvents_ReturnValue, const class FString& CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Refresh(const class FString& CallFunc_GetTournamentId_ReturnValue, const class FString& CallFunc_GetTournamentNextEvent_ReturnValue);
	void RefreshDataBP();
	void EventShowWindowDetails(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void AnimTransition(bool In, class UWidgetAnimation* Animation, float PlaySpeed);
	void Construct();
	void CloseTournamentDetails();
	void CloseEventWindowDetails();
	void EventDeselectWindows(class UWidget* SelectedWidget);
	void EventCenterEventWindow(class UWidget* Widget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void EventStartCentering();
	void EventStopCentering();
	void BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventViewFullLeaderboard(const class FString& TournamentId, const class FString& EventId);
	void EventToggleFullScreenContent(bool In);
	void EventCloseLeaderboard();
	void BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventViewPayout(const class FString& EventWindowId, const class FString& EventId);
	void EventclosePayout();
	void No_payouts();
	void OnActivateScreen();
	void EventViewLiveGames();
	void EventBackoutLiveGames();
	void ExecuteUbergraph_TournamentDetails(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_In_1, class UWidgetAnimation* K2Node_CustomEvent_Animation, float K2Node_CustomEvent_PlaySpeed, float CallFunc_PauseAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, float Temp_float_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetChildrenCount_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, class UWidget* K2Node_CustomEvent_SelectedWidget, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UWidget* K2Node_CustomEvent_Widget, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_3, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile_3, bool K2Node_DynamicCast_bSuccess_4, enum class ESlateVisibility Temp_byte_Variable_2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector4& CallFunc_GetSafeZonePadding_SafePadding, const struct FVector2D& CallFunc_GetSafeZonePadding_SafePaddingScale, const struct FVector4& CallFunc_GetSafeZonePadding_SpillOverPadding, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_4, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_8, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_9, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, enum class ESlateVisibility Temp_byte_Variable_10, int32 Temp_int_Variable_2, class UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_3, const class FString& K2Node_CustomEvent_TournamentId, const class FString& K2Node_CustomEvent_EventId_1, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UShowdownEventTile_C* K2Node_DynamicCast_AsShowdown_Event_Tile_5, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Variable_2, bool K2Node_CustomEvent_In, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_DoCalloutMFARequirement_ReturnValue, class UEnableMultiFactorAuthModalBP_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_QueueModal_ReturnValue, const class FString& K2Node_CustomEvent_EventWindowId, const class FString& K2Node_CustomEvent_EventId, enum class EFortShowdownEventState Temp_byte_Variable_13, enum class ESlateVisibility K2Node_Select_Default_2);
	void BackActionSelected__DelegateSignature();
};

}



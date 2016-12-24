/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAdInterfacesAudienceOption, FBAdInterfacesSavedAudienceInfo, FBAdInterfacesBudget, FBAdInterfacesBudgetAndDurationOption, FBMemAdAccount, FBMemAdConversionPixel, FBAdInterfacesCallToActions, FBAdInterfacesDurationSuggestions, FBAdCreativeOptions, FBAdInterfacesPromotionPacingInfo;

@interface FBAdInterfacesPromotionSelectionsBuilder : NSObject {

	FBAdInterfacesAudienceOption* _audienceOption;
	FBAdInterfacesSavedAudienceInfo* _savedAudienceInfo;
	FBAdInterfacesBudget* _budget;
	FBAdInterfacesBudget* _customBudget;
	FBAdInterfacesBudgetAndDurationOption* _customBudgetAndDurationOption;
	FBMemAdAccount* _account;
	FBMemAdConversionPixel* _conversionPixel;
	unsigned long long _objectiveType;
	FBAdInterfacesCallToActions* _callToActions;
	FBAdInterfacesDurationSuggestions* _durationSuggestions;
	FBAdCreativeOptions* _creative;
	FBAdInterfacesPromotionPacingInfo* _promotionPacingInfo;
	BOOL _isInstagramOptout;
	BOOL _isMapCardEnabled;

}
+(id)adInterfacesPromotionSelectionsFromExistingAdInterfacesPromotionSelections:(id)arg1 ;
+(id)adInterfacesPromotionSelections;
-(id)withCreative:(id)arg1 ;
-(id)withSavedAudienceInfo:(id)arg1 ;
-(id)withCustomBudget:(id)arg1 ;
-(id)withDurationSuggestions:(id)arg1 ;
-(id)withCustomBudgetAndDurationOption:(id)arg1 ;
-(id)withPromotionPacingInfo:(id)arg1 ;
-(id)withIsInstagramOptout:(BOOL)arg1 ;
-(id)withCallToActions:(id)arg1 ;
-(id)withIsMapCardEnabled:(BOOL)arg1 ;
-(id)withAccount:(id)arg1 ;
-(id)withBudget:(id)arg1 ;
-(id)withAudienceOption:(id)arg1 ;
-(id)withConversionPixel:(id)arg1 ;
-(id)withObjectiveType:(unsigned long long)arg1 ;
-(id)build;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSearchTypeaheadSessionConfig;

@interface FBSearchTypeaheadLogger : NSObject {

	FBSearchTypeaheadSessionConfig* _typeaheadSessionConfig;

}
-(id)initWithTypeaheadSessionConfig:(id)arg1 ;
-(void)logSuggestionSelection:(id)arg1 withSessionStatus:(id)arg2 ;
-(void)_logEvent:(id)arg1 withExtra:(id)arg2 ;
-(id)_commonExtraWithSelectedSuggestion:(id)arg1 withSessionStatus:(id)arg2 ;
-(id)_commonInputLoggingExtrasWithSessionStatus:(id)arg1 ;
-(id)_suggestionLoggingData:(id)arg1 ;
-(id)_suggestionInputLoggingExtras:(id)arg1 withSessionStatus:(id)arg2 ;
-(id)_taTypeFromSessionStatus:(id)arg1 ;
-(id)_connectedStateFromSuggestion:(id)arg1 ;
-(id)_impressionsLoggingInfoWithImpressions:(id)arg1 ;
-(void)logInlineAction:(unsigned long long)arg1 onSuggestion:(id)arg2 withSessionStatus:(id)arg3 ;
-(void)logFlickerFromSuggestion:(id)arg1 toSuggestion:(id)arg2 atIndex:(unsigned long long)arg3 withSessionStatus:(id)arg4 ;
-(void)logExitWithReason:(id)arg1 sessionStatus:(id)arg2 ;
-(void)logClearButtonClickWithSessionStatus:(id)arg1 ;
-(void)logRemovedSuggestions:(id)arg1 withSessionStatus:(id)arg2 ;
-(id)init;
@end

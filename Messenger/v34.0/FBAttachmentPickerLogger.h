/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSearchResultsActivityListener.h>

@class NSString, FBAttachmentPickerInputData;

@interface FBAttachmentPickerLogger : NSObject <FBSearchResultsActivityListener> {

	NSString* _sessionID;
	FBAttachmentPickerInputData* _inputData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(void)logCancel;
-(void)resultsWithContext:(id)arg1 didSelectResultWithComponentModel:(id)arg2 selectionType:(id)arg3 customURL:(id)arg4 ;
-(void)resultsWithContext:(id)arg1 didPreviewResultWithComponentModel:(id)arg2 ;
-(void)resultsWithQueryString:(id)arg1 didYieldDelayedImpressionWithLogInfo:(id)arg2 ;
-(void)resultsWithQueryString:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_extraForComponentModel:(id)arg1 ;
-(id)_denil:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 inputData:(id)arg2 ;
-(void)logOpen;
@end


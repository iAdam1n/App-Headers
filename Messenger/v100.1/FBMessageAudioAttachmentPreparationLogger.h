/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageAudioAttachmentStreamingPreprationListener.h>
#import <Messenger/FBMessageAttachmentPreparationLoggingExtras.h>

@class FBAnalytics, NSMutableDictionary, NSString;

@interface FBMessageAudioAttachmentPreparationLogger : NSObject <FBMessageAudioAttachmentStreamingPreprationListener, FBMessageAttachmentPreparationLoggingExtras> {

	FBAnalytics* _analytics;
	unsigned long long _startTime;
	NSMutableDictionary* _loggingExtras;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_willBeginUploadWithContentSize:(unsigned long long)arg1 isResumed:(BOOL)arg2 ;
-(void)_markCompletionWithStatus:(id)arg1 ;
-(void)_markUploadFinishWithMetrics:(id)arg1 ;
-(void)willPrepareAudioContent:(id)arg1 forMessageOfflineId:(id)arg2 ;
-(void)willComputeHash;
-(void)didComputeHash:(id)arg1 ;
-(void)willQueryFbId;
-(void)didQueryFbId:(id)arg1 ;
-(void)willResumeWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)willUploadWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)didProgressUploadTo:(float)arg1 ;
-(void)didFailToUploadWithError:(id)arg1 metrics:(id)arg2 ;
-(void)didCompleteUploadWithFbId:(id)arg1 metrics:(id)arg2 ;
-(void)didCancelUploadWithMetrics:(id)arg1 ;
-(void)didPrepare;
-(void)didFailToPrepareWithError:(id)arg1 ;
-(void)didCancelPreparation;
-(id)loggingExtras;
-(id)initWithAnalytics:(id)arg1 initialLoggingData:(id)arg2 ;
@end

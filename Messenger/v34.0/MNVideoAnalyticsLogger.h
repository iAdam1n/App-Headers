/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMVideoPlaybackEventListener.h>
#import <Messenger/MNVideoTouchEventListener.h>
#import <Messenger/MNVideoRecordEventListener.h>
#import <Messenger/FBMVideoAttachmentExportListener.h>
#import <Messenger/FBMMessageVideoDownloadListener.h>
#import <Messenger/FBSessionClassProvidable.h>

@class FBAnalytics, FBMMessageAttachments, FBReachabilityAnnouncer, NSString;

@interface MNVideoAnalyticsLogger : NSObject <FBMVideoPlaybackEventListener, MNVideoTouchEventListener, MNVideoRecordEventListener, FBMVideoAttachmentExportListener, FBMMessageVideoDownloadListener, FBSessionClassProvidable> {

	FBAnalytics* _analyticsLogger;
	FBMMessageAttachments* _messageAttachments;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)videoAttachmentDidStartExport:(id)arg1 ;
-(void)videoAttachment:(id)arg1 didExportWithProgress:(id)arg2 ;
-(void)videoAttachment:(id)arg1 didFailExportWithError:(id)arg2 ;
-(void)videoAttachmentDidFinishExport:(id)arg1 ;
-(void)videoRecordStarted;
-(void)videoRecordCancelledWithDuration:(double)arg1 ;
-(void)videoRecordFinishedWithDuration:(double)arg1 cameraPosition:(id)arg2 ;
-(void)playVideoTappedForMessage:(id)arg1 ;
-(void)cancelVideoSendTappedForMessage:(id)arg1 ;
-(void)retryVideoSendTappedForMessage:(id)arg1 ;
-(void)player:(id)arg1 failedPlayingVideoForMessage:(id)arg2 error:(id)arg3 ;
-(void)player:(id)arg1 finishedPlayingVideoForMessage:(id)arg2 duration:(id)arg3 ;
-(void)player:(id)arg1 startedPlayingVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 ;
-(void)player:(id)arg1 pausedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 ;
-(void)player:(id)arg1 interruptedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 ;
-(void)player:(id)arg1 dismissedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 ;
-(void)messageVideoDownloaderDidStartDownloadForMessageId:(id)arg1 ;
-(void)messageVideoDownloaderDidSucceedForMessageId:(id)arg1 usingURL:(id)arg2 ;
-(void)messageVideoDownloaderDidFailForMessageId:(id)arg1 error:(id)arg2 ;
-(void)messageVideoDownloaderDidDownloadWithProgress:(double)arg1 forMessageId:(id)arg2 ;
-(id)initWithAnalyticsLogger:(id)arg1 reachabilityAnnouncer:(id)arg2 messageAttachments:(id)arg3 ;
-(id)_playerSourceFromPlayer:(id)arg1 ;
-(void)_logPlaybackEvent:(id)arg1 player:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 message:(id)arg5 error:(id)arg6 ;
-(void)_logUploadEvent:(id)arg1 message:(id)arg2 error:(id)arg3 ;
-(void)_logRecordEvent:(id)arg1 duration:(id)arg2 cameraPosition:(id)arg3 ;
-(void)_logTranscodeEvent:(id)arg1 videoAttachment:(id)arg2 error:(id)arg3 ;
-(void)_logDownloadEvent:(id)arg1 messageId:(id)arg2 error:(id)arg3 ;
-(id)_playbackExtraForMessage:(id)arg1 player:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 error:(id)arg5 ;
-(id)_uploadExtraForMessage:(id)arg1 error:(id)arg2 ;
-(id)_transcodeExtraForVideoAttachment:(id)arg1 error:(id)arg2 ;
-(id)_recordExtraWithDuration:(id)arg1 cameraPosition:(id)arg2 ;
-(id)_analyticsVideoAttachmentTypeFromMessage:(id)arg1 ;
-(id)init;
@end


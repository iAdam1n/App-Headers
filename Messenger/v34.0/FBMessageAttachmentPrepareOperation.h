/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Foundation/NSOperation.h>
#import <Messenger/MNRichMediaUploadListener.h>

@protocol OutgoingAttachment, FBMessageAttachmentPreparerListener, MNPhotoUploadListener, MNVideoUploadListener, MNAuthenticationManager, FBMessageAttachmentServerFbIdQuerier;
@class NSString, FBMessageOutgoingAttribution, MNPhotoViewModel, MNPhotoUploader, MNRichMediaUploadHandler, MNRichMediaAttachmentUploadDecisionConfig, FBUserSession, FBMessageAttachmentUploadResultCache, NSURL;

@interface FBMessageAttachmentPrepareOperation : NSOperation <MNRichMediaUploadListener> {

	NSString* _messageOfflineId;
	id<OutgoingAttachment> _attachment;
	FBMessageOutgoingAttribution* _outgoingAttribution;
	MNPhotoViewModel* _attachedPhotoViewModel;
	long long _photoAttachmentType;
	id<FBMessageAttachmentPreparerListener> _attachmentPreparerListener;
	id<MNPhotoUploadListener> _photoUploadListener;
	id<MNVideoUploadListener> _videoUploadListener;
	MNPhotoUploader* _photoUploader;
	NSString* _videoUploadToken;
	BOOL _isVideoUploadEnabled;
	MNRichMediaUploadHandler* _uploadHandler;
	id<MNAuthenticationManager> _authManager;
	id<FBMessageAttachmentServerFbIdQuerier> _attachmentServerFbIdQuerier;
	MNRichMediaAttachmentUploadDecisionConfig* _photoUploadConfig;
	MNRichMediaAttachmentUploadDecisionConfig* _videoUploadConfig;
	FBUserSession* _userSession;
	FBMessageAttachmentUploadResultCache* _attachmentUploadResultCache;
	BOOL _finished;
	BOOL _executing;
	unsigned long long _state;
	/*^block*/id _attachmentPreparationProgressBlock;
	NSURL* _animatedExternalURL;

}

@property (nonatomic,copy) NSURL * animatedExternalURL;              //@synthesize animatedExternalURL=_animatedExternalURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)animatedExternalURL;
-(void)setAnimatedExternalURL:(NSURL *)arg1 ;
-(void)uploadDidSucceed:(id)arg1 withContentFBID:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(MNRichMediaUploadJobProgressInformation)arg2 ;
-(BOOL)_uploadIsResumable;
-(void)_resumeFailedUpload;
-(void)_prepareAttachmentData;
-(void)_cancelInternal;
-(id)_prepareStateToString;
-(void)setCancelled;
-(void)_cancelPrepare;
-(void)_cancelMediaUpload;
-(BOOL)_isSkipFromCacheEnabled;
-(BOOL)_isAttachmentAlreadyUploaded;
-(id)_getMediaFbidFromCache;
-(void)_mediaSkippedUploadFromCacheWithFBID:(id)arg1 ;
-(BOOL)_isSkipFromServerEnabled;
-(void)_mediaSkippedUploadFromServerWithFBID:(id)arg1 ;
-(void)_attachmentWasPreparedWithData:(id)arg1 error:(id)arg2 ;
-(BOOL)_isAttachmentAPhoto;
-(BOOL)_isAttachmentAVideo;
-(void)_finishPrepareWithFBID:(id)arg1 resultPath:(id)arg2 ;
-(BOOL)_shouldUploadPhotoAttachmentData:(id)arg1 forAttachment:(id)arg2 ;
-(void)_photoUploadWithData:(id)arg1 ;
-(BOOL)_shouldUploadVideoAttachmentData:(id)arg1 forAttachment:(id)arg2 ;
-(void)_videoUploadWithData:(id)arg1 ;
-(void)_cancelPhotoUpload;
-(void)_cancelVideoUpload;
-(void)_setMediaFbidInCache:(id)arg1 ;
-(void)_photoDidUploadWithFBID:(id)arg1 error:(id)arg2 ;
-(void)_uploadDidMakeProgress:(double)arg1 ;
-(void)_finishPhotoUploadWithFBID:(id)arg1 error:(id)arg2 ;
-(void)_finishVideoUploadWithFBID:(id)arg1 error:(id)arg2 failureToken:(id)arg3 metrics:(id)arg4 ;
-(void)_videoDidUploadWithFBID:(id)arg1 error:(id)arg2 failureToken:(id)arg3 metrics:(id)arg4 ;
-(id)initWithMessageOfflineId:(id)arg1 attachment:(id)arg2 outgoingAttribution:(id)arg3 userSession:(id)arg4 authManager:(id)arg5 uploadHandler:(id)arg6 attachmentServerFbIdQuerier:(id)arg7 photoUploadConfig:(id)arg8 videoUploadConfig:(id)arg9 attachmentPrepListener:(id)arg10 photoUploadListener:(id)arg11 videoUploadListener:(id)arg12 progressBlock:(/*^block*/id)arg13 attachmentUploadResultCache:(id)arg14 ;
-(void)enablePhotoUpload:(id)arg1 photoAttachmentType:(long long)arg2 animatedExternalURL:(id)arg3 ;
-(void)enableVideoUpload;
-(BOOL)isReady;
-(void)cancel;
-(BOOL)isCancelled;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(void)_finish;
@end

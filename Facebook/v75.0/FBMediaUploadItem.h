/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBVideoUploadItemProtocol.h>

@protocol FBNetworkDispatch, FBMediaUploadItemProcessedContext, FBMediaUploadItemDelegate;
@class NSString, FBMediaUploadItemLogger, NSMutableSet, UIImage, FBComposerPublisherData;

@interface FBMediaUploadItem : NSObject <FBNetworkerRequestDelegate, FBVideoUploadItemProtocol> {

	NSString* _mediaFBID;
	FBMediaUploadItemLogger* _logger;
	BOOL _isProcessingSucceeded;
	double _uploadProcessStartTime;
	double _uploadTransferStartTime;
	id<FBNetworkDispatch> _networkDispatcher;
	id<FBMediaUploadItemProcessedContext> _processedContext;
	BOOL _firstUpload;
	NSMutableSet* _uploadRequests;
	BOOL _shouldUploadVideoWithoutPublishing;
	BOOL _shouldForceUsingNativeEncoder;
	BOOL _shouldForceRawFileUpload;
	BOOL _readyToPublish;
	int _priorityStatus;
	int _mediaUploadItemType;
	float _baseProgress;
	id<FBMediaUploadItemDelegate> _delegate;
	NSString* _attachmentID;
	long long _state;
	UIImage* _thumbnailImage;
	FBComposerPublisherData* _publisherData;
	double _uploadSuccessTime;
	double _progress;

}

@property (nonatomic,copy) NSString * mediaFBID;                                                  //@synthesize mediaFBID=_mediaFBID - In the implementation block
@property (nonatomic,retain) id<FBMediaUploadItemProcessedContext> processedContext;              //@synthesize processedContext=_processedContext - In the implementation block
@property (assign,nonatomic) float baseProgress;                                                  //@synthesize baseProgress=_baseProgress - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaUploadItemDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentID;                                      //@synthesize attachmentID=_attachmentID - In the implementation block
@property (assign,nonatomic) int priorityStatus;                                                  //@synthesize priorityStatus=_priorityStatus - In the implementation block
@property (assign,nonatomic) long long state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int mediaUploadItemType;                                           //@synthesize mediaUploadItemType=_mediaUploadItemType - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailImage;                                          //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) FBComposerPublisherData * publisherData;                             //@synthesize publisherData=_publisherData - In the implementation block
@property (assign,nonatomic) double uploadSuccessTime;                                            //@synthesize uploadSuccessTime=_uploadSuccessTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * uploadSessionID; 
@property (nonatomic,readonly) double progress;                                                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL shouldUploadVideoWithoutPublishing;                             //@synthesize shouldUploadVideoWithoutPublishing=_shouldUploadVideoWithoutPublishing - In the implementation block
@property (assign,nonatomic) BOOL shouldForceUsingNativeEncoder;                                  //@synthesize shouldForceUsingNativeEncoder=_shouldForceUsingNativeEncoder - In the implementation block
@property (assign,nonatomic) BOOL shouldForceRawFileUpload;                                       //@synthesize shouldForceRawFileUpload=_shouldForceRawFileUpload - In the implementation block
@property (assign,nonatomic) BOOL readyToPublish;                                                 //@synthesize readyToPublish=_readyToPublish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long uploadQuality; 
-(id)networkDispatcher;
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(FBComposerPublisherData *)publisherData;
-(NSString *)mediaFBID;
-(NSString *)uploadSessionID;
-(void)setPublisherData:(FBComposerPublisherData *)arg1 ;
-(id)initWithPublisherData:(id)arg1 attachmentID:(id)arg2 logger:(id)arg3 networkDispatcher:(id)arg4 ;
-(void)continueUploadRequest;
-(void)setBaseProgress:(float)arg1 ;
-(void)processMediaItemWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cleanupWhenPaused;
-(void)cleanupWithCallback:(/*^block*/id)arg1 ;
-(void)didUpdateTotalUploadProgress:(double)arg1 complete:(BOOL)arg2 ;
-(id)mediaItemInfo;
-(id)apiParametersWithProcessedContext:(id)arg1 ;
-(unsigned long long)nextUploadRequestStatus;
-(id)nextUploadRequestFromRequestParameter:(id)arg1 ;
-(id)mediaIDFromResult:(id)arg1 ;
-(void)didFailedUploadingMediaStep;
-(void)didFailedProcessingMediaStep;
-(void)setMediaFBID:(NSString *)arg1 ;
-(BOOL)hasUploadInProgress;
-(BOOL)sendNextUploadRequest;
-(id)startTransferWithParameters:(id)arg1 ;
-(void)mediaPublishFinished:(id)arg1 status:(id)arg2 ;
-(void)startProcessingInBackground;
-(void)abortUploadRequestWithCallback:(/*^block*/id)arg1 ;
-(void)addNetworkerRequest:(id)arg1 ;
-(id<FBMediaUploadItemProcessedContext>)processedContext;
-(void)setProcessedContext:(id<FBMediaUploadItemProcessedContext>)arg1 ;
-(float)baseProgress;
-(void)logProcessStart;
-(int)priorityStatus;
-(int)mediaUploadItemType;
-(double)uploadSuccessTime;
-(BOOL)shouldUploadVideoWithoutPublishing;
-(BOOL)shouldForceUsingNativeEncoder;
-(BOOL)shouldForceRawFileUpload;
-(BOOL)readyToPublish;
-(void)startUploadingInBackground;
-(void)replacePublisherData:(id)arg1 ;
-(void)setShouldUploadVideoWithoutPublishing:(BOOL)arg1 ;
-(void)setShouldForceUsingNativeEncoder:(BOOL)arg1 ;
-(void)setShouldForceRawFileUpload:(BOOL)arg1 ;
-(void)setReadyToPublish:(BOOL)arg1 ;
-(BOOL)requiresReuploadWhenReplacedByMediaUploadItem:(id)arg1 ;
-(void)setPriorityStatus:(int)arg1 ;
-(unsigned long long)uploadQuality;
-(void)setUploadSuccessTime:(double)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBMediaUploadItemDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMediaUploadItemDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_start;
-(void)start;
-(BOOL)isCancelled;
-(void)resume;
-(double)progress;
-(void)cleanup;
-(void)pause;
-(BOOL)isPaused;
-(UIImage *)thumbnailImage;
-(void)resetState;
-(void)updateProgress:(double)arg1 ;
-(NSString *)attachmentID;
@end

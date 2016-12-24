/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaUploadItemProtocol.h>
#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBMediaUploadItemDelegate;
@class NSString, UIImage, FBComposerPublisherData, FBNetworkerRequest, FBMultiPickerVideoAttachment;

@interface FBRemoteVideoUploadItem : NSObject <FBMediaUploadItemProtocol, FBNetworkerRequestDelegate> {

	NSString* _compositionID;
	double _progressBeforeVideoProcessing;
	id<FBNetworkDispatch> _networkDispatcher;
	FBNetworkerRequest* _currentUploadRequest;
	int _priorityStatus;
	FBMultiPickerVideoAttachment* _videoAttachment;
	id<FBMediaUploadItemDelegate> _delegate;
	long long _state;
	NSString* _mediaFBID;
	UIImage* _thumbnailImage;
	FBComposerPublisherData* _publisherData;
	double _uploadSuccessTime;
	NSString* _uploadSessionID;
	double _progress;

}

@property (nonatomic,readonly) FBMultiPickerVideoAttachment * videoAttachment;              //@synthesize videoAttachment=_videoAttachment - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaUploadItemDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentID; 
@property (assign,nonatomic) int priorityStatus;                                            //@synthesize priorityStatus=_priorityStatus - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * mediaFBID;                                            //@synthesize mediaFBID=_mediaFBID - In the implementation block
@property (nonatomic,readonly) int mediaUploadItemType; 
@property (nonatomic,readonly) UIImage * thumbnailImage;                                    //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) FBComposerPublisherData * publisherData;                       //@synthesize publisherData=_publisherData - In the implementation block
@property (assign,nonatomic) double uploadSuccessTime;                                      //@synthesize uploadSuccessTime=_uploadSuccessTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * uploadSessionID;                             //@synthesize uploadSessionID=_uploadSessionID - In the implementation block
@property (nonatomic,readonly) double progress;                                             //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long uploadQuality; 
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)setPublisherData:(FBComposerPublisherData *)arg1 ;
-(FBComposerPublisherData *)publisherData;
-(NSString *)mediaFBID;
-(FBMultiPickerVideoAttachment *)videoAttachment;
-(void)setMediaFBID:(NSString *)arg1 ;
-(int)priorityStatus;
-(int)mediaUploadItemType;
-(double)uploadSuccessTime;
-(BOOL)requiresReuploadWhenReplacedByMediaUploadItem:(id)arg1 ;
-(void)setPriorityStatus:(int)arg1 ;
-(unsigned long long)uploadQuality;
-(void)setUploadSuccessTime:(double)arg1 ;
-(NSString *)uploadSessionID;
-(id)initWithVideoAttachment:(id)arg1 publisherData:(id)arg2 networkDispatcher:(id)arg3 ;
-(id)_networkRequestForPOSTRequest;
-(id)_videoUploadTargetFBID;
-(void)cancel;
-(void)setDelegate:(id<FBMediaUploadItemDelegate>)arg1 ;
-(id<FBMediaUploadItemDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start;
-(double)progress;
-(UIImage *)thumbnailImage;
-(NSString *)attachmentID;
@end

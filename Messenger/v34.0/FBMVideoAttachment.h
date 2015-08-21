/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMAttachment.h>
#import <Messenger/OutgoingAttachment.h>

@protocol FBVideoAttachmentProtocol;
@class NSURL, NSMutableArray, FBMVideoAttachmentExportListenerAnnouncer, NSString, MNPhotoViewModel, FBMPhotoAttachment, NSDictionary, NSData;

@interface FBMVideoAttachment : FBMAttachment <OutgoingAttachment> {

	NSURL* _location;
	BOOL _exportToNSDataInProgress;
	NSMutableArray* _fileCreationCompletionBlocks;
	FBMVideoAttachmentExportListenerAnnouncer* _exportAnnouncer;
	SCD_Struct_FB419 _timeRange;
	double _minimumBitrateForTranscoding;
	NSString* _sha256;
	BOOL _isPrepareAttachmentDataCancelled;
	long long _videoType;
	id<FBVideoAttachmentProtocol> _mediaAttachment;
	double _duration;
	MNPhotoViewModel* _thumbnailPhotoViewModel;
	FBMPhotoAttachment* _thumbnailPhotoAttachment;
	NSString* _offlineVideoId;
	NSDictionary* _extraLoggingData;
	NSData* _attachmentData;

}

@property (nonatomic,readonly) NSURL * localUrl; 
@property (assign,nonatomic) long long videoType;                                        //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,retain) id<FBVideoAttachmentProtocol> mediaAttachment;              //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) MNPhotoViewModel * thumbnailPhotoViewModel;                   //@synthesize thumbnailPhotoViewModel=_thumbnailPhotoViewModel - In the implementation block
@property (nonatomic,retain) FBMPhotoAttachment * thumbnailPhotoAttachment;              //@synthesize thumbnailPhotoAttachment=_thumbnailPhotoAttachment - In the implementation block
@property (nonatomic,copy) NSString * offlineVideoId;                                    //@synthesize offlineVideoId=_offlineVideoId - In the implementation block
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) unsigned long long originalFileSize; 
@property (nonatomic,readonly) unsigned long long estimatedFileSize; 
@property (nonatomic,copy) NSDictionary * extraLoggingData;                              //@synthesize extraLoggingData=_extraLoggingData - In the implementation block
@property (nonatomic,retain) NSData * attachmentData;                                    //@synthesize attachmentData=_attachmentData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long attachmentType; 
-(id)attachmentHandle;
-(id)originalSha256Hash;
-(void)getThumbnailOfSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAsParamsToDictionary:(id)arg1 ;
-(void)addAsParamsToRequest:(id)arg1 ;
-(void)addAsAttachFile:(id)arg1 ;
-(void)prepareAttachmentDataWithCompletedBlock:(/*^block*/id)arg1 ;
-(void)prepareAttachmentHashWithCompleteBlock:(/*^block*/id)arg1 ;
-(BOOL)canCancelPrepareAttachmentData;
-(void)cancelPrepareAttachmentData;
-(NSDictionary *)extraLoggingData;
-(BOOL)_shouldTranscode;
-(void)setExtraLoggingData:(NSDictionary *)arg1 ;
-(id<FBVideoAttachmentProtocol>)mediaAttachment;
-(BOOL)_isTrimmedVideoAttachment;
-(id)fileSystemUrl;
-(void)_exportToUploadHelper:(/*^block*/id)arg1 ;
-(id)_urlToUpload;
-(void)_computeSha256HashWithCompleteBlock:(/*^block*/id)arg1 ;
-(void)_dispatchHashCompletionBlock:(/*^block*/id)arg1 hash:(id)arg2 ;
-(NSURL *)localUrl;
-(double)_originalBitrate;
-(void)setMediaAttachment:(id<FBVideoAttachmentProtocol>)arg1 ;
-(id)initWithMediaAttachment:(id)arg1 timeRange:(SCD_Struct_FB419)arg2 minimumBitrateForTranscoding:(double)arg3 ;
-(void)contentUrlAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(void)disassociateMediaAttachment;
-(void)addExportListener:(id)arg1 ;
-(void)removeExportListener:(id)arg1 ;
-(unsigned long long)originalFileSize;
-(unsigned long long)estimatedFileSize;
-(void)setVideoType:(long long)arg1 ;
-(MNPhotoViewModel *)thumbnailPhotoViewModel;
-(void)setThumbnailPhotoViewModel:(MNPhotoViewModel *)arg1 ;
-(FBMPhotoAttachment *)thumbnailPhotoAttachment;
-(void)setThumbnailPhotoAttachment:(FBMPhotoAttachment *)arg1 ;
-(NSString *)offlineVideoId;
-(void)setOfflineVideoId:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)mimeType;
-(long long)videoType;
-(id)attachmentFilename;
-(NSData *)attachmentData;
-(void)setAttachmentData:(NSData *)arg1 ;
-(unsigned long long)attachmentType;
-(double)aspectRatio;
@end


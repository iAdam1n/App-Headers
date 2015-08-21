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

@protocol FBPhotoAttachmentProtocol;
@class NSData, MNPhotoViewModel, NSDictionary, NSString;

@interface FBMPhotoMediaAttachment : FBMAttachment <OutgoingAttachment> {

	id<FBPhotoAttachmentProtocol> _mediaAttachment;
	unsigned long long _attachedTimestampMicroSeconds;
	BOOL _reshared;
	NSData* _attachmentData;
	MNPhotoViewModel* _photoViewModel;
	unsigned long long _sendQuality;
	NSDictionary* _extraLoggingData;

}

@property (nonatomic,readonly) BOOL reshared;                                              //@synthesize reshared=_reshared - In the implementation block
@property (nonatomic,readonly) id<FBPhotoAttachmentProtocol> mediaAttachment;              //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (nonatomic,copy) MNPhotoViewModel * photoViewModel;                              //@synthesize photoViewModel=_photoViewModel - In the implementation block
@property (assign,nonatomic) unsigned long long sendQuality;                               //@synthesize sendQuality=_sendQuality - In the implementation block
@property (nonatomic,copy) NSDictionary * extraLoggingData;                                //@synthesize extraLoggingData=_extraLoggingData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long attachmentType; 
@property (nonatomic,readonly) NSData * attachmentData;                                    //@synthesize attachmentData=_attachmentData - In the implementation block
-(id)attachmentHandle;
-(void)getThumbnailOfSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAsParamsToDictionary:(id)arg1 ;
-(void)addAsParamsToRequest:(id)arg1 ;
-(void)addAsAttachFile:(id)arg1 ;
-(void)prepareAttachmentDataWithCompletedBlock:(/*^block*/id)arg1 ;
-(void)prepareAttachmentHashWithCompleteBlock:(/*^block*/id)arg1 ;
-(BOOL)canCancelPrepareAttachmentData;
-(void)cancelPrepareAttachmentData;
-(NSDictionary *)extraLoggingData;
-(MNPhotoViewModel *)photoViewModel;
-(void)setPhotoViewModel:(MNPhotoViewModel *)arg1 ;
-(unsigned long long)sendQuality;
-(void)setSendQuality:(unsigned long long)arg1 ;
-(void)setExtraLoggingData:(NSDictionary *)arg1 ;
-(BOOL)reshared;
-(id)initWithMediaAttachment:(id)arg1 photoViewModel:(id)arg2 sendQuality:(unsigned long long)arg3 attachmentFBID:(id)arg4 ;
-(id)initWithResharedMediaAttachment:(id)arg1 photoViewModel:(id)arg2 sendQuality:(unsigned long long)arg3 attachmentFBID:(id)arg4 ;
-(id<FBPhotoAttachmentProtocol>)mediaAttachment;
-(NSString *)description;
-(id)mimeType;
-(id)attachmentFilename;
-(NSData *)attachmentData;
-(unsigned long long)attachmentType;
@end


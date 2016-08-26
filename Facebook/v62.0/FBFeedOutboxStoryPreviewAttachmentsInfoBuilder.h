/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoAttachmentProtocol;
@class NSString, FBFeedOutboxPreviewImage, FBPhotoAssetEditsState, NSArray;

@interface FBFeedOutboxStoryPreviewAttachmentsInfoBuilder : NSObject {

	unsigned long long _type;
	NSString* _primaryImageAssetID;
	FBFeedOutboxPreviewImage* _primaryImage;
	FBPhotoAssetEditsState* _primaryImageEditsState;
	NSString* _stickerID;
	id<FBVideoAttachmentProtocol> _videoAttachment;
	BOOL _isSingleVideoPostAndShouldUseOptimisticPosting;
	NSArray* _mediaAttachments;

}
+(id)feedOutboxStoryPreviewAttachmentsInfo;
+(id)feedOutboxStoryPreviewAttachmentsInfoFromExistingFeedOutboxStoryPreviewAttachmentsInfo:(id)arg1 ;
-(id)withType:(unsigned long long)arg1 ;
-(id)withPrimaryImageAssetID:(id)arg1 ;
-(id)withPrimaryImage:(id)arg1 ;
-(id)withPrimaryImageEditsState:(id)arg1 ;
-(id)withStickerID:(id)arg1 ;
-(id)withVideoAttachment:(id)arg1 ;
-(id)withIsSingleVideoPostAndShouldUseOptimisticPosting:(BOOL)arg1 ;
-(id)withMediaAttachments:(id)arg1 ;
-(id)build;
@end

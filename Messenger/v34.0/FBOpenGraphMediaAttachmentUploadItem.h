/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMediaUploadItem.h>

@protocol FBPhotoAttachmentProtocol;
@class NSString;

@interface FBOpenGraphMediaAttachmentUploadItem : FBMediaUploadItem {

	id<FBPhotoAttachmentProtocol> _imageAttachment;

}

@property (nonatomic,copy,readonly) NSString * assetID; 
-(NSString *)assetID;
-(int)mediaUploadItemType;
-(id)publishedMediaTags;
-(void)processMediaItemWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)apiParametersWithProcessedContext:(id)arg1 ;
-(id)nextUploadRequestFromRequestParameter:(id)arg1 ;
-(id)mediaIDFromResult:(id)arg1 ;
-(id)initWithImageAttachment:(id)arg1 publisherData:(id)arg2 logger:(id)arg3 experimentManager:(id)arg4 networkDispatcher:(id)arg5 ;
-(id)init;
-(id)thumbnailImage;
@end


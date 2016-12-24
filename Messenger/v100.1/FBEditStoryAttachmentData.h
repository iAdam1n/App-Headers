/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBAttachmentLink, FBAttachmentPhotoData, FBAttachmentVideoData;

@interface FBEditStoryAttachmentData : FBGraphQLInput {

	FBAttachmentLink* _link;
	FBAttachmentPhotoData* _photo;
	FBAttachmentVideoData* _video;

}

@property (nonatomic,copy) FBAttachmentLink * link;                    //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) FBAttachmentPhotoData * photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,copy) FBAttachmentVideoData * video;              //@synthesize video=_video - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBAttachmentLink *)link;
-(void)setLink:(FBAttachmentLink *)arg1 ;
-(void)setPhoto:(FBAttachmentPhotoData *)arg1 ;
-(void)setVideo:(FBAttachmentVideoData *)arg1 ;
-(FBAttachmentPhotoData *)photo;
-(FBAttachmentVideoData *)video;
@end

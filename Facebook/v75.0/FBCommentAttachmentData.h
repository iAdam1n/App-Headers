/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBAttachmentLink, FBAttachmentMediaData;

@interface FBCommentAttachmentData : FBGraphQLInput {

	FBAttachmentLink* _link;
	FBAttachmentMediaData* _media;

}

@property (nonatomic,copy) FBAttachmentLink * link;                    //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) FBAttachmentMediaData * media;              //@synthesize media=_media - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBAttachmentLink *)link;
-(void)setLink:(FBAttachmentLink *)arg1 ;
-(FBAttachmentMediaData *)media;
-(void)setMedia:(FBAttachmentMediaData *)arg1 ;
@end

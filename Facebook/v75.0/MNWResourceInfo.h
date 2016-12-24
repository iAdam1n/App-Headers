/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNBadgedProfileImageInfo;

@interface MNWResourceInfo : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _sticker_fbId;
	double _sticker_sizeInPixels;
	MNBadgedProfileImageInfo* _profileImage_profileImageInfo;
	double _profileImage_scale;
	NSString* _attachmentPreview_attachmentFbId;
	double _attachmentPreview_sizeInPixels;

}
+(id)attachmentPreviewWithAttachmentFbId:(id)arg1 sizeInPixels:(double)arg2 ;
+(id)profileImageWithProfileImageInfo:(id)arg1 scale:(double)arg2 ;
+(id)stickerWithFbId:(id)arg1 sizeInPixels:(double)arg2 ;
-(void)matchSticker:(/*^block*/id)arg1 profileImage:(/*^block*/id)arg2 attachmentPreview:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

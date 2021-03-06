/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol FBPhotoAttachmentProtocol;
@class UIImage;

@interface FBComposer360PhotoAttachment : NSObject <NSCopying, NSCoding> {

	id<FBPhotoAttachmentProtocol> _photoAttachment;
	UIImage* _full360Image;

}

@property (nonatomic,readonly) id<FBPhotoAttachmentProtocol> photoAttachment;              //@synthesize photoAttachment=_photoAttachment - In the implementation block
@property (nonatomic,retain) UIImage * full360Image;                                       //@synthesize full360Image=_full360Image - In the implementation block
-(id<FBPhotoAttachmentProtocol>)photoAttachment;
-(UIImage *)full360Image;
-(void)setFull360Image:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNWImageInfo, NSString, UIColor, NSArray;

@interface MNWStickerSet : FBValueObject <NSCopying, NSCoding> {

	MNWImageInfo* _imageInfo;
	NSString* _name;
	UIColor* _backgroundColor;
	NSArray* _stickers;

}

@property (nonatomic,copy,readonly) MNWImageInfo * imageInfo;               //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickers;                     //@synthesize stickers=_stickers - In the implementation block
-(id)initWithImageInfo:(id)arg1 name:(id)arg2 backgroundColor:(id)arg3 stickers:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSArray *)stickers;
-(MNWImageInfo *)imageInfo;
@end

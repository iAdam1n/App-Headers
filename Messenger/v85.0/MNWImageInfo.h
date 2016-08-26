/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL;

@interface MNWImageInfo : FBValueObject <NSCopying, NSCoding> {

	NSURL* _imageURL;
	CGSize _imageSize;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                   //@synthesize imageSize=_imageSize - In the implementation block
-(id)initWithImageURL:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)imageSize;
-(NSURL *)imageURL;
@end

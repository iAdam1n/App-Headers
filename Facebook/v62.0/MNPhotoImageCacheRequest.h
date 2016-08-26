/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNPhotoImageSize;

@interface MNPhotoImageCacheRequest : FBValueObject <NSCopying> {

	NSString* _key;
	MNPhotoImageSize* _size;

}

@property (nonatomic,copy,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoImageSize * size;              //@synthesize size=_size - In the implementation block
-(id)initWithKey:(id)arg1 size:(id)arg2 ;
-(MNPhotoImageSize *)size;
-(NSString *)key;
@end

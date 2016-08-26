/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemMessengerMontageTextAsset, UIImage, FBMemMessengerMontageImageAsset;

@interface MNMontageArtItemContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _text_text;
	FBMemMessengerMontageTextAsset* _text_textAsset;
	UIImage* _image_image;
	FBMemMessengerMontageImageAsset* _image_imageAsset;

}
+(id)imageWithImage:(id)arg1 imageAsset:(id)arg2 ;
+(id)textWithText:(id)arg1 textAsset:(id)arg2 ;
-(void)matchText:(/*^block*/id)arg1 image:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

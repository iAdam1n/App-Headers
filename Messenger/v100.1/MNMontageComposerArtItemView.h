/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITextView, FBMemMessengerMontageTextAsset, UIImageView, MNMontageComposerArtImageItem;

@interface MNMontageComposerArtItemView : NSObject <NSCopying> {

	unsigned long long _subtype;
	UITextView* _text_textView;
	FBMemMessengerMontageTextAsset* _text_textAsset;
	UIImageView* _image_imageView;
	MNMontageComposerArtImageItem* _image_imageItem;

}
+(id)imageWithImageView:(id)arg1 imageItem:(id)arg2 ;
+(id)textWithTextView:(id)arg1 textAsset:(id)arg2 ;
-(void)matchText:(/*^block*/id)arg1 image:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class UIImage, NSString;

@interface FBModalDialogViewItem : FBValueObject <NSCopying> {

	UIImage* _image;
	NSString* _label;

}

@property (nonatomic,copy,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)initWithImage:(id)arg1 label:(id)arg2 ;
-(UIImage *)image;
-(NSString *)label;
@end


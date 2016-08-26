/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBComposerUpdate, UIImage;

@interface FBComposerInlineSproutTextItemHScrollData : FBValueObject <NSCopying> {

	NSString* _text;
	FBComposerUpdate* _composerUpdate;
	UIImage* _icon;

}

@property (nonatomic,copy,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) FBComposerUpdate * composerUpdate;              //@synthesize composerUpdate=_composerUpdate - In the implementation block
@property (nonatomic,copy,readonly) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
-(FBComposerUpdate *)composerUpdate;
-(id)initWithText:(id)arg1 composerUpdate:(id)arg2 icon:(id)arg3 ;
-(NSString *)text;
-(UIImage *)icon;
@end

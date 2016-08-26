/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString;

@interface FBComposerPillItem : FBValueObject <NSCopying> {

	NSAttributedString* _title;
	NSString* _identifier;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSAttributedString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SEL action;                                   //@synthesize action=_action - In the implementation block
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 action:(SEL)arg3 ;
-(NSString *)identifier;
-(SEL)action;
-(NSAttributedString *)title;
@end

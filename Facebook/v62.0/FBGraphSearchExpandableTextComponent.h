/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSAttributedString;

@interface FBGraphSearchExpandableTextComponent : CKCompositeComponent {

	NSAttributedString* _attributedString;
	SEL _seeMoreAction;
	unsigned long long _state;
	FBGraphSearchExpandableComponentStyle _style;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;               //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) FBGraphSearchExpandableComponentStyle style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SEL seeMoreAction;                                        //@synthesize seeMoreAction=_seeMoreAction - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
+(id)newWithAttributedString:(id)arg1 style:(const FBGraphSearchExpandableComponentStyle*)arg2 seeMoreAction:(SEL)arg3 ;
-(void)didTapSeeMore:(id)arg1 ;
-(SEL)seeMoreAction;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(unsigned long long)state;
-(FBGraphSearchExpandableComponentStyle)style;
-(NSAttributedString *)attributedString;
@end

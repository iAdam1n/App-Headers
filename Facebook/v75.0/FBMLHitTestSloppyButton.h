/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@interface FBMLHitTestSloppyButton : UIButton {

	UIEdgeInsets _hitTestSlop;

}

@property (assign,nonatomic) UIEdgeInsets hitTestSlop;              //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
+(id)newSloppyButtonWithImage:(id)arg1 tapSize:(CGSize)arg2 ;
+(id)newSloppyButtonWithImage:(id)arg1 selectedImage:(id)arg2 tapSize:(CGSize)arg3 ;
+(UIEdgeInsets)hitTestSlopForButtonSize:(CGSize)arg1 tapSize:(CGSize)arg2 ;
+(id)newSloppyButtonWithImageName:(id)arg1 tapSize:(CGSize)arg2 ;
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

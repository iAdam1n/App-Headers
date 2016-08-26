/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@interface FBBouncyPressButton : UIButton {

	UIEdgeInsets _hitTestSlop;

}

@property (assign,nonatomic) UIEdgeInsets hitTestSlop;              //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(void)setBouncyScale:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@interface FBBouncyPressButton : UIButton {

	UIEdgeInsets _hitTestSlop;

}

@property (assign,nonatomic) UIEdgeInsets hitTestSlop;              //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
-(void)setBouncyScale:(double)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end


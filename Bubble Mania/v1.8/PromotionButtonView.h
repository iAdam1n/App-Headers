/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibView.h>
#import <BubbleMania/PromotionMenuViewDelegate.h>
#import <BubbleMania/AnimatorEndDelegate.h>

@class UIButton, PromotionMenuView, TouchEatingView, UIView, NSArray, NSTimer, S8ImageView;

@interface PromotionButtonView : XibView <PromotionMenuViewDelegate, AnimatorEndDelegate> {

	UIButton* promotionButton;
	UIButton* promotionNotificationButton;
	PromotionMenuView* promotionMenuView;
	BOOL wasStorm8ButtonShown;
	int notificationCount;
	BOOL animationInProgress;
	BOOL promotionMenuShown;
	TouchEatingView* touchEatingView;
	UIView* faderView;
	NSArray* cachedApps;
	NSTimer* animationTimer;
	S8ImageView* promotionImageView;
	double _cachedY;

}

@property (assign,nonatomic) BOOL promotionMenuShown; 
@property (nonatomic,retain) S8ImageView * promotionImageView; 
@property (nonatomic,retain) PromotionMenuView * promotionMenuView; 
@property (nonatomic,retain) TouchEatingView * touchEatingView; 
@property (nonatomic,retain) UIView * faderView; 
@property (nonatomic,retain) NSArray * cachedApps; 
@property (nonatomic,retain) NSTimer * animationTimer; 
@property (assign,nonatomic) BOOL animationInProgress; 
@property (assign,nonatomic) double cachedY;                                     //@synthesize cachedY=_cachedY - In the implementation block
-(void)showPromotionMenu:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)showPromotionButton:(BOOL)arg1 ;
-(BOOL)allowIPadScaling;
-(void)setupButton;
-(void)animate:(id)arg1 ;
-(void)setPromotionMenuShown:(BOOL)arg1 ;
-(void)setAnimationInProgress:(BOOL)arg1 ;
-(void)setCachedY:(double)arg1 ;
-(BOOL)animationInProgress;
-(UIView *)faderView;
-(PromotionMenuView *)promotionMenuView;
-(BOOL)promotionMenuShown;
-(double)cachedY;
-(void)setFaderView:(UIView *)arg1 ;
-(TouchEatingView *)touchEatingView;
-(void)setTouchEatingView:(TouchEatingView *)arg1 ;
-(void)setPromotionMenuView:(PromotionMenuView *)arg1 ;
-(void)animatorEnd:(id)arg1 ;
-(void)promotionMenuAnimationComplete;
-(NSArray *)cachedApps;
-(void)setCachedApps:(NSArray *)arg1 ;
-(void)closeTestFrameWebView:(id)arg1 ;
-(void)closeWithAnimation:(BOOL)arg1 ;
-(BOOL)supportsAutorotate;
-(void)promotionButtonTapped:(id)arg1 ;
-(S8ImageView *)promotionImageView;
-(void)setPromotionImageView:(S8ImageView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)refresh;
-(BOOL)handleLongPressGesture:(id)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)orientationChanged:(id)arg1 ;
@end


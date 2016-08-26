/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIWindow.h>

@class UIView;

@interface WACallWindow : UIWindow {

	UIView* _statusBarBackgroundView;
	UIView* _backgroundContainerView;
	long long _currentInterfaceOrientation;
	BOOL _minimized;

}

@property (assign,getter=isStatusBarSuppressed,nonatomic) BOOL statusBarSuppressed; 
@property (assign,getter=isMinimized,nonatomic) BOOL minimized;                                  //@synthesize minimized=_minimized - In the implementation block
-(void)statusBarTapped:(id)arg1 ;
-(void)minimizeWithAnimation:(BOOL)arg1 hasVideo:(BOOL)arg2 ;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)setUpFauxStatusBar;
-(void)updateStatusBarFrameWithAnimationDuration:(double)arg1 ;
-(BOOL)isStatusBarSuppressed;
-(void)setStatusBarSuppressed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isMinimized;
-(void)setMinimized:(BOOL)arg1 ;
-(void)maximize;
@end

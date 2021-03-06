/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)minimizeWithAnimation:(BOOL)arg1 ;
-(void)statusBarTapped:(id)arg1 ;
-(void)setUpFauxStatusBar;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
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


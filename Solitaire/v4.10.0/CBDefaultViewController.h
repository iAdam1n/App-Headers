/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewController.h>

@class CBLoadingView, CBDefaultBackgroundView;

@interface CBDefaultViewController : UIViewController {

	CBLoadingView* _loadingView;
	CBDefaultBackgroundView* _backgroundView;
	CBDefaultBackgroundView* _reversedBackgroundView;

}

@property (retain) CBLoadingView * loadingView;                                   //@synthesize loadingView=_loadingView - In the implementation block
@property (retain) CBDefaultBackgroundView * backgroundView;                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) CBDefaultBackgroundView * reversedBackgroundView;              //@synthesize reversedBackgroundView=_reversedBackgroundView - In the implementation block
+(id)shared;
-(void)dismissLoadingView;
-(void)resumeImpression:(id)arg1 ;
-(void)showImpression:(id)arg1 ;
-(void)displayLoadingViewInViewController:(id)arg1 ;
-(void)pauseImpression:(id)arg1 ;
-(BOOL)displayInterstitial:(id)arg1 ;
-(void)dismissInterstitial:(id)arg1 didClose:(BOOL)arg2 ;
-(void)dismissMoreApps:(id)arg1 ;
-(void)hideImpression:(id)arg1 ;
-(void)rotateImpression:(id)arg1 toOrientation:(long long)arg2 animated:(BOOL)arg3 ;
-(void)rotateLoadingView;
-(void)setReversedBackgroundView:(CBDefaultBackgroundView *)arg1 ;
-(CBDefaultBackgroundView *)reversedBackgroundView;
-(id)chartboostRootView:(id)arg1 ;
-(double)orientationToAngle:(long long)arg1 ;
-(CGRect)adjustFrameForStatusBar:(CGRect)arg1 ;
-(BOOL)displayMoreApps:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setBackgroundView:(CBDefaultBackgroundView *)arg1 ;
-(CBDefaultBackgroundView *)backgroundView;
-(void)viewDidLoad;
-(void)setLoadingView:(CBLoadingView *)arg1 ;
-(CBLoadingView *)loadingView;
@end


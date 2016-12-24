/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASAdViewDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class SASAdView;

@interface SASAdViewDelegateManager : NSObject {

	SASAdView* _adView;
	id<SASAdViewDelegate> _calledDelegate;

}

@property (assign,nonatomic,__weak) SASAdView * adView;                                //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic,__weak) id<SASAdViewDelegate> calledDelegate;              //@synthesize calledDelegate=_calledDelegate - In the implementation block
-(void)setAdView:(SASAdView *)arg1 ;
-(SASAdView *)adView;
-(BOOL)callAdViewShouldHandleURLDelegate:(id)arg1 ;
-(BOOL)callAdViewCanHandleAudioSessionDelegate;
-(void)callAdViewAudioWillStartDelegate;
-(void)callAdViewAudioDidFinishDelegate;
-(void)callAdViewDidExpandDelegateWithFrame:(CGRect)arg1 ;
-(void)callAdViewDidDisappearDelegate;
-(void)callAdViewDidCollapseDelegate;
-(id)initWithAdView:(id)arg1 ;
-(void)setCalledDelegate:(id<SASAdViewDelegate>)arg1 ;
-(void)callAdViewDidFailToLoadDelegateWithError:(id)arg1 ;
-(void)callAdViewDidLoadDelegate;
-(void)callAdViewWillCloseExpandDelegate;
-(void)callAdViewDidCloseExpandDelegate;
-(void)callAdViewDidCloseResizeDelegate;
-(void)callAdViewDidReceiveMessageDelegate:(id)arg1 ;
-(void)callAdViewWillResizeDelegateWithError:(id)arg1 ;
-(void)callAdViewWillPerformActionWithExitDelegate:(BOOL)arg1 ;
-(void)callAdViewWillPresentModalViewDelegate;
-(void)callAdViewWillDismissModalViewDelegate;
-(void)callAdViewWillExpandDelegate;
-(void)callAdViewDidExpandDelegate;
-(void)callAdViewWillResizeDelegateWithFrame:(CGRect)arg1 ;
-(void)callAdViewDidResizeDelegate;
-(double)visibilityPercentageForAdView;
-(void)callAdViewDidFailPrefetchingWithError:(id)arg1 ;
-(void)callAdViewDidFailDelegate;
-(void)callAdViewDidDownloadAdDelegate:(id)arg1 ;
-(void)callAdViewDidPrefetchDelegate;
-(id<SASAdViewDelegate>)calledDelegate;
-(double)animationDuration;
-(unsigned long long)animationOptions;
@end

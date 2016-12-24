/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/ASVASTInterstitialViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol OS_dispatch_semaphore;
@class UIWebView, NSString, ASVASTCreative, NSMutableArray, NSTimer, NSObject, ASCountdownLabel;

@interface ASVPAIDInterstitialViewController : ASVASTInterstitialViewController <UIWebViewDelegate> {

	BOOL _adDidStartOnce;
	BOOL _didSkipAd;
	BOOL _canRunVerTwo;
	BOOL _getReqIsRunning;
	BOOL _adSkippableState;
	BOOL _adLinear;
	UIWebView* _webView;
	NSString* _closeOffset;
	ASVASTCreative* _vpaidCreative;
	long long _adMode;
	NSMutableArray* _opArray;
	NSTimer* _killTimer;
	NSTimer* _closeTimer;
	NSTimer* _progressTimer;
	NSObject*<OS_dispatch_semaphore> _closeSema;
	NSObject*<OS_dispatch_semaphore> _progSema;
	double _adWidth;
	double _adHeight;
	double _adVolume;
	double _adDuration;
	double _adRemainingTime;
	double _currentTime;
	ASCountdownLabel* _countdownLbl;
	NSTimer* _countdownTimerUpdater;

}

@property (nonatomic,copy) NSString * closeOffset;                                    //@synthesize closeOffset=_closeOffset - In the implementation block
@property (nonatomic,retain) ASVASTCreative * vpaidCreative;                          //@synthesize vpaidCreative=_vpaidCreative - In the implementation block
@property (assign,nonatomic) long long adMode;                                        //@synthesize adMode=_adMode - In the implementation block
@property (assign,nonatomic) BOOL adDidStartOnce;                                     //@synthesize adDidStartOnce=_adDidStartOnce - In the implementation block
@property (assign,nonatomic) BOOL didSkipAd;                                          //@synthesize didSkipAd=_didSkipAd - In the implementation block
@property (assign,nonatomic) BOOL canRunVerTwo;                                       //@synthesize canRunVerTwo=_canRunVerTwo - In the implementation block
@property (nonatomic,retain) NSMutableArray * opArray;                                //@synthesize opArray=_opArray - In the implementation block
@property (assign,nonatomic) BOOL getReqIsRunning;                                    //@synthesize getReqIsRunning=_getReqIsRunning - In the implementation block
@property (nonatomic,retain) NSTimer * killTimer;                                     //@synthesize killTimer=_killTimer - In the implementation block
@property (nonatomic,retain) NSTimer * closeTimer;                                    //@synthesize closeTimer=_closeTimer - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                 //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> closeSema;              //@synthesize closeSema=_closeSema - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> progSema;               //@synthesize progSema=_progSema - In the implementation block
@property (assign,nonatomic) BOOL adSkippableState;                                   //@synthesize adSkippableState=_adSkippableState - In the implementation block
@property (assign,nonatomic) BOOL adLinear;                                           //@synthesize adLinear=_adLinear - In the implementation block
@property (assign,nonatomic) double adWidth;                                          //@synthesize adWidth=_adWidth - In the implementation block
@property (assign,nonatomic) double adHeight;                                         //@synthesize adHeight=_adHeight - In the implementation block
@property (assign,nonatomic) double adVolume;                                         //@synthesize adVolume=_adVolume - In the implementation block
@property (assign,nonatomic) double adDuration;                                       //@synthesize adDuration=_adDuration - In the implementation block
@property (assign,nonatomic) double adRemainingTime;                                  //@synthesize adRemainingTime=_adRemainingTime - In the implementation block
@property (assign,nonatomic) double currentTime;                                      //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) ASCountdownLabel * countdownLbl;                         //@synthesize countdownLbl=_countdownLbl - In the implementation block
@property (nonatomic,retain) NSTimer * countdownTimerUpdater;                         //@synthesize countdownTimerUpdater=_countdownTimerUpdater - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                     //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)jsInitFNVPAIDFrameStr;
-(id)jsCheckIfVPAIDFrameIsValidStr;
-(void)setVpaidCreative:(ASVASTCreative *)arg1 ;
-(ASVASTCreative *)vpaidCreative;
-(void)setCloseOffset:(NSString *)arg1 ;
-(CGRect)calcViewFrameBasedOnScreenDimensions;
-(void)setCountdownLbl:(ASCountdownLabel *)arg1 ;
-(ASCountdownLabel *)countdownLbl;
-(void)setOpArray:(NSMutableArray *)arg1 ;
-(void)loadWebViewWithCreativeURL:(id)arg1 ;
-(void)setAdMode:(long long)arg1 ;
-(void)resizeAdToSize:(CGSize)arg1 ;
-(void)leaveApp;
-(void)returnToApp;
-(void)revokeAllTimers;
-(NSMutableArray *)opArray;
-(long long)adMode;
-(void)resumeAd;
-(void)setKillTimer:(NSTimer *)arg1 ;
-(void)stopAd;
-(void)revokeKillTimer;
-(void)endAdAttempt;
-(NSString *)closeOffset;
-(void)showCloseBtn;
-(double)adDuration;
-(void)setCloseTimer:(NSTimer *)arg1 ;
-(NSTimer *)closeTimer;
-(void)checkForProgressEvents;
-(void)revokeProgressTimer;
-(void)setProgSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)getRemainingTime;
-(NSObject*<OS_dispatch_semaphore>)progSema;
-(void)progressAction;
-(void)revokeCloseTimer;
-(void)setCloseSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)closeSema;
-(double)adRemainingTime;
-(void)setClosabilityTimer;
-(void)revokeCountdownUpdater;
-(void)setAdRemainingTime:(double)arg1 ;
-(NSTimer *)countdownTimerUpdater;
-(void)setCountdownTimerUpdater:(NSTimer *)arg1 ;
-(void)setCanRunVerTwo:(BOOL)arg1 ;
-(void)loadAndInit;
-(void)startKillTimer;
-(void)resetAdProperties;
-(void)cleanUpAd;
-(void)onCloseAd;
-(id)nextCreativeToTry:(id)arg1 ;
-(void)dismissAd;
-(BOOL)canRunVerTwo;
-(void)setDidSkipAd:(BOOL)arg1 ;
-(void)getSkippableState;
-(void)setAdSkippableState:(BOOL)arg1 ;
-(void)setAdVolume:(double)arg1 ;
-(void)setAdDidStartOnce:(BOOL)arg1 ;
-(void)setAdWidth:(double)arg1 ;
-(void)setAdHeight:(double)arg1 ;
-(void)setAdDuration:(double)arg1 ;
-(BOOL)getReqIsRunning;
-(void)setGetReqIsRunning:(BOOL)arg1 ;
-(void)runGetSetJSFromString:(id)arg1 ;
-(void)setAdLinear:(BOOL)arg1 ;
-(BOOL)adSkippableState;
-(BOOL)didSkipAd;
-(void)initCountDownLabel:(id)arg1 ;
-(void)updateCountdownTimer;
-(double)adVolume;
-(BOOL)adDidStartOnce;
-(void)setCloseAndProgTimer;
-(void)getVolume;
-(void)startAd;
-(void)getLinear;
-(void)startEvent;
-(void)getHeight;
-(void)checkClosabilityWith:(id)arg1 ;
-(void)tryNextCreative;
-(void)getterTaskForAction:(id)arg1 withArg:(id)arg2 ;
-(void)eventTaskForAction:(id)arg1 withArg:(id)arg2 ;
-(void)handshake:(id)arg1 ;
-(id)initWithVASTAd:(id)arg1 delegate:(id)arg2 closeOffset:(id)arg3 ;
-(void)pauseAd;
-(void)skipAd;
-(void)getExpanded;
-(void)getCompanions;
-(void)getIcons;
-(BOOL)adLinear;
-(double)adWidth;
-(double)adHeight;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setVolume:(double)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(double)currentTime;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)resetFlags;
-(void)getDuration;
-(NSTimer *)killTimer;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isLandscape;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)updateCurrentTime;
-(void)getWidth;
@end

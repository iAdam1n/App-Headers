/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MNGAbstractAdController.h>

@class NSString, UIWebView, UIView, UILabel, NSTimer;

@interface MNGVASTWebViewController : MNGAbstractAdController {

	BOOL _videoAdPlaying;
	BOOL _vastNoSkippable;
	NSString* _vastMedia;
	UIWebView* _endCardWebView;
	NSString* _webHtml;
	UIView* _countdownView;
	UILabel* _secondsLabel;
	NSTimer* _timer;
	long long _secondsRemaining;

}

@property (assign,nonatomic) BOOL videoAdPlaying;                     //@synthesize videoAdPlaying=_videoAdPlaying - In the implementation block
@property (assign,nonatomic) BOOL vastNoSkippable;                    //@synthesize vastNoSkippable=_vastNoSkippable - In the implementation block
@property (nonatomic,retain) NSString * vastMedia;                    //@synthesize vastMedia=_vastMedia - In the implementation block
@property (nonatomic,retain) UIWebView * endCardWebView;              //@synthesize endCardWebView=_endCardWebView - In the implementation block
@property (nonatomic,retain) NSString * webHtml;                      //@synthesize webHtml=_webHtml - In the implementation block
@property (nonatomic,retain) UIView * countdownView;                  //@synthesize countdownView=_countdownView - In the implementation block
@property (nonatomic,retain) UILabel * secondsLabel;                  //@synthesize secondsLabel=_secondsLabel - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                         //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) long long secondsRemaining;              //@synthesize secondsRemaining=_secondsRemaining - In the implementation block
+(id)availableVideoSourceForAdvertisement:(id)arg1 ;
-(id)initWithAdvertisement:(id)arg1 delegate:(id)arg2 ;
-(void)renderToScreen;
-(BOOL)isReadyToDisplay;
-(void)layoutCloseButtons;
-(void)setWebHtml:(NSString *)arg1 ;
-(void)setVastMedia:(NSString *)arg1 ;
-(void)setVideoAdPlaying:(BOOL)arg1 ;
-(void)applicationWillResign;
-(void)applicationBecomeActive;
-(BOOL)vastNoSkippable;
-(void)setVastNoSkippable:(BOOL)arg1 ;
-(void)startLoadingIfNeeded;
-(UIView *)countdownView;
-(void)setSecondsRemaining:(long long)arg1 ;
-(long long)secondsRemaining;
-(void)setSecondsLabel:(UILabel *)arg1 ;
-(void)setCountdownView:(UIView *)arg1 ;
-(void)updateSeconds;
-(BOOL)videoAdPlaying;
-(UILabel *)secondsLabel;
-(void)vastCacheFailed:(id)arg1 ;
-(NSString *)vastMedia;
-(void)handleVASTStateURL:(id)arg1 ;
-(void)setEndCardWebView:(UIWebView *)arg1 ;
-(UIWebView *)endCardWebView;
-(void)handleVideoProgressCallback:(id)arg1 ;
-(void)createCountdownView;
-(void)displayEndCard;
-(void)handleVASTAdClick;
-(void)toggleLock:(id)arg1 ;
-(NSString *)webHtml;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
@end


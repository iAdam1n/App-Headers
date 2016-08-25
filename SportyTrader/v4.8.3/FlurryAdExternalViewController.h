/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SportyTrader/FlurryAdExternalWebViewDelegate.h>
#import <SportyTrader/IFlurryAdExternalViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol IFlurryAd;
@class UIViewController, NSURLRequest, FlurryAdExternalWebView, NSNumber, UIProgressView, NSString;

@interface FlurryAdExternalViewController : UIViewController <FlurryAdExternalWebViewDelegate, IFlurryAdExternalViewController, UIAlertViewDelegate> {

	BOOL _statusBarHidden;
	BOOL _openingAppUrl;
	BOOL _presentOnLoadCompletion;
	BOOL _loadedSomething;
	id<IFlurryAd> _ad;
	NSURLRequest* _currentRequest;
	FlurryAdExternalWebView* _extAdView;
	UIViewController* _parentVC;
	NSNumber* _progressNumber;
	UIProgressView* _progressView;

}

@property (nonatomic,retain) NSURLRequest * currentRequest;                              //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) FlurryAdExternalWebView * extAdView;                        //@synthesize extAdView=_extAdView - In the implementation block
@property (assign,getter=isStatusBarHidden,nonatomic) BOOL statusBarHidden;              //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (assign,nonatomic) BOOL openingAppUrl;                                         //@synthesize openingAppUrl=_openingAppUrl - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSNumber * progressNumber;                                  //@synthesize progressNumber=_progressNumber - In the implementation block
@property (assign,nonatomic) BOOL loadedSomething;                                       //@synthesize loadedSomething=_loadedSomething - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * parentVC;                                //@synthesize parentVC=_parentVC - In the implementation block
@property (assign,nonatomic) BOOL presentOnLoadCompletion;                               //@synthesize presentOnLoadCompletion=_presentOnLoadCompletion - In the implementation block
@property (nonatomic,retain) id<IFlurryAd> ad;                                           //@synthesize ad=_ad - In the implementation block
-(void)setAd:(id<IFlurryAd>)arg1 ;
-(void)removeWindowWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)stringFromCharArray:(char*)arg1 length:(long long)arg2 ;
-(void)progressEstimateChanged:(id)arg1 ;
-(void)setLoadedSomething:(BOOL)arg1 ;
-(void)setProgressNumber:(NSNumber *)arg1 ;
-(void)showProgressBar;
-(BOOL)loadedSomething;
-(NSNumber *)progressNumber;
-(void)setProgressBarProgress:(float)arg1 ;
-(void)hideProgressBar;
-(void)resetProgressBar;
-(FlurryAdExternalWebView *)extAdView;
-(void)loadAd:(id)arg1 withRequest:(id)arg2 ;
-(void)setExtAdView:(FlurryAdExternalWebView *)arg1 ;
-(void)setOpeningAppUrl:(BOOL)arg1 ;
-(BOOL)openingAppUrl;
-(UIViewController *)parentVC;
-(BOOL)presentOnLoadCompletion;
-(void)flurryAdExternalWebViewDidClose:(id)arg1 withResult:(int)arg2 ;
-(BOOL)flurryAdExternalWebView:(id)arg1 openAppUrl:(id)arg2 ;
-(void)flurryAdExternalWebViewDidFinishLoad:(id)arg1 ;
-(void)flurryAdExternalWebViewDidFailLoad:(id)arg1 error:(id)arg2 ;
-(id)initWithAd:(id)arg1 request:(id)arg2 ;
-(void)setParentVC:(UIViewController *)arg1 ;
-(void)setPresentOnLoadCompletion:(BOOL)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(void)dealloc;
-(BOOL)isStatusBarHidden;
-(BOOL)prefersStatusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(id<IFlurryAd>)ad;
-(NSURLRequest *)currentRequest;
@end


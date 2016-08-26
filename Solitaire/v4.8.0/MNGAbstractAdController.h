/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol MNGInternalAdDelegate;
@class NSString, UIViewController, UIWebView, UIButton, MNGAdDataModel, NSMutableSet, MNGLoadingView;

@interface MNGAbstractAdController : UIViewController <UIWebViewDelegate, SKStoreProductViewControllerDelegate> {

	BOOL _isRewardedAd;
	BOOL _previousStatusBarHidden;
	NSString* _zoneId;
	UIViewController* _parentController;
	id<MNGInternalAdDelegate> _delegate;
	UIWebView* _webView;
	UIButton* _closeButton;
	long long _previousStatusBarOrientation;
	long long _rewardAdPlayedPercentage;
	double _adClickInterval;
	MNGAdDataModel* _currentAdvertisement;
	NSString* _disappearReason;
	NSMutableSet* _clickURLSTracked;
	MNGLoadingView* _adLoadingView;

}

@property (nonatomic,retain) NSString * zoneId;                                      //@synthesize zoneId=_zoneId - In the implementation block
@property (assign,nonatomic) BOOL isRewardedAd;                                      //@synthesize isRewardedAd=_isRewardedAd - In the implementation block
@property (nonatomic,retain) UIViewController * parentController;                    //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic,__weak) id<MNGInternalAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                 //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) BOOL previousStatusBarHidden;                           //@synthesize previousStatusBarHidden=_previousStatusBarHidden - In the implementation block
@property (assign,nonatomic) long long previousStatusBarOrientation;                 //@synthesize previousStatusBarOrientation=_previousStatusBarOrientation - In the implementation block
@property (assign,nonatomic) long long rewardAdPlayedPercentage;                     //@synthesize rewardAdPlayedPercentage=_rewardAdPlayedPercentage - In the implementation block
@property (assign,nonatomic) double adClickInterval;                                 //@synthesize adClickInterval=_adClickInterval - In the implementation block
@property (nonatomic,retain) MNGAdDataModel * currentAdvertisement;                  //@synthesize currentAdvertisement=_currentAdvertisement - In the implementation block
@property (nonatomic,retain) NSString * disappearReason;                             //@synthesize disappearReason=_disappearReason - In the implementation block
@property (nonatomic,retain) NSMutableSet * clickURLSTracked;                        //@synthesize clickURLSTracked=_clickURLSTracked - In the implementation block
@property (nonatomic,retain) MNGLoadingView * adLoadingView;                         //@synthesize adLoadingView=_adLoadingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerForAdvertisement:(id)arg1 delegate:(id)arg2 ;
-(void)closeButtonHandler;
-(id)initWithAdvertisement:(id)arg1 delegate:(id)arg2 ;
-(id)instantiateWebView;
-(void)setPreviousStatusBarHidden:(BOOL)arg1 ;
-(void)setRewardAdPlayedPercentage:(long long)arg1 ;
-(void)setDisappearReason:(NSString *)arg1 ;
-(void)setAdClickInterval:(double)arg1 ;
-(void)setClickURLSTracked:(NSMutableSet *)arg1 ;
-(BOOL)isDoubleClick;
-(NSString *)disappearReason;
-(long long)previousStatusBarOrientation;
-(BOOL)previousStatusBarHidden;
-(double)adClickInterval;
-(BOOL)shouldStartDecidePolicy:(id)arg1 navigationType:(long long)arg2 ;
-(void)handleAdClick:(id)arg1 ;
-(void)asyncClickTracking:(id)arg1 ;
-(void)openStoreKit;
-(void)openExternalBrowser:(id)arg1 ;
-(void)openInternalBrowser:(id)arg1 ;
-(NSMutableSet *)clickURLSTracked;
-(id)extractAppStoreId:(id)arg1 ;
-(void)presentControllerAnimated:(id)arg1 ;
-(MNGLoadingView *)adLoadingView;
-(void)hitImpressionTracking;
-(void)setPreviousStatusBarOrientation:(long long)arg1 ;
-(void)createCloseButton;
-(void)removeLoadingView;
-(BOOL)isPresentationPossible;
-(void)renderToScreen;
-(BOOL)isReadyToDisplay;
-(void)layoutCloseButtons;
-(BOOL)isRewardedAd;
-(void)setIsRewardedAd:(BOOL)arg1 ;
-(long long)rewardAdPlayedPercentage;
-(void)setAdLoadingView:(MNGLoadingView *)arg1 ;
-(void)setDelegate:(id<MNGInternalAdDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MNGInternalAdDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)setParentController:(UIViewController *)arg1 ;
-(UIViewController *)parentController;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(MNGAdDataModel *)currentAdvertisement;
-(void)setCurrentAdvertisement:(MNGAdDataModel *)arg1 ;
-(void)setZoneId:(NSString *)arg1 ;
-(NSString *)zoneId;
@end

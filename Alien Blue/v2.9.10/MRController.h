/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/MRBridgeDelegate.h>
#import <AlienBlue/MPClosableViewDelegate.h>
#import <AlienBlue/MPAdDestinationDisplayAgentDelegate.h>

@protocol MRControllerDelegate, MPAdAlertManagerProtocol;
@class MRBridge, MPClosableView, UIView, MPTimer, MRExpandModalViewController, NSMutableData, MPAdDestinationDisplayAgent, NSString;

@interface MRController : NSObject <MRBridgeDelegate, MPClosableViewDelegate, MPAdDestinationDisplayAgentDelegate> {

	BOOL _isViewable;
	BOOL _isAnimatingAdSize;
	BOOL _isAdLoading;
	BOOL _adRequiresPrecaching;
	BOOL _isAdVastVideoPlayer;
	BOOL _firedReadyEventForDefaultAd;
	id<MRControllerDelegate> _delegate;
	MRBridge* _mraidBridge;
	MRBridge* _mraidBridgeTwoPart;
	MPClosableView* _mraidAdView;
	MPClosableView* _mraidAdViewTwoPart;
	UIView* _resizeBackgroundView;
	MPTimer* _adPropertyUpdateTimer;
	unsigned long long _placementType;
	MRExpandModalViewController* _expandModalViewController;
	NSMutableData* _twoPartExpandData;
	unsigned long long _responseEncoding;
	unsigned long long _modalViewCount;
	unsigned long long _currentState;
	UIView* _originalSuperview;
	MPClosableView* _expansionContentView;
	MPAdDestinationDisplayAgent* _destinationDisplayAgent;
	id<MPAdAlertManagerProtocol> _adAlertManager;
	id<MPAdAlertManagerProtocol> _adAlertManagerTwoPart;
	unsigned long long _forceOrientationMask;
	long long _currentInterfaceOrientation;
	CGSize _currentAdSize;
	CGRect _mraidDefaultAdFrame;
	CGRect _mraidDefaultAdFrameInKeyWindow;

}

@property (assign,nonatomic,__weak) id<MRControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MRBridge * mraidBridge;                                               //@synthesize mraidBridge=_mraidBridge - In the implementation block
@property (nonatomic,retain) MRBridge * mraidBridgeTwoPart;                                        //@synthesize mraidBridgeTwoPart=_mraidBridgeTwoPart - In the implementation block
@property (nonatomic,retain) MPClosableView * mraidAdView;                                         //@synthesize mraidAdView=_mraidAdView - In the implementation block
@property (nonatomic,retain) MPClosableView * mraidAdViewTwoPart;                                  //@synthesize mraidAdViewTwoPart=_mraidAdViewTwoPart - In the implementation block
@property (nonatomic,retain) UIView * resizeBackgroundView;                                        //@synthesize resizeBackgroundView=_resizeBackgroundView - In the implementation block
@property (nonatomic,retain) MPTimer * adPropertyUpdateTimer;                                      //@synthesize adPropertyUpdateTimer=_adPropertyUpdateTimer - In the implementation block
@property (assign,nonatomic) unsigned long long placementType;                                     //@synthesize placementType=_placementType - In the implementation block
@property (nonatomic,retain) MRExpandModalViewController * expandModalViewController;              //@synthesize expandModalViewController=_expandModalViewController - In the implementation block
@property (nonatomic,retain) NSMutableData * twoPartExpandData;                                    //@synthesize twoPartExpandData=_twoPartExpandData - In the implementation block
@property (assign,nonatomic) unsigned long long responseEncoding;                                  //@synthesize responseEncoding=_responseEncoding - In the implementation block
@property (assign,nonatomic) CGRect mraidDefaultAdFrame;                                           //@synthesize mraidDefaultAdFrame=_mraidDefaultAdFrame - In the implementation block
@property (assign,nonatomic) CGRect mraidDefaultAdFrameInKeyWindow;                                //@synthesize mraidDefaultAdFrameInKeyWindow=_mraidDefaultAdFrameInKeyWindow - In the implementation block
@property (assign,nonatomic) CGSize currentAdSize;                                                 //@synthesize currentAdSize=_currentAdSize - In the implementation block
@property (assign,nonatomic) unsigned long long modalViewCount;                                    //@synthesize modalViewCount=_modalViewCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) UIView * originalSuperview;                                    //@synthesize originalSuperview=_originalSuperview - In the implementation block
@property (assign,nonatomic) BOOL isViewable;                                                      //@synthesize isViewable=_isViewable - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingAdSize;                                               //@synthesize isAnimatingAdSize=_isAnimatingAdSize - In the implementation block
@property (assign,nonatomic) BOOL isAdLoading;                                                     //@synthesize isAdLoading=_isAdLoading - In the implementation block
@property (assign,nonatomic) BOOL adRequiresPrecaching;                                            //@synthesize adRequiresPrecaching=_adRequiresPrecaching - In the implementation block
@property (assign,nonatomic) BOOL isAdVastVideoPlayer;                                             //@synthesize isAdVastVideoPlayer=_isAdVastVideoPlayer - In the implementation block
@property (assign,nonatomic) BOOL firedReadyEventForDefaultAd;                                     //@synthesize firedReadyEventForDefaultAd=_firedReadyEventForDefaultAd - In the implementation block
@property (nonatomic,retain) MPClosableView * expansionContentView;                                //@synthesize expansionContentView=_expansionContentView - In the implementation block
@property (nonatomic,retain) MPAdDestinationDisplayAgent * destinationDisplayAgent;                //@synthesize destinationDisplayAgent=_destinationDisplayAgent - In the implementation block
@property (nonatomic,retain) id<MPAdAlertManagerProtocol> adAlertManager;                          //@synthesize adAlertManager=_adAlertManager - In the implementation block
@property (nonatomic,retain) id<MPAdAlertManagerProtocol> adAlertManagerTwoPart;                   //@synthesize adAlertManagerTwoPart=_adAlertManagerTwoPart - In the implementation block
@property (assign,nonatomic) unsigned long long forceOrientationMask;                              //@synthesize forceOrientationMask=_forceOrientationMask - In the implementation block
@property (assign,nonatomic) long long currentInterfaceOrientation;                                //@synthesize currentInterfaceOrientation=_currentInterfaceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adAlertManagerDidTriggerAlert:(id)arg1 ;
-(id)viewControllerForPresentingMailVC;
-(void)displayAgentWillPresentModal;
-(void)displayAgentDidDismissModal;
-(id)viewControllerForPresentingModalView;
-(void)displayAgentWillLeaveApplication;
-(void)setDestinationDisplayAgent:(MPAdDestinationDisplayAgent *)arg1 ;
-(void)setAdAlertManager:(id<MPAdAlertManagerProtocol>)arg1 ;
-(MPAdDestinationDisplayAgent *)destinationDisplayAgent;
-(id<MPAdAlertManagerProtocol>)adAlertManager;
-(void)disableRequestHandling;
-(void)enableRequestHandling;
-(void)closableView:(id)arg1 didMoveToWindow:(id)arg2 ;
-(id)initWithAdViewFrame:(CGRect)arg1 adPlacementType:(unsigned long long)arg2 ;
-(void)loadAdWithConfiguration:(id)arg1 ;
-(BOOL)isAdLoading;
-(void)setIsAdLoading:(BOOL)arg1 ;
-(void)setResponseEncoding:(unsigned long long)arg1 ;
-(unsigned long long)responseEncoding;
-(void)bridge:(id)arg1 didFailLoadingWebView:(id)arg2 error:(id)arg3 ;
-(void)bridge:(id)arg1 performActionForMoPubSpecificURL:(id)arg2 ;
-(void)bridge:(id)arg1 handleDisplayForDestinationURL:(id)arg2 ;
-(BOOL)isLoadingAd;
-(BOOL)hasUserInteractedWithWebViewForBridge:(id)arg1 ;
-(void)bridge:(id)arg1 didFinishLoadingWebView:(id)arg2 ;
-(void)bridge:(id)arg1 handleNativeCommandUseCustomClose:(BOOL)arg2 ;
-(void)bridge:(id)arg1 handleNativeCommandSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2 ;
-(void)bridge:(id)arg1 handleNativeCommandExpandWithURL:(id)arg2 useCustomClose:(BOOL)arg3 ;
-(void)bridge:(id)arg1 handleNativeCommandResizeWithParameters:(id)arg2 ;
-(void)handleNativeCommandCloseWithBridge:(id)arg1 ;
-(void)nativeCommandWillPresentModalView;
-(void)nativeCommandDidDismissModalView;
-(unsigned long long)placementType;
-(void)updateMRAIDProperties;
-(void)viewEnteredBackground;
-(id)buildMRAIDWebViewWithFrame:(CGRect)arg1 ;
-(void)setAdRequiresPrecaching:(BOOL)arg1 ;
-(void)setIsAdVastVideoPlayer:(BOOL)arg1 ;
-(MPClosableView *)mraidAdView;
-(void)initAdAlertManager:(id)arg1 forAdView:(id)arg2 ;
-(MRBridge *)mraidBridge;
-(MRBridge *)mraidBridgeTwoPart;
-(void)setTwoPartExpandData:(NSMutableData *)arg1 ;
-(NSMutableData *)twoPartExpandData;
-(MPClosableView *)expansionContentView;
-(MPClosableView *)mraidAdViewTwoPart;
-(id)bridgeForAdView:(id)arg1 ;
-(void)setCurrentInterfaceOrientation:(long long)arg1 ;
-(void)willBeginAnimatingAdSize;
-(void)changeStateTo:(unsigned long long)arg1 ;
-(void)didEndAnimatingAdSize;
-(void)presentExpandModalViewControllerWithView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)forceOrientationMask;
-(void)setExpandModalViewController:(MRExpandModalViewController *)arg1 ;
-(MRExpandModalViewController *)expandModalViewController;
-(void)setIsAnimatingAdSize:(BOOL)arg1 ;
-(void)closeFromDefaultState;
-(void)closeFromExpandedState;
-(void)closeFromResizedState;
-(void)adWillClose;
-(void)adDidClose;
-(UIView *)originalSuperview;
-(CGRect)mraidDefaultAdFrame;
-(void)adDidDismissModalView;
-(id<MPAdAlertManagerProtocol>)adAlertManagerTwoPart;
-(void)setMraidAdViewTwoPart:(MPClosableView *)arg1 ;
-(void)setMraidBridgeTwoPart:(MRBridge *)arg1 ;
-(void)setExpansionContentView:(MPClosableView *)arg1 ;
-(CGRect)mraidDefaultAdFrameInKeyWindow;
-(UIView *)resizeBackgroundView;
-(id)adViewForBridge:(id)arg1 ;
-(void)adWillPresentModalView;
-(BOOL)adRequiresPrecaching;
-(void)adDidLoad;
-(BOOL)isViewable;
-(void)updateViewabilityWithBool:(BOOL)arg1 ;
-(void)initializeLoadedAdForBridge:(id)arg1 ;
-(void)adDidFailToLoad;
-(void)configureCloseButtonForView:(id)arg1 forUseCustomClose:(BOOL)arg2 ;
-(BOOL)isAdVastVideoPlayer;
-(void)setForceOrientationMask:(unsigned long long)arg1 ;
-(void)setMraidDefaultAdFrame:(CGRect)arg1 ;
-(void)loadTwoPartCreativeFromURL:(id)arg1 ;
-(void)setOriginalSuperview:(UIView *)arg1 ;
-(void)setMraidDefaultAdFrameInKeyWindow:(CGRect)arg1 ;
-(CGRect)adjustedFrameForFrame:(CGRect)arg1 allowOffscreen:(BOOL)arg2 ;
-(long long)adCloseButtonLocationFromString:(id)arg1 ;
-(BOOL)isValidResizeFrame:(CGRect)arg1 allowOffscreen:(BOOL)arg2 ;
-(BOOL)isValidResizeCloseButtonPlacementInFrame:(CGRect)arg1 ;
-(void)animateViewFromDefaultStateToResizedState:(id)arg1 withFrame:(CGRect)arg2 ;
-(BOOL)firedReadyEventForDefaultAd;
-(MPTimer *)adPropertyUpdateTimer;
-(void)setFiredReadyEventForDefaultAd:(BOOL)arg1 ;
-(BOOL)isAnimatingAdSize;
-(void)checkViewability;
-(void)updateCurrentPosition;
-(void)updateDefaultPosition;
-(void)updateScreenSize;
-(void)updateMaxSize;
-(void)updateEventSizeChange;
-(CGRect)activeAdFrameInScreenSpace;
-(id)bridgeForActiveAdView;
-(CGRect)defaultAdFrameInScreenSpace;
-(CGSize)currentAdSize;
-(void)setCurrentAdSize:(CGSize)arg1 ;
-(void)fireChangeEventToBothBridgesForProperty:(id)arg1 ;
-(void)setIsViewable:(BOOL)arg1 ;
-(unsigned long long)modalViewCount;
-(void)setModalViewCount:(unsigned long long)arg1 ;
-(void)appShouldSuspend;
-(void)appShouldResume;
-(void)presentExpandModalViewControllerWithView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMraidBridge:(MRBridge *)arg1 ;
-(void)setMraidAdView:(MPClosableView *)arg1 ;
-(void)setResizeBackgroundView:(UIView *)arg1 ;
-(void)setAdPropertyUpdateTimer:(MPTimer *)arg1 ;
-(void)setPlacementType:(unsigned long long)arg1 ;
-(void)setAdAlertManagerTwoPart:(id<MPAdAlertManagerProtocol>)arg1 ;
-(void)setDelegate:(id<MRControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MRControllerDelegate>)delegate;
-(unsigned long long)currentState;
-(void)close;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(long long)currentInterfaceOrientation;
-(id)activeView;
-(void)closeButtonPressed:(id)arg1 ;
@end


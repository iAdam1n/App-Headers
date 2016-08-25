/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/FBAdView.h>
#import <SolitaireFree/FBAdCommandProcessorDelegate.h>
#import <SolitaireFree/FBAdViewabilityValidatorDelegate.h>
#import <SolitaireFree/FBAdContentContainerDelegate.h>

@protocol FBAdViewInternalDelegate, FBANAdRendererDelegate;
@class UIViewController, NSDate, FBAdCommandProcessor, FBAdViewabilityValidator, FBAdContentContainer, FBHTMLAdDataModel, NSString;

@interface FBAdViewInternal : FBAdView <FBAdCommandProcessorDelegate, FBAdViewabilityValidatorDelegate, FBAdContentContainerDelegate> {

	BOOL _adValid;
	BOOL _modalViewPresenting;
	BOOL _isInterstitial;
	BOOL _isImpressionSent;
	UIViewController* _rootViewController;
	id<FBAdViewInternalDelegate> _internalDelegate;
	id<FBANAdRendererDelegate> _rendererDelegate;
	long long _orientation;
	NSDate* _interstitialOpenedTime;
	FBAdCommandProcessor* _commandHandler;
	FBAdViewabilityValidator* _viewabilityValidator;
	long long _minViewabilityPercentage;
	FBAdContentContainer* _adContentContainer;
	FBAdSize _adSizeType;

}

@property (assign,nonatomic) BOOL isInterstitial;                                                //@synthesize isInterstitial=_isInterstitial - In the implementation block
@property (nonatomic,retain) NSDate * interstitialOpenedTime;                                    //@synthesize interstitialOpenedTime=_interstitialOpenedTime - In the implementation block
@property (assign,nonatomic) BOOL isImpressionSent;                                              //@synthesize isImpressionSent=_isImpressionSent - In the implementation block
@property (nonatomic,retain) FBAdCommandProcessor * commandHandler;                              //@synthesize commandHandler=_commandHandler - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * viewabilityValidator;                    //@synthesize viewabilityValidator=_viewabilityValidator - In the implementation block
@property (assign,nonatomic) long long minViewabilityPercentage;                                 //@synthesize minViewabilityPercentage=_minViewabilityPercentage - In the implementation block
@property (nonatomic,retain) FBAdContentContainer * adContentContainer;                          //@synthesize adContentContainer=_adContentContainer - In the implementation block
@property (assign,nonatomic) FBAdSize adSizeType;                                                //@synthesize adSizeType=_adSizeType - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdViewInternalDelegate> internalDelegate;               //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBANAdRendererDelegate> rendererDelegate;                 //@synthesize rendererDelegate=_rendererDelegate - In the implementation block
@property (assign,getter=isAdValid,nonatomic) BOOL adValid;                                      //@synthesize adValid=_adValid - In the implementation block
@property (assign,getter=isModalViewPresenting,nonatomic) BOOL modalViewPresenting;              //@synthesize modalViewPresenting=_modalViewPresenting - In the implementation block
@property (assign,nonatomic) long long orientation;                                              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * rootViewController;                       //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) FBHTMLAdDataModel * offsiteAd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInterstitial;
-(id)viewControllerForPresentingModalView;
-(void)adDidLoad;
-(void)loadAd;
-(BOOL)isAdValid;
-(void)sendImpression;
-(void)viewControllerDismissed:(id)arg1 ;
-(void)loadAdFromMarkup:(id)arg1 activationCommand:(id)arg2 orientation:(long long)arg3 ;
-(id)initWithAdData:(id)arg1 minViewability:(int)arg2 adSize:(FBAdSize)arg3 rootViewController:(id)arg4 ;
-(void)setAdSizeType:(FBAdSize)arg1 ;
-(FBAdSize)adSizeType;
-(FBHTMLAdDataModel *)offsiteAd;
-(void)createAdContentContainer;
-(FBAdContentContainer *)adContentContainer;
-(FBAdCommandProcessor *)commandHandler;
-(void)disableViewabilityValidation;
-(CGRect)validRectForFrame:(CGRect)arg1 ;
-(void)setAdContentContainer:(FBAdContentContainer *)arg1 ;
-(BOOL)isImpressionSent;
-(void)setAdValid:(BOOL)arg1 ;
-(void)setIsImpressionSent:(BOOL)arg1 ;
-(void)ensureViewabilityValidation;
-(BOOL)isFBAdScheme:(id)arg1 ;
-(BOOL)processFBAdSchemeLink:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3 ;
-(void)handleClickWithExtraData:(id)arg1 ;
-(void)finishHandlingClick;
-(NSDate *)interstitialOpenedTime;
-(void)adDidLogClick;
-(void)adDidFinishHandlingClick;
-(void)setInterstitialOpenedTime:(NSDate *)arg1 ;
-(void)adWillLogImpression;
-(void)adDidFailToLoadWithError:(id)arg1 ;
-(BOOL)processRequestURL:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3 ;
-(void)trackInterstitialOpen;
-(BOOL)isModalViewPresenting;
-(void)setModalViewPresenting:(BOOL)arg1 ;
-(void)setIsInterstitial:(BOOL)arg1 ;
-(void)setCommandHandler:(FBAdCommandProcessor *)arg1 ;
-(BOOL)viewDidAppearOnScreen;
-(FBAdViewabilityValidator *)viewabilityValidator;
-(void)setViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(long long)minViewabilityPercentage;
-(void)setMinViewabilityPercentage:(long long)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(long long)orientation;
-(UIViewController *)rootViewController;
-(void)didMoveToSuperview;
-(id<FBAdViewInternalDelegate>)internalDelegate;
-(void)setInternalDelegate:(id<FBAdViewInternalDelegate>)arg1 ;
-(id<FBANAdRendererDelegate>)rendererDelegate;
-(void)setRendererDelegate:(id<FBANAdRendererDelegate>)arg1 ;
@end


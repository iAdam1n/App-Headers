/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FlurryAdDelegate.h>
#import <SportyTrader/IFLurryVideoNativeAd.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FlurryAdNativeDelegate;
@class UIView, UIViewController, NSArray, NSMutableArray, FlurryNativeVideoState, NSString, FlurryAdTargeting, UIButton, NSTimer, UIActivityIndicatorView, UITapGestureRecognizer, FlurryAdManager, FlurryNativeVideoPlayer, NSDate;

@interface FlurryAdNative : NSObject <FlurryAdDelegate, IFLurryVideoNativeAd, UIGestureRecognizerDelegate> {

	BOOL _autoPlayWifi;
	BOOL _autoPlayCellular;
	BOOL _autoPlay;
	BOOL _isVideo;
	BOOL _trackingRemoved;
	BOOL _tappedToExpand;
	BOOL _tappedToCollapse;
	int _displayState;
	NSArray* assetList;
	NSMutableArray* _mutableAssetList;
	FlurryNativeVideoState* _videoState;
	NSString* _space;
	id<FlurryAdNativeDelegate> _adDelegate;
	UIView* _trackingView;
	UIViewController* _viewControllerForPresentation;
	UIView* _videoViewContainer;
	FlurryAdTargeting* _targeting;
	UIButton* _expandButton;
	UIButton* _ctaButton;
	UIView* _loadingView;
	NSTimer* _loadingViewTimer;
	UIActivityIndicatorView* _spinner;
	UITapGestureRecognizer* _tap;
	NSString* _templateInfo;
	FlurryAdManager* _adManager;
	NSTimer* _videoPlayerTimer;
	FlurryNativeVideoPlayer* _videoPlayer;
	NSDate* _adMoveOutTimeStamp;
	NSMutableArray* _buttonSubViews;

}

@property (nonatomic,copy) NSString * space;                                                //@synthesize space=_space - In the implementation block
@property (assign,nonatomic,__weak) id<FlurryAdNativeDelegate> adDelegate;                  //@synthesize adDelegate=_adDelegate - In the implementation block
@property (nonatomic,readonly) BOOL ready; 
@property (nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) int displayState;                                              //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,readonly) NSArray * assetList; 
@property (nonatomic,retain) UIView * trackingView;                                         //@synthesize trackingView=_trackingView - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerForPresentation;              //@synthesize viewControllerForPresentation=_viewControllerForPresentation - In the implementation block
@property (nonatomic,retain) UIView * videoViewContainer;                                   //@synthesize videoViewContainer=_videoViewContainer - In the implementation block
@property (nonatomic,retain) FlurryAdTargeting * targeting;                                 //@synthesize targeting=_targeting - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableAssetList;                             //@synthesize mutableAssetList=_mutableAssetList - In the implementation block
@property (nonatomic,retain) UIButton * expandButton;                                       //@synthesize expandButton=_expandButton - In the implementation block
@property (nonatomic,retain) UIButton * ctaButton;                                          //@synthesize ctaButton=_ctaButton - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                          //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) NSTimer * loadingViewTimer;                                    //@synthesize loadingViewTimer=_loadingViewTimer - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                             //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                  //@synthesize tap=_tap - In the implementation block
@property (nonatomic,copy) NSString * templateInfo;                                         //@synthesize templateInfo=_templateInfo - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWifi;                                             //@synthesize autoPlayWifi=_autoPlayWifi - In the implementation block
@property (assign,nonatomic) BOOL autoPlayCellular;                                         //@synthesize autoPlayCellular=_autoPlayCellular - In the implementation block
@property (assign,nonatomic) BOOL autoPlay;                                                 //@synthesize autoPlay=_autoPlay - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                                  //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL trackingRemoved;                                          //@synthesize trackingRemoved=_trackingRemoved - In the implementation block
@property (nonatomic,retain) FlurryAdManager * adManager;                                   //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) FlurryNativeVideoState * videoState;                           //@synthesize videoState=_videoState - In the implementation block
@property (nonatomic,retain) NSTimer * videoPlayerTimer;                                    //@synthesize videoPlayerTimer=_videoPlayerTimer - In the implementation block
@property (nonatomic,retain) FlurryNativeVideoPlayer * videoPlayer;                         //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) NSDate * adMoveOutTimeStamp;                                   //@synthesize adMoveOutTimeStamp=_adMoveOutTimeStamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttonSubViews;                               //@synthesize buttonSubViews=_buttonSubViews - In the implementation block
@property (assign,nonatomic) BOOL tappedToExpand;                                           //@synthesize tappedToExpand=_tappedToExpand - In the implementation block
@property (assign,nonatomic) BOOL tappedToCollapse;                                         //@synthesize tappedToCollapse=_tappedToCollapse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FlurryAdManager *)adManager;
-(void)setAdManager:(FlurryAdManager *)arg1 ;
-(void)setTargeting:(FlurryAdTargeting *)arg1 ;
-(FlurryAdTargeting *)targeting;
-(id<FlurryAdNativeDelegate>)adDelegate;
-(void)spaceDidReceiveAd:(id)arg1 ;
-(void)spaceInView:(id)arg1 ;
-(void)spacePartiallyOutOfView:(id)arg1 ;
-(void)spaceOutOfView:(id)arg1 ;
-(void)spaceDidFailToReceiveAd:(id)arg1 error:(id)arg2 ;
-(void)setAdDelegate:(id<FlurryAdNativeDelegate>)arg1 ;
-(void)spaceWillLeaveApplication:(id)arg1 ;
-(void)spaceWillExpand:(id)arg1 ;
-(void)spaceDidCollapse:(id)arg1 ;
-(id)getAdManager;
-(id)getVideoPlayer;
-(id)getVideoState;
-(UIView *)videoViewContainer;
-(void)listSubviewsOfView:(id)arg1 ;
-(void)flurryProcessTapped:(id)arg1 ;
-(UITapGestureRecognizer *)tap;
-(UIViewController *)viewControllerForPresentation;
-(id)getPlayerTimer;
-(void)setPlayerTimer:(id)arg1 ;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(void)spaceWillCollapse:(id)arg1 ;
-(void)spaceDidReceiveClick:(id)arg1 ;
-(void)spaceClickActionDidFail:(id)arg1 error:(id)arg2 ;
-(id)initWithSpace:(id)arg1 ;
-(void)fetchAd;
-(void)reportFailedToFetch;
-(void)removeLoadingView;
-(NSMutableArray *)mutableAssetList;
-(void)setTemplateInfo:(NSString *)arg1 ;
-(void)setMutableAssetList:(NSMutableArray *)arg1 ;
-(void)setVideoState:(FlurryNativeVideoState *)arg1 ;
-(void)setButtonSubViews:(NSMutableArray *)arg1 ;
-(FlurryNativeVideoState *)videoState;
-(void)setTrackingRemoved:(BOOL)arg1 ;
-(void)setDisplayState:(int)arg1 ;
-(void)removeTrackingView;
-(NSTimer *)videoPlayerTimer;
-(UIView *)trackingView;
-(void)fetchAdAsync;
-(NSTimer *)loadingViewTimer;
-(void)setLoadingViewTimer:(NSTimer *)arg1 ;
-(NSMutableArray *)buttonSubViews;
-(void)setTrackingView:(UIView *)arg1 ;
-(void)setCtaButton:(UIButton *)arg1 ;
-(void)setVideoViewContainer:(UIView *)arg1 ;
-(int)displayState;
-(UIButton *)ctaButton;
-(void)setVideoPlayerTimer:(NSTimer *)arg1 ;
-(BOOL)isVideoAd;
-(BOOL)videoIntergrationCorrectness;
-(NSString *)templateInfo;
-(void)setAdMoveOutTimeStamp:(NSDate *)arg1 ;
-(void)setAutoPlayWifi:(BOOL)arg1 ;
-(void)setAutoPlayCellular:(BOOL)arg1 ;
-(BOOL)autoPlayWifi;
-(BOOL)autoPlayCellular;
-(NSDate *)adMoveOutTimeStamp;
-(void)setViewControllerForPresentation:(UIViewController *)arg1 ;
-(void)adjustOrientation;
-(NSArray *)assetList;
-(id)initWithSpace:(id)arg1 supportedAssets:(id)arg2 ;
-(void)setPencilViewToTrack:(id)arg1 withExpandButton:(id)arg2 andCTAButton:(id)arg3 ;
-(void)setExpandedViewToTrack:(id)arg1 withExpandButton:(id)arg2 andCTAButton:(id)arg3 ;
-(id)assetListForType:(int)arg1 ;
-(void)adExpiredForSpace;
-(void)spaceDidFailToExpandWithError:(id)arg1 ;
-(void)spaceDidLogImpression:(id)arg1 ;
-(BOOL)trackingRemoved;
-(BOOL)tappedToExpand;
-(void)setTappedToExpand:(BOOL)arg1 ;
-(BOOL)tappedToCollapse;
-(void)setTappedToCollapse:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isVideo;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)autoPlay;
-(void)setAutoPlay:(BOOL)arg1 ;
-(UIButton *)expandButton;
-(void)setExpandButton:(UIButton *)arg1 ;
-(BOOL)expired;
-(UIView *)loadingView;
-(FlurryNativeVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(FlurryNativeVideoPlayer *)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)showLoadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(BOOL)ready;
-(void)setSpace:(NSString *)arg1 ;
-(NSString *)space;
-(BOOL)isAutoPlay;
@end

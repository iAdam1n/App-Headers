/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol IFlurryAdVideoPlayerConnector, IFlurryAdReporting;
@class MPMoviePlayerController, FlurryAdFrame, UIView, UIButton, UIActivityIndicatorView, NSTimer, FlurryCircleCounterView, NSString, NSDictionary, UIImage, UILabel;

@interface FlurryVideoPlayer : NSObject <UIAlertViewDelegate> {

	MPMoviePlayerController* _player;
	id<IFlurryAdVideoPlayerConnector> _ad;
	FlurryAdFrame* _adFrame;
	UIView* _viewContainer;
	UIView* _parentView;
	UIView* _closeView;
	UIButton* _closeButton;
	UIButton* _playButton;
	UIView* _loadingView;
	UIActivityIndicatorView* _spinner;
	unsigned char _playbackStarted;
	int _playbackFinishReason;
	double _maxPlaybackTimeAllowed;
	long long _lastPlaybackState;
	NSTimer* _timer;
	NSTimer* _loadTimer;
	long long _closableTime;
	int _videoViewBeaconTimeInSecs;
	FlurryCircleCounterView* _circleView;
	unsigned char _initialVideoFirstQuartile;
	unsigned char _initialVideoMidpoint;
	unsigned char _initialVideoThirdQuartile;
	unsigned char _initialVideoStart;
	BOOL _autoPlay;
	unsigned char _closeButtonCanShowAlways;
	unsigned char _clickThruButtonCanShowAlways;
	unsigned char _costPerViewLimitNotReached;
	UIButton* _clickThruButton;
	NSString* _clickThruUrl;
	unsigned long long _lowerClosableTime;
	unsigned long long _higherClosableTime;
	BOOL _playbackError;
	BOOL _autoPLay;
	BOOL _clickedURL;
	BOOL _waitingCloseConfirm;
	int videoViewBeaconTimeInSecs;
	NSDictionary* _videoControlsAssetDictionary;
	UIImage* _vidPlayImage;
	UIImage* _vidPauseImage;
	UIImage* _vidCloseImage;
	UIImage* _vidMoreInfoImage;
	id<IFlurryAdReporting> _adReporting;
	UILabel* _closeButtonLbl;

}

@property (nonatomic,retain) MPMoviePlayerController * player;                         //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id<IFlurryAdVideoPlayerConnector> ad;                     //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) id<IFlurryAdReporting> adReporting;                       //@synthesize adReporting=_adReporting - In the implementation block
@property (nonatomic,retain) FlurryAdFrame * adFrame;                                  //@synthesize adFrame=_adFrame - In the implementation block
@property (nonatomic,retain) UIView * viewContainer;                                   //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,retain) UIView * closeView;                                       //@synthesize closeView=_closeView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIButton * playButton;                                    //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UILabel * closeButtonLbl;                                 //@synthesize closeButtonLbl=_closeButtonLbl - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                     //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                        //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) unsigned char playbackStarted;                            //@synthesize playbackStarted=_playbackStarted - In the implementation block
@property (assign,nonatomic) BOOL playbackError;                                       //@synthesize playbackError=_playbackError - In the implementation block
@property (assign,nonatomic) double maxPlaybackTimeAllowed;                            //@synthesize maxPlaybackTimeAllowed=_maxPlaybackTimeAllowed - In the implementation block
@property (assign,nonatomic) long long lastPlaybackState;                              //@synthesize lastPlaybackState=_lastPlaybackState - In the implementation block
@property (assign,nonatomic) BOOL autoPlay;                                            //@synthesize autoPLay=_autoPLay - In the implementation block
@property (assign,nonatomic) long long closableTime;                                   //@synthesize closableTime=_closableTime - In the implementation block
@property (assign,nonatomic) int videoViewBeaconTimeInSecs; 
@property (nonatomic,retain) FlurryCircleCounterView * circleView;                     //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,retain) UIButton * clickThruButton;                               //@synthesize clickThruButton=_clickThruButton - In the implementation block
@property (nonatomic,retain) NSString * clickThruUrl;                                  //@synthesize clickThruUrl=_clickThruUrl - In the implementation block
@property (nonatomic,retain) NSDictionary * videoControlsAssetDictionary;              //@synthesize videoControlsAssetDictionary=_videoControlsAssetDictionary - In the implementation block
@property (nonatomic,retain) UIImage * vidPlayImage;                                   //@synthesize vidPlayImage=_vidPlayImage - In the implementation block
@property (nonatomic,retain) UIImage * vidPauseImage;                                  //@synthesize vidPauseImage=_vidPauseImage - In the implementation block
@property (nonatomic,retain) UIImage * vidCloseImage;                                  //@synthesize vidCloseImage=_vidCloseImage - In the implementation block
@property (nonatomic,retain) UIImage * vidMoreInfoImage;                               //@synthesize vidMoreInfoImage=_vidMoreInfoImage - In the implementation block
@property (nonatomic,retain) NSTimer * loadTimer;                                      //@synthesize loadTimer=_loadTimer - In the implementation block
@property (assign,nonatomic) BOOL waitingCloseConfirm;                                 //@synthesize waitingCloseConfirm=_waitingCloseConfirm - In the implementation block
@property (nonatomic,retain) UIView * parentView;                                      //@synthesize parentView=_parentView - In the implementation block
@property (assign,nonatomic) BOOL clickedURL;                                          //@synthesize clickedURL=_clickedURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)parentView;
-(void)setParentView:(UIView *)arg1 ;
-(void)setAd:(id<IFlurryAdVideoPlayerConnector>)arg1 ;
-(void)removeLoadingView;
-(void)setLoadTimer:(NSTimer *)arg1 ;
-(NSTimer *)loadTimer;
-(FlurryAdFrame *)adFrame;
-(void)setVidPlayImage:(UIImage *)arg1 ;
-(void)setVidPauseImage:(UIImage *)arg1 ;
-(void)setVideoControlsAssetDictionary:(NSDictionary *)arg1 ;
-(void)setImageAssets;
-(void)resumeMovie;
-(void)willEnterBackground;
-(id<IFlurryAdReporting>)adReporting;
-(CGRect)playButtonFrame:(long long)arg1 ;
-(void)pauseMovie;
-(void)updatePlayImage:(int)arg1 ;
-(UIImage *)vidPauseImage;
-(UIImage *)vidPlayImage;
-(id)getMacroDictionary;
-(void)timerCheck:(id)arg1 ;
-(void)moviePlaybackDidFinish:(id)arg1 ;
-(BOOL)isAudioON;
-(void)initializeAssetDictionary:(id)arg1 ;
-(int)getViewInfo;
-(NSDictionary *)videoControlsAssetDictionary;
-(void)setAdReporting:(id<IFlurryAdReporting>)arg1 ;
-(UIView *)viewContainer;
-(void)setViewContainer:(UIView *)arg1 ;
-(void)setAdFrame:(FlurryAdFrame *)arg1 ;
-(void)didRotateToInterfaceOrientation;
-(void)setClickThruUrl:(NSString *)arg1 ;
-(void)playVideo:(id)arg1 view:(id)arg2 ad:(id)arg3 lowerClosableTime:(long long)arg4 higherClosableTime:(long long)arg5 autoPlay:(BOOL)arg6 viewBeaconTime:(int)arg7 ;
-(void)bringToFocus;
-(void)pauseMovieViaCloseButton;
-(void)stopMovie;
-(long long)closableTime;
-(void)setClosableTime:(long long)arg1 ;
-(void)moviePlayerDidEnterFullscreenHandler:(id)arg1 ;
-(void)removeOverlayView;
-(void)setVidMoreInfoImage:(UIImage *)arg1 ;
-(void)setVidCloseImage:(UIImage *)arg1 ;
-(void)setPlaybackStarted:(unsigned char)arg1 ;
-(void)setPlaybackError:(BOOL)arg1 ;
-(void)setMaxPlaybackTimeAllowed:(double)arg1 ;
-(void)setLastPlaybackState:(long long)arg1 ;
-(void)setVideoViewBeaconTimeInSecs:(int)arg1 ;
-(void)setClickedURL:(BOOL)arg1 ;
-(void)moviePlayerLoadStateChanged:(id)arg1 ;
-(void)moviePlayerPlaybackStateChanged:(id)arg1 ;
-(void)addOverlayView;
-(void)restartTimer;
-(BOOL)playbackError;
-(void)sendLoadingAlertBox:(id)arg1 ;
-(void)hidePlayerControls;
-(double)maxPlaybackTimeAllowed;
-(BOOL)waitingCloseConfirm;
-(void)exitFullScreen;
-(void)drawTimerCircle;
-(void)addPlayButton;
-(void)addCloseButton;
-(NSString *)clickThruUrl;
-(BOOL)checkValidClickThruUrl:(id)arg1 ;
-(void)addClickThroughButton;
-(UIButton *)clickThruButton;
-(CGRect)loadingTimerFrame:(long long)arg1 ;
-(FlurryCircleCounterView *)circleView;
-(UIView *)closeView;
-(CGRect)closeViewFrame:(long long)arg1 ;
-(void)setCloseView:(UIView *)arg1 ;
-(UIImage *)vidCloseImage;
-(void)setClickThruButton:(UIButton *)arg1 ;
-(CGRect)clickThruButtonFrame:(long long)arg1 ;
-(UIImage *)vidMoreInfoImage;
-(void)gotoClickUrl;
-(BOOL)clickedURL;
-(void)moviePlaybackDidStart;
-(long long)lastPlaybackState;
-(void)showAllPlayerControls;
-(void)handleSlowLoadTimer:(id)arg1 ;
-(void)removeFromSuperView;
-(void)setWaitingCloseConfirm:(BOOL)arg1 ;
-(void)addPlaybackDidFinishNotification;
-(void)notifyVideoDidFullyComplete;
-(void)notifyVideoDidNotCompleteWithTime:(double)arg1 duration:(double)arg2 ;
-(CGRect)loadingViewFrame;
-(CGRect)spinnerFrame:(long long)arg1 ;
-(int)videoViewBeaconTimeInSecs;
-(void)removeFullScreenButton;
-(void)resizeOverlayWindow;
-(void)showAllNavigationControls;
-(void)pauseSession;
-(void)setOrientationForView:(id)arg1 ;
-(CGRect)loadingTextFrame:(long long)arg1 ;
-(void)setCircleView:(FlurryCircleCounterView *)arg1 ;
-(UILabel *)closeButtonLbl;
-(void)setCloseButtonLbl:(UILabel *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willEnterForeground;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id<IFlurryAdVideoPlayerConnector>)ad;
-(BOOL)autoPlay;
-(void)setAutoPlay:(BOOL)arg1 ;
-(UIView *)loadingView;
-(UIButton *)closeButton;
-(UIButton *)playButton;
-(void)setPlayer:(MPMoviePlayerController *)arg1 ;
-(MPMoviePlayerController *)player;
-(void)setCloseButton:(UIButton *)arg1 ;
-(unsigned char)playbackStarted;
-(void)showLoadingView;
-(void)setPlayButton:(UIButton *)arg1 ;
-(void)setLoadingView:(UIView *)arg1 ;
@end


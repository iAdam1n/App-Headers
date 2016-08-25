/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIViewController.h>
#import <BubbleMania/SPMicroBrowserDelegate.h>

@protocol SPVideoPlaybackStateDelegate;
@class NSString, NSURL, MPMoviePlayerController, SPCloseButton, SPCountdownView, SPAlertController, NSTimer, UIView, SPHintView;

@interface SPVideoPlayerViewController : UIViewController <SPMicroBrowserDelegate> {

	BOOL _showAlert;
	BOOL _hasVideoPlayed;
	BOOL _playerDidStall;
	BOOL _userDidTapClose;
	NSString* _alertMessage;
	NSURL* _clickThroughURL;
	NSURL* _videoURL;
	id<SPVideoPlaybackStateDelegate> _delegate;
	MPMoviePlayerController* _player;
	SPCloseButton* _closeButton;
	SPCountdownView* _countdownView;
	SPAlertController* _closeAlert;
	SPAlertController* _stalledAlert;
	double _duration;
	NSTimer* _playbackTimer;
	NSTimer* _stallTimer;
	UIView* _clickThroughView;
	SPHintView* _hintView;
	double _videoTimeToResync;

}

@property (assign,nonatomic) BOOL showAlert;                                                //@synthesize showAlert=_showAlert - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                                         //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSURL * clickThroughURL;                                       //@synthesize clickThroughURL=_clickThroughURL - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                              //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic,__weak) id<SPVideoPlaybackStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPMoviePlayerController * player;                              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPCloseButton * closeButton;                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) SPCountdownView * countdownView;                               //@synthesize countdownView=_countdownView - In the implementation block
@property (assign,nonatomic,__weak) SPAlertController * closeAlert;                         //@synthesize closeAlert=_closeAlert - In the implementation block
@property (assign,nonatomic,__weak) SPAlertController * stalledAlert;                       //@synthesize stalledAlert=_stalledAlert - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSTimer * playbackTimer;                                       //@synthesize playbackTimer=_playbackTimer - In the implementation block
@property (nonatomic,retain) NSTimer * stallTimer;                                          //@synthesize stallTimer=_stallTimer - In the implementation block
@property (assign,nonatomic) BOOL hasVideoPlayed;                                           //@synthesize hasVideoPlayed=_hasVideoPlayed - In the implementation block
@property (assign,nonatomic) BOOL playerDidStall;                                           //@synthesize playerDidStall=_playerDidStall - In the implementation block
@property (nonatomic,retain) UIView * clickThroughView;                                     //@synthesize clickThroughView=_clickThroughView - In the implementation block
@property (nonatomic,retain) SPHintView * hintView;                                         //@synthesize hintView=_hintView - In the implementation block
@property (assign,nonatomic) double videoTimeToResync;                                      //@synthesize videoTimeToResync=_videoTimeToResync - In the implementation block
@property (assign,nonatomic) BOOL userDidTapClose;                                          //@synthesize userDidTapClose=_userDidTapClose - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPCountdownView *)countdownView;
-(void)setCountdownView:(SPCountdownView *)arg1 ;
-(void)microBrowserDidClose:(id)arg1 ;
-(void)setShowAlert:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 showAlert:(BOOL)arg2 alertMessage:(id)arg3 clickThroughUrl:(id)arg4 ;
-(void)invalidateTimers;
-(void)moviePlayerPlaybackDidFinish:(id)arg1 ;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 ;
-(void)movieLoadStateDidChange:(id)arg1 ;
-(void)movieDurationAvailable:(id)arg1 ;
-(CGRect)frameForCountDownView;
-(void)configureStallTimer;
-(void)userTappedClose;
-(void)startClickThroughView;
-(void)setHintView:(SPHintView *)arg1 ;
-(SPHintView *)hintView;
-(BOOL)hasVideoPlayed;
-(void)adjustControlsToOrientation:(long long)arg1 ;
-(void)adjustVideoToOrientation:(long long)arg1 ;
-(UIView *)clickThroughView;
-(CGRect)frameForHintView;
-(void)printPlayerState;
-(BOOL)playerDidStall;
-(void)setUserDidTapClose:(BOOL)arg1 ;
-(void)closeVideo;
-(void)setCloseAlert:(SPAlertController *)arg1 ;
-(BOOL)shouldProcessNotification:(id)arg1 ;
-(void)setPlayerDidStall:(BOOL)arg1 ;
-(SPAlertController *)stalledAlert;
-(void)setStalledAlert:(SPAlertController *)arg1 ;
-(SPAlertController *)closeAlert;
-(double)videoTimeToResync;
-(void)setVideoTimeToResync:(double)arg1 ;
-(NSTimer *)stallTimer;
-(void)setHasVideoPlayed:(BOOL)arg1 ;
-(BOOL)userDidTapClose;
-(void)videoPlaybackFinishedWithAbort:(BOOL)arg1 ;
-(NSTimer *)playbackTimer;
-(void)trackProgress;
-(void)setPlaybackTimer:(NSTimer *)arg1 ;
-(NSURL *)clickThroughURL;
-(CGRect)frameForVideo;
-(void)openClickThroughBrowser;
-(void)setClickThroughView:(UIView *)arg1 ;
-(void)videoStalledAtStartup;
-(void)setStallTimer:(NSTimer *)arg1 ;
-(void)setClickThroughURL:(NSURL *)arg1 ;
-(void)setDelegate:(id<SPVideoPlaybackStateDelegate>)arg1 ;
-(void)dealloc;
-(id<SPVideoPlaybackStateDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(BOOL)showAlert;
-(SPCloseButton *)closeButton;
-(void)setPlayer:(MPMoviePlayerController *)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(MPMoviePlayerController *)player;
-(void)setCloseButton:(SPCloseButton *)arg1 ;
@end


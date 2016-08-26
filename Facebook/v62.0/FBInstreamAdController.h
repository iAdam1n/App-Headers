/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBVideoPlayerContainer.h>

@protocol FBInstreamAdControllerDelegate, FBInstreamAdControllerStoryDelegate;
@class FBUserSession, FBMemVideo, FBTimer, NSString, FBVideoViewManager, FBConsistentLookasideCacheObservationHandle, FBInstreamAdPlugin, FBMemFeedStory, FBVideoPlaybackController;

@interface FBInstreamAdController : NSObject <FBVideoPlaybackEventListener, FBVideoPlayerContainer> {

	FBUserSession* _session;
	FBMemVideo* _video;
	FBTimer* _videoAdTimer;
	unsigned long long _adIndexInViewerSession;
	BOOL _isLoadingAd;
	BOOL _isSponsored;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;
	FBVideoViewManager* _videoAdViewManager;
	FBTimer* _countdownTimer;
	FBTimer* _cutoffTimer;
	FBTimer* _transitionTimer;
	FBConsistentLookasideCacheObservationHandle* _clcHandle;
	BOOL _isInFullscreen;
	FBInstreamAdPlugin* _instreamAdPlugin;
	id<FBInstreamAdControllerDelegate> _delegate;
	id<FBInstreamAdControllerStoryDelegate> _storyDelegate;
	long long _state;
	FBMemFeedStory* _lastFetchedAd;

}

@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBInstreamAdPlugin * instreamAdPlugin;                                     //@synthesize instreamAdPlugin=_instreamAdPlugin - In the implementation block
@property (assign,nonatomic,__weak) FBMemFeedStory * lastFetchedAd;                                     //@synthesize lastFetchedAd=_lastFetchedAd - In the implementation block
@property (assign,nonatomic,__weak) id<FBInstreamAdControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBInstreamAdControllerStoryDelegate> storyDelegate;              //@synthesize storyDelegate=_storyDelegate - In the implementation block
@property (nonatomic,readonly) FBVideoPlaybackController * videoAdPlaybackController; 
@property (nonatomic,__weak,readonly) FBMemFeedStory * playingVideoAd; 
@property (nonatomic,readonly) BOOL hasFetchedAd; 
@property (assign,nonatomic) BOOL isInFullscreen;                                                       //@synthesize isInFullscreen=_isInFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,copy,readonly) NSString * groupTokenID; 
@property (assign,nonatomic) long long playbackSetting; 
-(unsigned long long)layoutIdiom;
-(void)createAndPresentViewController:(/*^block*/id)arg1 source:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 options:(id)arg4 ;
-(id)videoPlaybackController;
-(void)didDisplay;
-(void)stopPlayingVideo;
-(void)didUpdatePresentedVideoVisibleRatio:(double)arg1 ;
-(void)createAndSetViewController:(/*^block*/id)arg1 ;
-(void)representViewControllerWithBlock:(/*^block*/id)arg1 ;
-(NSString *)groupTokenID;
-(long long)playbackSetting;
-(void)setPlaybackSetting:(long long)arg1 ;
-(BOOL)hasFetchedAd;
-(FBInstreamAdPlugin *)instreamAdPlugin;
-(BOOL)shouldLogMountUnMountEvents;
-(void)setStoryDelegate:(id<FBInstreamAdControllerStoryDelegate>)arg1 ;
-(FBMemFeedStory *)playingVideoAd;
-(FBVideoPlaybackController *)videoAdPlaybackController;
-(void)setIsInFullscreen:(BOOL)arg1 ;
-(void)_markFinishedLoadingAd;
-(void)_didFetchStory:(id)arg1 ;
-(void)_logVideoAdFetchSuccessWithIsEmpty:(BOOL)arg1 ;
-(void)_logVideoAdFetchFailureWithErrorCode:(id)arg1 ;
-(void)setLastFetchedAd:(FBMemFeedStory *)arg1 ;
-(void)_configureVideoAdView;
-(void)_resetVideoAdStory;
-(void)_removeVideoAd;
-(void)_hideVideoAd;
-(void)_scheduleCutOff;
-(void)_startPreAdTransition;
-(void)_removeinstreamAdPlugin;
-(void)_startStaticCountDownIfStillLoadingAd;
-(void)_updateStaticCountDown;
-(void)_updateVideoAdCountDown;
-(void)_didUpdateLastFetchedAd:(id)arg1 ;
-(void)setInstreamAdPlugin:(FBInstreamAdPlugin *)arg1 ;
-(id<FBInstreamAdControllerStoryDelegate>)storyDelegate;
-(id)initWithSession:(id)arg1 story:(id)arg2 video:(id)arg3 playerOrigin:(id)arg4 playerSubOrigin:(id)arg5 ;
-(void)_endPreAdTransition;
-(void)_startWaitForVideoAd;
-(FBMemFeedStory *)lastFetchedAd;
-(void)_startVideoAd;
-(int)_staticCountDownValue;
-(void)_startStaticCountDownWithValue:(int)arg1 reason:(id)arg2 ;
-(void)_endCommercialBreakWithReason:(id)arg1 ;
-(void)_startCommercialBreak;
-(void)_fetchInstreamVideoAdsWithMaximumDuration:(id)arg1 minimumDuration:(id)arg2 ;
-(id)_videoFromFetchedAd;
-(void)_startPostAdTransition;
-(id)_instreamVideoAdType;
-(double)_cutOffTime;
-(double)_maxWaitForTime;
-(double)_preTransitionTime;
-(double)_postTransitionTime;
-(BOOL)_isFetchingOrHasFinishedFetchingAd;
-(BOOL)isInFullscreen;
-(void)setDelegate:(id<FBInstreamAdControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBInstreamAdControllerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)isPresented;
@end

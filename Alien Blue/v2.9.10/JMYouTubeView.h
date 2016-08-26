/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol JMYouTubeViewDelegate;
@class NSObject, UIButton, UIWebView, UIImageView, UILabel, NSMutableArray, NSString, MPMoviePlayerController, AVPlayerItem, UIActivityIndicatorView;

@interface JMYouTubeView : UIView <UIWebViewDelegate> {

	BOOL _i_cleaningUp;
	BOOL _i_playerIsLoaded;
	BOOL _i_allowAutoplay;
	BOOL _i_wasPlayingAtFullscreenAtLastPoll;
	BOOL _i_didNotifyForFullscreenEnter;
	BOOL _i_didNotifyForFullscreenExit;
	NSObject*<JMYouTubeViewDelegate> _delegate;
	UIButton* _playButton;
	UIWebView* _webView;
	UIImageView* _placeholderImageView;
	UILabel* _messageLabel;
	NSMutableArray* _videoIdents;
	NSString* _previousUserAgent;
	MPMoviePlayerController* _web_moviePlayer;
	AVPlayerItem* _web_playerItem;
	UIActivityIndicatorView* _activityIndicatorView;
	double _startingTimePosition;
	unsigned long long _videoDurationSeconds;

}

@property (__weak) NSObject*<JMYouTubeViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isPlayingInFullscreen; 
@property (retain) UIButton * playButton;                                        //@synthesize playButton=_playButton - In the implementation block
@property (retain) UIWebView * webView;                                          //@synthesize webView=_webView - In the implementation block
@property (retain) UIImageView * placeholderImageView;                           //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (retain) UILabel * messageLabel;                                       //@synthesize messageLabel=_messageLabel - In the implementation block
@property (retain) NSMutableArray * videoIdents;                                 //@synthesize videoIdents=_videoIdents - In the implementation block
@property (retain) NSString * previousUserAgent;                                 //@synthesize previousUserAgent=_previousUserAgent - In the implementation block
@property (assign) BOOL i_cleaningUp;                                            //@synthesize i_cleaningUp=_i_cleaningUp - In the implementation block
@property (assign) BOOL i_playerIsLoaded;                                        //@synthesize i_playerIsLoaded=_i_playerIsLoaded - In the implementation block
@property (__weak) MPMoviePlayerController * web_moviePlayer;                    //@synthesize web_moviePlayer=_web_moviePlayer - In the implementation block
@property (__weak) AVPlayerItem * web_playerItem;                                //@synthesize web_playerItem=_web_playerItem - In the implementation block
@property (assign) BOOL i_allowAutoplay;                                         //@synthesize i_allowAutoplay=_i_allowAutoplay - In the implementation block
@property (retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign) double startingTimePosition;                                  //@synthesize startingTimePosition=_startingTimePosition - In the implementation block
@property (assign) unsigned long long videoDurationSeconds;                      //@synthesize videoDurationSeconds=_videoDurationSeconds - In the implementation block
@property (assign) BOOL i_wasPlayingAtFullscreenAtLastPoll;                      //@synthesize i_wasPlayingAtFullscreenAtLastPoll=_i_wasPlayingAtFullscreenAtLastPoll - In the implementation block
@property (assign) BOOL i_didNotifyForFullscreenEnter;                           //@synthesize i_didNotifyForFullscreenEnter=_i_didNotifyForFullscreenEnter - In the implementation block
@property (assign) BOOL i_didNotifyForFullscreenExit;                            //@synthesize i_didNotifyForFullscreenExit=_i_didNotifyForFullscreenExit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)retrieveVideoDetailsFromURL:(id)arg1 onComplete:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
+(id)playButtonImageWithSize:(CGSize)arg1 ;
+(void)obtainContentDimensionSizeForYouTubeURL:(id)arg1 onComplete:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
-(void)loadYouTubeURL:(id)arg1 autoplay:(BOOL)arg2 playsInline:(BOOL)arg3 ;
-(void)removeYouTubeView;
-(void)setVideoIdents:(NSMutableArray *)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(UIImageView *)placeholderImageView;
-(void)userDidTapPlayButton;
-(void)webPlayerDidBecomeActive:(id)arg1 ;
-(void)setPlaybackQualityWithIdentifier:(id)arg1 ;
-(void)setWeb_playerItem:(AVPlayerItem *)arg1 ;
-(void)setWeb_moviePlayer:(MPMoviePlayerController *)arg1 ;
-(MPMoviePlayerController *)web_moviePlayer;
-(AVPlayerItem *)web_playerItem;
-(double)determineStartingPlaybackPositionFromURL:(id)arg1 ;
-(void)setStartingTimePosition:(double)arg1 ;
-(void)setI_allowAutoplay:(BOOL)arg1 ;
-(NSMutableArray *)videoIdents;
-(void)clearYouTubeWebsitePlayerPreferenceCookies:(id)arg1 ;
-(void)configureForManualPlaybackForYouTubeURL:(id)arg1 ;
-(void)populateWebView;
-(void)setPreviousUserAgent:(NSString *)arg1 ;
-(id)playlistVideoIdents;
-(id)playbackQuality;
-(unsigned long long)startingPlaylistIndex;
-(double)startingPositionForVideoAtPlaylistIndex:(unsigned long long)arg1 ;
-(void)playerDidLoad;
-(void)playerDidStartPlayingVideoAtIndex:(id)arg1 ;
-(void)playerDidPlayToDuration:(id)arg1 ;
-(void)playerDidFinishPlayingVideo:(id)arg1 ;
-(void)playerDidFinishPlaylistPlayback;
-(void)playerDidFailWithReason:(id)arg1 ;
-(BOOL)i_playerIsLoaded;
-(NSString *)previousUserAgent;
-(void)setI_cleaningUp:(BOOL)arg1 ;
-(void)i_cleanUp;
-(void)destroyHTML5PlayerOnComplete:(/*^block*/id)arg1 ;
-(unsigned long long)videoDurationSeconds;
-(unsigned long long)fadeInDurationSeconds;
-(unsigned long long)fadeOutDurationSeconds;
-(void)resumePlayback;
-(BOOL)i_allowAutoplay;
-(double)startingTimePosition;
-(void)setI_playerIsLoaded:(BOOL)arg1 ;
-(void)setVideoDurationSeconds:(unsigned long long)arg1 ;
-(void)fadeInWebView;
-(void)fadeOutWebView;
-(BOOL)isPlayingInFullscreen;
-(void)handleStatusBarGlitchIfNecessary;
-(BOOL)i_cleaningUp;
-(BOOL)i_wasPlayingAtFullscreenAtLastPoll;
-(void)setI_wasPlayingAtFullscreenAtLastPoll:(BOOL)arg1 ;
-(BOOL)i_didNotifyForFullscreenEnter;
-(void)setI_didNotifyForFullscreenEnter:(BOOL)arg1 ;
-(BOOL)i_didNotifyForFullscreenExit;
-(void)setI_didNotifyForFullscreenExit:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<JMYouTubeViewDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<JMYouTubeViewDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(UILabel *)messageLabel;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)setPlaybackVolume:(double)arg1 ;
-(void)pausePlayback;
-(BOOL)shouldAutoplay;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIButton *)playButton;
-(void)playerDidPause;
-(BOOL)shouldLoop;
-(void)setPlayButton:(UIButton *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end

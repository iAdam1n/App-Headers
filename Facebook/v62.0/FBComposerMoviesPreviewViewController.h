/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAudioSessionManagerClient.h>

@protocol FBComposerUpdateHandler;
@class FBFullScreenVideoActionOverlayView, MPMoviePlayerController, NSDateFormatter, FBTimer, UITapGestureRecognizer, FBVideoPlayerPlayPauseFlashView, FBUserSession, FBMultiPickerVideoAttachment, NSString;

@interface FBComposerMoviesPreviewViewController : UIViewController <FBAudioSessionManagerClient> {

	FBFullScreenVideoActionOverlayView* _fullscreenVideoActionOverlayView;
	MPMoviePlayerController* _moviePlayerController;
	NSDateFormatter* _dateFormatter;
	BOOL _isBeingScrubbed;
	BOOL _playingBeforeScrubbed;
	FBTimer* _playbackTimer;
	double _lastDisplayedTimeInSeconds;
	UITapGestureRecognizer* _tapGestureRecognizer;
	FBVideoPlayerPlayPauseFlashView* _playPauseFlashView;
	id<FBComposerUpdateHandler> _updateHandler;
	FBUserSession* _session;
	FBMultiPickerVideoAttachment* _attachment;

}

@property (nonatomic,retain) FBMultiPickerVideoAttachment * attachment;                //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)_updateTime;
-(id)initWithUpdateHandler:(id)arg1 session:(id)arg2 ;
-(void)_setupPlaybackTimer;
-(void)_movieDurationAvailable:(id)arg1 ;
-(void)_handleTapOnPlayPauseButton:(id)arg1 ;
-(void)_videoScrubberChanged:(id)arg1 ;
-(void)_videoScrubberTouchDown:(id)arg1 ;
-(void)_videoScrubberTouchComplete:(id)arg1 ;
-(void)_cleanupActionOverlayView;
-(void)_videoScrubberStartScrub;
-(void)_updateTimeLabelsForPosition:(double)arg1 ;
-(void)_animatePlayPauseFlash;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_dateFormatter;
-(void)_dismiss;
-(void)setAttachment:(FBMultiPickerVideoAttachment *)arg1 ;
-(FBMultiPickerVideoAttachment *)attachment;
-(void)beginInterruption;
-(void)_handleTap:(id)arg1 ;
-(void)_pause;
-(void)_play;
@end

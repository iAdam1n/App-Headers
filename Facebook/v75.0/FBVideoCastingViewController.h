/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBTVCastingPickerControllerDelegate.h>
#import <Facebook/FBTVCastingPlaybackEventListener.h>
#import <Facebook/FBScenePathHolding.h>

@protocol FBVideoPlaybackLoggingDataProvider, FBCancelable, FBVideoCastingViewControllerDelegate, FBTVCastingPlaybackControlling;
@class NSString, FBVideoViewManager, FBVideoViewManagerContext, FBMemFeedStory, FBUserSession, FBMemVideo, FBTVCastingPickerController, PABlurView, FBCastingVideoSpinnerView, FBNetworkImageView, UIView, UISlider, FBVideoPlaybackItem, FBCircularPlaybackControlButton, FBVideoPlaybackScrubberController;

@interface FBVideoCastingViewController : UIViewController <FBTVCastingPickerControllerDelegate, FBTVCastingPlaybackEventListener, FBScenePathHolding> {

	NSString* _channelID;
	NSString* _channelCaller;
	NSString* _channelCursor;
	FBVideoViewManager* _viewManager;
	FBVideoViewManagerContext* _originalViewManagerContext;
	FBMemFeedStory* _story;
	FBUserSession* _session;
	FBMemVideo* _video;
	double _originalVideoCornerRadius;
	BOOL _originalVideoMasksToBounds;
	FBTVCastingPickerController* _castingPickerController;
	PABlurView* _videoBlurView;
	FBCastingVideoSpinnerView* _spinnerView;
	FBNetworkImageView* _thumbnailImageView;
	UIView* _playbackControlsContainerView;
	UISlider* _volumeSlider;
	FBVideoPlaybackItem* _playbackItem;
	id<FBVideoPlaybackLoggingDataProvider> _loggingProvider;
	FBCircularPlaybackControlButton* _playPauseButton;
	id<FBCancelable> _showPlayPauseButtonAfterConnectDispatch;
	FBVideoPlaybackScrubberController* _scrubberController;
	/*^block*/id _didPauseLocalPlaybackBlock;
	id<FBVideoCastingViewControllerDelegate> _delegate;
	id<FBTVCastingPlaybackControlling> _castingPlaybackController;

}

@property (assign,nonatomic,__weak) id<FBVideoCastingViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBTVCastingPlaybackControlling> castingPlaybackController;              //@synthesize castingPlaybackController=_castingPlaybackController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)videoFrame;
-(BOOL)isCasting;
-(BOOL)_shouldShowCastingButton;
-(void)_clearCastingState;
-(void)tvVideoPlaybackControllerIsReady:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)tvVideoPlaybackController:(id)arg1 didFailWithError:(unsigned long long)arg2 ;
-(void)_updateCastingButtonsState;
-(void)_enterCastingState;
-(void)tvCastingPickerControllerDevicesAvailable:(id)arg1 ;
-(void)tvCastingPickerControllerDevicesNoLongerAvailable:(id)arg1 ;
-(void)tvCastingPickerController:(id)arg1 didPickDeviceWithPlaybackController:(id)arg2 ;
-(void)tvCastingPickerControllerDidDisconnect:(id)arg1 ;
-(void)_volumeChanged;
-(void)_arrangeSubviewsAfterAnimation;
-(void)_playPauseTapped;
-(void)tvCastingPickerController:(id)arg1 didSwitchFromPlaybackController:(id)arg2 toPlaybackController:(id)arg3 ;
-(id)initWithViewManager:(id)arg1 castingPlaybackController:(id)arg2 story:(id)arg3 video:(id)arg4 channelID:(id)arg5 channelCaller:(id)arg6 channelCursor:(id)arg7 session:(id)arg8 ;
-(void)configureVideoViewForDisplay;
-(void)configureVideoViewForDismissal;
-(void)willPresent;
-(id<FBTVCastingPlaybackControlling>)castingPlaybackController;
-(void)setDelegate:(id<FBVideoCastingViewControllerDelegate>)arg1 ;
-(id<FBVideoCastingViewControllerDelegate>)delegate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)videoView;
@end

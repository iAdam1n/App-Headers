/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Twitter/TFNTwitterVideoSegmentManagerDelegate.h>
#import <Twitter/TFXSpringAnimation2DObserver.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNTooltipViewDelegate.h>

@protocol T1CameraVideoViewControllerDelegate;
@class UITapGestureRecognizer, UILongPressGestureRecognizer, T1CameraRotatingBarButtonItem, TFNBarButtonItem, TFNButton, UIGestureRecognizer, UICollectionViewFlowLayout, CALayer, UIView, T1VideoSegmentCellView, UIImage, NSMutableDictionary, TFNTimer, T1TwitterTooltipView, TFNTwitterAccount, TFNTwitterVideoSegmentManager, T1CameraPreviewView, T1TrashIconView, TFXSpringAnimator2D, T1VideoDraggingSegmentView, T1TimeDurationPillView, T1CameraTapIndicatorView, T1CameraFocusLockIndicatorView, UIPanGestureRecognizer, TFNAVPlayerView, AVPlayer, AVPlayerItem, UIImageView, NSMutableArray, UICollectionView, NSString;

@interface T1CameraVideoViewController : TFNViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, TFNTwitterVideoSegmentManagerDelegate, TFXSpringAnimation2DObserver, TFNTwitterAuthenticated, TFNTooltipViewDelegate> {

	long long _mode;
	BOOL _isEditing;
	BOOL _hasRecordedMaxRecordingInterval;
	UITapGestureRecognizer* _captureTapGestureRecognizer;
	UITapGestureRecognizer* _tooltipTapGestureRecognizer;
	UILongPressGestureRecognizer* _captureLongPressGestureRecognizer;
	T1CameraRotatingBarButtonItem* _torchButtonItem;
	T1CameraRotatingBarButtonItem* _flipButtonItem;
	TFNBarButtonItem* _cancelButtonItem;
	TFNBarButtonItem* _doneSpaceItem;
	TFNButton* _doneButton;
	TFNBarButtonItem* _doneButtonItem;
	long long _currentOrientation;
	long long _lockOrientation;
	BOOL _isRecording;
	BOOL _wasPlaybackBeforeRecording;
	UIGestureRecognizer* _playbackTapRecognizer;
	BOOL _scrubbing;
	id _playbackObserver;
	SCD_Struct_T111 _lastSeekTime;
	double _previewYOffset;
	double _thumbnailLength;
	double _recordingDotSize;
	BOOL _showPlaceholderSegment;
	UICollectionViewFlowLayout* _segmentFlowLayout;
	CALayer* _segmentCollectionMaskLayer;
	UIView* _segmentProgressBarDividerView;
	UILongPressGestureRecognizer* _segmentLongPressGestureRecognizer;
	T1VideoSegmentCellView* _placeholderSegmentCellView;
	long long _playbackSegmentIndex;
	UIImage* _placeholderSegmentThumbnail;
	NSMutableDictionary* _segmentThumbnails;
	NSMutableDictionary* _thumbnailGenerators;
	TFNTimer* _draggingScrollTimer;
	double _dragUpdateTime;
	CGPoint _dragLocationInView;
	CGPoint _dragVelocity;
	SCD_Struct_T111 _draggingSegmentOffset;
	BOOL _userHasScrolledSegmentCollectionView;
	T1TwitterTooltipView* _tooltipView;
	long long _extendedMediaDetailsDeviceOrientation;
	BOOL _adjustingExposure;
	BOOL _adjustingFocus;
	BOOL _draggingWasPlaying;
	BOOL _torchActive;
	TFNTwitterAccount* _account;
	id<T1CameraVideoViewControllerDelegate> _delegate;
	TFNTwitterVideoSegmentManager* _segmentManager;
	UIView* _capturePreviewHolderView;
	T1CameraPreviewView* _capturePreviewView;
	UIView* _deleteHolderView;
	UIView* _deleteMaskView;
	T1TrashIconView* _deleteTrashIconView;
	unsigned long long _draggingCurrentSegmentIndex;
	unsigned long long _draggingOriginalSegmentIndex;
	TFXSpringAnimator2D* _draggingSegmentPositionAnimator;
	T1VideoDraggingSegmentView* _draggingSegmentView;
	T1TimeDurationPillView* _durationPillView;
	long long _extendedMediaDetailsCameraSource;
	T1CameraTapIndicatorView* _focusIndicatorView;
	T1CameraFocusLockIndicatorView* _focusLockIndicatorView;
	UIPanGestureRecognizer* _playbackScrubPanGestureRecognizer;
	TFNAVPlayerView* _playbackView;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	UIImageView* _playIconView;
	UIView* _previewHolderView;
	UIView* _rotatingView;
	NSMutableArray* _segments;
	UICollectionView* _segmentCollectionView;
	UIView* _segmentCollectionMaskView;
	UIView* _segmentProgressView;
	SCD_Struct_T111 _playerItemDuration;

}

@property (assign,nonatomic,__weak) id<T1CameraVideoViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNTwitterVideoSegmentManager * segmentManager;                          //@synthesize segmentManager=_segmentManager - In the implementation block
@property (assign,getter=isAdjustingExposure,nonatomic) BOOL adjustingExposure;                         //@synthesize adjustingExposure=_adjustingExposure - In the implementation block
@property (assign,getter=isAdjustingFocus,nonatomic) BOOL adjustingFocus;                               //@synthesize adjustingFocus=_adjustingFocus - In the implementation block
@property (nonatomic,readonly) UIView * capturePreviewHolderView;                                       //@synthesize capturePreviewHolderView=_capturePreviewHolderView - In the implementation block
@property (nonatomic,readonly) T1CameraPreviewView * capturePreviewView;                                //@synthesize capturePreviewView=_capturePreviewView - In the implementation block
@property (nonatomic,readonly) UIView * deleteHolderView;                                               //@synthesize deleteHolderView=_deleteHolderView - In the implementation block
@property (nonatomic,readonly) UIView * deleteMaskView;                                                 //@synthesize deleteMaskView=_deleteMaskView - In the implementation block
@property (nonatomic,readonly) T1TrashIconView * deleteTrashIconView;                                   //@synthesize deleteTrashIconView=_deleteTrashIconView - In the implementation block
@property (assign,nonatomic) unsigned long long draggingCurrentSegmentIndex;                            //@synthesize draggingCurrentSegmentIndex=_draggingCurrentSegmentIndex - In the implementation block
@property (assign,nonatomic) unsigned long long draggingOriginalSegmentIndex;                           //@synthesize draggingOriginalSegmentIndex=_draggingOriginalSegmentIndex - In the implementation block
@property (nonatomic,readonly) TFXSpringAnimator2D * draggingSegmentPositionAnimator;                   //@synthesize draggingSegmentPositionAnimator=_draggingSegmentPositionAnimator - In the implementation block
@property (nonatomic,retain) T1VideoDraggingSegmentView * draggingSegmentView;                          //@synthesize draggingSegmentView=_draggingSegmentView - In the implementation block
@property (getter=isDraggingWasPlaying,nonatomic,readonly) BOOL draggingWasPlaying;                     //@synthesize draggingWasPlaying=_draggingWasPlaying - In the implementation block
@property (nonatomic,readonly) T1TimeDurationPillView * durationPillView;                               //@synthesize durationPillView=_durationPillView - In the implementation block
@property (assign,nonatomic) long long extendedMediaDetailsCameraSource;                                //@synthesize extendedMediaDetailsCameraSource=_extendedMediaDetailsCameraSource - In the implementation block
@property (nonatomic,readonly) T1CameraTapIndicatorView * focusIndicatorView;                           //@synthesize focusIndicatorView=_focusIndicatorView - In the implementation block
@property (nonatomic,readonly) T1CameraFocusLockIndicatorView * focusLockIndicatorView;                 //@synthesize focusLockIndicatorView=_focusLockIndicatorView - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * playbackScrubPanGestureRecognizer;              //@synthesize playbackScrubPanGestureRecognizer=_playbackScrubPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TFNAVPlayerView * playbackView;                                          //@synthesize playbackView=_playbackView - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                                 //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 playerItemDuration;                                        //@synthesize playerItemDuration=_playerItemDuration - In the implementation block
@property (nonatomic,readonly) UIImageView * playIconView;                                              //@synthesize playIconView=_playIconView - In the implementation block
@property (nonatomic,readonly) UIView * previewHolderView;                                              //@synthesize previewHolderView=_previewHolderView - In the implementation block
@property (nonatomic,readonly) UIView * rotatingView;                                                   //@synthesize rotatingView=_rotatingView - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;                                                 //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) UICollectionView * segmentCollectionView;                                //@synthesize segmentCollectionView=_segmentCollectionView - In the implementation block
@property (nonatomic,readonly) UIView * segmentCollectionMaskView;                                      //@synthesize segmentCollectionMaskView=_segmentCollectionMaskView - In the implementation block
@property (nonatomic,readonly) UIView * segmentProgressView;                                            //@synthesize segmentProgressView=_segmentProgressView - In the implementation block
@property (assign,getter=isTorchActive,nonatomic) BOOL torchActive;                                     //@synthesize torchActive=_torchActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                               //@synthesize account=_account - In the implementation block
+(long long)_extendedMediaDetailsMediaSourceForDevicePosition:(long long)arg1 ;
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(id)scribeComponent;
-(void)_tap:(id)arg1 ;
-(void)viewWillFullyAppear:(BOOL)arg1 ;
-(void)viewDidFullyAppear:(BOOL)arg1 ;
-(BOOL)tooltipShouldShow:(id)arg1 ;
-(void)tooltipDidTap:(id)arg1 ;
-(TFNTwitterVideoSegmentManager *)segmentManager;
-(void)_deviceOrientationDidChange:(id)arg1 ;
-(void)_setupToolbar;
-(void)_updateFocusLockCapabilities;
-(void)_cameraControllerDidStartAdjustingFocus:(id)arg1 ;
-(void)_cameraControllerDidStopAdjustingFocus:(id)arg1 ;
-(void)_cameraControllerDidStartAdjustingExposure:(id)arg1 ;
-(void)_cameraControllerDidStopAdjustingExposure:(id)arg1 ;
-(void)viewWillFullyDisappear:(BOOL)arg1 ;
-(void)_switchToCaptureMode;
-(T1CameraFocusLockIndicatorView *)focusLockIndicatorView;
-(void)_setAutoFocusAndExposurePointOfInterest:(CGPoint)arg1 locked:(BOOL)arg2 ;
-(void)_flip:(id)arg1 ;
-(void)_updateToolbarButtonColorsForOrientation:(long long)arg1 ;
-(void)setAdjustingFocus:(BOOL)arg1 ;
-(void)setAdjustingExposure:(BOOL)arg1 ;
-(T1CameraTapIndicatorView *)focusIndicatorView;
-(void)_presentTooltipIfNeeded:(long long)arg1 ;
-(id)initWithVideoSegmentManager:(id)arg1 mode:(long long)arg2 ;
-(void)_logAction:(id)arg1 element:(id)arg2 extendedMediaDetails:(id)arg3 ;
-(void)_updateSegmentStripParameters:(long long)arg1 ;
-(void)_updateDropSpringConstants;
-(void)_setupSegmentCollectionView;
-(void)_tooltipTap:(id)arg1 ;
-(void)_setLockOrientation:(long long)arg1 ;
-(void)_forceUpdateLayoutForDeviceOrientation;
-(UICollectionView *)segmentCollectionView;
-(T1TimeDurationPillView *)durationPillView;
-(void)_cameraControllerDidUpdateTorchAvailability:(id)arg1 ;
-(void)_updateLayoutForDeviceOrientation:(BOOL)arg1 ;
-(void)_setCaptureButtonEnabled:(BOOL)arg1 ;
-(void)_didChangeModeAnimated:(BOOL)arg1 ;
-(void)setExtendedMediaDetailsCameraSource:(long long)arg1 ;
-(void)_playbackFromSegment:(long long)arg1 offset:(SCD_Struct_T111)arg2 play:(BOOL)arg3 ;
-(void)_dismissTooltipIfVisibleAnimated:(BOOL)arg1 ;
-(BOOL)_isDragging;
-(void)_setPlaybackSegmentIndex:(long long)arg1 ;
-(void)_setIsRecording:(BOOL)arg1 ;
-(void)setTorchActive:(BOOL)arg1 ;
-(long long)extendedMediaDetailsCameraSource;
-(T1CameraPreviewView *)capturePreviewView;
-(void)_torch:(id)arg1 ;
-(void)_setupDoneButtonItem;
-(void)_updateTorchButton;
-(void)_updateTorchButtonAvailable:(BOOL)arg1 captureMode:(long long)arg2 ;
-(void)_updateDoneAndModeButtons;
-(void)_updateFocusLockIndicatorPositionAnimated:(BOOL)arg1 ;
-(void)_setModeButtonHidden:(BOOL)arg1 ;
-(void)_updateViewFinderForDeviceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateFocusLockIndicatorAnimated:(BOOL)arg1 ;
-(void)_updateSegmentDividerIndicators;
-(void)_updateDurationPillForDeviceOrientation:(long long)arg1 hidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateDeleteView:(long long)arg1 ;
-(void)_updatePlaybackView:(long long)arg1 ;
-(UIView *)previewHolderView;
-(UIView *)capturePreviewHolderView;
-(UIView *)segmentCollectionMaskView;
-(id)_createSegmentFadeGradient:(long long)arg1 ;
-(void)_updateCapturePreviewViewLandscapeFrame:(CGRect)arg1 ;
-(void)_pausePlaybackAndSetPlayButtonShowing:(BOOL)arg1 ;
-(TFNAVPlayerView *)playbackView;
-(UIView *)segmentProgressView;
-(CGRect)_progressViewTotalFrame:(long long)arg1 ;
-(void)_setupCaptureView;
-(void)_setupPlaybackView;
-(void)_setupDeleteView;
-(void)_updatePlaybackTime:(SCD_Struct_T111)arg1 ;
-(void)playbackViewTapped:(id)arg1 ;
-(void)_playbackViewScrubbed:(id)arg1 ;
-(id)_segmentReuseIdentifierForOrientation:(long long)arg1 ;
-(void)_handleSegmentLongPress:(id)arg1 ;
-(BOOL)_leftSideRoundedForSegmentAtIndex:(long long)arg1 withDraggingSegmentIndex:(long long)arg2 ;
-(BOOL)_rightSideRoundedForSegmentAtIndex:(long long)arg1 withDraggingSegmentIndex:(long long)arg2 ;
-(id)_thumbnailForSegment:(id)arg1 ;
-(void)_applySegmentFadeGradientIfNecessary:(long long)arg1 ;
-(void)_cancelThumbnailForSegment:(id)arg1 ;
-(SCD_Struct_T111)_timeAtStartOfSegment:(long long)arg1 ;
-(BOOL)_playbackReachedEndOfComposition;
-(void)_switchToPlaybackMode;
-(void)_presentTooltipIfNeeded:(long long)arg1 rect:(CGRect)arg2 ;
-(void)_updateThumbnail:(id)arg1 segment:(id)arg2 ;
-(void)_startDraggingSegmentAtIndex:(unsigned long long)arg1 locationInView:(CGPoint)arg2 ;
-(void)_moveSegmentToLocationInView:(CGPoint)arg1 ;
-(void)_updateDeleteTargetForLocationInView:(CGPoint)arg1 ;
-(BOOL)_isLocationInDeleteTarget:(CGPoint)arg1 ;
-(void)_deleteSegmentAtIndex:(unsigned long long)arg1 ;
-(void)_resetDeleteTarget:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_dropSegmentToLocationInView:(CGPoint)arg1 withVelocity:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)_stopScrollingSegments;
-(T1VideoDraggingSegmentView *)draggingSegmentView;
-(UIView *)rotatingView;
-(void)_updateVisibleSegmentCellsCornerRoundednessForDrag:(BOOL)arg1 ;
-(void)_updateDraggingSegmentIndexToLocationInView:(CGPoint)arg1 ;
-(BOOL)_draggingSegmentIsOverSegmentCollectionView;
-(void)_startScrollingSegments:(long long)arg1 ;
-(unsigned long long)_indexForItemAtLocationInView:(CGPoint)arg1 ;
-(void)_performScroll:(id)arg1 ;
-(void)_finishDropSegment;
-(void)_setPlayButtonShowing:(BOOL)arg1 ;
-(unsigned long long)draggingCurrentSegmentIndex;
-(TFXSpringAnimator2D *)draggingSegmentPositionAnimator;
-(UIView *)deleteMaskView;
-(T1TrashIconView *)deleteTrashIconView;
-(void)setDraggingSegmentView:(T1VideoDraggingSegmentView *)arg1 ;
-(void)setDraggingOriginalSegmentIndex:(unsigned long long)arg1 ;
-(void)setDraggingCurrentSegmentIndex:(unsigned long long)arg1 ;
-(BOOL)isDraggingWasPlaying;
-(UIView *)deleteHolderView;
-(UIPanGestureRecognizer *)playbackScrubPanGestureRecognizer;
-(void)_unlockOrientationIfNecessary;
-(double)thresholdYDeleteConfirm;
-(double)thresholdYDeleteWarn;
-(long long)_indexAtTime:(SCD_Struct_T111)arg1 ;
-(BOOL)_isSegmentAtIndexCompletelyVisible:(long long)arg1 ;
-(void)_seekToSegment:(long long)arg1 offset:(SCD_Struct_T111)arg2 play:(BOOL)arg3 ;
-(void)setPlayerItemDuration:(SCD_Struct_T111)arg1 ;
-(UIImageView *)playIconView;
-(void)_setLockOrientationIfNecessary;
-(void)segmentManagerWillStartRecording:(id)arg1 ;
-(void)segmentManagerDidFailToStartRecording:(id)arg1 ;
-(void)segmentManagerDidStopRecording:(id)arg1 segment:(id)arg2 ;
-(void)segmentManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)segmentManager:(id)arg1 didRecordTimeInterval:(double)arg2 ;
-(void)segmentManagerRecordedMaxRecordingInterval:(id)arg1 ;
-(void)tfx_captureSegmentDropSpringDampingRatioParameterChanged;
-(void)tfx_captureSegmentDropSpringNaturalFrequencyParameterChanged;
-(unsigned long long)draggingOriginalSegmentIndex;
-(SCD_Struct_T111)playerItemDuration;
-(BOOL)isTorchActive;
-(BOOL)isAdjustingFocus;
-(BOOL)isAdjustingExposure;
-(void)_longPress:(id)arg1 ;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1CameraVideoViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<T1CameraVideoViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)stopRecording;
-(CGRect)_contentViewFrame;
-(void)_beginPlayback;
-(void)startRecording;
-(void)_setupPreviewView;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)_updateControls;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)_didCancel;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end

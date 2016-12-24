/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WABasicCameraViewController.h>
#import <WhatsApp/WACameraControllerDelegate.h>
#import <WhatsApp/WACameraButtonViewDelegate.h>
#import <WhatsApp/WACameraRollStripViewDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WAChangeCameraButtonViewDelegate.h>

@protocol OS_dispatch_group, WACameraViewControllerDelegate;
@class WACameraFocusBoxView, NSMutableArray, NSObject, WACameraFlashSelector, UIImageView, WACameraZoomSlider, UIPinchGestureRecognizer, MPVolumeView, WACameraRollStripView, UISwipeGestureRecognizer, WAMediaPickerAsset, NSTimer, WACameraRecordingTimeView, WACameraStillPhotoRequest, UIView, UIButton, WACameraWellView, UIImage, WAChangeCameraButtonView, WACameraButtonView, UILabel, NSString;

@interface WACameraViewController : WABasicCameraViewController <WACameraControllerDelegate, WACameraButtonViewDelegate, WACameraRollStripViewDelegate, WAImageToImageTransitioning, UIGestureRecognizerDelegate, WAChangeCameraButtonViewDelegate> {

	WACameraFocusBoxView* _focusBoxView;
	NSMutableArray* _mediaItems;
	NSObject*<OS_dispatch_group> _processingDispatchGroup;
	WACameraFlashSelector* _flashSelector;
	UIImageView* _flashBadgeView;
	long long _suppressFlashBadgeViewCounter;
	WACameraZoomSlider* _zoomSlider;
	UIPinchGestureRecognizer* _zoomPinchGesture;
	double _zoomFactorBeforePinching;
	long long _lastBackCameraFlashMode;
	long long _lastFrontCameraFlashMode;
	NSMutableArray* _faceViews;
	BOOL _initialResetFocusBoxShown;
	BOOL _statusBarShouldReallyBeHidden;
	MPVolumeView* _hiddenVolumeView;
	float _originalVolumeLevel;
	long long _suppressVolumeTriggerCounter;
	WACameraRollStripView* _cameraRollPicker;
	UISwipeGestureRecognizer* _cameraRollSwipeUpGesture;
	UISwipeGestureRecognizer* _cameraRollSwipeDownGesture;
	long long _initialDeviceOrientation;
	WAMediaPickerAsset* _selectedMediaPickerAsset;
	NSTimer* _recordingTimer;
	WACameraRecordingTimeView* _recordingTimeView;
	WACameraStillPhotoRequest* _currentStillPhotoRequest;
	BOOL _needsStillImageCaptureAnimation;
	UIView* _fakeFlashWhiteView;
	double _originalScreenBrightness;
	long long _cameraTriggerCounter;
	UIButton* _photosButton;
	WACameraWellView* _wellView;
	BOOL _includesCameraRollPicker;
	id<WACameraViewControllerDelegate> _delegate;
	unsigned long long _initialWellCount;
	unsigned long long _maximumWellCount;
	UIImage* _initialWellPreviewImage;
	WAChangeCameraButtonView* _changeCameraButtonView;
	UIView* _topBarView;
	UIView* _bottomBarView;
	WACameraButtonView* _cameraButtonView;
	UILabel* _recordingHintLabel;
	UIButton* _backButton;

}

@property (assign,nonatomic,__weak) WAChangeCameraButtonView * changeCameraButtonView;              //@synthesize changeCameraButtonView=_changeCameraButtonView - In the implementation block
@property (assign,nonatomic,__weak) UIView * topBarView;                                            //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,retain) UIView * bottomBarView;                                                //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (assign,nonatomic,__weak) WACameraButtonView * cameraButtonView;                          //@synthesize cameraButtonView=_cameraButtonView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * recordingHintLabel;                                   //@synthesize recordingHintLabel=_recordingHintLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * backButton;                                          //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic,__weak) id<WACameraViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL includesCameraRollPicker;                                         //@synthesize includesCameraRollPicker=_includesCameraRollPicker - In the implementation block
@property (assign,nonatomic) unsigned long long initialWellCount;                                   //@synthesize initialWellCount=_initialWellCount - In the implementation block
@property (assign,nonatomic) unsigned long long maximumWellCount;                                   //@synthesize maximumWellCount=_maximumWellCount - In the implementation block
@property (nonatomic,retain) UIImage * initialWellPreviewImage;                                     //@synthesize initialWellPreviewImage=_initialWellPreviewImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useBackCamera;
-(void)wa_applicationDidEnterBackground;
-(void)wa_tintColorDidChange;
-(void)didCreateCameraController;
-(void)handleTapToFocus:(id)arg1 ;
-(void)cameraControllerSessionDidBeginRunning:(id)arg1 ;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)setIncludesCameraRollPicker:(BOOL)arg1 ;
-(void)changeCameraButtonViewDidChangeState:(id)arg1 ;
-(void)cameraButtonViewDidChangeSwipeDistance:(id)arg1 ;
-(float)currentNormalizedSwipeUpDistanceForCameraButtonView:(id)arg1 ;
-(void)cameraButtonViewDidBeginTouch:(id)arg1 ;
-(void)cameraButtonViewDidEndTouch:(id)arg1 ;
-(void)cameraButtonViewDidBeginLongPress:(id)arg1 ;
-(void)handleAudioRouteChangeNotification:(id)arg1 ;
-(void)applicationWillPresentCallWindow:(id)arg1 ;
-(void)applicationDidDismissCallWindow:(id)arg1 ;
-(void)cancelAndDismissWithAnimation:(BOOL)arg1 ;
-(void)resetTintColors;
-(UIView *)topBarView;
-(UIView *)bottomBarView;
-(unsigned long long)initialWellCount;
-(unsigned long long)maximumWellCount;
-(UIImage *)initialWellPreviewImage;
-(void)handleTapOnWell:(id)arg1 ;
-(void)presentPhotoLibrary:(id)arg1 ;
-(WAChangeCameraButtonView *)changeCameraButtonView;
-(WACameraButtonView *)cameraButtonView;
-(void)flashModeChanged:(id)arg1 ;
-(void)zoomSliderChanged:(id)arg1 ;
-(void)pinchGestureChanged:(id)arg1 ;
-(BOOL)includesCameraRollPicker;
-(UILabel *)recordingHintLabel;
-(void)updateRecordingHintLabel;
-(void)handleCameraRollSwipeUp:(id)arg1 ;
-(void)handleCameraRollSwipeDown:(id)arg1 ;
-(void)setUpHiddenVolumeView;
-(void)handleDoubleTapToChangeCamera:(id)arg1 ;
-(void)removeHiddenVolumeView;
-(void)setInitialWellPreviewImage:(UIImage *)arg1 ;
-(void)setInitialWellCount:(unsigned long long)arg1 ;
-(void)processStillPhoto;
-(void)doneTakingPhotos;
-(void)takeStillPhotoWithShutterAnimation:(BOOL)arg1 ;
-(void)applyCameraSelection;
-(void)clearAllFaces;
-(void)showResetFocusBox;
-(void)updateZoomInterfaceForCurrentCameraSettings;
-(void)updateFlashInterfaceForCurrentCameraSettingsWithAnimation:(BOOL)arg1 ;
-(void)updateFlashBadge;
-(void)setNormalizedZoomFactor:(float)arg1 ;
-(void)willStartVideoRecording;
-(void)stopVideoRecording;
-(void)cancelVideoRecording;
-(void)recordingTimerDidFire:(id)arg1 ;
-(void)beginIgnoringVolumeChangesForCameraShutter;
-(void)endIgnoringVolumeChangesForCameraShutter;
-(void)videoRecordingDidFailWithError:(id)arg1 ;
-(void)didStopVideoRecording;
-(void)videoRecordingDidFinishRecordingToFile:(id)arg1 ;
-(void)videoRecordingDidCancel;
-(void)deviceOrientationForInterfaceDidChangeWithAnimation:(BOOL)arg1 ;
-(void)showFocusBoxOfWidth:(double)arg1 atPoint:(CGPoint)arg2 ;
-(void)volumeDidChange:(id)arg1 ;
-(BOOL)isIgnoringVolumeChangesForCameraShutter;
-(void)attemptToStartVideoRecording;
-(BOOL)startVideoRecording;
-(void)cameraControllerSessionDidStopRunning:(id)arg1 ;
-(void)cameraControllerDidResetPointOfInterest:(id)arg1 ;
-(void)cameraControllerDidChangePreviewImageSize:(id)arg1 ;
-(void)cameraControllerDidUpdateFaceObjects:(id)arg1 ;
-(void)updateFaces;
-(void)cameraControllerDidChangeFlashActiveState:(id)arg1 ;
-(void)cameraControllerDidFireStillImageShutter:(id)arg1 ;
-(void)cameraRollStripView:(id)arg1 didSelectMediaPickerAsset:(id)arg2 ;
-(void)cameraRollStripViewDidChangePresentationState:(id)arg1 ;
-(void)userDidBeginInteractingWithCameraRollStripView:(id)arg1 ;
-(void)setMaximumWellCount:(unsigned long long)arg1 ;
-(void)setChangeCameraButtonView:(WAChangeCameraButtonView *)arg1 ;
-(void)setTopBarView:(UIView *)arg1 ;
-(void)setBottomBarView:(UIView *)arg1 ;
-(void)setCameraButtonView:(WACameraButtonView *)arg1 ;
-(void)setRecordingHintLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<WACameraViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<WACameraViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setAudioVolume:(float)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(void)done:(id)arg1 ;
-(UIButton *)backButton;
-(void)setBackButton:(UIButton *)arg1 ;
@end

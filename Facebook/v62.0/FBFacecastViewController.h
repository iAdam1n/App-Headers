/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerAudiencePickerControllerDelegate.h>
#import <Facebook/FBFacecastBroadcastControllerDelegate.h>
#import <Facebook/FBFacecastBroadcastControllerDataSource.h>
#import <Facebook/FBFacecastEndingViewDelegate.h>
#import <Facebook/FBFacecastEndScreenViewControllerDelegate.h>
#import <Facebook/FBFacecastBroadcastLoggerDataSource.h>
#import <Facebook/FBFacecastRecordingOverlayViewControllerDelegate.h>
#import <Facebook/FBFacecastSetupControllerDelegate.h>
#import <Facebook/FBFacecastStartingViewControllerDelegate.h>
#import <Facebook/FBFacecastWithBroadcasterCameraViewControllerDelegate.h>
#import <Facebook/FBFacecastWithLoggerDataSource.h>
#import <Facebook/FBModalDialogViewDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBReachabilityListener.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBInAppNotificationEligibilityProtocol.h>

@protocol FBFacecastViewControllerDelegate, FBFacecastEndScreenProtocol;
@class SPAccessPhotoPermissionPromptView, FBFacecastCompositionState, FBTimer, FBVideoBroadcastStatsDebugView, FBFacecastActorFetcher, FBScenePath, FBComposerSelectablePrivacy, NSDate, FBFacecastSetupController, FBFacecastBroadcastController, FBFacecastFixedPrivacyFetcher, AVCaptureVideoPreviewLayer, FBFacecastBroadcastLogger, FBCommunicationSoundEffect, FBModalDialogViewController, UILocalNotification, UITapGestureRecognizer, FBFacecastWithBroadcasterCameraViewController, NSMutableArray, FBFacecastGeotargetingModel, FBMemFundraiserPersonToCharity, NSString, UIView, FBFacecastCameraView, FBFacecastStartingViewController, FBFacecastRecordingOverlayViewController, UIViewController, FBUserSession, PABlurView, FBFacecastEndingView, FBLoadingIndicatorView, FBFacecastBroadcasterConfig, FBComposerAudiencePickerViewController, FBComposerPrivacySetting, FBComposerFixedPrivacyExplanation, FBFullscreenSpinnerController;

@interface FBFacecastViewController : UIViewController <FBComposerAudiencePickerControllerDelegate, FBFacecastBroadcastControllerDelegate, FBFacecastBroadcastControllerDataSource, FBFacecastEndingViewDelegate, FBFacecastEndScreenViewControllerDelegate, FBFacecastBroadcastLoggerDataSource, FBFacecastRecordingOverlayViewControllerDelegate, FBFacecastSetupControllerDelegate, FBFacecastStartingViewControllerDelegate, FBFacecastWithBroadcasterCameraViewControllerDelegate, FBFacecastWithLoggerDataSource, FBModalDialogViewDelegate, FBPresentableViewController, FBReachabilityListener, UIScrollViewDelegate, FBInAppNotificationEligibilityProtocol> {

	SPAccessPhotoPermissionPromptView* _cameraPermissionPromptView;
	FBFacecastCompositionState* _compositionState;
	BOOL _previousIdleState;
	FBTimer* _networkCheckTimer;
	FBVideoBroadcastStatsDebugView* _statsDebugView;
	double _zoomAtStart;
	BOOL _isPublicFigure;
	FBFacecastActorFetcher* _actorFetcher;
	FBScenePath* _scenePath;
	FBComposerSelectablePrivacy* _initialSelectablePrivacy;
	NSDate* _recordingStartDate;
	unsigned long long _authorType;
	FBFacecastSetupController* _setupController;
	FBFacecastBroadcastController* _broadcastController;
	FBFacecastFixedPrivacyFetcher* _fixedPrivacyFetcher;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	BOOL _broadcastInitializedByCaller;
	FBFacecastBroadcastLogger* _logger;
	/*^block*/id _onEndRecording;
	FBCommunicationSoundEffect* _endVideoSound;
	FBCommunicationSoundEffect* _endVideoCheckmarkSound;
	FBCommunicationSoundEffect* _flipCameraSound;
	FBModalDialogViewController* _modalDialogViewController;
	UILocalNotification* _interruptionLocalNotification;
	UITapGestureRecognizer* _doubleTap;
	long long _liveWithEnabledType;
	FBFacecastWithBroadcasterCameraViewController* _facecastWithBroadcasterCameraViewController;
	long long _liveWithCallState;
	long long _latestInterfaceOrientation;
	long long _latestVideoOrientation;
	BOOL _useAccelerometer;
	double _lastBroadcasterUpdateLogTimestamp;
	double _lastInterruptedTimestamp;
	NSMutableArray* _commercialBreakTimeOffsets;
	FBFacecastGeotargetingModel* _geotargetingModel;
	BOOL _shouldAllowGeotargetingSelection;
	FBMemFundraiserPersonToCharity* _selectedFundraiser;
	BOOL _shouldAllowFundraiserSelection;
	NSString* _lastLoggedInternalShouldRotateReason;
	NSString* _lastLoggedShouldAutorotateReason;
	NSString* _lastLoggedCurrentVC;
	BOOL _broadcastCancelled;
	BOOL _shouldRecordPostStringAndPrivacy;
	BOOL _broadcastStartedWithWeakConnection;
	id<FBFacecastViewControllerDelegate> _delegate;
	UIView* _backgroundView;
	FBFacecastCameraView* _cameraView;
	FBFacecastStartingViewController* _startingViewController;
	FBFacecastRecordingOverlayViewController* _recordingViewController;
	UIViewController*<FBFacecastEndScreenProtocol> _endScreenViewController;
	FBUserSession* _userSession;
	NSString* _targetID;
	NSString* _broadcastID;
	double _lastDisplayedVideoDuration;
	PABlurView* _blurView;
	FBFacecastEndingView* _endingView;
	FBLoadingIndicatorView* _loadingIndicator;
	FBFacecastBroadcasterConfig* _broadcasterConfig;
	long long _facecastBroadcastState;
	long long _previousState;
	unsigned long long _networkFailureTally;
	FBComposerAudiencePickerViewController* _pickerController;
	FBComposerSelectablePrivacy* _currentSelectablePrivacy;
	FBComposerPrivacySetting* _fixedPrivacySetting;
	FBComposerFixedPrivacyExplanation* _fixedPrivacyExplanation;
	FBFullscreenSpinnerController* _fullscreenSpinnerController;
	Either<NSError *, NSArray<FBManagedFileURL *> *> _broadcastSessionResult;

}

@property (nonatomic,retain) UIView * backgroundView;                                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) FBFacecastCameraView * cameraView;                                                   //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) FBFacecastStartingViewController * startingViewController;                           //@synthesize startingViewController=_startingViewController - In the implementation block
@property (nonatomic,retain) FBFacecastRecordingOverlayViewController * recordingViewController;                  //@synthesize recordingViewController=_recordingViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<FBFacecastEndScreenProtocol> endScreenViewController;              //@synthesize endScreenViewController=_endScreenViewController - In the implementation block
@property (nonatomic,retain) FBUserSession * userSession;                                                         //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy) NSString * targetID;                                                                   //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy) NSString * broadcastID;                                                                //@synthesize broadcastID=_broadcastID - In the implementation block
@property (assign,nonatomic) double lastDisplayedVideoDuration;                                                   //@synthesize lastDisplayedVideoDuration=_lastDisplayedVideoDuration - In the implementation block
@property (nonatomic,retain) PABlurView * blurView;                                                               //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) FBFacecastEndingView * endingView;                                                   //@synthesize endingView=_endingView - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordPostStringAndPrivacy;                                               //@synthesize shouldRecordPostStringAndPrivacy=_shouldRecordPostStringAndPrivacy - In the implementation block
@property (nonatomic,retain) FBLoadingIndicatorView * loadingIndicator;                                           //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,retain) FBFacecastBroadcasterConfig * broadcasterConfig;                                     //@synthesize broadcasterConfig=_broadcasterConfig - In the implementation block
@property (assign,nonatomic) long long facecastBroadcastState;                                                    //@synthesize facecastBroadcastState=_facecastBroadcastState - In the implementation block
@property (assign,nonatomic) long long previousState;                                                             //@synthesize previousState=_previousState - In the implementation block
@property (assign,nonatomic) unsigned long long networkFailureTally;                                              //@synthesize networkFailureTally=_networkFailureTally - In the implementation block
@property (assign,nonatomic) BOOL broadcastStartedWithWeakConnection;                                             //@synthesize broadcastStartedWithWeakConnection=_broadcastStartedWithWeakConnection - In the implementation block
@property (assign,nonatomic) Either<NSError * broadcastSessionResult;                                             //@synthesize broadcastSessionResult=_broadcastSessionResult - In the implementation block
@property (nonatomic,retain) FBComposerAudiencePickerViewController * pickerController;                           //@synthesize pickerController=_pickerController - In the implementation block
@property (nonatomic,retain) FBComposerSelectablePrivacy * currentSelectablePrivacy;                              //@synthesize currentSelectablePrivacy=_currentSelectablePrivacy - In the implementation block
@property (nonatomic,retain) FBComposerPrivacySetting * fixedPrivacySetting;                                      //@synthesize fixedPrivacySetting=_fixedPrivacySetting - In the implementation block
@property (nonatomic,retain) FBComposerFixedPrivacyExplanation * fixedPrivacyExplanation;                         //@synthesize fixedPrivacyExplanation=_fixedPrivacyExplanation - In the implementation block
@property (nonatomic,retain) FBFullscreenSpinnerController * fullscreenSpinnerController;                         //@synthesize fullscreenSpinnerController=_fullscreenSpinnerController - In the implementation block
@property (nonatomic,readonly) long long currentInterfaceOrientation; 
@property (nonatomic,readonly) long long currentVideoOrientation; 
@property (assign,nonatomic,__weak) id<FBFacecastViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBroadcastCancelled,nonatomic,readonly) BOOL broadcastCancelled;                               //@synthesize broadcastCancelled=_broadcastCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(BOOL)_canStartBroadcastSetupController:(id)arg1 broadcastController:(id)arg2 report:(BOOL)arg3 ;
+(BOOL)canStartBroadcastForSetupController:(id)arg1 broadcastController:(id)arg2 ;
+(void)setEnableDoubleTapToFlipCamera:(BOOL)arg1 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)uploadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)analyticsModule;
-(unsigned long long)preferredPresentationOptions;
-(unsigned long long)preferredPresentationMethod;
-(id)_profileID;
-(void)modalDialogView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)modalDialogView:(id)arg1 didSelectSecondaryButton:(id)arg2 ;
-(CGRect)videoFrame;
-(id)initWithSession:(id)arg1 onEndRecording:(/*^block*/id)arg2 ;
-(void)audiencePickerControllerDidTapCancelNavigationButton:(id)arg1 ;
-(void)audiencePickerControllerDidTapDoneNavigationButton:(id)arg1 finishedWithAvailablePrivacySettings:(id)arg2 selectedAudience:(id)arg3 ;
-(void)audiencePickerController:(id)arg1 userDidMakeSelection:(id)arg2 ;
-(id)_selectedPrivacySetting;
-(id)initWithSession:(id)arg1 authorType:(unsigned long long)arg2 compositionState:(id)arg3 selectablePrivacy:(id)arg4 onEndRecording:(/*^block*/id)arg5 ;
-(FBComposerAudiencePickerViewController *)pickerController;
-(FBFacecastBroadcasterConfig *)broadcasterConfig;
-(void)endScreenViewControllerShowedViews:(id)arg1 ;
-(void)endScreenViewControllerWantsToExit:(id)arg1 shouldDeleteVideo:(BOOL)arg2 shouldSaveVideo:(BOOL)arg3 shouldUploadVideo:(BOOL)arg4 hasSavedVideoAlready:(BOOL)arg5 uploadingVideoAutomatically:(BOOL)arg6 selectedAudience:(id)arg7 resultingEdits:(id)arg8 ;
-(void)endScreenViewControllerWantsToSaveVideo:(id)arg1 withResultingEdits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)facecastBroadcastControllerCaptureSession:(id)arg1 ;
-(long long)facecastBroadcastControllerVideoOrientation:(id)arg1 ;
-(long long)facecastBroadcastControllerCaptureDevicePosition:(id)arg1 ;
-(void)facecastBroadcastController:(id)arg1 didFetchBroadcastWithID:(id)arg2 ;
-(void)facecastBroadcastControllerServerDidForbidBroadcast:(id)arg1 ;
-(void)facecastBroadcastController:(id)arg1 didFailToFetchBroadcastWithError:(id)arg2 ;
-(void)facecastBroadcastControllerSpeedTestDidTimeout:(id)arg1 ;
-(void)facecastBroadcastControllerSpeedTestRetryTimeout:(id)arg1 ;
-(void)facecastBroadcastControllerSpeedTestPassed:(id)arg1 ;
-(void)facecastBroadcastControllerSpeedTestFailed:(id)arg1 ;
-(id)facecastBroadcastControllerClientStatus:(id)arg1 ;
-(void)facecastBroadcastControllerSessionDidStart:(id)arg1 ;
-(void)facecastBroadcastController:(id)arg1 sessionDidFinishWithResult:(id)arg2 ;
-(void)facecastBroadcastController:(id)arg1 sessionDidChangeBitrate:(shared_ptr<FBVideoBroadcastSessionStats>*)arg2 ;
-(void)facecastBroadcastController:(id)arg1 sessionDidFailWithError:(id)arg2 ;
-(void)facecastBroadcastController:(id)arg1 sessionDidLoseConnectionWithError:(id)arg2 ;
-(void)facecastBroadcastControllerSessionDidDropPackets:(id)arg1 ;
-(void)facecastBroadcastController:(id)arg1 didProcessAudioOfCumulativeDuration:(double)arg2 ;
-(void)facecastBroadcastControllerDidAddCaptureSessionOutputs:(id)arg1 ;
-(void)facecastBroadcastController:(id)arg1 didOutputProcessedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BOOL)facecastAccelerometerEnabled;
-(long long)facecastBroadcastLoggerBroadcastState;
-(long long)facecastInterfaceOrientation;
-(long long)facecastVideoOrientation;
-(id)facecastBroadcastLoggerBroadcastID;
-(id)facecastCompositionState;
-(id)facecastBroadcastLoggerClientStatus;
-(id)initWithSession:(id)arg1 authorType:(unsigned long long)arg2 compositionState:(id)arg3 selectablePrivacy:(id)arg4 setupController:(id)arg5 broadcastController:(id)arg6 broadcastID:(id)arg7 videoPreviewLayer:(id)arg8 scenePath:(id)arg9 broadcastInitializedByCaller:(BOOL)arg10 zoomAtStart:(double)arg11 onEndRecording:(/*^block*/id)arg12 ;
-(void)_sessionInvalidated;
-(void)_handleApplicationLifeCycleChange:(id)arg1 ;
-(void)_handleApplicationDidLaunchFromLocalNotification:(id)arg1 ;
-(void)_updateVideoOrientationForBroadcast;
-(void)_fetchedActorWithName:(id)arg1 isVerified:(BOOL)arg2 ;
-(void)setLastDisplayedVideoDuration:(double)arg1 ;
-(void)setEndingView:(FBFacecastEndingView *)arg1 ;
-(FBFacecastEndingView *)endingView;
-(void)_updateFacecastBroadcastState:(long long)arg1 reason:(id)arg2 error:(id)arg3 ;
-(void)_loadCameraViewWithSession:(id)arg1 ;
-(void)checkNetworkConditionsWithCurrentReachabilityState;
-(BOOL)_isFullscreenBroadcastingStarting;
-(FBFacecastStartingViewController *)startingViewController;
-(FBFacecastRecordingOverlayViewController *)recordingViewController;
-(void)flipCamera;
-(void)disconnectCaptureSession;
-(void)_prepareToExit;
-(void)_endLiveWithCall;
-(void)_handleBroadcastTransitionToTerminatingState;
-(long long)facecastBroadcastState;
-(void)_logBroadcastTransitionFromState:(long long)arg1 toState:(long long)arg2 reason:(id)arg3 error:(id)arg4 ;
-(id)_makePublisherData;
-(void)sealBroadcast;
-(double)lastDisplayedVideoDuration;
-(void)_exitFacecast;
-(void)_showEndScreen;
-(void)_sendCommercialBreakOffsetsIfNeeded;
-(void)_showBlurView;
-(void)updateTimerView:(double)arg1 ;
-(void)setAlphaExcludingCamera:(double)arg1 ;
-(UIViewController*<FBFacecastEndScreenProtocol>)endScreenViewController;
-(void)_tickUpDurationInSimpleTimer;
-(FBComposerSelectablePrivacy *)currentSelectablePrivacy;
-(FBComposerFixedPrivacyExplanation *)fixedPrivacyExplanation;
-(FBComposerPrivacySetting *)fixedPrivacySetting;
-(void)setFixedPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
-(void)setFixedPrivacyExplanation:(FBComposerFixedPrivacyExplanation *)arg1 ;
-(void)_fetchFixedPrivacySettings;
-(void)_privacySettingUpdateWithSetting:(id)arg1 explanation:(id)arg2 ;
-(void)setCurrentSelectablePrivacy:(FBComposerSelectablePrivacy *)arg1 ;
-(void)_privacySettingUpdateWithSelectablePrivacy:(id)arg1 ;
-(id)broadcastClientStatus;
-(long long)currentVideoOrientation;
-(void)_fetchBroadcastAfterPermissionRequests;
-(void)_resetCameraPermissionViewIfNeededWithDeniedAccess:(long long)arg1 ;
-(void)terminateBroadcastWithError:(id)arg1 ;
-(CGSize)_streamingVideoSize;
-(void)videoViewTapped:(id)arg1 ;
-(void)videoViewPinched:(id)arg1 ;
-(void)videoViewDoubleTapped:(id)arg1 ;
-(BOOL)_isRecordingVideo;
-(void)_handleBroadcastFailureWithReason:(id)arg1 error:(id)arg2 ;
-(void)toggleStatsDebugView:(BOOL)arg1 ;
-(void)_handleSpeedTestFailed:(BOOL)arg1 ;
-(void)_logBroadcastSameStateTransitionWithReason:(id)arg1 error:(id)arg2 ;
-(void)setBroadcastSessionResult:(Either<NSError *)arg1 ;
-(void)_handleBroadcastTermination;
-(void)_logBroadcastStats:(shared_ptr<FBVideoBroadcastSessionStats>*)arg1 ;
-(void)_networkDidFailWithReason:(id)arg1 error:(id)arg2 ;
-(id)broadcastClientStatusString;
-(void)_scheduleInterruptionLocalNotificationIfNeeded;
-(BOOL)_interruptionShouldEndStream;
-(void)_cancelInterruptionLocalNotification;
-(void)_dismissAndUpdatePrivacySettings:(id)arg1 availablePrivacySettings:(id)arg2 ;
-(void)setBroadcastStartedWithWeakConnection:(BOOL)arg1 ;
-(void)_sendPostStringAndPrivacy;
-(void)_handleBroadcastCancellation;
-(void)setPickerController:(FBComposerAudiencePickerViewController *)arg1 ;
-(void)_showCommercailBreakAlertModal;
-(void)_endBroadcast;
-(void)_endBroadcastWithCopyrightViolation;
-(void)_hideBlurView;
-(BOOL)shouldRecordPostStringAndPrivacy;
-(BOOL)broadcastStartedWithWeakConnection;
-(void)setShouldRecordPostStringAndPrivacy:(BOOL)arg1 ;
-(id)broadcastClientStatusWithBroadcastStat:(shared_ptr<FBVideoBroadcastSessionStats>*)arg1 ;
-(unsigned long long)networkFailureTally;
-(void)setNetworkFailureTally:(unsigned long long)arg1 ;
-(void)_unpauseLiveWithCall;
-(void)_startUploading;
-(void)_updateFacecastToTerminatingBroadcastState:(long long)arg1 ;
-(void)_stopUploadingAboutToFinish;
-(void)_stopUploading;
-(void)setFacecastBroadcastState:(long long)arg1 ;
-(void)_updateBroadcastViewStateFromBroadcastState:(long long)arg1 toBroadcastState:(long long)arg2 ;
-(void)_stopSimpleTimer;
-(void)_startSimpleTimer;
-(void)_pauseLiveWithCall;
-(long long)_broadcastViewStateForBroadcastState:(long long)arg1 ;
-(void)setStartingViewController:(FBFacecastStartingViewController *)arg1 ;
-(/*^block*/id)_fetchPrivacySettingsCompletionBlock;
-(void)_fetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_fetchActor;
-(void)setRecordingViewController:(FBFacecastRecordingOverlayViewController *)arg1 ;
-(id)_viewControllerForBroadcastViewState:(long long)arg1 ;
-(void)_showSpinnerForBroadcastSealingTransition;
-(id)_currentPrivacy;
-(Either<NSError *)broadcastSessionResult;
-(void)_logBroadcastError:(id)arg1 ;
-(id)_makeEndScreenViewControllerWithDVRConfig:(SCD_Struct_FB255)arg1 localVideoURLs:(id)arg2 ;
-(void)setEndScreenViewController:(UIViewController*<FBFacecastEndScreenProtocol>)arg1 ;
-(void)_setInfoCardWithTitle:(id)arg1 text:(id)arg2 type:(long long)arg3 ;
-(void)_unsetInfoCard;
-(void)_cameraPermissionViewDidTapLinkToSettings:(id)arg1 ;
-(void)checkNetworkConditionsWithReachabilityState:(unsigned long long)arg1 ;
-(double)_networkLag;
-(id)broadcastClientStatusWithIngestionInfo:(id)arg1 ;
-(BOOL)_shouldRotate;
-(id)_viewControllerForBroadcastState:(long long)arg1 ;
-(BOOL)_didFullscreenBroadcastingStart;
-(BOOL)_isPortraitOnlyForFullscreenBroadcasting;
-(void)_didDeleteBroadcast;
-(void)_removeBroadcastFromFeed;
-(void)facecastEndingViewCompleted:(id)arg1 ;
-(void)facecastEndingViewCancelled:(id)arg1 ;
-(void)facecastEndingViewStartedDrawingCircle:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerTappedCameraFlipButton:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerTappedResumeButton:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerTappedResumeButtonFromCopyrightViolation:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerTappedStopButton:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerTappedStopButtonFromCopyrightViolation:(id)arg1 ;
-(BOOL)facecastRecordingOverlayViewControllerBroadcastedMinAmount:(id)arg1 ;
-(double)facecastRecordingOverlayViewControllerMinBroadcastAmount:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerReachedTimeLimit:(id)arg1 ;
-(void)facecastRecordingOverlayViewController:(id)arg1 didUpdateWithViewerCount:(long long)arg2 ;
-(void)facecastRecordingOverlayViewControllerDidStartCommercialBreak:(id)arg1 ;
-(void)facecastRecordingOverlayViewControllerDidFinishCommercialBreak:(id)arg1 ;
-(void)facecastRecordingOverlayViewController:(id)arg1 didUpdateCopyrightsViolationStatusCode:(unsigned long long)arg2 ;
-(long long)facecastSetupControllerVideoOrientation:(id)arg1 ;
-(void)facecastSetupControllerDidGetCameraAndMicrophoneAccess:(id)arg1 ;
-(void)facecastSetupController:(id)arg1 didFailToGetAccess:(long long)arg2 ;
-(void)facecastSetupControllerDidFailToAddCameraInput:(id)arg1 ;
-(void)facecastSetupControllerDidFailToAddAudioInput:(id)arg1 ;
-(void)facecastSetupController:(id)arg1 didSetCameraForCaptureSession:(id)arg2 ;
-(void)facecastSetupController:(id)arg1 willStartRunningCaptureSession:(id)arg2 ;
-(void)facecastSetupController:(id)arg1 didStartRunningCaptureSession:(id)arg2 ;
-(void)facecastSetupControllerDidBecameActiveAudioHighPriorityClient:(id)arg1 ;
-(void)facecastSetupControllerAVCaptureSessionWasInterrupted:(id)arg1 reason:(long long)arg2 ;
-(void)facecastSetupControllerAVCaptureSessionInterruptionEnded:(id)arg1 ;
-(void)facecastSetupControllerDidChangeStabilizationMode:(id)arg1 ;
-(void)facecastSetupController:(id)arg1 captureSessionRuntimeError:(id)arg2 ;
-(void)facecastStartingViewController:(id)arg1 didChangeTitle:(id)arg2 mentions:(id)arg3 ;
-(void)facecastStartingViewControllerFinished:(id)arg1 startedWithWeakConnection:(BOOL)arg2 ;
-(void)facecastStartingViewControllerTappedCameraFlipButton:(id)arg1 ;
-(void)facecastStartingViewControllerTappedCancelButton:(id)arg1 ;
-(void)facecastStartingViewController:(id)arg1 didTapPrivacyUpdateButton:(id)arg2 ;
-(void)facecastStartingViewControllerCountdownInitiated:(id)arg1 ;
-(void)facecastStartingViewControllerTappedSaveFundraiserButton:(id)arg1 selectedFundraiser:(id)arg2 ;
-(void)facecastWithBroadcasterCameraViewController:(id)arg1 didReceiveDeclineFromGuestWithUserID:(id)arg2 ;
-(void)facecastWithBroadcasterCameraViewController:(id)arg1 didReceiveNoAnswerFromGuestWithUserID:(id)arg2 ;
-(void)facecastWithBroadcasterCameraViewController:(id)arg1 callEndedWithFatalError:(BOOL)arg2 ;
-(id)facecastWithLoggerBroadcastID;
-(id)facecastWithLoggerClientStatus;
-(id)facecastWithComposerEventInfo;
-(id)initWithSession:(id)arg1 authorType:(unsigned long long)arg2 broadcastID:(id)arg3 compositionState:(id)arg4 selectablePrivacy:(id)arg5 setupController:(id)arg6 broadcastController:(id)arg7 videoPreviewLayer:(id)arg8 onEndRecording:(/*^block*/id)arg9 ;
-(void)setSimulatorBroadcastID;
-(BOOL)fb_disableFakePush;
-(BOOL)isBroadcastCancelled;
-(void)setBroadcasterConfig:(FBFacecastBroadcasterConfig *)arg1 ;
-(FBFullscreenSpinnerController *)fullscreenSpinnerController;
-(void)setFullscreenSpinnerController:(FBFullscreenSpinnerController *)arg1 ;
-(void)setDelegate:(id<FBFacecastViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(PABlurView *)blurView;
-(void)setBlurView:(PABlurView *)arg1 ;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
-(void)setBroadcastID:(NSString *)arg1 ;
-(NSString *)broadcastID;
-(FBFacecastCameraView *)cameraView;
-(void)setCameraView:(FBFacecastCameraView *)arg1 ;
-(FBUserSession *)userSession;
-(void)setUserSession:(FBUserSession *)arg1 ;
-(long long)previousState;
-(long long)cameraCount;
-(long long)currentInterfaceOrientation;
-(void)setLoadingIndicator:(FBLoadingIndicatorView *)arg1 ;
-(FBLoadingIndicatorView *)loadingIndicator;
-(void)setPreviousState:(long long)arg1 ;
@end

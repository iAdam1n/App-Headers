/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/RTCVideoCaptureSessionDelegate.h>
#import <Messenger/FBWebRTCEngineListener.h>
#import <Messenger/FBWebRTCViewDelegate.h>
#import <Messenger/FBWebRTCVoicemailDelegate.h>
#import <Messenger/FBWebRTCVideomailControllerDelegate.h>
#import <Messenger/FBWebRTCCallActionViewDelegate.h>
#import <Messenger/FBWebRTCStarRatingViewDelegate.h>
#import <Messenger/FBWebRTCCallStatusBarViewControllerDelegate.h>
#import <Messenger/FBMCannedMessagePickerDelegate.h>
#import <Messenger/FBMRemindMePickerDelegate.h>
#import <Messenger/FBWebRTCCancelableUserInterface.h>

@class FBWebRTCView, FBWebRTCEngine, FBWebRTCCallModel, FBWebRTCNetworkAvailability, FBUserSession, FBSimpleNetworkerRequest, FBMImageViewDownloader, FBWebRTCCallStatusBarViewController, RTCVideoCaptureSession, UINavigationController, FBWebRTCVideomailController, NSTimer, FBWebRTCUIDisplayCoordinator, FBMCannedMessagePicker, FBMRemindMePicker, ZRApplicationState, UIAlertView, FBWebRTCEndCallInfo, FBWebRTCStarRating, FBWebRTCCallSurvey, FBWebRTCVoicemailHandler, NSString;

@interface FBWebRTCViewController : UIViewController <UIAlertViewDelegate, RTCVideoCaptureSessionDelegate, FBWebRTCEngineListener, FBWebRTCViewDelegate, FBWebRTCVoicemailDelegate, FBWebRTCVideomailControllerDelegate, FBWebRTCCallActionViewDelegate, FBWebRTCStarRatingViewDelegate, FBWebRTCCallStatusBarViewControllerDelegate, FBMCannedMessagePickerDelegate, FBMRemindMePickerDelegate, FBWebRTCCancelableUserInterface> {

	FBWebRTCView* _webRTCView;
	FBWebRTCEngine* _engine;
	FBWebRTCCallModel* _currentCall;
	FBWebRTCNetworkAvailability* _networkAvailability;
	FBWebRTCLogWrapper* _webrtcLogger;
	FBUserSession* _userSession;
	FBSimpleNetworkerRequest* _coverPhotoURLRequest;
	FBMImageViewDownloader* _imageViewDownloader;
	BOOL _callBarVisible;
	FBWebRTCCallStatusBarViewController* _callStatusVC;
	RTCVideoCaptureSession* _videoCaptureSession;
	UINavigationController* _surveyNavigationController;
	FBWebRTCVideomailController* _videomailController;
	BOOL _acknowledgedCall;
	BOOL _userHungUpCall;
	BOOL _dismissWhenOtherModalUICompletes;
	BOOL _connectionStatusHasConnected;
	BOOL _isStatsEnabled;
	BOOL _previousProximitySensorEnabled;
	BOOL _previousIdleTimerDisabled;
	BOOL _callTimerActive;
	BOOL _voicemailTimerActive;
	BOOL _shouldShowVideomail;
	BOOL _isInfoViewHidden;
	NSTimer* _callTimer;
	NSTimer* _endCallTimer;
	NSTimer* _surveyTimer;
	NSTimer* _voicemailTimeoutTimer;
	NSTimer* _voicemailUpdateTimer;
	double _voicemailTimerStart;
	FBWebRTCUIDisplayCoordinator* _uiDisplayCoordinator;
	long long _videoOrientation;
	double _lastPressTime;
	FBMCannedMessagePicker* _cannedMessagePicker;
	FBMRemindMePicker* _remindMePicker;
	ZRApplicationState* _zeroRatingState;
	BOOL _refreshOrientationInProgress;
	BOOL _forceStarRating;
	BOOL _callUIActive;
	BOOL _runningInBackground;
	BOOL _callInitialized;
	BOOL _localVideoAutoPaused;
	BOOL _statusBarHiddenOverride;
	UIAlertView* _alertView;
	UIAlertView* _endCallAlertView;
	FBWebRTCEndCallInfo* _endCallInfo;
	FBWebRTCStarRating* _starRating;
	FBWebRTCCallSurvey* _callSurvey;
	FBWebRTCVoicemailHandler* _voicemailHandler;
	long long _statusBarStyleOverride;

}

@property (assign,nonatomic) BOOL forceStarRating;                                                 //@synthesize forceStarRating=_forceStarRating - In the implementation block
@property (assign,getter=isCallUIActive,nonatomic) BOOL callUIActive;                              //@synthesize callUIActive=_callUIActive - In the implementation block
@property (assign,getter=isRunningInBackground,nonatomic) BOOL runningInBackground;                //@synthesize runningInBackground=_runningInBackground - In the implementation block
@property (assign,getter=isCallInitialized,nonatomic) BOOL callInitialized;                        //@synthesize callInitialized=_callInitialized - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                              //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) UIAlertView * endCallAlertView;                                       //@synthesize endCallAlertView=_endCallAlertView - In the implementation block
@property (nonatomic,retain) FBWebRTCEndCallInfo * endCallInfo;                                    //@synthesize endCallInfo=_endCallInfo - In the implementation block
@property (nonatomic,retain) FBWebRTCStarRating * starRating;                                      //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,retain) FBWebRTCCallSurvey * callSurvey;                                      //@synthesize callSurvey=_callSurvey - In the implementation block
@property (nonatomic,retain) FBWebRTCVoicemailHandler * voicemailHandler;                          //@synthesize voicemailHandler=_voicemailHandler - In the implementation block
@property (assign,getter=isLocalVideoAutoPaused,nonatomic) BOOL localVideoAutoPaused;              //@synthesize localVideoAutoPaused=_localVideoAutoPaused - In the implementation block
@property (assign,nonatomic) BOOL statusBarHiddenOverride;                                         //@synthesize statusBarHiddenOverride=_statusBarHiddenOverride - In the implementation block
@property (assign,nonatomic) long long statusBarStyleOverride;                                     //@synthesize statusBarStyleOverride=_statusBarStyleOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(FBWebRTCStarRating *)starRating;
-(void)setStarRating:(FBWebRTCStarRating *)arg1 ;
-(void)rtcVideoCaptureSession:(id)arg1 didChangeBaseAspectRatio:(double)arg2 ;
-(void)rtcVideoCaptureSession:(id)arg1 didChangeRunning:(BOOL)arg2 ;
-(void)setRunningInBackground:(BOOL)arg1 ;
-(BOOL)isRunningInBackground;
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)didTapCallStatusBarView:(id)arg1 ;
-(id)modalPresentingViewController;
-(void)dismissModalUserInterface;
-(void)_updateStatusMessage;
-(void)_setMainViewStatus:(id)arg1 ;
-(void)_stopCallTimerIfNeeded;
-(void)_startCallTimerIfNeeded;
-(void)_updateStatusMessageWithCallTime;
-(void)_startVideomailSession;
-(void)_cleanUpEndCall;
-(void)setCallUIActive:(BOOL)arg1 ;
-(void)_saveDeviceSettings;
-(void)_updateDeviceSettings;
-(void)_initializeFromCurrentCall;
-(void)_autoResumeSendingVideo;
-(void)_dismissPendingAlerts;
-(void)_restoreDeviceSettings;
-(void)_dismissCallViewAnimated:(BOOL)arg1 shouldOpenVoice:(BOOL)arg2 shouldOpenMessage:(BOOL)arg3 ;
-(void)_autoPauseSendingVideo;
-(void)_finishVoicemailWithoutAttachment;
-(void)_dismissCallingView;
-(void)setEndCallAlertView:(UIAlertView *)arg1 ;
-(void)_dismissStatusBar;
-(void)_doEndCall:(int)arg1 ;
-(void)_showEndCallPromoIfNecessary;
-(FBWebRTCCallSurvey *)callSurvey;
-(BOOL)forceStarRating;
-(void)_timeoutStarRating;
-(BOOL)isCallUIActive;
-(BOOL)isLocalVideoAutoPaused;
-(void)setLocalVideoAutoPaused:(BOOL)arg1 ;
-(void)_finishVoicemailAndSendAttachment;
-(void)_hideCall;
-(void)_logCallAction:(id)arg1 extra:(id)arg2 ;
-(void)_acceptWaitingCall;
-(void)_rejectWaitingCall;
-(void)_endCallImmediately;
-(BOOL)_shouldIgnorePress;
-(void)_resetIgnorePressInterval;
-(void)acceptIncomingCall;
-(void)_enableLocalVideo;
-(void)_disableLocalVideo;
-(void)_showCallSurvey;
-(long long)statusBarStyleOverride;
-(void)setStatusBarStyleOverride:(long long)arg1 ;
-(long long)_currentDeviceOrientation;
-(void)_updateSelfViewProperties;
-(void)_updateOutgoingVideoOrientation:(long long)arg1 ;
-(void)_endCallAfterSendingMessageOrReminder;
-(BOOL)isCallInitialized;
-(void)_setUserPicture:(id)arg1 ;
-(void)_updateToCurrentCallState;
-(void)_updateViewFromCurrentCall;
-(void)_onConnectedCall;
-(void)setCallInitialized:(BOOL)arg1 ;
-(void)_updateStatusBarStyle;
-(BOOL)_isVideoButtonSelectedForCallState:(unsigned long long)arg1 ;
-(void)_startVoicemail;
-(void)_timeoutRedial;
-(void)_timeoutEndCall;
-(BOOL)_isOrientationRequirementDifferentBetweenCallStates:(unsigned long long)arg1 andCallState:(unsigned long long)arg2 ;
-(void)_forceOrientationRefresh;
-(void)_updateConnectionStatusFromStatus:(id)arg1 toStatus:(id)arg2 forCall:(id)arg3 ;
-(void)_showEndCallWithEndCallSummary:(id)arg1 withPresenter:(id)arg2 ;
-(void)_fadeOutInfoViewOnce;
-(void)_postSendVideomailNotification:(id)arg1 ;
-(void)_updateVoicemailStatusMessageWithTime;
-(void)_postSendVoicemailNotification:(id)arg1 ;
-(void)_finishVoicemail:(BOOL)arg1 ;
-(void)startVoicemailTimer;
-(void)sendVoicemailAttachment:(id)arg1 ;
-(void)voicemailComplete;
-(void)remindMePicker:(id)arg1 didSelectRemindAfter:(double)arg2 ;
-(id)initWithEngine:(id)arg1 networkAvailability:(id)arg2 imageViewDownloader:(id)arg3 videoCaptureSession:(id)arg4 webrtcLogger:(FBWebRTCLogWrapper*)arg5 providerMap:(id)arg6 ;
-(BOOL)shouldShowMissedCall;
-(void)setStatusBarHiddenOverride:(BOOL)arg1 ;
-(void)setForceStarRating:(BOOL)arg1 ;
-(UIAlertView *)endCallAlertView;
-(void)setCallSurvey:(FBWebRTCCallSurvey *)arg1 ;
-(FBWebRTCVoicemailHandler *)voicemailHandler;
-(void)setVoicemailHandler:(FBWebRTCVoicemailHandler *)arg1 ;
-(BOOL)statusBarHiddenOverride;
-(void)callActionViewDidPressHideCall:(id)arg1 ;
-(void)callActionViewDidPressSwitchCamera:(id)arg1 ;
-(void)callActionViewDidPressDisabledVideo:(id)arg1 ;
-(void)callActionViewDidPressEndCall:(id)arg1 ;
-(void)callActionViewDidPressAcceptCall:(id)arg1 ;
-(void)callActionViewDidPressDeclineCall:(id)arg1 ;
-(void)callActionViewDidPressRedial:(id)arg1 ;
-(void)callActionViewDidPressCancelRedial:(id)arg1 ;
-(void)callActionViewToggleSpeakerMode:(id)arg1 ;
-(void)callActionViewDidPressMute:(id)arg1 shouldMute:(BOOL)arg2 ;
-(void)callActionViewDidPressVideoCall:(id)arg1 shouldEnable:(BOOL)arg2 ;
-(void)callActionViewDidPressAcceptWaitingCall:(id)arg1 ;
-(void)callActionViewDidPressRejectWaitingCall:(id)arg1 ;
-(void)callActionViewDidPressVoiceClip:(id)arg1 ;
-(void)callActionViewDidPressMessage:(id)arg1 ;
-(void)callActionViewDidPressMessageActionSheet:(id)arg1 ;
-(void)callActionViewDidPressReminderActionSheet:(id)arg1 ;
-(void)callActionViewDidPressDone:(id)arg1 ;
-(void)callActionViewDidPressAcceptVideo:(id)arg1 ;
-(void)callActionViewDidPressDeclineVideo:(id)arg1 ;
-(void)startRatingView:(id)arg1 ratingDidChange:(long long)arg2 ;
-(void)starRatingViewDidPressSubmit:(id)arg1 ;
-(void)starRatingViewDidPressDismiss:(id)arg1 ;
-(void)setStatsEnabled:(BOOL)arg1 ;
-(BOOL)shouldForceSelfViewHidden:(id)arg1 ;
-(double)_systemStatusBarHeight;
-(void)endCallAndSendCustomMessage:(id)arg1 ;
-(void)cannedMessagePicker:(id)arg1 didSelectMessage:(id)arg2 ;
-(FBWebRTCEndCallInfo *)endCallInfo;
-(void)setEndCallInfo:(FBWebRTCEndCallInfo *)arg1 ;
-(void)videomailDidCaptureVideo:(id)arg1 ;
-(void)videomailDidFail;
-(void)videomailDidPressBack;
-(void)videomailDidStartRecording;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
@end


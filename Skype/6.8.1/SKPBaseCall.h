//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPLazyPropertyContainer.h"

#import "SKPCalling.h"
#import "SKPTreeDescribing.h"

@class NSArray, NSDate, NSDictionary, NSError, NSObject<SKPPreviewVideo>, NSString, NSURL, NSUUID, SKPActivityToken, SKPConversationCanAddConsumers, SKPOutboundVideo, SKPParticipant, SKPValidatedPhoneNumber, SKPVideoStageController, SKPVideoStartRequestToken, UIImage;

@interface SKPBaseCall : SKPLazyPropertyContainer <SKPTreeDescribing, SKPCalling>
{
    _Bool _forwarded;
    _Bool _generateTechnicalCallInformation;
    _Bool _currentUserIsLive;
    _Bool _answerWithVideo;
    _Bool _videoCaptureInterrupted;
    _Bool _anyParticipantOnline;
    _Bool _anyParticipantConnecting;
    _Bool _anyParticipantRinging;
    _Bool _anyParticipantInProgress;
    _Bool _videoCallHint;
    _Bool _userWantsToStartVideo;
    _Bool _invalidated;
    _Bool _currentUserIsLiveOrRinging;
    _Bool _currentUserHasBeenLive;
    _Bool _muted;
    _Bool _inboundCallAnswered;
    _Bool _registerForVideoDeviceUpdates;
    _Bool _conference;
    _Bool _inbound;
    _Bool _pstn;
    long long _userInterfaceEndReasonState;
    unsigned long long _capabilities;
    NSString *_unescapedDisplayName;
    NSString *_humanReadableShortDisplayName;
    NSString *_humanReadableExtendedDisplayName;
    NSString *_humanReadableCallInfo;
    NSString *_humanReadableExtendedCallInfo;
    NSString *_humanReadableShortCallInfo;
    NSString *_humanReadableShortLiveDisplayName;
    long long _previewVideoState;
    long long _activeCamera;
    long long _currentUserLastLeaveReason;
    long long _outboundVideoErrorCode;
    unsigned long long _technology;
    long long _initiationSource;
    unsigned long long _numberOfLiveConsumers;
    unsigned long long _optimalRemoteVideosInConference;
    NSArray *_otherConsumers;
    NSArray *_participantsPendingVideoStatus;
    NSDate *_startTimeStamp;
    UIImage *_avatarImage;
    NSURL *_avatarURL;
    SKPValidatedPhoneNumber *_PSTNNumber;
    NSError *_rejectionError;
    SKPVideoStageController *_videoStageController;
    SKPOutboundVideo *_outboundVideo;
    NSString *_conversationIdentity;
    NSString *_guid;
    long long _callState;
    long long _userTargetState;
    long long _answerMethod;
    long long _participantLastLeaveReason;
    long long _startupState;
    double _setupTimeout;
    NSDictionary *_currentVideoDevice;
    NSUUID *_uuid;
    SKPParticipant *_dialogParticipant;
    NSObject<SKPPreviewVideo> *_previewVideo;
    SKPActivityToken *_videoActivity;
    SKPVideoStartRequestToken *_previewVideoStartRequestToken;
}

+ (long long)endReasonStateFromSKPCallServiceErrorCode:(long long)arg1;
+ (id)keyPathsForValuesAffectingShouldStartVideo;
+ (id)keyPathsForValuesAffectingVideo;
+ (id)keyPathsForValuesAffectingSendingVideo;
+ (id)keyPathsForValuesAffectingCanUpdateActiveVideoCamera;
+ (id)keyPathsForValuesAffectingShouldStartPreviewVideo;
+ (_Bool)automaticallyNotifiesObserversOfUserWantsToStartVideo;
+ (id)keyPathsForValuesAffectingCurrentUserInProgress;
+ (id)keyPathsForValuesAffectingInCall;
+ (id)keyPathsForValuesAffectingConnecting;
+ (id)keyPathsForValuesAffectingHeldRemotely;
+ (id)keyPathsForValuesAffectingHeldLocally;
+ (id)keyPathsForValuesAffectingSimpleCallState;
+ (id)keyPathsForValuesAffectingConferenceParticipationStatus;
+ (id)keyPathsForValuesAffectingLiveStatus;
+ (id)lazyLoadedPropertiesKeypaths;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingRingingForMe;
+ (id)keyPathsForValuesAffectingTestCall;
+ (_Bool)automaticallyNotifiesObserversOfConversation;
@property(retain, nonatomic) SKPVideoStartRequestToken *previewVideoStartRequestToken; // @synthesize previewVideoStartRequestToken=_previewVideoStartRequestToken;
@property(retain, nonatomic) SKPActivityToken *videoActivity; // @synthesize videoActivity=_videoActivity;
@property(retain, nonatomic) NSObject<SKPPreviewVideo> *previewVideo; // @synthesize previewVideo=_previewVideo;
@property(retain, nonatomic) SKPParticipant *dialogParticipant; // @synthesize dialogParticipant=_dialogParticipant;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSDictionary *currentVideoDevice; // @synthesize currentVideoDevice=_currentVideoDevice;
@property(nonatomic) double setupTimeout; // @synthesize setupTimeout=_setupTimeout;
@property(nonatomic) long long startupState; // @synthesize startupState=_startupState;
@property(nonatomic) long long participantLastLeaveReason; // @synthesize participantLastLeaveReason=_participantLastLeaveReason;
@property(nonatomic) long long answerMethod; // @synthesize answerMethod=_answerMethod;
@property(nonatomic) long long userTargetState; // @synthesize userTargetState=_userTargetState;
@property(nonatomic) long long callState; // @synthesize callState=_callState;
@property(nonatomic, getter=isPSTN) _Bool pstn; // @synthesize pstn=_pstn;
@property(nonatomic, getter=isInbound) _Bool inbound; // @synthesize inbound=_inbound;
@property(nonatomic, getter=isConference) _Bool conference; // @synthesize conference=_conference;
@property(nonatomic) _Bool registerForVideoDeviceUpdates; // @synthesize registerForVideoDeviceUpdates=_registerForVideoDeviceUpdates;
@property(nonatomic, getter=isInboundCallAnswered) _Bool inboundCallAnswered; // @synthesize inboundCallAnswered=_inboundCallAnswered;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool currentUserHasBeenLive; // @synthesize currentUserHasBeenLive=_currentUserHasBeenLive;
@property(nonatomic) _Bool currentUserIsLiveOrRinging; // @synthesize currentUserIsLiveOrRinging=_currentUserIsLiveOrRinging;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
@property(retain, nonatomic) SKPOutboundVideo *outboundVideo; // @synthesize outboundVideo=_outboundVideo;
@property(nonatomic) _Bool userWantsToStartVideo; // @synthesize userWantsToStartVideo=_userWantsToStartVideo;
@property(readonly, nonatomic) SKPVideoStageController *videoStageController; // @synthesize videoStageController=_videoStageController;
@property(retain, nonatomic) NSError *rejectionError; // @synthesize rejectionError=_rejectionError;
@property(retain, nonatomic) SKPValidatedPhoneNumber *PSTNNumber; // @synthesize PSTNNumber=_PSTNNumber;
@property(retain, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) NSDate *startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(readonly, copy, nonatomic) NSArray *participantsPendingVideoStatus; // @synthesize participantsPendingVideoStatus=_participantsPendingVideoStatus;
@property(copy, nonatomic) NSArray *otherConsumers; // @synthesize otherConsumers=_otherConsumers;
@property(nonatomic) unsigned long long optimalRemoteVideosInConference; // @synthesize optimalRemoteVideosInConference=_optimalRemoteVideosInConference;
@property(nonatomic) unsigned long long numberOfLiveConsumers; // @synthesize numberOfLiveConsumers=_numberOfLiveConsumers;
@property(nonatomic) long long initiationSource; // @synthesize initiationSource=_initiationSource;
@property(nonatomic) unsigned long long technology; // @synthesize technology=_technology;
@property(nonatomic) long long outboundVideoErrorCode; // @synthesize outboundVideoErrorCode=_outboundVideoErrorCode;
@property(nonatomic) long long currentUserLastLeaveReason; // @synthesize currentUserLastLeaveReason=_currentUserLastLeaveReason;
@property(nonatomic) long long activeCamera; // @synthesize activeCamera=_activeCamera;
@property(nonatomic) long long previewVideoState; // @synthesize previewVideoState=_previewVideoState;
@property(nonatomic, getter=isVideoCallHint) _Bool videoCallHint; // @synthesize videoCallHint=_videoCallHint;
@property(nonatomic, getter=isAnyParticipantInProgress) _Bool anyParticipantInProgress; // @synthesize anyParticipantInProgress=_anyParticipantInProgress;
@property(nonatomic, getter=isAnyParticipantRinging) _Bool anyParticipantRinging; // @synthesize anyParticipantRinging=_anyParticipantRinging;
@property(nonatomic, getter=isAnyParticipantConnecting) _Bool anyParticipantConnecting; // @synthesize anyParticipantConnecting=_anyParticipantConnecting;
@property(nonatomic, getter=isAnyParticipantOnline) _Bool anyParticipantOnline; // @synthesize anyParticipantOnline=_anyParticipantOnline;
@property(nonatomic, getter=isVideoCaptureInterrupted) _Bool videoCaptureInterrupted; // @synthesize videoCaptureInterrupted=_videoCaptureInterrupted;
@property(nonatomic) _Bool answerWithVideo; // @synthesize answerWithVideo=_answerWithVideo;
@property(nonatomic) _Bool currentUserIsLive; // @synthesize currentUserIsLive=_currentUserIsLive;
@property(readonly, copy, nonatomic) NSString *humanReadableShortLiveDisplayName; // @synthesize humanReadableShortLiveDisplayName=_humanReadableShortLiveDisplayName;
@property(readonly, copy, nonatomic) NSString *humanReadableShortCallInfo; // @synthesize humanReadableShortCallInfo=_humanReadableShortCallInfo;
@property(readonly, copy, nonatomic) NSString *humanReadableExtendedCallInfo; // @synthesize humanReadableExtendedCallInfo=_humanReadableExtendedCallInfo;
@property(readonly, copy, nonatomic) NSString *humanReadableCallInfo; // @synthesize humanReadableCallInfo=_humanReadableCallInfo;
@property(readonly, copy, nonatomic) NSString *humanReadableExtendedDisplayName; // @synthesize humanReadableExtendedDisplayName=_humanReadableExtendedDisplayName;
@property(readonly, copy, nonatomic) NSString *humanReadableShortDisplayName; // @synthesize humanReadableShortDisplayName=_humanReadableShortDisplayName;
@property(copy, nonatomic) NSString *unescapedDisplayName; // @synthesize unescapedDisplayName=_unescapedDisplayName;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) long long userInterfaceEndReasonState; // @synthesize userInterfaceEndReasonState=_userInterfaceEndReasonState;
@property(nonatomic, getter=isGeneratingTechnicalCallInformation) _Bool generateTechnicalCallInformation; // @synthesize generateTechnicalCallInformation=_generateTechnicalCallInformation;
@property(nonatomic, getter=isForwarded) _Bool forwarded; // @synthesize forwarded=_forwarded;
- (void).cxx_destruct;
- (id)treeNodeChildObjectValueForKey:(id)arg1;
- (void)fetchVideoCallHintWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateWithCall:(id)arg1;
- (void)stopPlayAndSendTone:(long long)arg1;
- (void)playAndSendTone:(long long)arg1;
- (void)acceptInboundVideos:(_Bool)arg1;
- (void)acceptInboundVideo:(_Bool)arg1 forParticipant:(id)arg2;
- (void)rejectWithError:(id)arg1 andReason:(long long)arg2;
- (void)endWithReason:(long long)arg1;
- (void)resumeLiveSession;
- (void)resume;
- (void)holdLiveSessionWithError:(id)arg1;
- (_Bool)joinLiveSession;
- (void)answerWithVideo:(_Bool)arg1 answeringMethod:(long long)arg2 setupTimeout:(double)arg3;
- (void)answerWithVideo:(_Bool)arg1 answeringMethod:(long long)arg2;
- (_Bool)startCallWithIdentities:(id)arg1 withVideo:(_Bool)arg2;
- (void)selectVideoCamera:(long long)arg1;
- (void)startVideo:(_Bool)arg1;
- (void)muteCall:(_Bool)arg1;
- (void)reset;
- (_Bool)isCallForConversationWithIdentity:(id)arg1 guid:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *participantNames;
- (id)host;
@property(readonly, nonatomic) _Bool shouldStartVideo;
@property(readonly, nonatomic, getter=isVideo) _Bool video;
@property(readonly, nonatomic, getter=isSendingVideo) _Bool sendingVideo;
@property(readonly, nonatomic, getter=isReceivingVideo) _Bool receivingVideo;
@property(readonly, nonatomic) _Bool canUpdateActiveVideoCamera;
- (void)registerVideoActivity;
@property(readonly, nonatomic) _Bool shouldStartPreviewVideo;
@property(readonly, nonatomic, getter=isCurrentUserHosting) _Bool currentUserHosting;
@property(readonly, nonatomic, getter=isCurrentUserInProgress) _Bool currentUserInProgress;
@property(readonly, nonatomic, getter=isInCall) _Bool inCall;
@property(readonly, nonatomic, getter=isConnecting) _Bool connecting;
@property(readonly, nonatomic, getter=isHeldRemotely) _Bool heldRemotely;
@property(readonly, nonatomic, getter=isHeldLocally) _Bool heldLocally;
- (void)stopTechnicalCallInformationTimer;
- (void)startTechnicalCallInformationTimer;
@property(readonly, copy, nonatomic) NSString *technicalCallInformation;
@property(readonly, nonatomic) long long simpleCallState;
@property(readonly, copy, nonatomic) NSString *conferenceParticipationStatus;
@property(readonly, copy, nonatomic) NSString *liveStatus;
@property(readonly, copy, nonatomic) NSString *callEndedDurationString;
@property(readonly, nonatomic) double callEndedDuration;
@property(readonly, nonatomic) double liveDuration;
- (id)fetchPreviewVideoOperation;
- (_Bool)flushLazyProperty:(id)arg1;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(nonatomic, getter=isRingingForMe) _Bool ringingForMe;
@property(readonly, nonatomic, getter=isTestCall) _Bool testCall;
@property(readonly, nonatomic) _Bool otherConsumersAreLiveOrRinging;
@property(readonly, nonatomic) unsigned long long modelType;
@property(readonly, nonatomic) _Bool inboundVideoAvailable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)addConsumers:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) SKPConversationCanAddConsumers *canAddConsumers;
- (void)dealloc;
- (void)invalidate;
- (void)commonInit;
- (id)initWithCallGUID:(id)arg1 conversationIdentity:(id)arg2 userTargetState:(long long)arg3 unescapedDisplayName:(id)arg4 conference:(_Bool)arg5 videoCallHint:(_Bool)arg6 avatarURL:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

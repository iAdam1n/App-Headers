/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSArray, NSDictionary, NSString, FBWebRTCConferenceParticipantInfo, FBWebRTCMediaState, NSNumber;

@interface FBWebRTCCallModel : FBValueObject <NSCopying> {

	BOOL _isOutboundCall;
	BOOL _isDirectVideoCall;
	BOOL _isConferenceCall;
	BOOL _isUsingMultiwayProtocol;
	BOOL _isVideoCallAnsweredAsAudioCall;
	BOOL _isDominantSpeakerPinned;
	BOOL _isSpeakerPhone;
	BOOL _isVideoEscalationRequired;
	BOOL _isLocalVideoSupported;
	BOOL _isRemoteVideoSupported;
	BOOL _hasConnected;
	BOOL _hasAlerted;
	BOOL _hasReceivedVideo;
	BOOL _hasSentVideo;
	BOOL _isScheduledCall;
	BOOL _isEndToEndEncrypted;
	long long _callId;
	NSUUID* _uuid;
	NSArray* _peerUsers_DEPRECATED;
	NSArray* _peerUserIds;
	NSDictionary* _participantStates;
	NSDictionary* _peerUsersInfo;
	NSString* _customCallType;
	unsigned long long _callState;
	NSString* _conferenceName;
	FBWebRTCConferenceParticipantInfo* _currentDominantSpeaker;
	FBWebRTCMediaState* _localMedia;
	FBWebRTCMediaState* _remoteMedia;
	unsigned long long _currentCamera;
	unsigned long long _maxUsersInCall;
	NSNumber* _startTimestamp;
	NSNumber* _endTimestamp;
	NSString* _callabilityStatus;
	NSDictionary* _analyticsExtra;

}

@property (nonatomic,readonly) BOOL hasConnectedWithVideo; 
@property (nonatomic,readonly) BOOL isInstantVideoCall; 
@property (nonatomic,readonly) long long callId;                                                             //@synthesize callId=_callId - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peerUsers_DEPRECATED;                                          //@synthesize peerUsers_DEPRECATED=_peerUsers_DEPRECATED - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peerUserIds;                                                   //@synthesize peerUserIds=_peerUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * participantStates;                                        //@synthesize participantStates=_participantStates - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * peerUsersInfo;                                            //@synthesize peerUsersInfo=_peerUsersInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * customCallType;                                               //@synthesize customCallType=_customCallType - In the implementation block
@property (nonatomic,readonly) unsigned long long callState;                                                 //@synthesize callState=_callState - In the implementation block
@property (nonatomic,readonly) BOOL isOutboundCall;                                                          //@synthesize isOutboundCall=_isOutboundCall - In the implementation block
@property (nonatomic,readonly) BOOL isDirectVideoCall;                                                       //@synthesize isDirectVideoCall=_isDirectVideoCall - In the implementation block
@property (nonatomic,readonly) BOOL isConferenceCall;                                                        //@synthesize isConferenceCall=_isConferenceCall - In the implementation block
@property (nonatomic,readonly) BOOL isUsingMultiwayProtocol;                                                 //@synthesize isUsingMultiwayProtocol=_isUsingMultiwayProtocol - In the implementation block
@property (nonatomic,copy,readonly) NSString * conferenceName;                                               //@synthesize conferenceName=_conferenceName - In the implementation block
@property (nonatomic,readonly) BOOL isVideoCallAnsweredAsAudioCall;                                          //@synthesize isVideoCallAnsweredAsAudioCall=_isVideoCallAnsweredAsAudioCall - In the implementation block
@property (nonatomic,copy,readonly) FBWebRTCConferenceParticipantInfo * currentDominantSpeaker;              //@synthesize currentDominantSpeaker=_currentDominantSpeaker - In the implementation block
@property (nonatomic,readonly) BOOL isDominantSpeakerPinned;                                                 //@synthesize isDominantSpeakerPinned=_isDominantSpeakerPinned - In the implementation block
@property (nonatomic,copy,readonly) FBWebRTCMediaState * localMedia;                                         //@synthesize localMedia=_localMedia - In the implementation block
@property (nonatomic,copy,readonly) FBWebRTCMediaState * remoteMedia;                                        //@synthesize remoteMedia=_remoteMedia - In the implementation block
@property (nonatomic,readonly) BOOL isSpeakerPhone;                                                          //@synthesize isSpeakerPhone=_isSpeakerPhone - In the implementation block
@property (nonatomic,readonly) unsigned long long currentCamera;                                             //@synthesize currentCamera=_currentCamera - In the implementation block
@property (nonatomic,readonly) BOOL isVideoEscalationRequired;                                               //@synthesize isVideoEscalationRequired=_isVideoEscalationRequired - In the implementation block
@property (nonatomic,readonly) BOOL isLocalVideoSupported;                                                   //@synthesize isLocalVideoSupported=_isLocalVideoSupported - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteVideoSupported;                                                  //@synthesize isRemoteVideoSupported=_isRemoteVideoSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasConnected;                                                            //@synthesize hasConnected=_hasConnected - In the implementation block
@property (nonatomic,readonly) BOOL hasAlerted;                                                              //@synthesize hasAlerted=_hasAlerted - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedVideo;                                                        //@synthesize hasReceivedVideo=_hasReceivedVideo - In the implementation block
@property (nonatomic,readonly) BOOL hasSentVideo;                                                            //@synthesize hasSentVideo=_hasSentVideo - In the implementation block
@property (nonatomic,readonly) unsigned long long maxUsersInCall;                                            //@synthesize maxUsersInCall=_maxUsersInCall - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * startTimestamp;                                               //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * endTimestamp;                                                 //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * callabilityStatus;                                            //@synthesize callabilityStatus=_callabilityStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsExtra;                                           //@synthesize analyticsExtra=_analyticsExtra - In the implementation block
@property (nonatomic,readonly) BOOL isScheduledCall;                                                         //@synthesize isScheduledCall=_isScheduledCall - In the implementation block
@property (nonatomic,readonly) BOOL isEndToEndEncrypted;                                                     //@synthesize isEndToEndEncrypted=_isEndToEndEncrypted - In the implementation block
-(BOOL)isOutboundCall;
-(NSArray *)peerUserIds;
-(NSArray *)peerUsers_DEPRECATED;
-(BOOL)isDirectVideoCall;
-(NSString *)callabilityStatus;
-(BOOL)hasConnectedWithVideo;
-(FBWebRTCMediaState *)localMedia;
-(FBWebRTCMediaState *)remoteMedia;
-(BOOL)isSpeakerPhone;
-(BOOL)isConferenceCall;
-(BOOL)hasSentVideo;
-(BOOL)hasReceivedVideo;
-(BOOL)isUsingMultiwayProtocol;
-(BOOL)isInstantVideoCall;
-(NSString *)conferenceName;
-(NSDictionary *)participantStates;
-(BOOL)isScheduledCall;
-(NSDictionary *)analyticsExtra;
-(FBWebRTCConferenceParticipantInfo *)currentDominantSpeaker;
-(BOOL)isDominantSpeakerPinned;
-(unsigned long long)maxUsersInCall;
-(BOOL)isLocalVideoSupported;
-(BOOL)isRemoteVideoSupported;
-(BOOL)isVideoEscalationRequired;
-(NSDictionary *)peerUsersInfo;
-(BOOL)isEndToEndEncrypted;
-(BOOL)isVideoCallAnsweredAsAudioCall;
-(NSNumber *)endTimestamp;
-(NSString *)customCallType;
-(id)initWithCallId:(long long)arg1 uuid:(id)arg2 peerUsers_DEPRECATED:(id)arg3 peerUserIds:(id)arg4 participantStates:(id)arg5 peerUsersInfo:(id)arg6 customCallType:(id)arg7 callState:(unsigned long long)arg8 isOutboundCall:(BOOL)arg9 isDirectVideoCall:(BOOL)arg10 isConferenceCall:(BOOL)arg11 isUsingMultiwayProtocol:(BOOL)arg12 conferenceName:(id)arg13 isVideoCallAnsweredAsAudioCall:(BOOL)arg14 currentDominantSpeaker:(id)arg15 isDominantSpeakerPinned:(BOOL)arg16 localMedia:(id)arg17 remoteMedia:(id)arg18 isSpeakerPhone:(BOOL)arg19 currentCamera:(unsigned long long)arg20 isVideoEscalationRequired:(BOOL)arg21 isLocalVideoSupported:(BOOL)arg22 isRemoteVideoSupported:(BOOL)arg23 hasConnected:(BOOL)arg24 hasAlerted:(BOOL)arg25 hasReceivedVideo:(BOOL)arg26 hasSentVideo:(BOOL)arg27 maxUsersInCall:(unsigned long long)arg28 startTimestamp:(id)arg29 endTimestamp:(id)arg30 callabilityStatus:(id)arg31 analyticsExtra:(id)arg32 isScheduledCall:(BOOL)arg33 isEndToEndEncrypted:(BOOL)arg34 ;
-(NSUUID *)uuid;
-(double)callDuration;
-(long long)callId;
-(NSNumber *)startTimestamp;
-(unsigned long long)callState;
-(unsigned long long)currentCamera;
-(BOOL)hasAlerted;
-(BOOL)hasConnected;
@end

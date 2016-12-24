/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASHandle, NSString, TGConversation, SSignal;

@interface TGModernViewContext : NSObject {

	BOOL _contentUpdatesDisabled;
	BOOL _editing;
	BOOL _animationsEnabled;
	BOOL _viewStatusEnabled;
	BOOL _commandsEnabled;
	BOOL _isBot;
	BOOL _isPublicGroup;
	BOOL _autoplayAnimations;
	BOOL _outgoingMessagesAreAlwaysRead;
	ASHandle* _companionHandle;
	NSString* _searchText;
	TGConversation* _conversation;
	TGConversation* _conversationForUnreadCalculations;
	SSignal* _playingAudioMessageStatus;
	/*^block*/id _playAudioMessageId;
	/*^block*/id _resumeAudioMessage;
	/*^block*/id _pauseAudioMessage;
	SSignal* _callbackInProgress;

}

@property (assign,nonatomic) BOOL contentUpdatesDisabled;                                     //@synthesize contentUpdatesDisabled=_contentUpdatesDisabled - In the implementation block
@property (nonatomic,retain) ASHandle * companionHandle;                                      //@synthesize companionHandle=_companionHandle - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                    //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL animationsEnabled;                                          //@synthesize animationsEnabled=_animationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL viewStatusEnabled;                                          //@synthesize viewStatusEnabled=_viewStatusEnabled - In the implementation block
@property (assign,nonatomic) BOOL commandsEnabled;                                            //@synthesize commandsEnabled=_commandsEnabled - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                           //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) TGConversation * conversation;                                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TGConversation * conversationForUnreadCalculations;              //@synthesize conversationForUnreadCalculations=_conversationForUnreadCalculations - In the implementation block
@property (assign,nonatomic) BOOL isBot;                                                      //@synthesize isBot=_isBot - In the implementation block
@property (assign,nonatomic) BOOL isPublicGroup;                                              //@synthesize isPublicGroup=_isPublicGroup - In the implementation block
@property (assign,nonatomic) BOOL autoplayAnimations;                                         //@synthesize autoplayAnimations=_autoplayAnimations - In the implementation block
@property (assign,nonatomic) BOOL outgoingMessagesAreAlwaysRead;                              //@synthesize outgoingMessagesAreAlwaysRead=_outgoingMessagesAreAlwaysRead - In the implementation block
@property (nonatomic,retain) SSignal * playingAudioMessageStatus;                             //@synthesize playingAudioMessageStatus=_playingAudioMessageStatus - In the implementation block
@property (nonatomic,copy) id playAudioMessageId;                                             //@synthesize playAudioMessageId=_playAudioMessageId - In the implementation block
@property (nonatomic,copy) id resumeAudioMessage;                                             //@synthesize resumeAudioMessage=_resumeAudioMessage - In the implementation block
@property (nonatomic,copy) id pauseAudioMessage;                                              //@synthesize pauseAudioMessage=_pauseAudioMessage - In the implementation block
@property (nonatomic,retain) SSignal * callbackInProgress;                                    //@synthesize callbackInProgress=_callbackInProgress - In the implementation block
-(BOOL)isMessageUnread:(id)arg1 ;
-(void)setOutgoingMessagesAreAlwaysRead:(BOOL)arg1 ;
-(void)setCommandsEnabled:(BOOL)arg1 ;
-(void)setCompanionHandle:(ASHandle *)arg1 ;
-(ASHandle *)companionHandle;
-(BOOL)autoplayAnimations;
-(BOOL)isMessageChecked:(int)arg1 ;
-(SSignal *)playingAudioMessageStatus;
-(BOOL)commandsEnabled;
-(id)pauseAudioMessage;
-(id)resumeAudioMessage;
-(id)playAudioMessageId;
-(SSignal *)callbackInProgress;
-(BOOL)isPublicGroup;
-(BOOL)isMediaVisibleInMessage:(int)arg1 ;
-(BOOL)isSecretMessageViewed:(int)arg1 ;
-(BOOL)isSecretMessageScreenshotted:(int)arg1 ;
-(double)secretMessageViewDate:(int)arg1 ;
-(BOOL)contentUpdatesDisabled;
-(void)setIsPublicGroup:(BOOL)arg1 ;
-(void)setConversationForUnreadCalculations:(TGConversation *)arg1 ;
-(void)setContentUpdatesDisabled:(BOOL)arg1 ;
-(BOOL)viewStatusEnabled;
-(void)setViewStatusEnabled:(BOOL)arg1 ;
-(TGConversation *)conversationForUnreadCalculations;
-(void)setAutoplayAnimations:(BOOL)arg1 ;
-(BOOL)outgoingMessagesAreAlwaysRead;
-(void)setPlayingAudioMessageStatus:(SSignal *)arg1 ;
-(void)setPlayAudioMessageId:(id)arg1 ;
-(void)setResumeAudioMessage:(id)arg1 ;
-(void)setPauseAudioMessage:(id)arg1 ;
-(void)setCallbackInProgress:(SSignal *)arg1 ;
-(void)setAnimationsEnabled:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(BOOL)animationsEnabled;
-(void)setIsBot:(BOOL)arg1 ;
-(BOOL)isBot;
-(TGConversation *)conversation;
-(void)setConversation:(TGConversation *)arg1 ;
@end

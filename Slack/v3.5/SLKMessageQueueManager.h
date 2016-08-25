/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSArray, NSMutableDictionary, SLKDependencies;

@interface SLKMessageQueueManager : NSObject {

	BOOL _isReconnecting;
	NSTimer* _timer;
	NSArray* _messagesPersistingDataStackReset;
	NSMutableDictionary* _backgroundTaskIdentifiers;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic) BOOL isReconnecting;                                          //@synthesize isReconnecting=_isReconnecting - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSArray * messagesPersistingDataStackReset;                   //@synthesize messagesPersistingDataStackReset=_messagesPersistingDataStackReset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundTaskIdentifiers;              //@synthesize backgroundTaskIdentifiers=_backgroundTaskIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                        //@synthesize dependencies=_dependencies - In the implementation block
-(id)initWithDependencies:(id)arg1 ;
-(void)retryMessageFromNotification:(id)arg1 ;
-(void)setBackgroundTaskIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)dataStackInitialized:(id)arg1 ;
-(void)isSendingMessageNotification:(id)arg1 ;
-(void)webSocketStatusChangedNotification:(id)arg1 ;
-(void)dataStackWillBeDestroyed:(id)arg1 ;
-(void)dataStackCreated:(id)arg1 ;
-(void)presentMessageFailedLocalNotifications:(id)arg1 ;
-(void)sendMessage:(id)arg1 channel:(id)arg2 replyTimestamp:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginBackgroundTaskForMessage:(id)arg1 ;
-(void)retryPendingMessageSend:(id)arg1 ;
-(void)resetPendingMessageStatusTimer;
-(void)postMessage:(id)arg1 channel:(id)arg2 messageId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleSendCompletion:(id)arg1 ;
-(NSMutableDictionary *)backgroundTaskIdentifiers;
-(void)updatePendingMessages;
-(void)endBackgroundTaskForMessage:(id)arg1 ;
-(void)cancelAllPendingMessagesWithLocalNotification:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsReconnecting:(BOOL)arg1 ;
-(BOOL)isReconnecting;
-(void)retryAllPendingMessages;
-(id)allPendingMessages:(unsigned long long)arg1 ;
-(void)setMessagesPersistingDataStackReset:(NSArray *)arg1 ;
-(NSArray *)messagesPersistingDataStackReset;
-(void)updateChannelsFailedMessage;
-(void)deleteFailedMessage:(id)arg1 ;
-(void)retryMessage:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)dealloc;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)registerForNotifications;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end


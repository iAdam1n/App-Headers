/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSTimer;

@interface SKPMessagingTelemetryPushLoadMeasurement : NSObject {

	BOOL _chatIsOpenedAndLoaded;
	BOOL _messageIsSynced;
	NSString* _conversationIdentity;
	/*^block*/id _completion;
	unsigned long long _messageServerId;
	NSDate* _startTime;
	double _timeoutInterval;
	NSTimer* _timer;

}

@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long messageServerId;                //@synthesize messageServerId=_messageServerId - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL messageIsSynced;                                //@synthesize messageIsSynced=_messageIsSynced - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationIdentity;              //@synthesize conversationIdentity=_conversationIdentity - In the implementation block
@property (assign,nonatomic) BOOL chatIsOpenedAndLoaded;                          //@synthesize chatIsOpenedAndLoaded=_chatIsOpenedAndLoaded - In the implementation block
-(unsigned long long)messageServerId;
-(NSString *)conversationIdentity;
-(void)onTimer:(id)arg1 ;
-(void)notifyCompletion:(long long)arg1 duration:(double)arg2 ;
-(void)completeIsPossible;
-(void)setAbandoned;
-(void)setMessageIsSynced:(BOOL)arg1 ;
-(BOOL)chatIsOpenedAndLoaded;
-(BOOL)messageIsSynced;
-(id)initWithTimeout:(double)arg1 startTime:(id)arg2 messageServerId:(unsigned long long)arg3 conversationIdentity:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)correspondsToMessage:(id)arg1 ;
-(void)setChatIsOpenedAndLoaded:(BOOL)arg1 ;
-(void)setMessageSynced;
-(void)invalidate;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSDate *)startTime;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
@end

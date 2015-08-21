/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBWhistleDelegate;
#import <Messenger/Messenger-Structs.h>
@interface FBWhistleClient : NSObject {

	id<FBWhistleDelegate> _delegate;
	unique_ptr<proxygen::mqttclient::MQTTClient, std::__1::default_delete<proxygen::mqttclient::MQTTClient> >* _client;
	unique_ptr<MQTTClientGlue, std::__1::default_delete<MQTTClientGlue> >* _glue;
	FBWhistleConnectionStatsLogger* _connStatsLogger;
	unsigned long long _backgroundTaskID;

}
+(id)processor;
-(id)debugInfo;
-(void)_sendMessageInEventBase:(unique_ptr<proxygen::MQTTMessage, std::__1::default_delete<proxygen::MQTTMessage> >*)arg1 ;
-(id)initWithDelegate:(id)arg1 clientID:(id)arg2 settings:(id)arg3 ;
-(void)connectWithHostname:(id)arg1 port:(int)arg2 connPayload:(id)arg3 secure:(BOOL)arg4 ;
-(void)connectWithHostname:(id)arg1 port:(int)arg2 username:(id)arg3 password:(id)arg4 secure:(BOOL)arg5 ;
-(void)subscribeWithTopics:(id)arg1 ;
-(void)unsubscribeWithTopics:(id)arg1 ;
-(void)startKeepAliveTask;
-(void)stopKeepAliveTask;
-(void)sendKeepAliveOnce;
-(void)endBackgroundTaskIfNeeded;
-(void)resetClient;
-(void)publishWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 context:(int)arg4 ;
-(void)_endBackgroundTask;
-(void)disconnect;
-(void)_beginBackgroundTask;
@end


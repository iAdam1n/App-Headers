/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCMDataMessageManagerDelegate;
@class GCMClient, GCMRmqManager, GCMSyncMessageManager, GCMDelayedMessageQueue, NSString;

@interface GCMDataMessageManager : NSObject {

	char _upstreamForceReconnect;
	int _ttl;
	int _maxAppDataSize;
	GCMClient* _client;
	GCMRmqManager* _rmq2Manager;
	GCMSyncMessageManager* _syncMessageManager;
	id<GCMDataMessageManagerDelegate> _delegate;
	GCMDelayedMessageQueue* _delayedMessagesQueue;
	NSString* _deviceAuthID;
	NSString* _secretToken;

}

@property (assign,nonatomic,__weak) GCMClient * client;                                      //@synthesize client=_client - In the implementation block
@property (assign,nonatomic,__weak) GCMRmqManager * rmq2Manager;                             //@synthesize rmq2Manager=_rmq2Manager - In the implementation block
@property (assign,nonatomic,__weak) GCMSyncMessageManager * syncMessageManager;              //@synthesize syncMessageManager=_syncMessageManager - In the implementation block
@property (assign,nonatomic,__weak) id<GCMDataMessageManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GCMDelayedMessageQueue * delayedMessagesQueue;                  //@synthesize delayedMessagesQueue=_delayedMessagesQueue - In the implementation block
@property (assign,nonatomic) int ttl;                                                        //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,copy) NSString * deviceAuthID;                                          //@synthesize deviceAuthID=_deviceAuthID - In the implementation block
@property (nonatomic,copy) NSString * secretToken;                                           //@synthesize secretToken=_secretToken - In the implementation block
@property (assign,nonatomic) int maxAppDataSize;                                             //@synthesize maxAppDataSize=_maxAppDataSize - In the implementation block
@property (assign,nonatomic) char upstreamForceReconnect;                                    //@synthesize upstreamForceReconnect=_upstreamForceReconnect - In the implementation block
-(NSString *)secretToken;
-(void)setSecretToken:(NSString *)arg1 ;
-(NSString *)deviceAuthID;
-(void)resendMessagesWithConnection:(id)arg1 ;
-(GCMRmqManager *)rmq2Manager;
-(void)setRmq2Manager:(GCMRmqManager *)arg1 ;
-(void)setDeviceAuthID:(NSString *)arg1 ;
-(void)sendDelayedMessages:(id)arg1 ;
-(void)setDelayedMessagesQueue:(GCMDelayedMessageQueue *)arg1 ;
-(void)handleMCSDataMessage:(id)arg1 ;
-(id)parseDataMessage:(id)arg1 ;
-(GCMSyncMessageManager *)syncMessageManager;
-(id)filterInternalGCMKeysFromMessage:(id)arg1 ;
-(id)categoryForUpstreamMessages;
-(int)delayForMessage:(id)arg1 ;
-(void)willSendDataMessageFail:(id)arg1 withMessageId:(id)arg2 error:(unsigned long long)arg3 ;
-(int)addData:(id)arg1 toStanza:(id)arg2 ;
-(void)willSendDataMessageSuccess:(id)arg1 withMessageId:(id)arg2 ;
-(BOOL)delayMessage:(id)arg1 ;
-(GCMDelayedMessageQueue *)delayedMessagesQueue;
-(BOOL)tryToSendDataMessageStanza:(id)arg1 ;
-(void)addParamWithKey:(id)arg1 value:(id)arg2 toStanza:(id)arg3 ;
-(BOOL)handleExpirationForDataMessage:(id)arg1 ;
-(char)upstreamForceReconnect;
-(id)initWithDelegate:(id)arg1 client:(id)arg2 rmq2Manager:(id)arg3 syncMessageManager:(id)arg4 ;
-(void)setDeviceAuthID:(id)arg1 secretToken:(id)arg2 ;
-(void)refreshDelayedMessages;
-(id)processPacket:(id)arg1 ;
-(void)didReceiveParsedMessage:(id)arg1 ;
-(void)sendDataMessageStanza:(id)arg1 ;
-(void)didSendDataMessageStanza:(id)arg1 ;
-(void)setSyncMessageManager:(GCMSyncMessageManager *)arg1 ;
-(int)maxAppDataSize;
-(void)setMaxAppDataSize:(int)arg1 ;
-(void)setUpstreamForceReconnect:(char)arg1 ;
-(void)setDelegate:(id<GCMDataMessageManagerDelegate>)arg1 ;
-(id<GCMDataMessageManagerDelegate>)delegate;
-(int)ttl;
-(void)setTtl:(int)arg1 ;
-(void)setClient:(GCMClient *)arg1 ;
-(GCMClient *)client;
@end

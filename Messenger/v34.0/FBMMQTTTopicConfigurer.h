/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMQTTTopicConfiguring.h>

@class FBMMQTTViOSTopicHandler, FBMMQTTOrcaMessageNotificationsTopicHandler, FBMMQTTMercuryTopicHandler, FBMMQTTSPMessageSyncTopicHandler, FBMMQTTOrcaTypingNotificationsTopicHandler, FBMMQTTWebRTCTopicHandler, FBMMQTTWebRTCThriftTopicHandler, MNMQTTMessagingEventDispatcher, FBMMQTTReadStateHandler, FBMMQTTPinnedGroupsUpdateHandler, FBMMQTTMessengerStatusUpdateAnnouncer, FBMMQTTReadReceiptHandler, MNMQTTPersonSyncEventHandler, FBMContactSyncPolicy, NSString;

@interface FBMMQTTTopicConfigurer : NSObject <FBClassProvidable, FBMMQTTTopicConfiguring> {

	FBMMQTTViOSTopicHandler* _mqttViOSTopicHandler;
	FBMMQTTOrcaMessageNotificationsTopicHandler* _mqttOrcaMessageNotificationsTopicHandler;
	FBMMQTTMercuryTopicHandler* _mercuryPushTopicHandler;
	FBMMQTTSPMessageSyncTopicHandler* _mqttSPMessageSyncTopicHandler;
	FBMMQTTOrcaTypingNotificationsTopicHandler* _mqttOrcaTypingNotificationsTopicHandler;
	FBMMQTTWebRTCTopicHandler* _mqttWebRTCTopicHandler;
	FBMMQTTWebRTCThriftTopicHandler* _mqttWebRTCThriftTopicHandler;
	MNMQTTMessagingEventDispatcher* _messagingEventDispatcher;
	FBMMQTTReadStateHandler* _readStateHandler;
	FBMMQTTPinnedGroupsUpdateHandler* _pinnedGroupsUpdateHandler;
	FBMMQTTMessengerStatusUpdateAnnouncer* _messengerStatusAnnouncer;
	FBMMQTTReadReceiptHandler* _readReceiptHandler;
	MNMQTTPersonSyncEventHandler* _personSyncEventHandler;
	FBMContactSyncPolicy* _contactSyncPolicy;

}

@property (nonatomic,retain) FBMMQTTViOSTopicHandler * mqttViOSTopicHandler;                                                      //@synthesize mqttViOSTopicHandler=_mqttViOSTopicHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTOrcaMessageNotificationsTopicHandler * mqttOrcaMessageNotificationsTopicHandler;              //@synthesize mqttOrcaMessageNotificationsTopicHandler=_mqttOrcaMessageNotificationsTopicHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTMercuryTopicHandler * mercuryPushTopicHandler;                                                //@synthesize mercuryPushTopicHandler=_mercuryPushTopicHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTSPMessageSyncTopicHandler * mqttSPMessageSyncTopicHandler;                                    //@synthesize mqttSPMessageSyncTopicHandler=_mqttSPMessageSyncTopicHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTOrcaTypingNotificationsTopicHandler * mqttOrcaTypingNotificationsTopicHandler;                //@synthesize mqttOrcaTypingNotificationsTopicHandler=_mqttOrcaTypingNotificationsTopicHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTWebRTCTopicHandler * mqttWebRTCTopicHandler;                                                  //@synthesize mqttWebRTCTopicHandler=_mqttWebRTCTopicHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTWebRTCThriftTopicHandler * mqttWebRTCThriftTopicHandler;                                      //@synthesize mqttWebRTCThriftTopicHandler=_mqttWebRTCThriftTopicHandler - In the implementation block
@property (nonatomic,retain) MNMQTTMessagingEventDispatcher * messagingEventDispatcher;                                           //@synthesize messagingEventDispatcher=_messagingEventDispatcher - In the implementation block
@property (nonatomic,retain) FBMMQTTReadStateHandler * readStateHandler;                                                          //@synthesize readStateHandler=_readStateHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTPinnedGroupsUpdateHandler * pinnedGroupsUpdateHandler;                                        //@synthesize pinnedGroupsUpdateHandler=_pinnedGroupsUpdateHandler - In the implementation block
@property (nonatomic,retain) FBMMQTTMessengerStatusUpdateAnnouncer * messengerStatusAnnouncer;                                    //@synthesize messengerStatusAnnouncer=_messengerStatusAnnouncer - In the implementation block
@property (nonatomic,retain) FBMMQTTReadReceiptHandler * readReceiptHandler;                                                      //@synthesize readReceiptHandler=_readReceiptHandler - In the implementation block
@property (nonatomic,retain) MNMQTTPersonSyncEventHandler * personSyncEventHandler;                                               //@synthesize personSyncEventHandler=_personSyncEventHandler - In the implementation block
@property (nonatomic,retain) FBMContactSyncPolicy * contactSyncPolicy;                                                            //@synthesize contactSyncPolicy=_contactSyncPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)topicListenersForNetworkProtocol:(unsigned long long)arg1 ;
-(id)initWithMQTTOrcaMessageNotificationsTopicHandler:(id)arg1 mercuryPushTopicHandler:(id)arg2 mqttViOSTopicHandler:(id)arg3 mqttSPMessageSyncTopicHandler:(id)arg4 mqttOrcaTypingNotificationsTopicHandler:(id)arg5 mqttWebRTCTopicHandler:(id)arg6 mqttWebRTCThriftTopicHandler:(id)arg7 messagingEventDispatcher:(id)arg8 readStateHandler:(id)arg9 readReceiptHandler:(id)arg10 pinnedGroupsUpdateHandler:(id)arg11 messengerStatusAnnouncer:(id)arg12 personSyncEventHandler:(id)arg13 contactSyncPolicy:(id)arg14 ;
-(void)_configureMessagingEventDispatcherForProtocol:(unsigned long long)arg1 ;
-(id)_handlersForSyncProtocol;
-(id)_handlersForFQLPlusMQTT;
-(FBMMQTTViOSTopicHandler *)mqttViOSTopicHandler;
-(void)setMqttViOSTopicHandler:(FBMMQTTViOSTopicHandler *)arg1 ;
-(FBMMQTTOrcaMessageNotificationsTopicHandler *)mqttOrcaMessageNotificationsTopicHandler;
-(void)setMqttOrcaMessageNotificationsTopicHandler:(FBMMQTTOrcaMessageNotificationsTopicHandler *)arg1 ;
-(FBMMQTTMercuryTopicHandler *)mercuryPushTopicHandler;
-(void)setMercuryPushTopicHandler:(FBMMQTTMercuryTopicHandler *)arg1 ;
-(FBMMQTTSPMessageSyncTopicHandler *)mqttSPMessageSyncTopicHandler;
-(void)setMqttSPMessageSyncTopicHandler:(FBMMQTTSPMessageSyncTopicHandler *)arg1 ;
-(FBMMQTTOrcaTypingNotificationsTopicHandler *)mqttOrcaTypingNotificationsTopicHandler;
-(void)setMqttOrcaTypingNotificationsTopicHandler:(FBMMQTTOrcaTypingNotificationsTopicHandler *)arg1 ;
-(FBMMQTTWebRTCTopicHandler *)mqttWebRTCTopicHandler;
-(void)setMqttWebRTCTopicHandler:(FBMMQTTWebRTCTopicHandler *)arg1 ;
-(FBMMQTTWebRTCThriftTopicHandler *)mqttWebRTCThriftTopicHandler;
-(void)setMqttWebRTCThriftTopicHandler:(FBMMQTTWebRTCThriftTopicHandler *)arg1 ;
-(MNMQTTMessagingEventDispatcher *)messagingEventDispatcher;
-(void)setMessagingEventDispatcher:(MNMQTTMessagingEventDispatcher *)arg1 ;
-(FBMMQTTReadStateHandler *)readStateHandler;
-(void)setReadStateHandler:(FBMMQTTReadStateHandler *)arg1 ;
-(FBMMQTTPinnedGroupsUpdateHandler *)pinnedGroupsUpdateHandler;
-(void)setPinnedGroupsUpdateHandler:(FBMMQTTPinnedGroupsUpdateHandler *)arg1 ;
-(FBMMQTTMessengerStatusUpdateAnnouncer *)messengerStatusAnnouncer;
-(void)setMessengerStatusAnnouncer:(FBMMQTTMessengerStatusUpdateAnnouncer *)arg1 ;
-(FBMMQTTReadReceiptHandler *)readReceiptHandler;
-(void)setReadReceiptHandler:(FBMMQTTReadReceiptHandler *)arg1 ;
-(MNMQTTPersonSyncEventHandler *)personSyncEventHandler;
-(void)setPersonSyncEventHandler:(MNMQTTPersonSyncEventHandler *)arg1 ;
-(FBMContactSyncPolicy *)contactSyncPolicy;
-(void)setContactSyncPolicy:(FBMContactSyncPolicy *)arg1 ;
-(void)endSession;
@end

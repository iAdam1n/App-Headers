/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNMQTTListenerManaging;
@class MNSyncProtocolCoordinatorConfiguration, NSNotificationCenter, FBMQTTListener, MNSyncProtocolQueueRequester, MNSyncProtocolDeltaRequester, MNSyncProtocolTokenStore, FBExponentialBackoffTimer, NSString;

@interface MNSyncProtocolCoordinator : NSObject <FBClassProvidable> {

	BOOL _isConfigured;
	MNSyncProtocolCoordinatorConfiguration* _configuration;
	NSNotificationCenter* _notificationCenter;
	id<MNMQTTListenerManaging> _listenerManager;
	FBMQTTListener* _syncListener;
	MNSyncProtocolQueueRequester* _queueRequester;
	MNSyncProtocolDeltaRequester* _deltaRequester;
	MNSyncProtocolTokenStore* _tokenStore;
	FBExponentialBackoffTimer* _retrySyncBackoffTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithQueueRequester:(id)arg1 deltaRequester:(id)arg2 notificationCenter:(id)arg3 mqttListenerManager:(id)arg4 tokenStore:(id)arg5 retrySyncBackOffTimer:(id)arg6 ;
-(void)_onMQTTSubscribeToPatternNotification:(id)arg1 ;
-(void)_subscribeToSyncTopic;
-(void)_unsubscribeFromSyncTopic;
-(void)_retrySyncWithExponentialBackoff;
-(void)_fetchDeltaWithSyncToken:(id)arg1 ;
-(void)_handleMQTTEncodedMessage:(id)arg1 ;
-(void)_processSyncTokenFromPayload:(id)arg1 ;
-(void)_processErrorCodeFromPayload:(id)arg1 ;
-(void)_handlePayloadSucceeded;
-(void)_handlePayloadFailedWithError:(id)arg1 ;
-(void)_handleFetchLatestSequenceIdAndSnapshotSucceededWithSequenceId:(long long)arg1 ;
-(void)_handleFetchLatestSequenceIdAndSnapshotFailedWithError:(id)arg1 ;
-(void)_handleRequestQueueSucceeded;
-(void)_handleRequestQueueFailedWithError:(id)arg1 ;
-(void)_syncSucceeded;
-(void)_handleGetPersistedSequenceIdSucceededWithSequenceId:(long long)arg1 andSyncToken:(id)arg2 ;
-(void)_handleGetPersistedSequenceIdFailedWithError:(id)arg1 ;
-(void)_handleFetchDeltaSucceeded;
-(void)_handleFetchDeltaFailed:(id)arg1 ;
-(void)_performSnapshot;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)stop;
-(void)start;
-(void)configure:(id)arg1 ;
-(void)_sync;
@end


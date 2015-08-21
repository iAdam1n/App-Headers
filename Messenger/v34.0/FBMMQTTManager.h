/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMNetworkProtocolChangeListener.h>
#import <Messenger/FBReachabilityListener.h>
#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMMQTTSandBoxSettingsCallback.h>

@protocol OS_dispatch_queue, MNMQTTListenerManaging, FBMMQTTTopicConfiguring, FBUserAgentFormatting, FBMNetworkProtocolChangeListener;
@class NSMutableSet, FBMQTTListener, NSObject, FBMQTTClientManager, FBUserSession, NSUserDefaults, MNActiveParticipantMQTTPublisher, UIApplication, NSNotificationCenter, NSArray, FBMMQTTSender, VOIPConfiguration, VOIPConfigurationChecker, MNOnlineStatusManager, MNMQTTCredentialsFetcher, MNMQTTSender, FBMobileConfigFactory, FBReachabilityAnnouncer, MNSyncProtocolPublisher, FBMNetworkProtocolController, MNMessagingRegionProvider, NSString;

@interface FBMMQTTManager : NSObject <FBMNetworkProtocolChangeListener, FBReachabilityListener, FBSessionClassProvidable, FBMMQTTSandBoxSettingsCallback> {

	NSMutableSet* _pendingRequests;
	FBMQTTListener* _messageListener;
	FBMQTTListener* _typingListener;
	FBMQTTListener* _presenceListener;
	FBMQTTListener* _messagingEventListener;
	NSObject*<OS_dispatch_queue> _applicationQueue;
	unsigned long long _currentReachabilityState;
	BOOL _running;
	BOOL _shouldStart;
	FBMQTTClientManager* _mqttClientManager;
	FBUserSession* _session;
	NSUserDefaults* _userDefaults;
	MNActiveParticipantMQTTPublisher* _activeParticipantPublisher;
	UIApplication* _application;
	NSNotificationCenter* _notificationCenter;
	id<MNMQTTListenerManaging> _listenerManager;
	id<FBMMQTTTopicConfiguring> _mqttTopicConfigurer;
	NSArray* _mqttListenerList;
	FBMMQTTSender* _legacySender;
	VOIPConfiguration* _voipConfig;
	VOIPConfigurationChecker* _voipConfigurationChecker;
	MNOnlineStatusManager* _onlineStatusManager;
	MNMQTTCredentialsFetcher* _mqttCredentialsFetcher;
	id<FBUserAgentFormatting> _mqttUserAgentFormatter;
	MNMQTTSender* _sender;
	FBMobileConfigFactory* _mobileConfigFactory;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	MNSyncProtocolPublisher* _syncProtocolPublisher;
	FBMNetworkProtocolController* _networkProtocolController;
	id<FBMNetworkProtocolChangeListener> _networkProtocolChangeListenerDispatcher;
	MNMessagingRegionProvider* _messagingRegionProvider;

}

@property (nonatomic,readonly) int state; 
@property (nonatomic,retain) FBMQTTClientManager * mqttClientManager;                                                   //@synthesize mqttClientManager=_mqttClientManager - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                                             //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign,nonatomic) BOOL running;                                                                              //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL shouldStart;                                                                          //@synthesize shouldStart=_shouldStart - In the implementation block
@property (nonatomic,retain) MNActiveParticipantMQTTPublisher * activeParticipantPublisher;                             //@synthesize activeParticipantPublisher=_activeParticipantPublisher - In the implementation block
@property (nonatomic,retain) UIApplication * application;                                                               //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                                                 //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<MNMQTTListenerManaging> listenerManager;                                                //@synthesize listenerManager=_listenerManager - In the implementation block
@property (nonatomic,retain) id<FBMMQTTTopicConfiguring> mqttTopicConfigurer;                                           //@synthesize mqttTopicConfigurer=_mqttTopicConfigurer - In the implementation block
@property (nonatomic,copy) NSArray * mqttListenerList;                                                                  //@synthesize mqttListenerList=_mqttListenerList - In the implementation block
@property (nonatomic,retain) FBMMQTTSender * legacySender;                                                              //@synthesize legacySender=_legacySender - In the implementation block
@property (nonatomic,retain) VOIPConfiguration * voipConfig;                                                            //@synthesize voipConfig=_voipConfig - In the implementation block
@property (nonatomic,retain) VOIPConfigurationChecker * voipConfigurationChecker;                                       //@synthesize voipConfigurationChecker=_voipConfigurationChecker - In the implementation block
@property (nonatomic,retain) MNOnlineStatusManager * onlineStatusManager;                                               //@synthesize onlineStatusManager=_onlineStatusManager - In the implementation block
@property (nonatomic,retain) MNMQTTCredentialsFetcher * mqttCredentialsFetcher;                                         //@synthesize mqttCredentialsFetcher=_mqttCredentialsFetcher - In the implementation block
@property (nonatomic,retain) id<FBUserAgentFormatting> mqttUserAgentFormatter;                                          //@synthesize mqttUserAgentFormatter=_mqttUserAgentFormatter - In the implementation block
@property (nonatomic,retain) MNMQTTSender * sender;                                                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) FBMobileConfigFactory * mobileConfigFactory;                                               //@synthesize mobileConfigFactory=_mobileConfigFactory - In the implementation block
@property (nonatomic,retain) FBReachabilityAnnouncer * reachabilityAnnouncer;                                           //@synthesize reachabilityAnnouncer=_reachabilityAnnouncer - In the implementation block
@property (nonatomic,retain) MNSyncProtocolPublisher * syncProtocolPublisher;                                           //@synthesize syncProtocolPublisher=_syncProtocolPublisher - In the implementation block
@property (nonatomic,retain) FBMNetworkProtocolController * networkProtocolController;                                  //@synthesize networkProtocolController=_networkProtocolController - In the implementation block
@property (nonatomic,retain) id<FBMNetworkProtocolChangeListener> networkProtocolChangeListenerDispatcher;              //@synthesize networkProtocolChangeListenerDispatcher=_networkProtocolChangeListenerDispatcher - In the implementation block
@property (nonatomic,retain) MNMessagingRegionProvider * messagingRegionProvider;                                       //@synthesize messagingRegionProvider=_messagingRegionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusTextForMQTTState:(int)arg1 reachabilityState:(unsigned long long)arg2 ;
+(BOOL)shouldShowSpinnerForStatus:(int)arg1 reachabilityState:(unsigned long long)arg2 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)voipConfigurationChecker:(id)arg1 didGetResult:(id)arg2 ;
-(VOIPConfigurationChecker *)voipConfigurationChecker;
-(FBReachabilityAnnouncer *)reachabilityAnnouncer;
-(void)setReachabilityAnnouncer:(FBReachabilityAnnouncer *)arg1 ;
-(unsigned long long)_clientCapabilities;
-(FBMobileConfigFactory *)mobileConfigFactory;
-(void)networkProtocolDidChange:(unsigned long long)arg1 ;
-(void)stopMQTT;
-(id)initWithUserSession:(id)arg1 userDefaults:(id)arg2 application:(id)arg3 notificationCenter:(id)arg4 listenerManager:(id)arg5 mqttTopicConfigurer:(id)arg6 legacySender:(id)arg7 VOIPConfigurationChecker:(id)arg8 onlineStatusManager:(id)arg9 activeParticipantPublisher:(id)arg10 mqttClientManager:(id)arg11 mqttCredentialsFetcher:(id)arg12 mqttUserAgentFormatter:(id)arg13 syncProtocolPublisher:(id)arg14 networkProtocolController:(id)arg15 sender:(id)arg16 mobileConfigFactory:(id)arg17 reachabilityAnnouncer:(id)arg18 messagingRegionProvider:(id)arg19 ;
-(void)startMQTT;
-(void)setShouldStart:(BOOL)arg1 ;
-(VOIPConfiguration *)voipConfig;
-(void)runMQTT:(BOOL)arg1 ;
-(BOOL)setVOIPCapability;
-(FBMQTTClientManager *)mqttClientManager;
-(id)mqttClientID;
-(void)handleDidBecomeActive:(id)arg1 ;
-(void)handleDidEnterBackground:(id)arg1 ;
-(void)onMQTTConnectedChanged:(id)arg1 ;
-(void)_onSessionStoreKeychainDidUnlock:(id)arg1 ;
-(void)_receivedBackgroundAPNS;
-(void)_processedBackgroundAPNS;
-(void)setMqttListenerList:(NSArray *)arg1 ;
-(NSArray *)mqttListenerList;
-(void)setClientManagerFromConfig;
-(void)handlePersistentConnectionEnabled;
-(void)updateVOIPCapability;
-(void)setMqttClientManager:(FBMQTTClientManager *)arg1 ;
-(void)stopIfRunning;
-(void)setVoipConfig:(VOIPConfiguration *)arg1 ;
-(id<MNMQTTListenerManaging>)listenerManager;
-(void)onSandBoxSettingsChanged;
-(void)sandboxSettingChanged:(id)arg1 ;
-(void)runMQTT;
-(void)invalidateUserSession;
-(double)connectionStatusUpdateDelay;
-(MNActiveParticipantMQTTPublisher *)activeParticipantPublisher;
-(void)setActiveParticipantPublisher:(MNActiveParticipantMQTTPublisher *)arg1 ;
-(void)setListenerManager:(id<MNMQTTListenerManaging>)arg1 ;
-(id<FBMMQTTTopicConfiguring>)mqttTopicConfigurer;
-(void)setMqttTopicConfigurer:(id<FBMMQTTTopicConfiguring>)arg1 ;
-(FBMMQTTSender *)legacySender;
-(void)setLegacySender:(FBMMQTTSender *)arg1 ;
-(void)setVoipConfigurationChecker:(VOIPConfigurationChecker *)arg1 ;
-(MNOnlineStatusManager *)onlineStatusManager;
-(void)setOnlineStatusManager:(MNOnlineStatusManager *)arg1 ;
-(MNMQTTCredentialsFetcher *)mqttCredentialsFetcher;
-(void)setMqttCredentialsFetcher:(MNMQTTCredentialsFetcher *)arg1 ;
-(id<FBUserAgentFormatting>)mqttUserAgentFormatter;
-(void)setMqttUserAgentFormatter:(id<FBUserAgentFormatting>)arg1 ;
-(void)setMobileConfigFactory:(FBMobileConfigFactory *)arg1 ;
-(MNSyncProtocolPublisher *)syncProtocolPublisher;
-(void)setSyncProtocolPublisher:(MNSyncProtocolPublisher *)arg1 ;
-(FBMNetworkProtocolController *)networkProtocolController;
-(void)setNetworkProtocolController:(FBMNetworkProtocolController *)arg1 ;
-(id<FBMNetworkProtocolChangeListener>)networkProtocolChangeListenerDispatcher;
-(void)setNetworkProtocolChangeListenerDispatcher:(id<FBMNetworkProtocolChangeListener>)arg1 ;
-(MNMessagingRegionProvider *)messagingRegionProvider;
-(void)setMessagingRegionProvider:(MNMessagingRegionProvider *)arg1 ;
-(void)setApplication:(UIApplication *)arg1 ;
-(void)restart;
-(void)dealloc;
-(int)state;
-(MNMQTTSender *)sender;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setSender:(MNMQTTSender *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(BOOL)shouldStart;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)isConnected;
-(BOOL)running;
-(UIApplication *)application;
@end


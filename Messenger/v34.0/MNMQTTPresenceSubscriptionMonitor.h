/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNMQTTPresenceSubscriptionListener;
@class NSNotificationCenter;

@interface MNMQTTPresenceSubscriptionMonitor : NSObject {

	NSNotificationCenter* _notificationCenter;
	long long _applicationState;
	int _mqttState;
	id<MNMQTTPresenceSubscriptionListener> _listener;

}

@property (assign,nonatomic,__weak) id<MNMQTTPresenceSubscriptionListener> listener;              //@synthesize listener=_listener - In the implementation block
-(void)_beginMonitoringNotifications;
-(void)_onMQTTConnectionStatusChange:(id)arg1 ;
-(void)_onApplicationActive;
-(void)_onApplicationBackground;
-(void)_checkStatusAndNotifyListenerAfterMutation:(/*^block*/id)arg1 ;
-(BOOL)isSubscribedToPresenceUpdates;
-(id)initWithApplication:(id)arg1 notificationCenter:(id)arg2 ;
-(void)dealloc;
-(id<MNMQTTPresenceSubscriptionListener>)listener;
-(void)setListener:(id<MNMQTTPresenceSubscriptionListener>)arg1 ;
@end


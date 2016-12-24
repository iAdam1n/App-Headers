/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMessageLiveLocationThreadSummaryListener.h>
#import <Messenger/MNServiceControllable.h>

@protocol OS_dispatch_queue;
@class NSObject, MNMessageLiveLocationOutgoingManagerInjector, MNMessageLiveLocationLocationManager, MNMessageLiveLocationUpdaterEntryMap, MNMessageLiveLocationOutgoingListenerAnnouncer, MNMessageLiveLocationAnalyticsLogger, MNMessageLiveLocationUpdaterEventsLogHandler, NSString;

@interface MNMessageLiveLocationOutgoingManager : NSObject <FBClassInjectable, MNMessageLiveLocationThreadSummaryListener, MNServiceControllable> {

	NSObject*<OS_dispatch_queue> _queue;
	MNMessageLiveLocationOutgoingManagerInjector* _injector;
	MNMessageLiveLocationLocationManager* _locationManager;
	MNMessageLiveLocationUpdaterEntryMap* _entryMap;
	MNMessageLiveLocationOutgoingListenerAnnouncer* _outgoingAnnouncer;
	MNMessageLiveLocationAnalyticsLogger* _analyticsLogger;
	MNMessageLiveLocationUpdaterEventsLogHandler* _eventLogHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(BOOL)isSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(void)stopSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 source:(long long)arg3 ;
-(BOOL)isSendingLocationUpdatesForThreadKey:(id)arg1 ;
-(id)expirationTimeForLocationUpdatesForThreadKey:(id)arg1 ;
-(void)startSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 duration:(double)arg3 ;
-(void)stopSendingLocationUpdatesForThreadKey:(id)arg1 source:(long long)arg2 ;
-(void)updatedLiveLocationForThreadKey:(id)arg1 updatedLiveLocation:(id)arg2 allLiveLocations:(id)arg3 ;
-(void)threadSummaryReplacedForThreadKey:(id)arg1 originalSummary:(id)arg2 withThreadSummary:(id)arg3 ;
-(void)purgedAllThreadSummaries;
-(void)_didReceiveLocationManagerUpdateWithLocation:(id)arg1 ;
-(void)_didReceiveLocationManagerError:(id)arg1 ;
-(void)_resumeLiveLocationsIfNecessary;
-(void)_startSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 duration:(double)arg3 ;
-(void)_stopSendingLocationUpdatesForThreadKey:(id)arg1 source:(long long)arg2 ;
-(void)_stopSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 source:(long long)arg3 ;
-(void)_createLocationManagerIfNecessary;
-(void)_resumeSendingLocationUpdatesForThreadKey:(id)arg1 entry:(id)arg2 ;
-(BOOL)_shouldSendLocationUpdates;
-(void)_logLocationUpdate;
-(void)_liveLocationTimerElapsedForThreadKey:(id)arg1 ;
-(void)_stopRequestingLocationUpdatesIfNecessary;
-(void)_sendExpirationRequestWithMessageLiveLocationId:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)handleIdle;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNLastActivityTracking.h>

@protocol FBClock;
@class NSNotificationCenter, NSMutableDictionary, MNLastActivityTrackingListeningAnnouncer, NSString;

@interface MNTypingLastActivityTracker : NSObject <FBSessionClassProvidable, MNLastActivityTracking> {

	NSNotificationCenter* _notificationCenter;
	id<FBClock> _clock;
	NSMutableDictionary* _personIdToLastActiveMap;
	NSMutableDictionary* _personIdToLastUpdateMap;
	MNLastActivityTrackingListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addLastActivityTrackingListener:(id)arg1 ;
-(id)personIdToLastActivityMap;
-(id)lastUpdateTimeForPersonWithId:(id)arg1 ;
-(id)lastActivityDateForPersonWithId:(id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 clock:(id)arg2 ;
-(void)_startNotificationObservations;
-(void)_stopNotificationObservations;
-(void)removeLastActivityTrackingListener:(id)arg1 ;
-(void)_didReceiveTypingNotification:(id)arg1 ;
-(void)_updateLastActiveTimeForPersonWithId:(id)arg1 typingState:(int)arg2 ;
-(void)dealloc;
@end


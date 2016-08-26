/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBadgeCountChangedListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNSecureMessagingBadgeCounting;
@class MNInboxTabBadgeCounterListeningAnnouncer, FBLazyCreator, MNPendingRequestsBadgeCounter, MNSyncedInboxBadgeCounter, NSString;

@interface MNInboxTabBadgeCounter : NSObject <MNBadgeCountChangedListening, FBViewerContextClassProvidable> {

	MNInboxTabBadgeCounterListeningAnnouncer* _announcer;
	FBLazyCreator* _threadStatusManagerCreator;
	MNPendingRequestsBadgeCounter* _pendingRequestBadgeCounter;
	MNSyncedInboxBadgeCounter* _syncedInboxBadgeCounter;
	id<MNSecureMessagingBadgeCounting> _secureMessageBadgeCounter;
	unsigned long long _badgeCount;
	unsigned long long _cachedBadgeCount;

}

@property (assign) unsigned long long cachedBadgeCount;              //@synthesize cachedBadgeCount=_cachedBadgeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_updateCachedCountIfNecessary;
-(id)initWithSyncedInboxBadgeCounter:(id)arg1 pendingRequestBadgeCounter:(id)arg2 secureMessageBadgeCounter:(id)arg3 threadStatusManagerProvider:(id)arg4 badgeCountChangedAnnouncer:(id)arg5 ;
-(unsigned long long)cachedBadgeCount;
-(void)setCachedBadgeCount:(unsigned long long)arg1 ;
-(void)didUpdateBadgeSourceStates:(id)arg1 ;
-(unsigned long long)badgeCountExcludingCurrentlyViewedThread;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)badgeCount;
@end

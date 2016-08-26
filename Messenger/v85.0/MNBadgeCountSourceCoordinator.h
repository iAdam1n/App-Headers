/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBadgeCountUpdateWriting, OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSObject;

@interface MNBadgeCountSourceCoordinator : NSObject {

	NSDictionary* _restoredBadgeCounts;
	NSMutableDictionary* _adapters;
	id<MNBadgeCountUpdateWriting> _badgeCountWriter;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithWriter:(id)arg1 restoredBadgeCounts:(id)arg2 queue:(id)arg3 ;
-(id)registerBadgeCountSource:(long long)arg1 ;
-(BOOL)isBadgeCountAdapterRegisteredForSource:(long long)arg1 ;
@end

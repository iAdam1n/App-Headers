/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
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

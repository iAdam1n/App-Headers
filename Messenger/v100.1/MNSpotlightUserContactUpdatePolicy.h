/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSearchableItemTracker, MNSpotlightIndexPolicy;

@interface MNSpotlightUserContactUpdatePolicy : NSObject {

	MNSearchableItemTracker* _searchableItemTracker;
	MNSpotlightIndexPolicy* _indexPolicy;

}
-(id)initWithSearchableItemTracker:(id)arg1 indexPolicy:(id)arg2 ;
-(id)contactSyncUsersToPrepareWithContactUpdate:(id)arg1 ;
-(id)contactSyncUsersToIndexWithNoImageWithContactUpdate:(id)arg1 ;
@end

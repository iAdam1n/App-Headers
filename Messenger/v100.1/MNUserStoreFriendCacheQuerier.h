/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNUserQuerying;
@class MNSyncStoreLRUUserCache, FBAnalytics;

@interface MNUserStoreFriendCacheQuerier : NSObject {

	id<MNUserQuerying> _userQuerier;
	MNSyncStoreLRUUserCache* _userCache;
	FBAnalytics* _analytics;

}
-(void)fetchPeopleWithIds:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(id)initWithUserQuerier:(id)arg1 userCache:(id)arg2 analytics:(id)arg3 ;
-(void)fetchPersonWithId:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
@end

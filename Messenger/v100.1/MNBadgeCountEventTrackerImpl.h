/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, FBUserSession, NSArray;

@interface MNBadgeCountEventTrackerImpl : NSObject {

	long long _limit;
	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;
	FBUserSession* _userSession;
	NSArray* _badgeUpdateHistory;

}

@property (copy) NSArray * badgeUpdateHistory;              //@synthesize badgeUpdateHistory=_badgeUpdateHistory - In the implementation block
-(id)initWithUserSession:(id)arg1 recordLimit:(long long)arg2 userDefaults:(id)arg3 writeQueue:(id)arg4 ;
-(id)storedBadgingInfo;
-(void)writeAppBadgeCount:(long long)arg1 badgeCountSource:(long long)arg2 time:(double)arg3 waitForComplete:(BOOL)arg4 completeBlock:(/*^block*/id)arg5 ;
-(void)clearBadgeCountHistory;
-(void)setBadgeUpdateHistory:(NSArray *)arg1 ;
-(NSArray *)badgeUpdateHistory;
@end

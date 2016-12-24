/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableArray, NSArray;

@interface FBAppInviteBlockSettingsStore : NSObject {

	FBUserSession* _session;
	NSMutableArray* _blockedApps;
	NSMutableArray* _blockedUsers;

}

@property (nonatomic,copy,readonly) NSArray * blockedApps;               //@synthesize blockedApps=_blockedApps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blockedUsers;              //@synthesize blockedUsers=_blockedUsers - In the implementation block
-(void)_updateFromResponse:(id)arg1 ;
-(unsigned long long)_removeObject:(id)arg1 fromMutableArray:(id)arg2 ;
-(void)reloadFromNetworkWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)removeBlockedUser:(id)arg1 ;
-(unsigned long long)removeBlockedApp:(id)arg1 ;
-(NSArray *)blockedApps;
-(NSArray *)blockedUsers;
-(id)initWithSession:(id)arg1 ;
@end

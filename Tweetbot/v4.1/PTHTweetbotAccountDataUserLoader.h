/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataLoader.h>

@class NSDate, NSMutableArray;

@interface PTHTweetbotAccountDataUserLoader : PTHTweetbotAccountDataLoader {

	NSDate* _lastLoadedDate;
	unsigned long long _searchCounter;
	NSMutableArray* _updateUsers;

}
-(BOOL)canUpdate;
-(void)dispatchFindUsers:(id)arg1 options:(unsigned long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithAccountData:(id)arg1 ;
-(id)setup:(id)arg1 userVersion:(long long)arg2 ;
-(id)verify:(id)arg1 ;
-(void)_updateUser:(id)arg1 ;
-(id)userWithTIDValue:(id)arg1 connection:(id)arg2 ;
-(void)updateIfNeeded;
-(void)dealloc;
-(void)update;
-(id)tableName;
@end


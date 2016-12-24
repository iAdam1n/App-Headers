/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataLoader.h>

@class NSDate, NSMutableArray;

@interface PTHTweetbotAccountDataUserLoader : PTHTweetbotAccountDataLoader {

	NSDate* _lastLoadedDate;
	unsigned long long _searchCounter;
	NSMutableArray* _updateUsers;

}
-(void)dispatchFindUsers:(id)arg1 options:(unsigned long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithAccountData:(id)arg1 ;
-(id)setup:(id)arg1 userVersion:(long long)arg2 ;
-(id)verify:(id)arg1 ;
-(void)_updateUser:(id)arg1 ;
-(BOOL)canUpdate;
-(id)userWithTIDValue:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
-(void)updateIfNeeded;
-(void)update;
-(id)tableName;
@end

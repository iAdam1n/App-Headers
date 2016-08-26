/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
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
-(void)update;
-(id)tableName;
-(void)updateIfNeeded;
@end

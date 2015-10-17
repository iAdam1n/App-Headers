/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataLoader.h>

@class NSDate, NSString;

@interface PTHTweetbotAccountDataTIDLoader : PTHTweetbotAccountDataLoader {

	NSDate* _lastUpdate;
	NSDate* _lastLoadedDate;
	unsigned long long _updatedCount;
	unsigned long long _loadedCount;
	long long _nextCursor;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)setup:(id)arg1 userVersion:(long long)arg2 ;
+(id)verify:(id)arg1 ;
-(void)addTIDValue:(id)arg1 ;
-(void)removeTIDValue:(id)arg1 ;
-(id)setup:(id)arg1 userVersion:(long long)arg2 ;
-(id)verify:(id)arg1 ;
-(BOOL)containsTIDValue:(id)arg1 connection:(id)arg2 ;
-(id)matchingTIDs:(id)arg1 connection:(id)arg2 ;
-(BOOL)shouldUpdate;
-(void)updateIfNeeded;
-(NSString *)path;
-(void)log:(/*^block*/id)arg1 ;
@end

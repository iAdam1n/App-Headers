/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataMonitor.h>

@class NSDate, NSArray, NSDictionary;

@interface PTHTweetbotAccountDataStatisticsMonitor : PTHTweetbotAccountDataMonitor {

	NSDate* _lastLookupDate;
	BOOL _isUpdatingRecentStatuses;
	BOOL _isUpdatingRecentFollowers;
	BOOL _isUpdatingRecentDailyInteractionCounts;
	NSArray* _recentStatuses;
	NSDictionary* _recentDailyInteractionCounts;
	NSArray* _recentFollowers;

}

@property (nonatomic,copy) NSArray * recentStatuses;                                 //@synthesize recentStatuses=_recentStatuses - In the implementation block
@property (nonatomic,copy) NSDictionary * recentDailyInteractionCounts;              //@synthesize recentDailyInteractionCounts=_recentDailyInteractionCounts - In the implementation block
@property (nonatomic,copy) NSArray * recentFollowers;                                //@synthesize recentFollowers=_recentFollowers - In the implementation block
-(void)setRecentDailyInteractionCounts:(NSDictionary *)arg1 ;
-(NSDictionary *)recentDailyInteractionCounts;
-(NSArray *)recentStatuses;
-(id)initWithAccountData:(id)arg1 ;
-(void)update:(BOOL)arg1 streamed:(BOOL)arg2 ;
-(void)setRecentStatuses:(NSArray *)arg1 ;
-(void)setRecentFollowers:(NSArray *)arg1 ;
-(void)_updateRecentStatuses:(BOOL)arg1 ;
-(void)_updateRecentDailyInteractionCounts;
-(void)_updateRecentFollowers;
-(NSArray *)recentFollowers;
-(id)init;
-(void)_sendDidChange;
@end


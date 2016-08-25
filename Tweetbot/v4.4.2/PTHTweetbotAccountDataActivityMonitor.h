/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataMonitor.h>

@class NSMutableOrderedSet, NSMutableSet, NSMutableArray, NSArray;

@interface PTHTweetbotAccountDataActivityMonitor : PTHTweetbotAccountDataMonitor {

	NSMutableOrderedSet* _interactions;
	BOOL _isUpdating;
	NSMutableSet* _badStatusTIDs;
	NSMutableSet* _badUserTIDs;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,copy,readonly) NSArray * interactions; 
-(id)initWithAccountData:(id)arg1 ;
-(void)update:(BOOL)arg1 streamed:(BOOL)arg2 ;
-(void)updateInteractionsIfNeeded:(/*^block*/id)arg1 ;
-(NSArray *)interactions;
@end


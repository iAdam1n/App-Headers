/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserCursor.h>

@interface PTHTweetbotUserTimelineCursor : PTHTweetbotUserCursor {

	unsigned long long _fetchCount;

}

@property (assign,nonatomic) unsigned long long fetchCount;              //@synthesize fetchCount=_fetchCount - In the implementation block
+(Class)pagerClass;
+(Class)itemClass;
-(id)initWithTweetbotUser:(id)arg1 ;
-(void)setFetchCount:(unsigned long long)arg1 ;
-(BOOL)hasReadStatus;
-(id)requestURLString;
-(unsigned long long)fetchCount;
-(id)queryDictionary;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserTimelineCursor.h>

@interface _PTHTweetbotStatusPossibleReplyCursor : PTHTweetbotUserTimelineCursor {

	long long _statusTID;

}

@property (nonatomic,readonly) long long statusTID;              //@synthesize statusTID=_statusTID - In the implementation block
+(Class)pagerClass;
-(long long)statusTID;
-(id)newItemWithDictionary:(id)arg1 ;
-(id)initWithTweetbotUser:(id)arg1 replyStatus:(id)arg2 ;
-(id)queryDictionary;
@end


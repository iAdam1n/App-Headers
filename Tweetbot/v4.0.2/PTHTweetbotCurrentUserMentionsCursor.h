/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@interface PTHTweetbotCurrentUserMentionsCursor : PTHTweetbotCursor
+(unsigned long long)itemSaveCount;
+(Class)itemClass;
-(BOOL)canAddItem:(id)arg1 ;
-(void)_loadQuotesSinceTID:(long long)arg1 maxTID:(long long)arg2 newMentions:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)reallyLoadNewer:(/*^block*/id)arg1 ;
-(void)reallyLoadOlder:(/*^block*/id)arg1 ;
-(void)reallyLoadGap:(/*^block*/id)arg1 ;
-(void)_removeBlockedUser:(id)arg1 ;
-(BOOL)hasReadStatus;
-(BOOL)usesTIDPagination;
-(BOOL)canSync;
-(id)requestURLString;
-(id)queryDictionary;
-(void)dealloc;
-(void)setAccount:(id)arg1 ;
@end

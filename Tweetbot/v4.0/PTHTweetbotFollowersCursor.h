/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserCursor.h>

@interface PTHTweetbotFollowersCursor : PTHTweetbotUserCursor
+(Class)itemClass;
-(BOOL)needsSort;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(id)newItemWithDictionary:(id)arg1 ;
-(BOOL)usesCursorPagination;
-(void)processItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)queryDictionary;
@end


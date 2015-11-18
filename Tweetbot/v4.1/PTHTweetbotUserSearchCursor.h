/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class NSString;

@interface PTHTweetbotUserSearchCursor : PTHTweetbotCursor {

	NSString* _query;

}

@property (nonatomic,copy,readonly) NSString * query;              //@synthesize query=_query - In the implementation block
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 query:(id)arg2 ;
-(BOOL)needsSort;
-(id)requestURLString;
-(id)queryDictionary;
-(NSString *)query;
-(id)uniqueID;
@end

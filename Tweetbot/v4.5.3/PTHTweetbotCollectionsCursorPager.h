/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursorPager.h>

@class NSString;

@interface PTHTweetbotCollectionsCursorPager : PTHTweetbotCursorPager {

	NSString* _nextCursor;

}

@property (nonatomic,readonly) NSString * nextCursor;              //@synthesize nextCursor=_nextCursor - In the implementation block
-(BOOL)hasOlder;
-(id)loadOlderQueryDictionary;
-(void)handleError:(id)arg1 requestType:(int)arg2 ;
-(void)handleResponseValue:(id)arg1 itemDictionaries:(id)arg2 requestType:(int)arg3 ;
-(NSString *)nextCursor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
@end

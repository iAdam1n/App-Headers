/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PTHTweetbotRateLimit : NSObject {

	unsigned long long _limit;
	unsigned long long _remaining;
	NSString* _key;
	NSDate* _resetDate;

}

@property (assign,nonatomic) unsigned long long limit;                       //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) unsigned long long remaining;                   //@synthesize remaining=_remaining - In the implementation block
@property (nonatomic,retain) NSDate * resetDate;                             //@synthesize resetDate=_resetDate - In the implementation block
@property (nonatomic,copy) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long resetMinutes; 
@property (nonatomic,readonly) BOOL isCurrent; 
@property (nonatomic,readonly) BOOL isLow; 
+(id)newWithURLResponse:(id)arg1 ;
+(id)keyForPath:(id)arg1 ;
-(BOOL)isLow;
-(unsigned long long)resetMinutes;
-(void)setResetDate:(NSDate *)arg1 ;
-(NSDate *)resetDate;
-(id)description;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isCurrent;
-(unsigned long long)remaining;
-(void)setRemaining:(unsigned long long)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end


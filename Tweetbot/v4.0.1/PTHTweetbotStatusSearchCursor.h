/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class NSString, CLCircularRegion;

@interface PTHTweetbotStatusSearchCursor : PTHTweetbotCursor {

	NSString* _query;
	NSString* _resultType;
	CLCircularRegion* _region;

}

@property (nonatomic,copy,readonly) NSString * query;                   //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultType;              //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                 //@synthesize region=_region - In the implementation block
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 query:(id)arg2 resultType:(id)arg3 ;
-(BOOL)canAddItem:(id)arg1 ;
-(BOOL)hasReadStatus;
-(BOOL)usesTIDPagination;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(id)queryDictionary;
-(NSString *)query;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(CLCircularRegion *)region;
-(id)uniqueID;
-(NSString *)resultType;
@end


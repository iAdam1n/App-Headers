/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GADCSIConfiguration, NSObject, NSMutableDictionary, NSString;

@interface GADCSI : NSObject {

	GADCSIConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _lockQueue;
	long long _requestCount;
	NSMutableDictionary* _timeRecorders;
	NSMutableDictionary* _timestamps;
	NSString* _GWSQueryID;

}

@property (getter=WSQueryID,copy) NSString * GWSQueryID;              //@synthesize GWSQueryID=_GWSQueryID - In the implementation block
+(id)sharedInstance;
-(id)timeRecorderForAction:(id)arg1 ;
-(void)recordTimestampForLabel:(id)arg1 ;
-(void)setTimestamp:(long long)arg1 forLabel:(id)arg2 ;
-(long long)timestampForLabel:(id)arg1 ;
-(void)sendReport;
-(NSString *)GWSQueryID;
-(void)setGWSQueryID:(NSString *)arg1 ;
-(id)init;
@end

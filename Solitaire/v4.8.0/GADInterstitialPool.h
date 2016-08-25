/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, GADRequest, NSString;

@interface GADInterstitialPool : NSObject {

	NSMutableArray* _entries;
	NSObject*<OS_dispatch_queue> _lockQueue;
	GADRequest* _request;
	NSString* _adUnitID;

}

@property (nonatomic,copy,readonly) GADRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSString * adUnitID;               //@synthesize adUnitID=_adUnitID - In the implementation block
-(NSString *)adUnitID;
-(id)initWithRequest:(id)arg1 adUnitID:(id)arg2 ;
-(void)fillQueue;
-(void)scheduleTimeout:(double)arg1 cacheEntry:(id)arg2 ;
-(void)addCacheEntryWithTimeout:(double)arg1 maxCount:(long long)arg2 ;
-(id)init;
-(GADRequest *)request;
-(id)nextEntry;
@end


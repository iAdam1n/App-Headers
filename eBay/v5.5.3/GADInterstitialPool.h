/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, GADRequest, NSObject, NSString;

@interface GADInterstitialPool : NSObject {

	NSMutableArray* _entries;
	GADRequest* _request;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSString* _adUnitID;

}

@property (copy) GADRequest * request; 
@property (nonatomic,copy,readonly) NSString * adUnitID;              //@synthesize adUnitID=_adUnitID - In the implementation block
-(NSString *)adUnitID;
-(id)initWithRequest:(id)arg1 adUnitID:(id)arg2 ;
-(void)fillQueue;
-(void)scheduleTimeout:(double)arg1 cacheEntry:(id)arg2 ;
-(void)addCacheEntryWithTimeout:(double)arg1 maxCount:(long long)arg2 ;
-(id)init;
-(GADRequest *)request;
-(id)nextEntry;
-(void)setRequest:(GADRequest *)arg1 ;
@end

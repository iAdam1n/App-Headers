/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, GADScheduler, NSMutableArray, NSMutableSet;

@interface GADPinger : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	GADScheduler* _scheduler;
	long long _maximumRetryURLCount;
	long long _URLRetryCount;
	NSMutableArray* _retryGroupKeys;
	NSMutableSet* _pingedURLs;

}
+(id)sharedInstance;
-(void)removeRetryURLString:(id)arg1 retryGroupKey:(id)arg2 ;
-(void)pingURLString:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)storeRetryURLString:(id)arg1 retryGroupKey:(id)arg2 ;
-(void)pingRetryURLs;
-(void)pingWithRetryGroupKey:(id)arg1 URL:(id)arg2 retryURLString:(id)arg3 ;
-(id)init;
-(void)start;
@end


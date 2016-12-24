/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface FlurryPreCacheEventManager : NSObject {

	NSMutableArray* _log;
	NSMutableArray* _preCacheEventLog;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSMutableArray * preCacheEventLog;                         //@synthesize preCacheEventLog=_preCacheEventLog - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * log;                                      //@synthesize log=_log - In the implementation block
+(id)sharedInstance;
-(void)processWriteSyncWithBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)preCacheEventLog;
-(void)setPreCacheEventLog:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)log;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLog:(NSMutableArray *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface FBAdConcurrentQueue : NSObject {

	NSMutableArray* _storage;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * storage;                        //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)pop:(/*^block*/id)arg1 ;
-(void)peek:(/*^block*/id)arg1 ;
-(void)popAll:(/*^block*/id)arg1 ;
-(NSMutableArray *)storage;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStorage:(NSMutableArray *)arg1 ;
-(void)pushObject:(id)arg1 ;
@end


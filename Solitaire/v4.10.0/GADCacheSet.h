/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface GADCacheSet : NSObject {

	id<NSObject> _observer;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSMutableSet* _set;
	unsigned long long _maxCapacity;

}

@property (nonatomic,readonly) unsigned long long maxCapacity;              //@synthesize maxCapacity=_maxCapacity - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)anyObject;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(unsigned long long)maxCapacity;
@end

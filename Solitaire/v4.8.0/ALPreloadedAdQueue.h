/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSObject;

@interface ALPreloadedAdQueue : NSObject {

	unsigned long long maxCapacity;
	NSMutableArray* backingArray;
	NSObject* queueLock;

}

@property (assign) unsigned long long maxCapacity; 
@property (getter=isEmpty,readonly) BOOL empty; 
@property (getter=isFull,readonly) BOOL full; 
@property (nonatomic,retain) NSMutableArray * backingArray; 
@property (nonatomic,retain) NSObject * queueLock; 
-(id)dequeueAd;
-(void)enqueueAd:(id)arg1 ;
-(void)setBackingArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)backingArray;
-(void)setQueueLock:(NSObject *)arg1 ;
-(NSObject *)queueLock;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)currentSize;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(unsigned long long)maxCapacity;
-(BOOL)isFull;
@end


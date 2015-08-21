/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/FrQCallback.h>

@protocol FrQCallback;
@class NSMutableArray, NSObject;

@interface FRQueue : NSObject <FrQCallback> {

	unsigned long long head;
	unsigned long long tail;
	unsigned long long qCapacity;
	unsigned long long availableCapacity;
	NSMutableArray* queue;
	id<FrQCallback> callbackObject;
	NSObject* NilObject;

}

@property (readonly) unsigned long long qCapacity; 
@property (assign) unsigned long long head; 
@property (assign) unsigned long long tail; 
@property (assign) unsigned long long availableCapacity; 
@property (retain) NSMutableArray * queue; 
@property (nonatomic,retain) id<FrQCallback> callbackObject; 
@property (nonatomic,retain) NSObject * NilObject; 
+(BOOL)QueueEntries:(int)arg1 count:(int)arg2 queue:(id)arg3 ;
+(BOOL)DequeueEntries:(int)arg1 count:(int)arg2 queue:(id)arg3 ;
+(BOOL)simpleQueueTest:(id)arg1 ;
+(BOOL)TestQueue;
-(BOOL)IncrementHead;
-(int)vacancies;
-(BOOL)FrQueueIsFullOrFlush:(id)arg1 ;
-(BOOL)IncrementTail;
-(int)filled;
-(BOOL)Enqueue:(id)arg1 ;
-(id)Dequeue;
-(void)ShowQueueEntries;
-(id)init:(unsigned long long)arg1 callback:(id)arg2 ;
-(id)FlushQueue;
-(unsigned long long)qCapacity;
-(unsigned long long)availableCapacity;
-(void)setAvailableCapacity:(unsigned long long)arg1 ;
-(id<FrQCallback>)callbackObject;
-(void)setCallbackObject:(id<FrQCallback>)arg1 ;
-(NSObject *)NilObject;
-(void)setNilObject:(NSObject *)arg1 ;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(unsigned long long)tail;
-(void)setHead:(unsigned long long)arg1 ;
-(void)setTail:(unsigned long long)arg1 ;
-(unsigned long long)head;
@end


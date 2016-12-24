/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSCache, MPLogEventCommunicator, MPTimer, NSString;

@interface MPLogEventRecorder : NSObject <NSURLConnectionDataDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _events;
	NSCache* _requestIDLoggingCache;
	MPLogEventCommunicator* _communicator;
	MPTimer* _sendTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                                 //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSCache * requestIDLoggingCache;                         //@synthesize requestIDLoggingCache=_requestIDLoggingCache - In the implementation block
@property (nonatomic,retain) MPLogEventCommunicator * communicator;                   //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,retain) MPTimer * sendTimer;                                     //@synthesize sendTimer=_sendTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendEvents;
-(MPTimer *)sendTimer;
-(BOOL)sampleWithLogEvent:(id)arg1 ;
-(BOOL)overQueueLimit;
-(MPLogEventCommunicator *)communicator;
-(NSCache *)requestIDLoggingCache;
-(BOOL)shouldSampleForRate:(double)arg1 diceRoll:(unsigned long long)arg2 ;
-(void)setRequestIDLoggingCache:(NSCache *)arg1 ;
-(void)setCommunicator:(MPLogEventCommunicator *)arg1 ;
-(void)setSendTimer:(MPTimer *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)events;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)sample;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvent:(id)arg1 ;
@end

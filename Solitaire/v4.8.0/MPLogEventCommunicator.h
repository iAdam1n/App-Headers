/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPLogEventCommunicator : NSObject {

	NSObject*<OS_dispatch_queue> _eventProcessingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventProcessingQueue;              //@synthesize eventProcessingQueue=_eventProcessingQueue - In the implementation block
-(BOOL)isOverLimit;
-(void)sendEvents:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventProcessingQueue;
-(id)buildRequestWithEvents:(id)arg1 ;
-(id)makeParamStringForEvents:(id)arg1 ;
-(void)setEventProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
@end


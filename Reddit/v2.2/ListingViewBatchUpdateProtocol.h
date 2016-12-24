/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableArray;


@protocol ListingViewBatchUpdateProtocol <NSObject>
@property (nonatomic,copy) NSMutableArray * currentUpdateQueue; 
@property (assign,nonatomic) BOOL isUpdateQueueBusy; 
@required
-(void)reloadDataSafelyWithObjects:(id)arg1;
-(void)markQueueAsFreeAndTriggerNextUpdate;
-(void)queueNewObjects:(id)arg1 completion:(/*^block*/id)arg2;
-(void)reloadDataSafely;
-(NSMutableArray *)currentUpdateQueue;
-(void)setCurrentUpdateQueue:(id)arg1;
-(BOOL)isUpdateQueueBusy;
-(void)setIsUpdateQueueBusy:(BOOL)arg1;

@end

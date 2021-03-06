/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BITPersistence, BITTelemetryContext, NSObject;

@interface BITChannel : NSObject {

	BITPersistence* _persistence;
	BITTelemetryContext* _telemetryContext;
	unsigned long long _maxBatchCount;
	NSObject*<OS_dispatch_queue> _dataItemsOperations;
	unsigned long long _dataItemCount;

}

@property (nonatomic,retain) BITTelemetryContext * telemetryContext;                        //@synthesize telemetryContext=_telemetryContext - In the implementation block
@property (nonatomic,retain) BITPersistence * persistence;                                  //@synthesize persistence=_persistence - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchCount;                              //@synthesize maxBatchCount=_maxBatchCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataItemsOperations;              //@synthesize dataItemsOperations=_dataItemsOperations - In the implementation block
@property (assign,nonatomic) unsigned long long dataItemCount;                              //@synthesize dataItemCount=_dataItemCount - In the implementation block
-(id)dictionaryForTelemetryData:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataItemsOperations;
-(void)appendDictionaryToJsonStream:(id)arg1 ;
-(void)persistDataItemQueue;
-(id)envelopeForTelemetryData:(id)arg1 ;
-(id)serializeDictionaryToJSONString:(id)arg1 ;
-(id)initWithTelemetryContext:(id)arg1 persistence:(id)arg2 ;
-(BOOL)isQueueBusy;
-(void)enqueueTelemetryItem:(id)arg1 ;
-(BITTelemetryContext *)telemetryContext;
-(void)setTelemetryContext:(BITTelemetryContext *)arg1 ;
-(void)setDataItemsOperations:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)dataItemCount;
-(void)setDataItemCount:(unsigned long long)arg1 ;
-(id)init;
-(void)setMaxBatchCount:(unsigned long long)arg1 ;
-(unsigned long long)maxBatchCount;
-(BITPersistence *)persistence;
-(void)setPersistence:(BITPersistence *)arg1 ;
-(void)resetQueue;
@end


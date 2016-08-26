/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OptimizelyAFHTTPRequestOperationManager;

@interface OptimizelyTimeSeriesEventsManager : NSObject {

	int _exponentialBackoffCallsInFailedState;
	OptimizelyAFHTTPRequestOperationManager* _timeSeriesEventClient;

}

@property (nonatomic,retain) OptimizelyAFHTTPRequestOperationManager * timeSeriesEventClient;              //@synthesize timeSeriesEventClient=_timeSeriesEventClient - In the implementation block
@property (assign,nonatomic) int exponentialBackoffCallsInFailedState;                                     //@synthesize exponentialBackoffCallsInFailedState=_exponentialBackoffCallsInFailedState - In the implementation block
-(void)setTimeSeriesEventClient:(OptimizelyAFHTTPRequestOperationManager *)arg1 ;
-(OptimizelyAFHTTPRequestOperationManager *)timeSeriesEventClient;
-(void)sendTimeSeriesEventsToServer:(id)arg1 ;
-(int)exponentialBackoffCallsInFailedState;
-(void)setExponentialBackoffCallsInFailedState:(int)arg1 ;
-(id)tagData;
-(id)dictionaryFromJSON:(id)arg1 ;
-(void)removeTimeSeriesEvent:(id)arg1 ;
-(void)trackEventWithMetric:(id)arg1 ;
-(void)trackEventWithMetric:(id)arg1 andTimerValue:(long long)arg2 ;
-(void)flushTimeSeriesEvents;
-(void)flushTimeSeriesEventsWithExponentialBackoff;
-(id)jsonStringFromDictionary:(id)arg1 ;
-(void)start;
@end

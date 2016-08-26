/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GMRASLLogger, GMRMonitoringSampledData, NSObject;

@interface GMRMonitor : NSObject {

	long long _logLevel;
	GMRASLLogger* _logger;
	GMRMonitoringSampledData* _monitoringSampledData;
	NSObject*<OS_dispatch_queue> _monitorQueue;
	long long _libraryVersion;

}
+(BOOL)isMonitorableLevel:(long long)arg1 ;
+(id)stringWithLogMessage:(id)arg1 logLevel:(long long)arg2 contexts:(id)arg3 ;
+(id)encodedStringWithContextArray:(id)arg1 ;
+(id)encodedStringWithContextObject:(id)arg1 ;
+(id)logLevelDescriptionFromLogLevel:(long long)arg1 ;
+(id)lastGMRSymbolFromException:(id)arg1 ;
+(BOOL)isSilentLevel:(long long)arg1 ;
+(id)monitoringDataKeyWithMessage:(id)arg1 logLevel:(long long)arg2 libraryVersion:(long long)arg3 ;
+(BOOL)isDebugModeEnabled;
-(void)logWithLevel:(long long)arg1 message:(id)arg2 ;
-(void)logWithLevel:(long long)arg1 message:(id)arg2 context:(id)arg3 ;
-(void)logWithLevel:(long long)arg1 message:(id)arg2 context:(id)arg3 context:(id)arg4 ;
-(void)logWithLevel:(long long)arg1 message:(id)arg2 context:(id)arg3 context:(id)arg4 context:(id)arg5 ;
-(id)initWithLibraryVersion:(long long)arg1 ;
-(id)monitoringDataForDispatchWithSamplePeriod:(double)arg1 lastSampledTimestamp:(double)arg2 ;
-(id)initWithLogLevel:(long long)arg1 logger:(id)arg2 libraryVersion:(long long)arg3 ;
-(void)loadMonitoringDataFromUserDefaults;
-(void)logWithLevel:(long long)arg1 message:(id)arg2 contexts:(id)arg3 ;
-(BOOL)isLoggableLevel:(long long)arg1 ;
-(void)logToConsole:(id)arg1 logLevel:(long long)arg2 ;
-(void)insertOrUpdateMonitoringDataWithMessage:(id)arg1 encodedContext:(id)arg2 logLevel:(long long)arg3 ;
-(void)saveMonitoringDataToUserDefaults;
-(void)setLogLevel:(long long)arg1 ;
@end

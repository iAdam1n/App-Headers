/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface FBAdPerformanceMetrics : NSObject
+(unsigned long long)freeMemoryCount;
+(unsigned long long)totalMemoryCount;
+(unsigned long long)freeDiskCount;
+(id)loadAvgWithPrecision:(double)arg1 ;
+(id)batteryStateWithDeviceBatteryState:(long long)arg1 ;
+(unsigned long long)residentMemoryCount;
+(unsigned long long)virtualMemoryCount;
+(BOOL)getCPUTimeSeconds:(/*^block*/id)arg1 terminatedThreads:(FBAdDeviceCPUTime*)arg2 ;
+(BOOL)absoluteStartTime:(double*)arg1 ;
+(BOOL)lastWakeTime:(double*)arg1 ;
+(BOOL)getNetworkUsage:(FBNetworkUsage*)arg1 ;
+(unsigned)coreCount;
+(FBAdDeviceBatteryInfo)batteryInfo;
@end


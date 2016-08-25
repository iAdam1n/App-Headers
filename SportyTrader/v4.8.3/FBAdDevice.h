/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface FBAdDevice : NSObject
+(FBAdDeviceBatteryInfo)deviceBatteryInfo;
+(unsigned long long)freeMemoryCount;
+(unsigned long long)totalMemoryCount;
+(unsigned long long)freeDiskCount;
+(id)machine;
+(void)initializeAndCacheValues;
+(unsigned)coreCount;
+(BOOL)systemVersionIsGreaterThanOrEqualTo:(id)arg1 ;
+(BOOL)isRunningOnPadInPhoneEmulator;
+(BOOL)systemVersionIsLessThan:(id)arg1 ;
+(id)systemVersion;
+(void)initialize;
+(id)model;
+(id)systemName;
+(void)resetCache;
+(BOOL)supportsCamera;
+(BOOL)isPad;
+(unsigned long long)deviceModel;
+(id)architecture;
@end


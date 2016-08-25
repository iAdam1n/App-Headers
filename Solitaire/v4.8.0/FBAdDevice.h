/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@interface FBAdDevice : NSObject
+(id)machine;
+(FBAdDeviceBatteryInfo)deviceBatteryInfo;
+(unsigned long long)freeMemoryCount;
+(unsigned long long)totalMemoryCount;
+(unsigned long long)freeDiskCount;
+(BOOL)systemVersionIsGreaterThanOrEqualToiOS8;
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


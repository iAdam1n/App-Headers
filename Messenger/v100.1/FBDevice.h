/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBDevice : NSObject
+(BOOL)isSlowerDevice;
+(void)getDeviceIDWithCompletionBlock:(/*^block*/id)arg1 onQueue:(id)arg2 ;
+(id)systemBuildNumber;
+(void)initializeAndCacheValues;
+(unsigned long long)adjustedFillRate;
+(BOOL)supportsRecordingAudio;
+(BOOL)supportsPhone;
+(BOOL)supportsControlOfSoftKeyboardFrame;
+(BOOL)prefersSystemBrowser;
+(unsigned)coreCount;
+(unsigned long long)deviceModelDEPRECATED_DO_NOT_USE;
+(id)machine;
+(BOOL)supportsHighResThumbnails;
+(FBDeviceBatteryInfo)deviceBatteryInfo;
+(BOOL)systemVersionIsLessThan:(id)arg1 ;
+(BOOL)supportsPhoneWithApplication:(id)arg1 ;
+(unsigned long long)freeDiskSpace;
+(BOOL)systemVersionIsGreaterThanOrEqualTo:(id)arg1 ;
+(void)setupFamilyDeviceID:(id)arg1 ;
+(void)_determineAndCacheIsPadOrPhone;
+(BOOL)isiOS;
+(BOOL)isMac;
+(BOOL)isWindows;
+(BOOL)isWindowsPhone;
+(BOOL)isAndroid;
+(BOOL)isLinux;
+(id)networkName;
+(void)initialize;
+(id)systemVersion;
+(id)model;
+(void)resetCache;
+(BOOL)supportsCamera;
+(BOOL)isPad;
+(BOOL)isPhone;
+(id)deviceID;
+(id)networkSSID;
+(id)carrierName;
@end

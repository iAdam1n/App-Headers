/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VungleUtil : NSObject
+(BOOL)isNull:(id)arg1 ;
+(BOOL)validateOSVersion:(id)arg1 againstRequiredOSVersion:(id)arg2 ;
+(id)convertFromSecondsToMilliseconds:(double)arg1 ;
+(void)cancelBlock:(/*^block*/id)arg1 ;
+(BOOL)isNullOrNil:(id)arg1 ;
+(id)dictionaryWithURLQueryString:(id)arg1 ;
+(BOOL)isValidBundleDictionary:(id)arg1 ;
+(unsigned long long)dispatchTimeFromNowToDelta:(long long)arg1 ;
+(BOOL)safeMultiply64BitIntegerX:(long long)arg1 Y:(long long)arg2 result:(long long*)arg3 ;
+(id)applicationSupportDirectoryURL;
+(id)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface OptimizelyDimensionEvaluator : NSObject
+(BOOL)evaluateCustomTagDimension:(id)arg1 ;
+(BOOL)evaluateHasPPIDDimension:(id)arg1 ;
+(BOOL)evaluateAppVersionDimension:(id)arg1 ;
+(BOOL)evaluateDeviceModelDimension:(id)arg1 ;
+(BOOL)evaluateOSVersionDimension:(id)arg1 ;
+(BOOL)evaluateOptimizelySDKVersionDimension:(id)arg1 ;
+(BOOL)evaluateLanguageDimension:(id)arg1 ;
+(BOOL)match:(id)arg1 actual:(id)arg2 ;
+(id)getCustomTags;
+(BOOL)matchContains:(id)arg1 haystack:(id)arg2 ;
+(BOOL)matchRegex:(id)arg1 pattern:(id)arg2 ;
+(BOOL)hasPPID;
+(id)getAppVersion;
+(BOOL)matchNumeric:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 ;
+(id)getLanguage;
+(id)getLocale;
+(id)getOptimizelySDKVersion;
+(id)getOSVersion;
+(id)getDeviceModel;
+(id)getDeviceType;
+(BOOL)evaluateDimension:(id)arg1 ;
@end

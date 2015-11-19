/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface ATUtilities : NSObject
+(void)setupDateFormatters;
+(BOOL)osVersionGreaterThanOrEqualTo:(id)arg1 ;
+(BOOL)emailAddressIsValid:(id)arg1 ;
+(id)stringRepresentationOfDate:(id)arg1 ;
+(id)appVersionString;
+(id)buildNumberString;
+(BOOL)dictionary:(id)arg1 isEqualToDictionary:(id)arg2 ;
+(id)currentSystemName;
+(id)currentSystemVersion;
+(id)currentSystemBuild;
+(id)currentMachineName;
+(id)randomStringOfLength:(unsigned long long)arg1 ;
+(id)imageByScalingImage:(id)arg1 toSize:(CGSize)arg2 scale:(double)arg3 fromITouchCamera:(BOOL)arg4 ;
+(UIEdgeInsets)edgeInsetsOfView:(id)arg1 ;
+(CGAffineTransform)viewTransformInWindow:(id)arg1 ;
+(id)rootViewControllerForCurrentWindow;
+(id)stringByEscapingForURLArguments:(id)arg1 ;
+(id)availableAppLocalizations;
+(id)imageByTakingScreenshotIncludingBlankStatusBarArea:(BOOL)arg1 excludingWindow:(id)arg2 ;
+(id)imageByRotatingImage:(id)arg1 toInterfaceOrientation:(long long)arg2 ;
+(double)rotationOfViewHierarchyInRadians:(id)arg1 ;
+(id)contrastingTextColorForBackgroundColor:(id)arg1 ;
+(double)maxAgeFromCacheControlHeader:(id)arg1 ;
+(id)imageByTakingScreenshotExcludingWindow:(id)arg1 ;
+(id)stringRepresentationOfDate:(id)arg1 timeZone:(id)arg2 ;
+(long long)compareVersionString:(id)arg1 toVersionString:(id)arg2 ;
+(BOOL)bundleVersionIsMainVersion;
+(BOOL)array:(id)arg1 isEqualToArray:(id)arg2 ;
+(id)imageByTakingScreenshot;
+(id)imageByRotatingImage:(id)arg1 byRadians:(double)arg2 ;
+(void)uniquifyArray:(id)arg1 ;
+(BOOL)versionString:(id)arg1 isGreaterThanVersionString:(id)arg2 ;
+(BOOL)versionString:(id)arg1 isLessThanVersionString:(id)arg2 ;
+(BOOL)versionString:(id)arg1 isEqualToVersionString:(id)arg2 ;
+(id)appIcon;
+(id)dateFromISO8601String:(id)arg1 ;
@end


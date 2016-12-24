/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Crystal/Crystal-Structs.h>
@interface FBSDKInternalUtility : NSObject
+(id)queryStringWithDictionary:(id)arg1 error:(id*)arg2 invalidObjectHandler:(/*^block*/id)arg3 ;
+(id)JSONStringForObject:(id)arg1 error:(id*)arg2 invalidObjectHandler:(/*^block*/id)arg3 ;
+(id)topMostViewController;
+(BOOL)isOSRunTimeVersionAtLeast:(SCD_Struct_FB1)arg1 ;
+(id)objectForJSONString:(id)arg1 error:(id*)arg2 ;
+(void)deleteFacebookCookies;
+(BOOL)object:(id)arg1 isEqualToObject:(id)arg2 ;
+(id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id*)arg5 ;
+(id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id*)arg5 ;
+(long long)_compareOperatingSystemVersion:(SCD_Struct_FB1)arg1 toVersion:(SCD_Struct_FB1)arg2 ;
+(id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(/*^block*/id)arg2 stop:(BOOL*)arg3 ;
+(BOOL)isUIKitLinkTimeVersionAtLeast:(int)arg1 ;
+(id)convertRequestValue:(id)arg1 ;
+(BOOL)isUIKitRunTimeVersionAtLeast:(int)arg1 ;
+(id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id*)arg4 ;
+(void)checkRegisteredCanOpenURLScheme:(id)arg1 ;
+(void)array:(id)arg1 addObject:(id)arg2 ;
+(void)validateAppID;
+(BOOL)isRegisteredURLScheme:(id)arg1 ;
+(BOOL)isRegisteredCanOpenURLScheme:(id)arg1 ;
+(id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id*)arg4 ;
+(id)dictionaryFromFBURL:(id)arg1 ;
+(id)bundleForStrings;
+(unsigned long long)currentTimeInMilliseconds;
+(BOOL)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
+(void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 ;
+(BOOL)isBrowserURL:(id)arg1 ;
+(BOOL)shouldManuallyAdjustOrientation;
+(void)registerTransientObject:(id)arg1 ;
+(void)unregisterTransientObject:(id)arg1 ;
+(id)viewControllerforView:(id)arg1 ;
+(BOOL)isFacebookAppInstalled;
+(BOOL)isMessengerAppInstalled;
+(void)validateURLSchemes;
+(BOOL)isFacebookBundleIdentifier:(id)arg1 ;
+(BOOL)isSafariBundleIdentifier:(id)arg1 ;
+(void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3 ;
+(SCD_Struct_FB1)operatingSystemVersion;
+(id)appURLScheme;
-(id)init;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBSettings : NSObject
+(id)resourceBundleName;
+(id)defaultAppID;
+(unsigned long long)restrictedTreatment;
+(void)FBSDKInitializeWithLaunchData:(id)arg1 ;
+(BOOL)isPlatformCompatibilityEnabled;
+(id)defaultUrlSchemeSuffix;
+(BOOL)shouldAutoPublishInstall;
+(void)autoPublishInstallImpl:(id)arg1 ;
+(void)publishInstall:(id)arg1 isAutoPublish:(BOOL)arg2 ;
+(void)setShouldAutoPublishInstall:(BOOL)arg1 ;
+(void)enablePlatformCompatibility:(BOOL)arg1 ;
+(void)setClientToken:(id)arg1 ;
+(void)setDefaultAppID:(id)arg1 ;
+(id)defaultDisplayName;
+(void)setDefaultDisplayName:(id)arg1 ;
+(double)defaultJPEGCompressionQuality;
+(void)setdefaultJPEGCompressionQuality:(double)arg1 ;
+(void)setDefaultUrlSchemeSuffix:(id)arg1 ;
+(id)facebookDomainPart;
+(void)setFacebookDomainPart:(id)arg1 ;
+(id)loggingBehavior;
+(void)setLoggingBehavior:(id)arg1 ;
+(void)setResourceBundleName:(id)arg1 ;
+(void)setRestrictedTreatment:(unsigned long long)arg1 ;
+(id)defaultURLSchemeWithAppID:(id)arg1 urlSchemeSuffix:(id)arg2 ;
+(void)autoPublishInstall:(id)arg1 ;
+(void)enableBetaFeatures:(unsigned long long)arg1 ;
+(void)enableBetaFeature:(unsigned long long)arg1 ;
+(void)disableBetaFeature:(unsigned long long)arg1 ;
+(BOOL)isBetaFeatureEnabled:(unsigned long long)arg1 ;
+(BOOL)limitEventAndDataUsage;
+(void)setLimitEventAndDataUsage:(BOOL)arg1 ;
+(void)publishInstall:(id)arg1 ;
+(id)sdkVersion;
+(void)load;
+(id)clientToken;
+(id)appVersion;
+(void)setAppVersion:(id)arg1 ;
+(id)platformVersion;
@end


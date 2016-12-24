/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSettings : NSObject
+(void)publishInstall:(id)arg1 ;
+(void)setClientToken:(id)arg1 ;
+(id)resourceBundleName;
+(id)defaultAppID;
+(id)loggingBehavior;
+(void)FBSDKInitializeWithLaunchData:(id)arg1 ;
+(BOOL)shouldAutoPublishInstall;
+(void)autoPublishInstallImpl:(id)arg1 ;
+(void)publishInstall:(id)arg1 isAutoPublish:(BOOL)arg2 ;
+(void)setShouldAutoPublishInstall:(BOOL)arg1 ;
+(void)enablePlatformCompatibility:(BOOL)arg1 ;
+(void)setDefaultDisplayName:(id)arg1 ;
+(void)setdefaultJPEGCompressionQuality:(double)arg1 ;
+(void)setFacebookDomainPart:(id)arg1 ;
+(void)setLoggingBehavior:(id)arg1 ;
+(void)setResourceBundleName:(id)arg1 ;
+(void)setRestrictedTreatment:(unsigned long long)arg1 ;
+(void)enableBetaFeatures:(unsigned long long)arg1 ;
+(void)enableBetaFeature:(unsigned long long)arg1 ;
+(void)disableBetaFeature:(unsigned long long)arg1 ;
+(BOOL)isBetaFeatureEnabled:(unsigned long long)arg1 ;
+(unsigned long long)restrictedTreatment;
+(BOOL)limitEventAndDataUsage;
+(id)facebookDomainPart;
+(id)defaultDisplayName;
+(id)defaultUrlSchemeSuffix;
+(id)defaultURLSchemeWithAppID:(id)arg1 urlSchemeSuffix:(id)arg2 ;
+(double)defaultJPEGCompressionQuality;
+(void)setLimitEventAndDataUsage:(BOOL)arg1 ;
+(void)autoPublishInstall:(id)arg1 ;
+(void)setDefaultAppID:(id)arg1 ;
+(void)setDefaultUrlSchemeSuffix:(id)arg1 ;
+(BOOL)isPlatformCompatibilityEnabled;
+(void)load;
+(id)clientToken;
+(id)platformVersion;
+(id)sdkVersion;
+(void)setAppVersion:(id)arg1 ;
+(id)appVersion;
@end

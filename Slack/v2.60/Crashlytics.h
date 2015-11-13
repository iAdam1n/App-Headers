/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/FABKit.h>
#import <Slack/CLSCrashReportingControllerDelegate.h>
#import <Slack/CLSBetaControllerDelegate.h>
#import <Slack/WKScriptMessageHandler.h>

@protocol CrashlyticsDelegate;
@class CLSCrashReportingController, CLSBetaController, NSString;

@interface Crashlytics : NSObject <FABKit, CLSCrashReportingControllerDelegate, CLSBetaControllerDelegate, WKScriptMessageHandler> {

	id<CrashlyticsDelegate> _delegate;
	CLSCrashReportingController* _crashReportingController;
	CLSBetaController* _betaController;

}

@property (nonatomic,copy,readonly) NSString * APIKey; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (assign,nonatomic) BOOL debugMode; 
@property (assign,nonatomic) id<CrashlyticsDelegate> delegate; 
@property (nonatomic,readonly) CLSBetaController * betaController;              //@synthesize betaController=_betaController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logEvent:(id)arg1 attributes:(id)arg2 ;
+(id)startWithAPIKey:(id)arg1 ;
+(id)kitDisplayVersion;
+(id)kitBuildVersion;
+(void)initializeIfNeeded;
+(id)startWithAPIKey:(id)arg1 delegate:(id)arg2 ;
+(void)setIntValue:(int)arg1 forKey:(id)arg2 ;
+(void)setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setFloatValue:(float)arg1 forKey:(id)arg2 ;
+(void)setDevelopmentPlatformName:(id)arg1 ;
+(void)setDevelopmentPlatformVersion:(id)arg1 ;
+(id)startWithAPIKey:(id)arg1 afterDelay:(double)arg2 ;
+(id)startWithAPIKey:(id)arg1 delegate:(id)arg2 afterDelay:(double)arg3 ;
+(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
+(id)sharedInstance;
+(id)bundleIdentifier;
+(void)logEvent:(id)arg1 ;
+(void)setUserEmail:(id)arg1 ;
+(void)setUserName:(id)arg1 ;
+(void)setUserIdentifier:(id)arg1 ;
-(void)crash;
-(void)logEvent:(id)arg1 attributes:(id)arg2 ;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(id)installID;
-(BOOL)isFirstInstall;
-(NSString *)APIKey;
-(id)settingsDictionary;
-(id)initWithSuper;
-(void)warnDelegateAboutMethods;
-(BOOL)isCrashlyticsStarted;
-(void)setIntValue:(int)arg1 forKey:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setFloatValue:(float)arg1 forKey:(id)arg2 ;
-(void)setDevelopmentPlatformName:(id)arg1 ;
-(void)setDevelopmentPlatformVersion:(id)arg1 ;
-(void)recordError:(id)arg1 withAdditionalUserInfo:(id)arg2 ;
-(BOOL)delegateRespondsToLegacyMethods;
-(id)kitInfo;
-(void)setKitInfo:(id)arg1 ;
-(void)throwException;
-(id)developmentPlatformName;
-(id)developmentPlatformVersion;
-(void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 frameArray:(id)arg3 ;
-(void)monitorErrorsForUIWebView:(id)arg1 ;
-(BOOL)handleWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)monitorErrorsForWKWebViewConfiguration:(id)arg1 ;
-(CLSBetaController *)betaController;
-(id)settingsForBetaController:(id)arg1 ;
-(id)APIKeyForBetaController:(id)arg1 ;
-(BOOL)shouldInstallCrashCallback;
-(BOOL)isFirstInstallForCrashReportingController:(id)arg1 ;
-(id)installIDForCrashReportingController:(id)arg1 ;
-(id)APIKeyForCrashReportingController:(id)arg1 ;
-(id)settingsForCrashReportingController:(id)arg1 ;
-(BOOL)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2 ;
-(void)detectedCrash;
-(BOOL)reportingControllerMustInformDelegateOfReports:(id)arg1 ;
-(void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2 ;
-(void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)reportingControllerCanUseBackgroundSessions:(id)arg1 ;
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)recordError:(id)arg1 ;
-(void)setDelegate:(id<CrashlyticsDelegate>)arg1 ;
-(id)init;
-(id<CrashlyticsDelegate>)delegate;
-(id)bundleIdentifier;
-(void)start;
-(NSString *)version;
-(void)logEvent:(id)arg1 ;
-(void)setUserEmail:(id)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)setUserName:(id)arg1 ;
-(void)setUserIdentifier:(id)arg1 ;
@end


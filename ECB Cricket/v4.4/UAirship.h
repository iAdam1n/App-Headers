/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAJavaScriptDelegate;
@class UAConfig, UAAnalytics, UAApplicationMetrics, UAWhitelist, UALocationService, UAAppDelegateProxy, UAPreferenceDataStore, NSString;

@interface UAirship : NSObject {

	BOOL _remoteNotificationBackgroundModeEnabled;
	BOOL _ready;
	UAConfig* _config;
	UAAnalytics* _analytics;
	UAApplicationMetrics* _applicationMetrics;
	id<UAJavaScriptDelegate> _jsDelegate;
	UAWhitelist* _whitelist;
	UALocationService* _locationService;
	UAAppDelegateProxy* _appDelegate;
	id<UAJavaScriptDelegate> _actionJSDelegate;
	UAPreferenceDataStore* _dataStore;

}

@property (nonatomic,retain) UAConfig * config;                                         //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSString * deviceToken; 
@property (nonatomic,retain) UAAnalytics * analytics;                                   //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) UAApplicationMetrics * applicationMetrics;                 //@synthesize applicationMetrics=_applicationMetrics - In the implementation block
@property (assign,nonatomic) BOOL remoteNotificationBackgroundModeEnabled;              //@synthesize remoteNotificationBackgroundModeEnabled=_remoteNotificationBackgroundModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<UAJavaScriptDelegate> jsDelegate;                //@synthesize jsDelegate=_jsDelegate - In the implementation block
@property (nonatomic,retain) UAWhitelist * whitelist;                                   //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) UALocationService * locationService;                       //@synthesize locationService=_locationService - In the implementation block
@property (nonatomic,retain) UAAppDelegateProxy * appDelegate;                          //@synthesize appDelegate=_appDelegate - In the implementation block
@property (nonatomic,retain) id<UAJavaScriptDelegate> actionJSDelegate;                 //@synthesize actionJSDelegate=_actionJSDelegate - In the implementation block
@property (nonatomic,retain) UAPreferenceDataStore * dataStore;                         //@synthesize dataStore=_dataStore - In the implementation block
+(void)takeOff:(id)arg1 ;
+(void)handleAppDidFinishLaunchingNotification:(id)arg1 ;
+(void)handleAppTerminationNotification:(id)arg1 ;
+(void)executeUnsafeTakeOff:(id)arg1 ;
+(void)land;
+(void)takeOff;
+(void)setLogLevel:(long long)arg1 ;
+(void)load;
+(id)shared;
+(void)setLogging:(BOOL)arg1 ;
-(UAAnalytics *)analytics;
-(void)setRemoteNotificationBackgroundModeEnabled:(BOOL)arg1 ;
-(void)configureUserAgent;
-(void)setAnalytics:(UAAnalytics *)arg1 ;
-(void)setApplicationMetrics:(UAApplicationMetrics *)arg1 ;
-(void)setActionJSDelegate:(id<UAJavaScriptDelegate>)arg1 ;
-(BOOL)remoteNotificationBackgroundModeEnabled;
-(UALocationService *)locationService;
-(UAApplicationMetrics *)applicationMetrics;
-(id<UAJavaScriptDelegate>)jsDelegate;
-(void)setJsDelegate:(id<UAJavaScriptDelegate>)arg1 ;
-(void)setLocationService:(UALocationService *)arg1 ;
-(id<UAJavaScriptDelegate>)actionJSDelegate;
-(id)init;
-(UAConfig *)config;
-(void)validate;
-(void)setConfig:(UAConfig *)arg1 ;
-(UAWhitelist *)whitelist;
-(void)setWhitelist:(UAWhitelist *)arg1 ;
-(UAAppDelegateProxy *)appDelegate;
-(void)setAppDelegate:(UAAppDelegateProxy *)arg1 ;
-(void)setDataStore:(UAPreferenceDataStore *)arg1 ;
-(UAPreferenceDataStore *)dataStore;
-(BOOL)ready;
-(NSString *)deviceToken;
-(void)setReady:(BOOL)arg1 ;
@end

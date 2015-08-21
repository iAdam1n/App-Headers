/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPushRegistrationDelegate.h>
#import <Messenger/FBAppService.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol FBPushRegistrationRequestSender, FBPushUserSettings;
@class UIApplication, NSUserDefaults, NSNotificationCenter, FBUserSession, NSMutableArray, NSString, NSSet;

@interface FBPushRegistrar : NSObject <FBPushRegistrationDelegate, FBAppService, FBSessionClassProvidable> {

	UIApplication* _application;
	NSUserDefaults* _userDefaults;
	NSNotificationCenter* _notificationCenter;
	id<FBPushRegistrationRequestSender> _requestSender;
	id<FBPushUserSettings> _userSettings;
	FBUserSession* _session;
	BOOL _needsRegistrationWithFB;
	NSMutableArray* _fbRegistrationFailureBlocks;
	BOOL _hasRegisteredPushIntentWithOS7OrOlder;
	BOOL _hasRegisteredPushIntentWithOS8;
	BOOL _shouldUseInterstitialPushRegistration;
	BOOL _enableLoggedOutPush;
	BOOL _allowPushInterstitalOnPad;
	double _minBackoffInterval;
	double _lastFBRegistrationTime;
	NSString* _transmitterID;

}

@property (assign,nonatomic) double minBackoffInterval;                               //@synthesize minBackoffInterval=_minBackoffInterval - In the implementation block
@property (assign,nonatomic) double lastFBRegistrationTime;                           //@synthesize lastFBRegistrationTime=_lastFBRegistrationTime - In the implementation block
@property (assign,nonatomic) BOOL hasRegisteredPushIntentWithOS; 
@property (assign,nonatomic) BOOL shouldUseInterstitialPushRegistration;              //@synthesize shouldUseInterstitialPushRegistration=_shouldUseInterstitialPushRegistration - In the implementation block
@property (nonatomic,copy) NSString * transmitterID;                                  //@synthesize transmitterID=_transmitterID - In the implementation block
@property (assign,nonatomic) BOOL enableLoggedOutPush;                                //@synthesize enableLoggedOutPush=_enableLoggedOutPush - In the implementation block
@property (assign,nonatomic) BOOL allowPushInterstitalOnPad;                          //@synthesize allowPushInterstitalOnPad=_allowPushInterstitalOnPad - In the implementation block
@property (assign,nonatomic) BOOL hasRegisteredPushIntentWithOS7OrOlder; 
@property (assign,nonatomic) BOOL hasRegisteredPushIntentWithOS8; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appServiceID; 
@property (nonatomic,copy,readonly) NSSet * appServiceDependencyIDs; 
@property (nonatomic,readonly) unsigned long long serviceStartupLevel; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)signalAppServiceToHandleInitialSessionIdle;
-(NSString *)appServiceID;
-(NSSet *)appServiceDependencyIDs;
-(void)startAppServiceWithDependencies:(id)arg1 ;
-(void)stopAppServiceWithDependencies:(id)arg1 ;
-(void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(void)setTransmitterID:(NSString *)arg1 ;
-(NSString *)transmitterID;
-(BOOL)hasRegisteredPushIntentWithOS8;
-(BOOL)hasRegisteredPushIntentWithOS7OrOlder;
-(void)setHasRegisteredPushIntentWithOS8:(BOOL)arg1 ;
-(void)setHasRegisteredPushIntentWithOS7OrOlder:(BOOL)arg1 ;
-(void)onUserInitiatedPushRegistration:(id)arg1 ;
-(id)initWithApplication:(id)arg1 userDefaults:(id)arg2 notificationCenter:(id)arg3 requestSender:(id)arg4 userSettings:(id)arg5 session:(id)arg6 transmitterID:(id)arg7 ;
-(BOOL)hasRegisteredPushIntentWithOS;
-(void)setMessagePreviewSettingLocally:(BOOL)arg1 ;
-(void)addFBRegistrationFailureBlock:(/*^block*/id)arg1 ;
-(void)registerForPush;
-(BOOL)hasMessagePreviews;
-(void)setHasRegisteredPushIntentWithOS:(BOOL)arg1 ;
-(void)_logWillRegisterForRemoteNotifications;
-(void)_logDidRegisterForRemoteNotifications;
-(BOOL)_shouldRegisterTokenWithFB:(id)arg1 oldNotificationTypes:(unsigned long long)arg2 currentNotificationTypes:(unsigned long long)arg3 ;
-(double)minBackoffInterval;
-(BOOL)_shouldRegisterTokenWithFB:(id)arg1 userNotificationType:(unsigned long long)arg2 ;
-(BOOL)_shouldRegisterTokenWithFB:(id)arg1 remoteNotificationType:(unsigned long long)arg2 ;
-(id)_analyticsConvertToErrorStatus:(id)arg1 forErrorStatusPrefix:(id)arg2 ;
-(void)unregisterForRemoteNotificationsAndLog:(id)arg1 ;
-(void)_checkRegisterForPush;
-(void)unregisterForPush;
-(void)registerRequestDidComplete:(id)arg1 ;
-(void)registerRequest:(id)arg1 DidFailWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)unregisterRequestDidComplete;
-(void)unregisterRequestDidFailWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(BOOL)eligibleForPushInterstitial;
-(void)setMessagePreviews:(BOOL)arg1 withFailureBlock:(/*^block*/id)arg2 ;
-(void)registerForPushWithNotificationSettings:(id)arg1 ;
-(BOOL)hasRegisteredForPush;
-(void)setMinBackoffInterval:(double)arg1 ;
-(double)lastFBRegistrationTime;
-(void)setLastFBRegistrationTime:(double)arg1 ;
-(BOOL)shouldUseInterstitialPushRegistration;
-(void)setShouldUseInterstitialPushRegistration:(BOOL)arg1 ;
-(BOOL)enableLoggedOutPush;
-(void)setEnableLoggedOutPush:(BOOL)arg1 ;
-(BOOL)allowPushInterstitalOnPad;
-(void)setAllowPushInterstitalOnPad:(BOOL)arg1 ;
-(void)dealloc;
-(void)registerForRemoteNotifications;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(BOOL)shouldRegisterForPush;
@end


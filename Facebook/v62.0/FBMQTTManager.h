/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAppService.h>
#import <Facebook/FBMQTTInterface.h>

@class FBUserSession, FBMQTTClientManager, UIApplication, NSNotificationCenter, NSUserDefaults, NSString;

@interface FBMQTTManager : NSObject <FBAppService, FBMQTTInterface> {

	FBUserSession* _session;
	FBMQTTClientManager* _clientManager;
	CFUUIDRef _clientIDUUID;
	UIApplication* _application;
	NSNotificationCenter* _notificationCenter;
	NSUserDefaults* _userDefaults;
	BOOL _running;
	id _didBecomeActiveObserver;
	id _didEnterBackgroundObserver;
	id _sessionStoreKeychainDidUnlockObserver;
	/*^block*/id _userAgentFormatter;

}

@property (nonatomic,retain) id didBecomeActiveObserver;                            //@synthesize didBecomeActiveObserver=_didBecomeActiveObserver - In the implementation block
@property (nonatomic,retain) id didEnterBackgroundObserver;                         //@synthesize didEnterBackgroundObserver=_didEnterBackgroundObserver - In the implementation block
@property (nonatomic,retain) id sessionStoreKeychainDidUnlockObserver;              //@synthesize sessionStoreKeychainDidUnlockObserver=_sessionStoreKeychainDidUnlockObserver - In the implementation block
@property (nonatomic,copy) id userAgentFormatter;                                   //@synthesize userAgentFormatter=_userAgentFormatter - In the implementation block
@property (assign,nonatomic) BOOL running;                                          //@synthesize running=_running - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)addListeners:(id)arg1 ;
-(void)removeListeners:(id)arg1 ;
-(id)clientManagerOnlyForBridgingToMessengerCode;
-(void)setUserAgentFormatter:(id)arg1 ;
-(id)userAgentFormatter;
-(id)_mqttClientID;
-(void)setDidEnterBackgroundObserver:(id)arg1 ;
-(void)setDidBecomeActiveObserver:(id)arg1 ;
-(void)setSessionStoreKeychainDidUnlockObserver:(id)arg1 ;
-(void)_setClientManagerWithHost:(id)arg1 port:(id)arg2 disableSSL:(BOOL)arg3 disableEncoding:(id)arg4 ;
-(void)_startAppServiceWithHost:(id)arg1 port:(id)arg2 disableSSL:(BOOL)arg3 disableEncoding:(id)arg4 ;
-(void)_didChangeMQTTSandboxSettings;
-(void)configureWithUserAgentFormatter:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 clientManager:(id)arg2 clientIDUUID:(CFUUIDRef)arg3 application:(id)arg4 notificationCenter:(id)arg5 userDefaults:(id)arg6 ;
-(id)didBecomeActiveObserver;
-(id)didEnterBackgroundObserver;
-(id)sessionStoreKeychainDidUnlockObserver;
-(void)dealloc;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
@end

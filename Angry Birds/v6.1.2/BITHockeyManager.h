/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BITHockeyManagerDelegate;
@class NSString, BITHockeyAppClient, BITCrashManager;

@interface BITHockeyManager : NSObject {

	NSString* _appIdentifier;
	NSString* _liveIdentifier;
	BOOL _validAppIdentifier;
	BOOL _startManagerIsInvoked;
	BOOL _startUpdateManagerIsInvoked;
	BOOL _managersInitialized;
	BITHockeyAppClient* _hockeyAppClient;
	BOOL _disableCrashManager;
	BOOL _disableInstallTracking;
	BOOL _debugLogEnabled;
	id<BITHockeyManagerDelegate> _delegate;
	NSString* _serverURL;
	BITCrashManager* _crashManager;
	long long _appEnvironment;
	NSString* _installString;
	NSString* _userID;
	NSString* _userName;
	NSString* _userEmail;

}

@property (assign,nonatomic,__weak) id<BITHockeyManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * serverURL;                                                      //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) BITCrashManager * crashManager;                                          //@synthesize crashManager=_crashManager - In the implementation block
@property (assign,getter=isCrashManagerDisabled,nonatomic) BOOL disableCrashManager;                    //@synthesize disableCrashManager=_disableCrashManager - In the implementation block
@property (nonatomic,readonly) long long appEnvironment;                                                //@synthesize appEnvironment=_appEnvironment - In the implementation block
@property (nonatomic,readonly) NSString * installString;                                                //@synthesize installString=_installString - In the implementation block
@property (assign,getter=isInstallTrackingDisabled,nonatomic) BOOL disableInstallTracking;              //@synthesize disableInstallTracking=_disableInstallTracking - In the implementation block
@property (assign,getter=isDebugLogEnabled,nonatomic) BOOL debugLogEnabled;                             //@synthesize debugLogEnabled=_debugLogEnabled - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                           //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                         //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * userEmail;                                                        //@synthesize userEmail=_userEmail - In the implementation block
+(id)sharedHockeyManager;
-(void)setDebugLogEnabled:(BOOL)arg1 ;
-(void)validateStartManagerIsInvoked;
-(void)initializeModules;
-(BOOL)checkValidityOfAppIdentifier:(id)arg1 ;
-(void)logInvalidIdentifier:(id)arg1 ;
-(BOOL)shouldUseLiveIdentifier;
-(BOOL)isSetUpOnMainThread;
-(BOOL)isInstallTrackingDisabled;
-(BOOL)isCrashManagerDisabled;
-(void)modifyKeychainUserValue:(id)arg1 forKey:(id)arg2 ;
-(void)pingServerForIntegrationStartWorkflowWithTimeString:(id)arg1 appIdentifier:(id)arg2 ;
-(void)logPingMessageForStatusCode:(long long)arg1 ;
-(id)integrationFlowTimeString;
-(BOOL)integrationFlowStartedWithTimeString:(id)arg1 ;
-(void)configureWithIdentifier:(id)arg1 ;
-(void)configureWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)configureWithBetaIdentifier:(id)arg1 liveIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)testIdentifier;
-(BITCrashManager *)crashManager;
-(void)setDisableCrashManager:(BOOL)arg1 ;
-(NSString *)installString;
-(void)setDisableInstallTracking:(BOOL)arg1 ;
-(BOOL)isDebugLogEnabled;
-(long long)appEnvironment;
-(id)hockeyAppClient;
-(NSString *)userName;
-(void)startManager;
-(NSString *)serverURL;
-(void)setDelegate:(id<BITHockeyManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BITHockeyManagerDelegate>)delegate;
-(id)version;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(id)build;
-(void)setUserName:(NSString *)arg1 ;
-(void)setServerURL:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end


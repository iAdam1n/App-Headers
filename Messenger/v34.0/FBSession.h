/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBLoginDialogDelegate.h>

@class NSString, NSMutableArray, NSArray, FBAccessTokenData, FBSessionTokenCachingStrategy, NSDate, FBLoginDialog, NSThread, FBSessionAppEventsState, FBSessionAuthLogger;

@interface FBSession : NSObject <FBLoginDialogDelegate> {

	NSString* _urlSchemeSuffix;
	BOOL _isInStateTransition;
	unsigned long long _loginTypeOfPendingOpenUrlCallback;
	unsigned long long _defaultDefaultAudience;
	unsigned long long _loginBehavior;
	NSMutableArray* _declinedPermissions;
	NSArray* _requestedReauthPermissions;
	BOOL _isRepairing;
	unsigned long long _state;
	NSString* _appID;
	FBAccessTokenData* _accessTokenData;
	NSArray* _initializedPermissions;
	unsigned long long _lastRequestedSystemAudience;
	FBSessionTokenCachingStrategy* _tokenCachingStrategy;
	NSDate* _attemptedRefreshDate;
	NSDate* _attemptedPermissionsRefreshDate;
	/*^block*/id _loginHandler;
	/*^block*/id _reauthorizeHandler;
	FBLoginDialog* _loginDialog;
	NSThread* _affinitizedThread;
	FBSessionAppEventsState* _appEventsState;
	FBSessionAuthLogger* _authLogger;

}

@property (readonly) BOOL isOpen; 
@property (assign) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (copy) NSString * appID;                                                    //@synthesize appID=_appID - In the implementation block
@property (copy) NSString * urlSchemeSuffix; 
@property (copy,readonly) NSString * accessToken; 
@property (copy,readonly) NSDate * expirationDate; 
@property (copy,readonly) NSArray * permissions; 
@property (readonly) unsigned long long loginType; 
@property (copy) FBAccessTokenData * accessTokenData;                                 //@synthesize accessTokenData=_accessTokenData - In the implementation block
@property (copy,readonly) NSArray * declinedPermissions; 
@property (copy) NSArray * initializedPermissions;                                    //@synthesize initializedPermissions=_initializedPermissions - In the implementation block
@property (assign) unsigned long long lastRequestedSystemAudience;                    //@synthesize lastRequestedSystemAudience=_lastRequestedSystemAudience - In the implementation block
@property (assign) BOOL isRepairing;                                                  //@synthesize isRepairing=_isRepairing - In the implementation block
@property (retain) FBSessionTokenCachingStrategy * tokenCachingStrategy;              //@synthesize tokenCachingStrategy=_tokenCachingStrategy - In the implementation block
@property (copy) NSDate * attemptedRefreshDate;                                       //@synthesize attemptedRefreshDate=_attemptedRefreshDate - In the implementation block
@property (copy) NSDate * attemptedPermissionsRefreshDate;                            //@synthesize attemptedPermissionsRefreshDate=_attemptedPermissionsRefreshDate - In the implementation block
@property (copy) id loginHandler;                                                     //@synthesize loginHandler=_loginHandler - In the implementation block
@property (copy) id reauthorizeHandler;                                               //@synthesize reauthorizeHandler=_reauthorizeHandler - In the implementation block
@property (readonly) NSString * appBaseUrl; 
@property (retain) FBLoginDialog * loginDialog;                                       //@synthesize loginDialog=_loginDialog - In the implementation block
@property (retain) NSThread * affinitizedThread;                                      //@synthesize affinitizedThread=_affinitizedThread - In the implementation block
@property (retain) FBSessionAppEventsState * appEventsState;                          //@synthesize appEventsState=_appEventsState - In the implementation block
@property (retain) FBSessionAuthLogger * authLogger;                                  //@synthesize authLogger=_authLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeSession;
+(id)defaultAppID;
+(id)activeSessionIfExists;
+(id)defaultUrlSchemeSuffix;
+(id)sdkSurfacedErrorForNativeLoginError:(id)arg1 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 allowSystemAccount:(BOOL)arg3 isRead:(BOOL)arg4 defaultAudience:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 defaultAudience:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 loginBehavior:(unsigned long long)arg3 isRead:(BOOL)arg4 defaultAudience:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)setActiveSession:(id)arg1 userInfo:(id)arg2 ;
+(void)setDefaultAppID:(id)arg1 ;
+(void)setDefaultUrlSchemeSuffix:(id)arg1 ;
+(BOOL)openActiveSessionWithAllowLoginUI:(BOOL)arg1 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 loginBehavior:(unsigned long long)arg2 isRead:(BOOL)arg3 defaultAudience:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)openActiveSessionWithReadPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)openActiveSessionWithPublishPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 allowLoginUI:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)renewSystemCredentials:(/*^block*/id)arg1 ;
+(id)activeSessionIfOpen;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)setActiveSession:(id)arg1 ;
-(BOOL)handleOpenURL:(id)arg1 ;
-(FBAccessTokenData *)accessTokenData;
-(NSString *)urlSchemeSuffix;
-(void)handleDidBecomeActive;
-(BOOL)openFromAccessTokenData:(id)arg1 completionHandler:(/*^block*/id)arg2 raiseExceptionIfInvalidState:(BOOL)arg3 ;
-(void)setAccessTokenData:(FBAccessTokenData *)arg1 ;
-(FBSessionAppEventsState *)appEventsState;
-(id)initWithAppID:(id)arg1 permissions:(id)arg2 urlSchemeSuffix:(id)arg3 tokenCacheStrategy:(id)arg4 ;
-(void)clearAffinitizedThread;
-(void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2 params:(id)arg3 ;
-(void)fbDialogNotLogin:(BOOL)arg1 ;
-(id)initWithAppID:(id)arg1 permissions:(id)arg2 defaultAudience:(unsigned long long)arg3 urlSchemeSuffix:(id)arg4 tokenCacheStrategy:(id)arg5 ;
-(FBSessionTokenCachingStrategy *)tokenCachingStrategy;
-(BOOL)initializeFromCachedToken:(id)arg1 withPermissions:(id)arg2 ;
-(BOOL)transitionToState:(unsigned long long)arg1 withAccessTokenData:(id)arg2 shouldCache:(BOOL)arg3 ;
-(NSArray *)initializedPermissions;
-(NSArray *)declinedPermissions;
-(id)refreshDate;
-(void)openWithBehavior:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkThreadAffinity;
-(id)loginHandler;
-(void)setLoginHandler:(id)arg1 ;
-(id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 ;
-(void)transitionAndCallHandlerWithState:(unsigned long long)arg1 error:(id)arg2 tokenData:(id)arg3 shouldCache:(BOOL)arg4 ;
-(void)authorizeWithPermissions:(id)arg1 behavior:(unsigned long long)arg2 defaultAudience:(unsigned long long)arg3 isReauthorize:(BOOL)arg4 ;
-(void)reauthorizeWithPermissions:(id)arg1 isRead:(BOOL)arg2 behavior:(unsigned long long)arg3 defaultAudience:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestNewReadPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestNewPublishPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleRefreshPermissions:(id)arg1 ;
-(void)closeAndClearTokenInformation:(id)arg1 ;
-(FBSessionAuthLogger *)authLogger;
-(void)setAuthLogger:(FBSessionAuthLogger *)arg1 ;
-(BOOL)handleAuthorizationOpen:(id)arg1 accessToken:(id)arg2 loginType:(unsigned long long)arg3 ;
-(BOOL)handleReauthorize:(id)arg1 accessToken:(id)arg2 ;
-(BOOL)handleAuthorizationCallbacks:(id)arg1 params:(id)arg2 loginType:(unsigned long long)arg3 ;
-(void)authorizeRequestWasImplicitlyCancelled;
-(void)authorizeWithPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 integratedAuth:(BOOL)arg3 FBAppAuth:(BOOL)arg4 safariAuth:(BOOL)arg5 fallback:(BOOL)arg6 isReauthorize:(BOOL)arg7 canFetchAppSettings:(BOOL)arg8 ;
-(void)retryableAuthorizeWithPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 integratedAuth:(BOOL)arg3 FBAppAuth:(BOOL)arg4 safariAuth:(BOOL)arg5 fallback:(BOOL)arg6 isReauthorize:(BOOL)arg7 canFetchAppSettings:(BOOL)arg8 ;
-(void)setLastRequestedSystemAudience:(unsigned long long)arg1 ;
-(id)getSystemAccountStoreAdapter;
-(void)logIntegratedAuthAppEvent:(id)arg1 permissions:(id)arg2 ;
-(void)completeReauthorizeWithAccessToken:(id)arg1 expirationDate:(id)arg2 permissions:(id)arg3 declinedPermissions:(id)arg4 ;
-(void)setIsRepairing:(BOOL)arg1 ;
-(void)callReauthorizeHandlerAndClearState:(id)arg1 updateDeclinedPermissions:(BOOL)arg2 ;
-(void)closeAndClearTokenInformation;
-(BOOL)tryOpenURL:(id)arg1 ;
-(NSString *)appBaseUrl;
-(void)setLoginDialog:(FBLoginDialog *)arg1 ;
-(FBLoginDialog *)loginDialog;
-(id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 localizedDescription:(id)arg4 ;
-(id)declinedPermissionsForRequestedPermissions:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 ;
-(void)validateReauthorizedAccessToken:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)isRepairing;
-(id)reauthorizeHandler;
-(void)setReauthorizeHandler:(id)arg1 ;
-(NSDate *)attemptedRefreshDate;
-(void)setAttemptedRefreshDate:(NSDate *)arg1 ;
-(NSDate *)attemptedPermissionsRefreshDate;
-(void)setAttemptedPermissionsRefreshDate:(NSDate *)arg1 ;
-(void)setAffinitizedThread:(NSThread *)arg1 ;
-(NSThread *)affinitizedThread;
-(id)initWithPermissions:(id)arg1 ;
-(void)reauthorizeWithPermissions:(id)arg1 behavior:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reauthorizeWithReadPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reauthorizeWithPublishPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refreshPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)openFromAccessTokenData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUrlSchemeSuffix:(NSString *)arg1 ;
-(void)setStateChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)hasGranted:(id)arg1 ;
-(void)setLoginTypeOfPendingOpenUrlCallback:(unsigned long long)arg1 ;
-(void)handleDidCompleteNativeLoginForAppCall:(id)arg1 ;
-(BOOL)isURLSchemeRegistered;
-(BOOL)authorizeUsingFacebookApplication:(id)arg1 ;
-(BOOL)authorizeUsingSafari:(id)arg1 ;
-(void)authorizeUsingLoginDialog:(id)arg1 ;
-(void)repairWithHandler:(/*^block*/id)arg1 ;
-(void)refreshAccessToken:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)shouldExtendAccessToken;
-(BOOL)shouldRefreshPermissions;
-(id)jsonClientStateWithDictionary:(id)arg1 ;
-(void)setInitializedPermissions:(NSArray *)arg1 ;
-(unsigned long long)lastRequestedSystemAudience;
-(void)setTokenCachingStrategy:(FBSessionTokenCachingStrategy *)arg1 ;
-(void)setAppEventsState:(FBSessionAppEventsState *)arg1 ;
-(unsigned long long)loginType;
-(void)authorizeUsingSystemAccountStore:(id)arg1 defaultAudience:(unsigned long long)arg2 isReauthorize:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)close;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(BOOL)isOpen;
-(NSDate *)expirationDate;
-(NSArray *)permissions;
-(NSString *)accessToken;
-(NSString *)appID;
@end


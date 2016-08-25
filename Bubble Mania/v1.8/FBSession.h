/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/FBLoginDialogDelegate.h>

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
+(id)activeSessionIfOpen;
+(id)defaultAppID;
+(id)activeSessionIfExists;
+(id)sdkSurfacedErrorForNativeLoginError:(id)arg1 ;
+(id)defaultUrlSchemeSuffix;
+(void)setDefaultAppID:(id)arg1 ;
+(void)setDefaultUrlSchemeSuffix:(id)arg1 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 allowSystemAccount:(BOOL)arg3 isRead:(BOOL)arg4 defaultAudience:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 defaultAudience:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 loginBehavior:(unsigned long long)arg3 isRead:(BOOL)arg4 defaultAudience:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)setActiveSession:(id)arg1 userInfo:(id)arg2 ;
+(id)errorWithSystemAccountStoreDeniedError:(id)arg1 isReauthorize:(BOOL)arg2 forSession:(id)arg3 ;
+(BOOL)openActiveSessionWithAllowLoginUI:(BOOL)arg1 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)openActiveSessionWithPermissions:(id)arg1 loginBehavior:(unsigned long long)arg2 isRead:(BOOL)arg3 defaultAudience:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)openActiveSessionWithReadPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)openActiveSessionWithPublishPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 allowLoginUI:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)renewSystemCredentials:(/*^block*/id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)setActiveSession:(id)arg1 ;
-(void)handleDidBecomeActive;
-(void)closeAndClearTokenInformation;
-(id)initWithAppID:(id)arg1 permissions:(id)arg2 urlSchemeSuffix:(id)arg3 tokenCacheStrategy:(id)arg4 ;
-(void)openWithBehavior:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestNewReadPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setStateChangeHandler:(/*^block*/id)arg1 ;
-(NSArray *)declinedPermissions;
-(FBAccessTokenData *)accessTokenData;
-(void)requestNewPublishPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)loginType;
-(void)closeAndClearTokenInformation:(id)arg1 ;
-(void)setUrlSchemeSuffix:(NSString *)arg1 ;
-(void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2 params:(id)arg3 ;
-(void)fbDialogNotLogin:(BOOL)arg1 ;
-(BOOL)shouldExtendAccessToken;
-(BOOL)handleOpenURL:(id)arg1 ;
-(NSString *)urlSchemeSuffix;
-(NSThread *)affinitizedThread;
-(void)repairWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isRepairing;
-(BOOL)openFromAccessTokenData:(id)arg1 completionHandler:(/*^block*/id)arg2 raiseExceptionIfInvalidState:(BOOL)arg3 ;
-(void)setAccessTokenData:(FBAccessTokenData *)arg1 ;
-(id)initWithAppID:(id)arg1 permissions:(id)arg2 defaultAudience:(unsigned long long)arg3 urlSchemeSuffix:(id)arg4 tokenCacheStrategy:(id)arg5 ;
-(BOOL)handleReauthorize:(id)arg1 accessToken:(id)arg2 ;
-(void)transitionAndCallHandlerWithState:(unsigned long long)arg1 error:(id)arg2 tokenData:(id)arg3 shouldCache:(BOOL)arg4 ;
-(void)authorizeWithPermissions:(id)arg1 behavior:(unsigned long long)arg2 defaultAudience:(unsigned long long)arg3 isReauthorize:(BOOL)arg4 ;
-(FBSessionTokenCachingStrategy *)tokenCachingStrategy;
-(BOOL)initializeFromCachedToken:(id)arg1 withPermissions:(id)arg2 ;
-(BOOL)transitionToState:(unsigned long long)arg1 withAccessTokenData:(id)arg2 shouldCache:(BOOL)arg3 ;
-(NSArray *)initializedPermissions;
-(id)refreshDate;
-(void)checkThreadAffinity;
-(id)loginHandler;
-(void)setLoginHandler:(id)arg1 ;
-(id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 ;
-(void)reauthorizeWithPermissions:(id)arg1 isRead:(BOOL)arg2 behavior:(unsigned long long)arg3 defaultAudience:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleRefreshPermissions:(id)arg1 ;
-(FBSessionAuthLogger *)authLogger;
-(void)setAuthLogger:(FBSessionAuthLogger *)arg1 ;
-(BOOL)handleAuthorizationOpen:(id)arg1 accessToken:(id)arg2 loginType:(unsigned long long)arg3 ;
-(BOOL)handleAuthorizationCallbacks:(id)arg1 params:(id)arg2 loginType:(unsigned long long)arg3 ;
-(void)authorizeRequestWasImplicitlyCancelled;
-(void)authorizeWithPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 integratedAuth:(BOOL)arg3 FBAppAuth:(BOOL)arg4 safariAuth:(BOOL)arg5 fallback:(BOOL)arg6 isReauthorize:(BOOL)arg7 canFetchAppSettings:(BOOL)arg8 ;
-(void)retryableAuthorizeWithPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 integratedAuth:(BOOL)arg3 FBAppAuth:(BOOL)arg4 safariAuth:(BOOL)arg5 fallback:(BOOL)arg6 isReauthorize:(BOOL)arg7 canFetchAppSettings:(BOOL)arg8 ;
-(void)authorizeUsingSystemAccountStore:(id)arg1 defaultAudience:(unsigned long long)arg2 isReauthorize:(BOOL)arg3 ;
-(void)fallbackFromSystemAuth:(id)arg1 defaultAudience:(unsigned long long)arg2 ;
-(void)setLastRequestedSystemAudience:(unsigned long long)arg1 ;
-(id)getSystemAccountStoreAdapter;
-(void)logIntegratedAuthAppEvent:(id)arg1 permissions:(id)arg2 ;
-(id)logAndReturnErrorForSystemAccountStoreError:(id)arg1 isReauthorize:(BOOL)arg2 ;
-(void)completeReauthorizeWithAccessToken:(id)arg1 expirationDate:(id)arg2 permissions:(id)arg3 declinedPermissions:(id)arg4 ;
-(void)setIsRepairing:(BOOL)arg1 ;
-(void)callReauthorizeHandlerAndClearState:(id)arg1 updateDeclinedPermissions:(BOOL)arg2 ;
-(BOOL)tryOpenURL:(id)arg1 ;
-(NSString *)appBaseUrl;
-(void)setLoginDialog:(FBLoginDialog *)arg1 ;
-(FBLoginDialog *)loginDialog;
-(id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 localizedDescription:(id)arg4 ;
-(id)declinedPermissionsForRequestedPermissions:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 ;
-(BOOL)areSomeReauthPermissionsGranted:(id)arg1 ;
-(void)validateReauthorizedAccessToken:(id)arg1 expirationDate:(id)arg2 ;
-(id)reauthorizeHandler;
-(void)setReauthorizeHandler:(id)arg1 ;
-(NSDate *)attemptedRefreshDate;
-(void)setAttemptedRefreshDate:(NSDate *)arg1 ;
-(NSDate *)attemptedPermissionsRefreshDate;
-(void)setAttemptedPermissionsRefreshDate:(NSDate *)arg1 ;
-(void)setAffinitizedThread:(NSThread *)arg1 ;
-(id)initWithPermissions:(id)arg1 ;
-(void)reauthorizeWithPermissions:(id)arg1 behavior:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reauthorizeWithReadPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reauthorizeWithPublishPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refreshPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)openFromAccessTokenData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasGranted:(id)arg1 ;
-(void)setLoginTypeOfPendingOpenUrlCallback:(unsigned long long)arg1 ;
-(void)handleDidCompleteNativeLoginForAppCall:(id)arg1 ;
-(BOOL)isURLSchemeRegistered;
-(BOOL)authorizeUsingFacebookApplication:(id)arg1 ;
-(BOOL)authorizeUsingSafari:(id)arg1 ;
-(void)authorizeUsingLoginDialog:(id)arg1 ;
-(void)refreshAccessToken:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)shouldRefreshPermissions;
-(id)jsonClientStateWithDictionary:(id)arg1 ;
-(void)setInitializedPermissions:(NSArray *)arg1 ;
-(unsigned long long)lastRequestedSystemAudience;
-(void)setTokenCachingStrategy:(FBSessionTokenCachingStrategy *)arg1 ;
-(void)setAppEventsState:(FBSessionAppEventsState *)arg1 ;
-(void)authorizeUsingSystemAccountStore:(id)arg1 defaultAudience:(unsigned long long)arg2 isReauthorize:(BOOL)arg3 canFetchAppSettings:(BOOL)arg4 ;
-(FBSessionAppEventsState *)appEventsState;
-(void)clearAffinitizedThread;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)close;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)expirationDate;
-(void)setAppID:(NSString *)arg1 ;
-(NSArray *)permissions;
-(NSString *)appID;
-(NSString *)accessToken;
-(BOOL)isOpen;
@end


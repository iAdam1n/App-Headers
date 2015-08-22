/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandlerDelegate.h>
#import <Messenger/FBAuthenticationUserInfoResolverDelegate.h>

@protocol FBAuthenticationManagerDelegate, FBAuthenticationManagerDeviceBasedAccountsDataSource;
@class FBRequesterConfiguration, FBAuthPerfLogger, FBAuthenticationAccessTokenValidator, FBAuthenticationSSOHandler, FBAuthenticationKeychainHandler, FBAuthenticationUsernamePasswordHandler, FBAuthenticationWorkUsernamePasswordHandler, FBAuthenticationNonceHandler, FBAuthenticationPageIDPasswordHandler, FBAuthenticationDeviceBasedLoginHandler, NSMutableDictionary, FBAuthenticationUserInfoResolver, FBAuthenticationStoredUser, NSMutableArray, NSString;

@interface FBAuthenticationManager : NSObject <FBAuthenticationMethodHandlerDelegate, FBAuthenticationUserInfoResolverDelegate> {

	FBRequesterConfiguration* _requesterConfiguration;
	FBAuthPerfLogger* _perfLogger;
	FBAuthenticationAccessTokenValidator* _accessTokenValidator;
	BOOL _isDeviceBasedLoginEnabled;
	id<FBAuthenticationManagerDelegate> _delegate;
	id<FBAuthenticationManagerDeviceBasedAccountsDataSource> _deviceBasedAccountsDataSource;
	unsigned long long _method;
	FBAuthenticationSSOHandler* _ssoHandler;
	FBAuthenticationKeychainHandler* _keychainHandler;
	FBAuthenticationUsernamePasswordHandler* _usernamePasswordHandler;
	FBAuthenticationWorkUsernamePasswordHandler* _workUsernamePasswordHandler;
	FBAuthenticationNonceHandler* _nonceHandler;
	FBAuthenticationPageIDPasswordHandler* _pageIDPasswordHandler;
	FBAuthenticationDeviceBasedLoginHandler* _deviceBasedHandler;
	NSMutableDictionary* _authenticationMethodsForUsers;
	FBAuthenticationUserInfoResolver* _userInfoResolver;
	FBAuthenticationStoredUser* _authenticatingUser;
	NSMutableArray* _availableAuthenticationMethods;

}

@property (assign,nonatomic,__weak) id<FBAuthenticationManagerDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBAuthenticationManagerDeviceBasedAccountsDataSource> deviceBasedAccountsDataSource;              //@synthesize deviceBasedAccountsDataSource=_deviceBasedAccountsDataSource - In the implementation block
@property (assign,nonatomic) unsigned long long method;                                                                           //@synthesize method=_method - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * authToken; 
@property (nonatomic,readonly) BOOL isDeviceBasedLoginEnabled;                                                                    //@synthesize isDeviceBasedLoginEnabled=_isDeviceBasedLoginEnabled - In the implementation block
@property (nonatomic,retain) FBAuthenticationSSOHandler * ssoHandler;                                                             //@synthesize ssoHandler=_ssoHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationKeychainHandler * keychainHandler;                                                   //@synthesize keychainHandler=_keychainHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationUsernamePasswordHandler * usernamePasswordHandler;                                   //@synthesize usernamePasswordHandler=_usernamePasswordHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationWorkUsernamePasswordHandler * workUsernamePasswordHandler;                           //@synthesize workUsernamePasswordHandler=_workUsernamePasswordHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationNonceHandler * nonceHandler;                                                         //@synthesize nonceHandler=_nonceHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationPageIDPasswordHandler * pageIDPasswordHandler;                                       //@synthesize pageIDPasswordHandler=_pageIDPasswordHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationDeviceBasedLoginHandler * deviceBasedHandler;                                        //@synthesize deviceBasedHandler=_deviceBasedHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authenticationMethodsForUsers;                                                 //@synthesize authenticationMethodsForUsers=_authenticationMethodsForUsers - In the implementation block
@property (nonatomic,retain) FBAuthenticationUserInfoResolver * userInfoResolver;                                                 //@synthesize userInfoResolver=_userInfoResolver - In the implementation block
@property (nonatomic,retain) FBAuthenticationStoredUser * authenticatingUser;                                                     //@synthesize authenticatingUser=_authenticatingUser - In the implementation block
@property (nonatomic,retain) NSMutableArray * availableAuthenticationMethods;                                                     //@synthesize availableAuthenticationMethods=_availableAuthenticationMethods - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setAuthenticatingUser:(FBAuthenticationStoredUser *)arg1 ;
-(void)setAvailableAuthenticationMethods:(NSMutableArray *)arg1 ;
-(void)setAuthenticationMethodsForUsers:(NSMutableDictionary *)arg1 ;
-(void)_fetchDeviceBasedAccounts;
-(FBAuthenticationSSOHandler *)ssoHandler;
-(void)_processNextAuthenticationMethod;
-(FBAuthenticationKeychainHandler *)keychainHandler;
-(FBAuthenticationUsernamePasswordHandler *)usernamePasswordHandler;
-(void)_submitDeviceBasedLoginWithUserID:(id)arg1 nonce:(id)arg2 pin:(id)arg3 ;
-(void)_deviceBasedLoginDidAuthenticateWithResponse:(id)arg1 pin:(id)arg2 nonce:(id)arg3 ;
-(void)_handleErrorWithDeviceBasedLoginEnabledHandler:(id)arg1 error:(id)arg2 ;
-(void)skipKeychainOrSSOAuthenticationMethod;
-(void)_fetchSSOInformation;
-(void)_checkUsersAndPerformAuthenticationCallback;
-(FBAuthenticationNonceHandler *)nonceHandler;
-(FBAuthenticationWorkUsernamePasswordHandler *)workUsernamePasswordHandler;
-(FBAuthenticationPageIDPasswordHandler *)pageIDPasswordHandler;
-(BOOL)_userHasDBLAccount:(id)arg1 ;
-(BOOL)_userRequiresDBLPasscode:(id)arg1 ;
-(void)_requirePasscodeChangeToContinue:(id)arg1 ;
-(void)_renewNonceForUser:(id)arg1 pin:(id)arg2 nonce:(id)arg3 accessToken:(id)arg4 ;
-(void)_updateStoredUserDictWithUsername:(id)arg1 userID:(id)arg2 platformTestAppID:(id)arg3 authMethod:(unsigned long long)arg4 fullName:(id)arg5 firstName:(id)arg6 ;
-(void)_processAuthMethod:(unsigned long long)arg1 ;
-(void)_updateStoredUsersDictWithDeviceBasedAccounts:(id)arg1 ;
-(void)_notifyViewControllerDeviceBasedLoginIsReady;
-(id)initWithRequesterConfiguration:(id)arg1 deviceBasedLoginEnabled:(BOOL)arg2 ;
-(void)submitPageID:(id)arg1 credential:(id)arg2 ;
-(void)logoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)usePageLogin;
-(void)useUsernamePasswordLogin;
-(void)setDeviceBasedAccountsDataSource:(id<FBAuthenticationManagerDeviceBasedAccountsDataSource>)arg1 ;
-(void)setSsoHandler:(FBAuthenticationSSOHandler *)arg1 ;
-(void)setKeychainHandler:(FBAuthenticationKeychainHandler *)arg1 ;
-(void)setUsernamePasswordHandler:(FBAuthenticationUsernamePasswordHandler *)arg1 ;
-(void)setWorkUsernamePasswordHandler:(FBAuthenticationWorkUsernamePasswordHandler *)arg1 ;
-(void)setNonceHandler:(FBAuthenticationNonceHandler *)arg1 ;
-(void)setPageIDPasswordHandler:(FBAuthenticationPageIDPasswordHandler *)arg1 ;
-(FBAuthenticationDeviceBasedLoginHandler *)deviceBasedHandler;
-(void)setDeviceBasedHandler:(FBAuthenticationDeviceBasedLoginHandler *)arg1 ;
-(NSMutableDictionary *)authenticationMethodsForUsers;
-(FBAuthenticationStoredUser *)authenticatingUser;
-(NSMutableArray *)availableAuthenticationMethods;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)performAuthentication;
-(void)submitUsername:(id)arg1 nonce:(id)arg2 nonceType:(long long)arg3 ;
-(void)authenticationUserInfoResolver:(id)arg1 userInfoResolved:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)submitUsername:(id)arg1 credential:(id)arg2 credentialType:(long long)arg3 ;
-(BOOL)isDeviceBasedLoginEnabled;
-(BOOL)hasAtLeastOneDeviceBasedLoginAccount;
-(void)setUserInfoResolver:(FBAuthenticationUserInfoResolver *)arg1 ;
-(id<FBAuthenticationManagerDeviceBasedAccountsDataSource>)deviceBasedAccountsDataSource;
-(void)submitWorkUsername:(id)arg1 credential:(id)arg2 ;
-(void)submitUser:(id)arg1 credential:(id)arg2 ;
-(void)performAuthenticationWithFBAuthenticationStoredUser:(id)arg1 ;
-(void)submitDeviceBasedLoginWithUser:(id)arg1 pin:(id)arg2 attempts:(long long)arg3 ;
-(void)continueSSOLoginAndRemoveDeviceBasedAccount;
-(void)fallBackToUsernameAndPassword;
-(void)onLoginSettingAction;
-(void)submitKeychainOrSSOApproval;
-(FBAuthenticationUserInfoResolver *)userInfoResolver;
-(NSString *)userName;
-(void)dealloc;
-(void)setDelegate:(id<FBAuthenticationManagerDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<FBAuthenticationManagerDelegate>)delegate;
-(unsigned long long)method;
-(void)willEnterForeground:(id)arg1 ;
-(NSString *)authToken;
-(NSString *)fullName;
-(void)setMethod:(unsigned long long)arg1 ;
@end

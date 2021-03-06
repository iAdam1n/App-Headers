/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNLoginViewDataSource.h>
#import <Messenger/MNLoginViewDelegate.h>
#import <Messenger/MNUserLoginDelegate.h>
#import <Messenger/FBMUserFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNUserLogin, MNLoginViewControllerDelegate, FBProvider;
@class FBMUserFetcher, MNLoginView, MNLoginErrorHandler, MNSSOController, MNRegistrationExistingAccount, FBUserSession, ZRTokenUpdater, FBLocaleMap, NSString;

@interface MNLoginViewController : UIViewController <MNLoginViewDataSource, MNLoginViewDelegate, MNUserLoginDelegate, FBMUserFetcherDelegate, FBClassProvidable> {

	BOOL _forceEmailPasswordLogin;
	BOOL _loginApprovalRequired;
	id<MNUserLogin> _userLogin;
	FBMUserFetcher* _userFetcher;
	MNLoginView* _loginView;
	MNLoginErrorHandler* _loginErrorHandler;
	MNSSOController* _ssoController;
	BOOL _ssoLoginAllowed;
	MNRegistrationExistingAccount* _existingAccount;
	id<MNLoginViewControllerDelegate> _delegate;
	FBUserSession* _session;
	ZRTokenUpdater* _zeroTokenUpdater;
	id<FBProvider> _userFetcherProvider;
	FBUserSession* _userSession;
	id<FBProvider> _userLoginProvider;
	FBLocaleMap* _localeMap;
	NSString* _appSecret;

}

@property (assign,nonatomic) BOOL ssoLoginAllowed;                                           //@synthesize ssoLoginAllowed=_ssoLoginAllowed - In the implementation block
@property (assign,nonatomic) BOOL showsMainActivityIndicator; 
@property (assign,nonatomic) BOOL showsRegisterButtonActivityIndicator; 
@property (nonatomic,retain) MNRegistrationExistingAccount * existingAccount;                //@synthesize existingAccount=_existingAccount - In the implementation block
@property (assign,nonatomic,__weak) id<MNLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) ZRTokenUpdater * zeroTokenUpdater;                              //@synthesize zeroTokenUpdater=_zeroTokenUpdater - In the implementation block
@property (nonatomic,retain) id<FBProvider> userFetcherProvider;                             //@synthesize userFetcherProvider=_userFetcherProvider - In the implementation block
@property (nonatomic,retain) FBUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) id<FBProvider> userLoginProvider;                               //@synthesize userLoginProvider=_userLoginProvider - In the implementation block
@property (nonatomic,retain) FBLocaleMap * localeMap;                                        //@synthesize localeMap=_localeMap - In the implementation block
@property (nonatomic,copy) NSString * appSecret;                                             //@synthesize appSecret=_appSecret - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_analyticsStringForLoginViewType:(unsigned long long)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(NSString *)appSecret;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_username;
-(FBUserSession *)userSession;
-(void)setUserSession:(FBUserSession *)arg1 ;
-(void)setZeroTokenUpdater:(ZRTokenUpdater *)arg1 ;
-(ZRTokenUpdater *)zeroTokenUpdater;
-(BOOL)fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)setAppSecret:(NSString *)arg1 ;
-(void)fetcher:(id)arg1 didFetchUser:(id)arg2 ;
-(void)fetcher:(id)arg1 couldNotFetchUser:(id)arg2 ;
-(void)userLogin:(id)arg1 didFinishWithCredentials:(id)arg2 httpCookies:(id)arg3 rawResponse:(id)arg4 usingSSO:(BOOL)arg5 ;
-(void)userLogin:(id)arg1 couldNotLoginUser:(id)arg2 usingSSO:(BOOL)arg3 ;
-(id)loginViewUserIdForKeychainSSOLogin:(id)arg1 ;
-(id)loginViewUserDisplayNameForKeychainSSOLogin:(id)arg1 ;
-(void)loginViewDidTapRegisterButton:(id)arg1 ;
-(void)loginViewDidTapSwitchUserButton:(id)arg1 ;
-(void)loginViewDidTapForgotPassword:(id)arg1 ;
-(void)loginViewDidTapLoginWithUsernameAndPasswordButton:(id)arg1 ;
-(void)loginViewDidTapLoginWithKeychainSSOButton:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 zeroTokenUpdater:(id)arg2 userFetcherProvider:(id)arg3 userSession:(id)arg4 localeMap:(id)arg5 appSecret:(id)arg6 userLoginProvider:(id)arg7 ssoController:(id)arg8 ;
-(unsigned long long)_currentLoginViewType;
-(void)updateLayout:(id)arg1 ;
-(void)handleCredentials:(id)arg1 httpCookies:(id)arg2 ;
-(void)forceEmailPasswordLogin;
-(void)_enableUsernameAndPasswordEditingIfNeccessary;
-(void)_showLoginApprovalAlert;
-(void)_showLoginErrorAlert:(id)arg1 ;
-(void)_startZeroRatingObservers;
-(void)_stopZeroRatingObservers;
-(void)_loginComplete;
-(void)_abortLogin;
-(void)zeroTokenRefreshCompleted:(id)arg1 ;
-(void)zeroTokenRefreshFailed:(id)arg1 ;
-(void)_showLoginFailedDueToZeroTokenAlert;
-(void)setShowsRegisterButtonActivityIndicator:(BOOL)arg1 ;
-(BOOL)showsRegisterButtonActivityIndicator;
-(void)setShowsMainActivityIndicator:(BOOL)arg1 ;
-(BOOL)showsMainActivityIndicator;
-(BOOL)ssoLoginAllowed;
-(void)setSsoLoginAllowed:(BOOL)arg1 ;
-(id<FBProvider>)userLoginProvider;
-(void)setUserLoginProvider:(id<FBProvider>)arg1 ;
-(FBLocaleMap *)localeMap;
-(void)setLocaleMap:(FBLocaleMap *)arg1 ;
-(id<FBProvider>)userFetcherProvider;
-(void)setUserFetcherProvider:(id<FBProvider>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNLoginViewControllerDelegate>)arg1 ;
-(id)init;
-(id<MNLoginViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(MNRegistrationExistingAccount *)existingAccount;
-(void)setExistingAccount:(MNRegistrationExistingAccount *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)_password;
@end


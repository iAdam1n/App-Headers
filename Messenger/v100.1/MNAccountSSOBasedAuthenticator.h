/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserLoginDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNAccountAuthenticating.h>

@protocol MNUserLogin, MNAccountAuthenticatingDataSource;
@class MNMainAppCredentialsFetcher, NSString;

@interface MNAccountSSOBasedAuthenticator : NSObject <MNUserLoginDelegate, FBClassProvidable, MNAccountAuthenticating> {

	MNMainAppCredentialsFetcher* _mainAppCredentialsFetcher;
	id<MNUserLogin> _userLogin;
	/*^block*/id _isUnavailableForAccountBlock;
	/*^block*/id _didAuthenticateBlock;
	/*^block*/id _didFailWithErrorBlock;
	BOOL _isAuthenticating;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)userLogin:(id)arg1 didFinishWithCredentials:(id)arg2 httpCookies:(id)arg3 rawResponse:(id)arg4 userStorageServerKey:(id)arg5 usingSSO:(BOOL)arg6 ;
-(void)userLogin:(id)arg1 couldNotLoginUser:(id)arg2 usingSSO:(BOOL)arg3 ;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(id)analyticsTag;
-(BOOL)mayContinueAuthenticationOnFailure;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(id)initWithMainAppCredentialsFetcher:(id)arg1 userLogin:(id)arg2 ;
-(void)_fetchMainAppCredentialsThenAuthenticateAccountWithAccountFBID:(id)arg1 ;
-(void)_completeWithIsUnavailableForAccount;
-(void)_completeWithDidAuthenticateWithFacebookCredentials:(id)arg1 httpsCookies:(id)arg2 userStorageServerKey:(id)arg3 ;
-(void)_completeWithDidFailWithError:(id)arg1 ;
-(void)_loginWithMainAppCredentials:(id)arg1 ;
-(void)_clearRetainedBlocks;
@end

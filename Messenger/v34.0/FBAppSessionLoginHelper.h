/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBLoginVerifierDelegate.h>
#import <Messenger/FBAuthenticationControllingDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBAppSessionLoginHelping.h>

@protocol FBAppSessionLoginHelperDelegate, FBAuthenticationViewControlling;
@class FBThirdPartyAppAuthController, FBAppSessionLoginVerifier, UIAlertView, UIApplication, FBRequesterConfiguration, UIWindow, UIViewController, FBAPISessionStore, NSString;

@interface FBAppSessionLoginHelper : NSObject <FBLoginVerifierDelegate, FBAuthenticationControllingDelegate, UIAlertViewDelegate, FBAppSessionLoginHelping> {

	FBThirdPartyAppAuthController* _thirdPartyAppAuthController;
	FBAppSessionLoginVerifier* _loginVerifier;
	BOOL _fromLaunch;
	UIAlertView* _alertView;
	UIApplication* _application;
	FBRequesterConfiguration* _requesterConfiguration;
	UIWindow* _rootWindow;
	BOOL _showSpinner;
	BOOL _forceClear;
	BOOL _keepAliveIsRunning;
	BOOL _keychainWasLockedAtPreviousLoginVerification;
	id<FBAppSessionLoginHelperDelegate> _delegate;
	UIViewController*<FBAuthenticationViewControlling> _authenticationViewController;
	FBAPISessionStore* _apiSessionStore;
	unsigned long long _state;

}

@property (nonatomic,readonly) UIViewController*<FBAuthenticationViewControlling> authenticationViewController;              //@synthesize authenticationViewController=_authenticationViewController - In the implementation block
@property (nonatomic,retain) FBAPISessionStore * apiSessionStore;                                                            //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                       //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAppSessionLoginHelperDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
-(FBAPISessionStore *)apiSessionStore;
-(void)authenticationController:(id)arg1 loginFailedWithError:(id)arg2 ;
-(void)loginNewlyRegisteredUser:(id)arg1 nonce:(id)arg2 ;
-(BOOL)loginUserWithTransientToken:(id)arg1 token:(id)arg2 ;
-(void)setApiSessionStore:(FBAPISessionStore *)arg1 ;
-(void)_applicationWillForeground;
-(void)_performLoginWithSpinner:(BOOL)arg1 forceClear:(BOOL)arg2 fromLaunch:(BOOL)arg3 inBackground:(BOOL)arg4 ;
-(void)_loginSucceed:(BOOL)arg1 inBackground:(BOOL)arg2 ;
-(void)_presentLoginUIFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2 fromLaunch:(BOOL)arg3 ;
-(void)_presentThirdPartyAppAuthViewControllerFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2 ;
-(void)performLoginWithSpinner:(BOOL)arg1 forceClear:(BOOL)arg2 fromLaunch:(BOOL)arg3 ;
-(void)_refreshSessionData;
-(void)_logStartUpInterruptionReason:(long long)arg1 inBackground:(BOOL)arg2 ;
-(void)didLogout;
-(id)initWithAPISessionStore:(id)arg1 rootWindow:(id)arg2 application:(id)arg3 requesterConfiguration:(id)arg4 delegate:(id)arg5 ;
-(void)restoreLoginScreenAfterError:(id)arg1 ;
-(UIViewController*<FBAuthenticationViewControlling>)authenticationViewController;
-(void)loginVerifierDeferredVerification:(id)arg1 inBackground:(BOOL)arg2 ;
-(void)loginVerifierFailedVerification:(id)arg1 inBackground:(BOOL)arg2 ;
-(void)loginVerifierSucceededVerification:(id)arg1 inBackground:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<FBAppSessionLoginHelperDelegate>)arg1 ;
-(id)init;
-(id<FBAppSessionLoginHelperDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)showError:(id)arg1 ;
@end


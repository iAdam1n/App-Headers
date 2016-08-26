/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAuthHeaderContentFooterViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBAuthUIPresentingConfigurable.h>
#import <Facebook/FBAuthUsernamePasswordViewControllerProtocol.h>

@protocol FBAuthViewConfiguring, FBAuthUsernamePasswordAuthenticating;
@class NSError, UIActionSheet, FBPasswordExtension, UITapGestureRecognizer, NSString, FBAuthUsernamePasswordView;

@interface FBAuthUsernamePasswordViewController : FBAuthHeaderContentFooterViewController <UITextFieldDelegate, FBAuthUIPresentingConfigurable, FBAuthUsernamePasswordViewControllerProtocol> {

	NSError* _error;
	id<FBAuthViewConfiguring> _configuration;
	UIActionSheet* _helpActionSheet;
	FBPasswordExtension* _passwordExtension;
	UITapGestureRecognizer* _recognizer;
	BOOL _alertShown;
	id<FBAuthUsernamePasswordAuthenticating> _authDelegate;
	NSString* _username;
	/*^block*/id _backButtonCallback;

}

@property (nonatomic,copy,readonly) NSString * username;                                                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) id backButtonCallback;                                                       //@synthesize backButtonCallback=_backButtonCallback - In the implementation block
@property (assign,nonatomic) BOOL alertShown;                                                           //@synthesize alertShown=_alertShown - In the implementation block
@property (nonatomic,readonly) FBAuthUsernamePasswordView * usernamePasswordView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthUsernamePasswordAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthUsernamePasswordAuthenticating>)arg1 ;
-(id<FBAuthUsernamePasswordAuthenticating>)authDelegate;
-(id)analyticsModule;
-(void)_backButtonTapped:(id)arg1 ;
-(FBAuthUsernamePasswordView *)usernamePasswordView;
-(void)setBackButtonCallback:(id)arg1 ;
-(id)initWithUsername:(id)arg1 error:(id)arg2 configuration:(id)arg3 ;
-(void)_loginTapped:(id)arg1 ;
-(void)_helpTapped:(id)arg1 ;
-(id)backButtonCallback;
-(void)_resignAnyFirstResponder;
-(BOOL)_canSubmitLogin;
-(void)setAlertShown:(BOOL)arg1 ;
-(void)_submitLogin;
-(BOOL)alertShown;
-(void)_signupTapped:(id)arg1 ;
-(void)_passwordExtensionButtonTapped:(id)arg1 ;
-(id)_currentIdentifier;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_textChanged:(id)arg1 ;
-(NSString *)username;
@end

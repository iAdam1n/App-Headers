/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIActivityIndicatorView, UITextField, UIButton;

@interface FBAuthUsernamePasswordContentView : UIView {

	double _maximumWidth;
	UIView* _inputContainer;
	UIView* _usernameBackground;
	UIView* _passwordBackground;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _passwordExtensionsEnabled;
	UITextField* _usernameInput;
	UITextField* _passwordInput;
	UIButton* _loginButton;
	UIButton* _passwordExtensionButton;

}

@property (nonatomic,readonly) UITextField * usernameInput;                     //@synthesize usernameInput=_usernameInput - In the implementation block
@property (nonatomic,readonly) UITextField * passwordInput;                     //@synthesize passwordInput=_passwordInput - In the implementation block
@property (nonatomic,readonly) UIButton * loginButton;                          //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,readonly) UIButton * passwordExtensionButton;              //@synthesize passwordExtensionButton=_passwordExtensionButton - In the implementation block
-(id)_makeInputContainerWithConfiguration:(id)arg1 ;
-(id)_makePasswordInputWithConfiguration:(id)arg1 ;
-(id)_makeLoginButtonWithConfiguration:(id)arg1 ;
-(UITextField *)passwordInput;
-(id)_makeInputBackgroundWithConfiguration:(id)arg1 ;
-(id)_makeUsernameInputWithConfiguration:(id)arg1 ;
-(id)_makePasswordExtensionButtonWithConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 showPasswordExtensionButton:(BOOL)arg2 ;
-(UITextField *)usernameInput;
-(UIButton *)passwordExtensionButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stopActivityIndicator;
-(void)startActivityIndicator;
-(UIButton *)loginButton;
@end

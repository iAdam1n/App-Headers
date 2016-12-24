/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, UIActivityIndicatorView, UITextField, UIButton;

@interface FBDBLPasswordContentView : UIView {

	UIView* _inputContainer;
	UILabel* _instructionsLabel;
	UIActivityIndicatorView* _activityIndicator;
	UITextField* _passwordInput;
	UIButton* _loginButton;

}

@property (nonatomic,readonly) UITextField * passwordInput;              //@synthesize passwordInput=_passwordInput - In the implementation block
@property (nonatomic,readonly) UIButton * loginButton;                   //@synthesize loginButton=_loginButton - In the implementation block
-(id)_makeInputContainerWithConfiguration:(id)arg1 ;
-(id)_makePasswordInputWithConfiguration:(id)arg1 ;
-(id)_makeLoginButtonWithConfiguration:(id)arg1 ;
-(id)_makeInstructionsLabel:(id)arg1 withConfiguration:(id)arg2 ;
-(id)initWithInstructions:(id)arg1 configuration:(id)arg2 ;
-(UITextField *)passwordInput;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stopActivityIndicator;
-(void)startActivityIndicator;
-(UIButton *)loginButton;
@end

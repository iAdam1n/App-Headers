/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class SErrorPopup, UITextField, UIButton, UILabel, NSString;

@interface SSignInView : UIView <UITextFieldDelegate> {

	SErrorPopup* _emailErrorPopup;
	SErrorPopup* _passwordErrorPopup;
	UITextField* emailTextField;
	UITextField* passwordTextField;
	UIButton* _closeButton;
	UIButton* _questionButton;
	UIButton* _signInButton;
	UILabel* _dontHaveAccountLabel;
	UILabel* _registerLabel;
	UILabel* _forgotPasswordLabel;
	UITextField* _emailTextFieldleftbox;
	UITextField* _emailTextFieldrightbox;
	UITextField* _passwordTextFieldleftbox;
	UITextField* _passwordTextFieldrightbox;
	UIButton* _emailErrorButton;
	UIButton* _emailRightPadding;
	UIButton* _passwordRightPadding;
	UIButton* _passwordErrorButton;

}

@property (nonatomic,retain) UIButton * closeButton;                               //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIButton * questionButton;                            //@synthesize questionButton=_questionButton - In the implementation block
@property (nonatomic,retain) UIButton * signInButton;                              //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UILabel * dontHaveAccountLabel;                       //@synthesize dontHaveAccountLabel=_dontHaveAccountLabel - In the implementation block
@property (nonatomic,retain) UILabel * registerLabel;                              //@synthesize registerLabel=_registerLabel - In the implementation block
@property (nonatomic,retain) UILabel * forgotPasswordLabel;                        //@synthesize forgotPasswordLabel=_forgotPasswordLabel - In the implementation block
@property (nonatomic,retain) UITextField * emailTextField; 
@property (nonatomic,retain) UITextField * passwordTextField; 
@property (nonatomic,retain) UITextField * emailTextFieldleftbox;                  //@synthesize emailTextFieldleftbox=_emailTextFieldleftbox - In the implementation block
@property (nonatomic,retain) UITextField * emailTextFieldrightbox;                 //@synthesize emailTextFieldrightbox=_emailTextFieldrightbox - In the implementation block
@property (nonatomic,retain) UITextField * passwordTextFieldleftbox;               //@synthesize passwordTextFieldleftbox=_passwordTextFieldleftbox - In the implementation block
@property (nonatomic,retain) UITextField * passwordTextFieldrightbox;              //@synthesize passwordTextFieldrightbox=_passwordTextFieldrightbox - In the implementation block
@property (nonatomic,retain) UIButton * emailErrorButton;                          //@synthesize emailErrorButton=_emailErrorButton - In the implementation block
@property (nonatomic,retain) UIButton * emailRightPadding;                         //@synthesize emailRightPadding=_emailRightPadding - In the implementation block
@property (nonatomic,retain) UIButton * passwordRightPadding;                      //@synthesize passwordRightPadding=_passwordRightPadding - In the implementation block
@property (nonatomic,retain) UIButton * passwordErrorButton;                       //@synthesize passwordErrorButton=_passwordErrorButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)signInView;
-(void)onTap:(id)arg1 ;
-(void)setQuestionButton:(UIButton *)arg1 ;
-(void)setRegisterLabel:(UILabel *)arg1 ;
-(void)toggleEmailErrorPopup;
-(void)togglePasswordErrorPopup;
-(UILabel *)dontHaveAccountLabel;
-(UIButton *)emailRightPadding;
-(UIButton *)passwordRightPadding;
-(void)passwordErrorButton:(id)arg1 ;
-(void)emailErrorButton:(id)arg1 ;
-(void)setEmailTextField:(UITextField *)arg1 ;
-(void)setDontHaveAccountLabel:(UILabel *)arg1 ;
-(void)setForgotPasswordLabel:(UILabel *)arg1 ;
-(void)setEmailTextFieldleftbox:(UITextField *)arg1 ;
-(void)setEmailTextFieldrightbox:(UITextField *)arg1 ;
-(void)setPasswordTextFieldleftbox:(UITextField *)arg1 ;
-(void)setPasswordTextFieldrightbox:(UITextField *)arg1 ;
-(void)setEmailErrorButton:(UIButton *)arg1 ;
-(void)setEmailRightPadding:(UIButton *)arg1 ;
-(void)setPasswordRightPadding:(UIButton *)arg1 ;
-(void)setPasswordErrorButton:(UIButton *)arg1 ;
-(UIButton *)emailErrorButton;
-(void)setEmailErrorText:(id)arg1 ;
-(UIButton *)passwordErrorButton;
-(void)setPasswordErrorText:(id)arg1 ;
-(UIButton *)questionButton;
-(UILabel *)forgotPasswordLabel;
-(UILabel *)registerLabel;
-(void)setEmailErrorVisible:(BOOL)arg1 ;
-(UITextField *)emailTextFieldleftbox;
-(UITextField *)emailTextFieldrightbox;
-(void)setPasswordErrorVisible:(BOOL)arg1 ;
-(UITextField *)passwordTextFieldleftbox;
-(UITextField *)passwordTextFieldrightbox;
-(void)dealloc;
-(void)awakeFromNib;
-(UITextField *)passwordTextField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UIButton *)closeButton;
-(UIButton *)signInButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UITextField *)emailTextField;
-(void)setPasswordTextField:(UITextField *)arg1 ;
-(void)setSignInButton:(UIButton *)arg1 ;
@end


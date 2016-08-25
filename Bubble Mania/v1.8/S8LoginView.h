/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/S8AccountSharedView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UIButton, NSString;

@interface S8LoginView : S8AccountSharedView <UITextFieldDelegate> {

	UITextField* loginAccountName;
	UITextField* loginPassword;
	UIButton* loginButton;
	UIButton* forgotPasswordButton;

}

@property (nonatomic,retain) UITextField * loginAccountName; 
@property (nonatomic,retain) UITextField * loginPassword; 
@property (nonatomic,retain) UIButton * loginButton; 
@property (nonatomic,retain) UIButton * forgotPasswordButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showS8LoginView;
-(void)hideView;
-(UITextField *)loginAccountName;
-(UITextField *)loginPassword;
-(UIButton *)forgotPasswordButton;
-(void)authenticationResponse:(id)arg1 ;
-(void)showOopsMessage:(id)arg1 ;
-(void)changeAccount;
-(void)forgotPasswordPressed;
-(void)setLoginAccountName:(UITextField *)arg1 ;
-(void)setLoginPassword:(UITextField *)arg1 ;
-(void)setLoginButton:(UIButton *)arg1 ;
-(void)setForgotPasswordButton:(UIButton *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)accountChanged;
-(UIButton *)loginButton;
@end


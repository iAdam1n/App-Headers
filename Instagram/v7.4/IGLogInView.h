/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGLogInViewDelegate, IGLogInViewOnePasswordDelegate;
@class IGTextField, IGPasswordField, IGFacebookButton, UIView, NSString;

@interface IGLogInView : UIView <IGTextFieldDelegate> {

	BOOL _submitting;
	BOOL _fromReg;
	id<IGLogInViewDelegate> _delegate;
	id<IGLogInViewOnePasswordDelegate> _onePasswordDelegate;
	IGTextField* _usernameField;
	IGPasswordField* _passwordField;
	IGFacebookButton* _facebookButton;
	UIView* _facebookButtonSeparator;
	double _fieldHeight;

}

@property (assign,nonatomic,__weak) id<IGLogInViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGLogInViewOnePasswordDelegate> onePasswordDelegate;              //@synthesize onePasswordDelegate=_onePasswordDelegate - In the implementation block
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) IGTextField * usernameField;                                                //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGPasswordField * passwordField;                                            //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                          //@synthesize facebookButton=_facebookButton - In the implementation block
@property (assign,nonatomic) BOOL submitting;                                                            //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) BOOL fromReg;                                                               //@synthesize fromReg=_fromReg - In the implementation block
@property (nonatomic,retain) UIView * facebookButtonSeparator;                                           //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
@property (assign,nonatomic) double fieldHeight;                                                         //@synthesize fieldHeight=_fieldHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUsernameField:(IGTextField *)arg1 ;
-(BOOL)clockIsIncorrect;
-(void)showMissingError:(id)arg1 ;
-(IGFacebookButton *)facebookButton;
-(BOOL)submitting;
-(void)setSubmitting:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 credentialsFormHeight:(double)arg2 ;
-(void)setFieldHeight:(double)arg1 ;
-(UIView *)facebookButtonSeparator;
-(double)fieldHeight;
-(void)forgotTapped;
-(void)logInButtonTapped;
-(void)didChangeTextFieldCommon:(id)arg1 ;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(BOOL)fromReg;
-(void)setFromReg:(BOOL)arg1 ;
-(void)setFacebookButtonSeparator:(UIView *)arg1 ;
-(void)configureOnePasswordExtensionIfNeeded;
-(id<IGLogInViewOnePasswordDelegate>)onePasswordDelegate;
-(void)didTapOnePasswordButton:(id)arg1 ;
-(void)setOnePasswordDelegate:(id<IGLogInViewOnePasswordDelegate>)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGLogInViewDelegate>)arg1 ;
-(id<IGLogInViewDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(BOOL)validate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(IGPasswordField *)passwordField;
-(void)clearFields;
-(void)setUsername:(NSString *)arg1 ;
-(IGTextField *)usernameField;
-(NSString *)username;
-(void)setLoading:(BOOL)arg1 ;
-(void)setPasswordField:(IGPasswordField *)arg1 ;
@end


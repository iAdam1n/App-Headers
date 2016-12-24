/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBStateMachineDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBPhoneNumber;
@class FBUserSession, UIView, UIButton, UITextField, UIActivityIndicatorView, FBKeyboardObserver, UIBarButtonItem, FBStateMachine, FBRichTextView, NSArray, FBNetworkImageView, NSString, UIAlertView;

@interface FBPhoneNumberAcquisitionConfirmationView : UIScrollView <FBKeyboardObserverDelegate, FBStateMachineDelegate, UIAlertViewDelegate> {

	FBUserSession* _session;
	UIView* _buttonsContainer;
	UIButton* _submitCodeButton;
	UIButton* _resendCodeButton;
	UIButton* _updateCurrentPhoneNumberButton;
	UITextField* _textFieldCode;
	UIActivityIndicatorView* _buttonSpinner;
	FBKeyboardObserver* _keyboardObserver;
	UIView* _inputAccessoryView;
	UIBarButtonItem* _inputAccessoryPrimaryButton;
	BOOL _codeResent;
	id<FBPhoneNumber> _phoneNumber;
	FBStateMachine* _stateMachine;
	FBRichTextView* _headerLabel;
	NSArray* _secondaryButtons;
	FBNetworkImageView* _separationLine;
	NSString* _spinnerButtonText;
	UIAlertView* _alertView;

}

@property (nonatomic,copy) NSArray * secondaryButtons;                                     //@synthesize secondaryButtons=_secondaryButtons - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * separationLine;                          //@synthesize separationLine=_separationLine - In the implementation block
@property (nonatomic,copy) NSString * spinnerButtonText;                                   //@synthesize spinnerButtonText=_spinnerButtonText - In the implementation block
@property (assign,nonatomic) BOOL codeResent;                                              //@synthesize codeResent=_codeResent - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                      //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) id<FBPhoneNumber> phoneNumber;                                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) UIButton * submitCodeButton;                                //@synthesize submitCodeButton=_submitCodeButton - In the implementation block
@property (nonatomic,readonly) UIButton * resendCodeButton;                                //@synthesize resendCodeButton=_resendCodeButton - In the implementation block
@property (nonatomic,readonly) UIButton * updateCurrentPhoneNumberButton;                  //@synthesize updateCurrentPhoneNumberButton=_updateCurrentPhoneNumberButton - In the implementation block
@property (nonatomic,readonly) UITextField * textFieldCode;                                //@synthesize textFieldCode=_textFieldCode - In the implementation block
@property (nonatomic,readonly) FBStateMachine * stateMachine;                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) FBRichTextView * headerLabel;                                 //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * inputAccessoryPrimaryButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(NSArray *)secondaryButtons;
-(void)_composeTextFieldCode;
-(void)_composeButtons;
-(void)_composeHeaderLabel;
-(id)_resendCodeButtonTitleText;
-(void)setSecondaryButtons:(NSArray *)arg1 ;
-(void)setSeparationLine:(FBNetworkImageView *)arg1 ;
-(id)_headerLabelText;
-(void)setSpinnerButtonText:(NSString *)arg1 ;
-(NSString *)spinnerButtonText;
-(void)_enableAllButtons;
-(void)setCodeResent:(BOOL)arg1 ;
-(void)_addSpinnerToButton:(id)arg1 style:(long long)arg2 ;
-(void)_disableAllButtons;
-(void)_showValidatingCodeFailedAlertView;
-(void)_showResendingCodeFailedAlertView;
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(UIButton *)submitCodeButton;
-(UIButton *)resendCodeButton;
-(UITextField *)textFieldCode;
-(UIBarButtonItem *)inputAccessoryPrimaryButton;
-(FBNetworkImageView *)separationLine;
-(BOOL)codeResent;
-(BOOL)shouldDisplayInputAccessoryView;
-(id)_updateCurrentPhoneNumberButtonTitleText;
-(id)initWithPhoneNumber:(id)arg1 withSession:(id)arg2 ;
-(UIButton *)updateCurrentPhoneNumberButton;
-(void)layoutSubviews;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)inputAccessoryView;
-(id<FBPhoneNumber>)phoneNumber;
-(void)setPhoneNumber:(id<FBPhoneNumber>)arg1 ;
-(FBRichTextView *)headerLabel;
-(void)setHeaderLabel:(FBRichTextView *)arg1 ;
-(void)_removeSpinner;
-(UIAlertView *)alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(FBStateMachine *)stateMachine;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIView.h>
#import <eBay/EBNResponderErrorHandling.h>

@class EUILabel, CustomBackgroundTextField, EUICallToActionButton, ActivitySpinnerView, LengthLimitingTextFieldDelegate, EUIView, EUIImageView, NSLayoutConstraint;

@interface EBUPinSentView : EUIView <EBNResponderErrorHandling> {

	BOOL _layoutInitialized;
	EUILabel* _titleLabel;
	CustomBackgroundTextField* _codeField;
	EUICallToActionButton* _resendButton;
	EUICallToActionButton* _sendNewCodeButton;
	EUICallToActionButton* _signInButton;
	ActivitySpinnerView* _signInActivityIndicator;
	ActivitySpinnerView* _resendActivityIndicator;
	ActivitySpinnerView* _sendNewCodeActivityIndicator;
	LengthLimitingTextFieldDelegate* _codeFieldDelegate;
	EUIView* _errorView;
	EUIImageView* _errorImageView;
	EUILabel* _errorLabel;
	NSLayoutConstraint* _errorViewCollapsedHeightConstraint;

}

@property (assign,nonatomic,__weak) ActivitySpinnerView * signInActivityIndicator;                   //@synthesize signInActivityIndicator=_signInActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) ActivitySpinnerView * resendActivityIndicator;                   //@synthesize resendActivityIndicator=_resendActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) ActivitySpinnerView * sendNewCodeActivityIndicator;              //@synthesize sendNewCodeActivityIndicator=_sendNewCodeActivityIndicator - In the implementation block
@property (nonatomic,retain) LengthLimitingTextFieldDelegate * codeFieldDelegate;                    //@synthesize codeFieldDelegate=_codeFieldDelegate - In the implementation block
@property (assign,nonatomic,__weak) EUIView * errorView;                                             //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * errorImageView;                                   //@synthesize errorImageView=_errorImageView - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * errorLabel;                                           //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * errorViewCollapsedHeightConstraint;                //@synthesize errorViewCollapsedHeightConstraint=_errorViewCollapsedHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL layoutInitialized;                                                 //@synthesize layoutInitialized=_layoutInitialized - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) CustomBackgroundTextField * codeField;                           //@synthesize codeField=_codeField - In the implementation block
@property (assign,nonatomic,__weak) EUICallToActionButton * resendButton;                            //@synthesize resendButton=_resendButton - In the implementation block
@property (assign,nonatomic,__weak) EUICallToActionButton * sendNewCodeButton;                       //@synthesize sendNewCodeButton=_sendNewCodeButton - In the implementation block
@property (assign,nonatomic,__weak) EUICallToActionButton * signInButton;                            //@synthesize signInButton=_signInButton - In the implementation block
-(void)setErrorImageView:(EUIImageView *)arg1 ;
-(EUIImageView *)errorImageView;
-(void)setLayoutInitialized:(BOOL)arg1 ;
-(BOOL)layoutInitialized;
-(void)setErrorViewCollapsedHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)errorViewCollapsedHeightConstraint;
-(ActivitySpinnerView *)signInActivityIndicator;
-(void)animateErrorViewIsVisible:(BOOL)arg1 ;
-(void)setTextFieldFirstResponder;
-(void)updateViewIsVisible:(BOOL)arg1 ;
-(void)setSignInActivityIndicator:(ActivitySpinnerView *)arg1 ;
-(CustomBackgroundTextField *)codeField;
-(EUICallToActionButton *)resendButton;
-(EUICallToActionButton *)sendNewCodeButton;
-(void)updateSignInButtonEnabled:(BOOL)arg1 ;
-(void)updateViewIsResending:(BOOL)arg1 ;
-(void)updateViewIsSigningIn:(BOOL)arg1 ;
-(void)updateViewIsSendingNewCode:(BOOL)arg1 ;
-(void)updateSendNewCodeButtonVisiblilty:(BOOL)arg1 ;
-(ActivitySpinnerView *)resendActivityIndicator;
-(ActivitySpinnerView *)sendNewCodeActivityIndicator;
-(void)setCodeField:(CustomBackgroundTextField *)arg1 ;
-(void)setResendButton:(EUICallToActionButton *)arg1 ;
-(void)setSendNewCodeButton:(EUICallToActionButton *)arg1 ;
-(void)setResendActivityIndicator:(ActivitySpinnerView *)arg1 ;
-(void)setSendNewCodeActivityIndicator:(ActivitySpinnerView *)arg1 ;
-(LengthLimitingTextFieldDelegate *)codeFieldDelegate;
-(void)setCodeFieldDelegate:(LengthLimitingTextFieldDelegate *)arg1 ;
-(BOOL)presentError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(EUILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(id)accessibilityElements;
-(EUICallToActionButton *)signInButton;
-(void)setErrorLabel:(EUILabel *)arg1 ;
-(EUILabel *)errorLabel;
-(void)setErrorView:(EUIView *)arg1 ;
-(EUIView *)errorView;
-(void)presentError:(id)arg1 ;
-(void)setSignInButton:(EUICallToActionButton *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <nautilus/EBNDataManagerObserver.h>
#import <eBay/EBNResponderErrorHandling.h>

@protocol EBUSignInViewDelegate;
@class EUILabel, CustomBackgroundTextField, EUICallToActionButton, EUILinkButton, UIViewController, NSDictionary, UIButton, LengthLimitingTextFieldDelegate, ActivitySpinnerView, NSString, EUIView, EUIImageView, NSLayoutConstraint, EBNCacheManager;

@interface EBUSignInView : EUIView <UITextFieldDelegate, UIAlertViewDelegate, EBNDataManagerObserver, EBNResponderErrorHandling> {

	BOOL _isSigningIn;
	BOOL _supportsTouchPrompt;
	BOOL _shouldHidePassword;
	BOOL _layoutInitialized;
	EUILabel* _titleLabel;
	CustomBackgroundTextField* _usernameField;
	CustomBackgroundTextField* _passwordField;
	EUICallToActionButton* _signInButton;
	EUILinkButton* _oneTimePasswordButton;
	UIViewController*<EBUSignInViewDelegate> _delegate;
	NSDictionary* _metrics;
	UIButton* _hidePasswordButton;
	UIButton* _onePasswordButton;
	LengthLimitingTextFieldDelegate* _userNameFieldDelegate;
	ActivitySpinnerView* _signInActivityIndicator;
	EUICallToActionButton* _forgotButton;
	NSString* _usernameToSave;
	EUIView* _errorView;
	EUIImageView* _errorImageView;
	EUILabel* _errorLabel;
	NSLayoutConstraint* _errorViewCollapsedHeightConstraint;
	EBNCacheManager* _cacheManager;

}

@property (assign,nonatomic,__weak) UIViewController*<EBUSignInViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                                      //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic,__weak) UIButton * hidePasswordButton;                                        //@synthesize hidePasswordButton=_hidePasswordButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * onePasswordButton;                                         //@synthesize onePasswordButton=_onePasswordButton - In the implementation block
@property (nonatomic,retain) LengthLimitingTextFieldDelegate * userNameFieldDelegate;                     //@synthesize userNameFieldDelegate=_userNameFieldDelegate - In the implementation block
@property (assign,nonatomic,__weak) ActivitySpinnerView * signInActivityIndicator;                        //@synthesize signInActivityIndicator=_signInActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) EUICallToActionButton * forgotButton;                                 //@synthesize forgotButton=_forgotButton - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePassword;                                                     //@synthesize shouldHidePassword=_shouldHidePassword - In the implementation block
@property (nonatomic,copy) NSString * usernameToSave;                                                     //@synthesize usernameToSave=_usernameToSave - In the implementation block
@property (assign,nonatomic,__weak) EUIView * errorView;                                                  //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * errorImageView;                                        //@synthesize errorImageView=_errorImageView - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * errorLabel;                                                //@synthesize errorLabel=_errorLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * errorViewCollapsedHeightConstraint;              //@synthesize errorViewCollapsedHeightConstraint=_errorViewCollapsedHeightConstraint - In the implementation block
@property (nonatomic,retain) EBNCacheManager * cacheManager;                                              //@synthesize cacheManager=_cacheManager - In the implementation block
@property (assign,nonatomic) BOOL layoutInitialized;                                                      //@synthesize layoutInitialized=_layoutInitialized - In the implementation block
@property (assign,nonatomic) BOOL isSigningIn;                                                            //@synthesize isSigningIn=_isSigningIn - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) CustomBackgroundTextField * usernameField;                            //@synthesize usernameField=_usernameField - In the implementation block
@property (assign,nonatomic,__weak) CustomBackgroundTextField * passwordField;                            //@synthesize passwordField=_passwordField - In the implementation block
@property (assign,nonatomic,__weak) EUICallToActionButton * signInButton;                                 //@synthesize signInButton=_signInButton - In the implementation block
@property (assign,nonatomic,__weak) EUILinkButton * oneTimePasswordButton;                                //@synthesize oneTimePasswordButton=_oneTimePasswordButton - In the implementation block
@property (assign,nonatomic) BOOL supportsTouchPrompt;                                                    //@synthesize supportsTouchPrompt=_supportsTouchPrompt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheManagerForSignInView;
+(void)clearCacheManagerForSignIn;
+(id)signInViewWithDelegate:(id)arg1 ;
-(void)setErrorImageView:(EUIImageView *)arg1 ;
-(EUIImageView *)errorImageView;
-(void)textField:(id)arg1 didChangeStringValue:(id)arg2 ;
-(void)setShouldHidePassword:(BOOL)arg1 ;
-(BOOL)shouldHidePassword;
-(void)toggleHidePassword:(id)arg1 ;
-(void)updateShowHidePasswordTitle;
-(BOOL)showOnePasswordButton;
-(void)findLoginFromOnePassword:(id)arg1 ;
-(UIButton *)hidePasswordButton;
-(void)forgotButtonPressed:(id)arg1 ;
-(void)signInButtonPressed:(id)arg1 ;
-(void)setLoadingDisplayIsVisible:(BOOL)arg1 ;
-(void)updateSignInButtonEnabled;
-(void)useOTPSignInValueChanged;
-(void)setLayoutInitialized:(BOOL)arg1 ;
-(EUILinkButton *)oneTimePasswordButton;
-(UIButton *)onePasswordButton;
-(BOOL)layoutInitialized;
-(EUICallToActionButton *)forgotButton;
-(void)setErrorViewCollapsedHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)errorViewCollapsedHeightConstraint;
-(CustomBackgroundTextField *)usernameField;
-(void)updateSignInButtonEnabledWithUsernameText:(id)arg1 andPasswordText:(id)arg2 ;
-(void)setIsSigningIn:(BOOL)arg1 ;
-(NSString *)usernameToSave;
-(void)promptForUseTouchID;
-(void)setUsernameToSave:(NSString *)arg1 ;
-(ActivitySpinnerView *)signInActivityIndicator;
-(void)updateViewsIsSigningIn:(BOOL)arg1 ;
-(void)animateErrorViewIsVisible:(BOOL)arg1 ;
-(void)updatePasswordRightViewSizing;
-(void)cancelResetPassword:(id)arg1 ;
-(void)gotoResetPassword:(id)arg1 ;
-(void)cleanupAfterResetPasswordAlert;
-(BOOL)supportsTouchPrompt;
-(void)setTextFieldFirstResponder;
-(void)resignTextFieldResponders;
-(void)updateViewIsVisible:(BOOL)arg1 ;
-(void)setUsernameField:(CustomBackgroundTextField *)arg1 ;
-(void)setOneTimePasswordButton:(EUILinkButton *)arg1 ;
-(BOOL)isSigningIn;
-(void)setSupportsTouchPrompt:(BOOL)arg1 ;
-(void)setHidePasswordButton:(UIButton *)arg1 ;
-(void)setOnePasswordButton:(UIButton *)arg1 ;
-(LengthLimitingTextFieldDelegate *)userNameFieldDelegate;
-(void)setUserNameFieldDelegate:(LengthLimitingTextFieldDelegate *)arg1 ;
-(void)setSignInActivityIndicator:(ActivitySpinnerView *)arg1 ;
-(void)setForgotButton:(EUICallToActionButton *)arg1 ;
-(void)setCacheManager:(EBNCacheManager *)arg1 ;
-(EBNCacheManager *)cacheManager;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)signInSucceeded;
-(BOOL)presentError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(UIViewController*<EBUSignInViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(UIViewController*<EBUSignInViewDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(EUILabel *)titleLabel;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)updateConstraints;
-(NSDictionary *)metrics;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(id)accessibilityElements;
-(void)didEnterBackground:(id)arg1 ;
-(CustomBackgroundTextField *)passwordField;
-(void)setupObservers;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(EUICallToActionButton *)signInButton;
-(void)setErrorLabel:(EUILabel *)arg1 ;
-(EUILabel *)errorLabel;
-(void)setErrorView:(EUIView *)arg1 ;
-(EUIView *)errorView;
-(void)setPasswordField:(CustomBackgroundTextField *)arg1 ;
-(void)setSignInButton:(EUICallToActionButton *)arg1 ;
@end


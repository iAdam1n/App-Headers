/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Gumtree/PPHTMLLabelDelegate.h>
#import <Gumtree/ECSocialLoginDelegateProtocol.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString, UIView, NSLayoutConstraint, ECFacebookLoginButton, ECFacebookDisclaimerLabel, ECFacebookOrLabel, ECFacebookDividerLine, NSMutableArray, UILabel, UIButton, ECSegmentedView, ECPersistentPlaceholderTextField, ECThemedButton, PPHTMLLabel, ECGoogleLoginButton, ECGoogleLoginAdapter, ECFacebookLoginAdapter;

@interface ECSignInViewController : ECBaseViewController <UITextFieldDelegate, PPHTMLLabelDelegate, ECSocialLoginDelegateProtocol, UIWebViewDelegate> {

	NSString* _email;
	NSString* _prompt;
	UIView* _socialLoginContainerView;
	NSLayoutConstraint* _socialLoginContainerHeightConstraint;
	NSLayoutConstraint* _socialLoginContainerTopConstraint;
	ECFacebookLoginButton* _fbLoginButton;
	NSLayoutConstraint* _fbLoginButtonHeightConstraint;
	ECFacebookDisclaimerLabel* _fbDisclaimerLabel;
	NSLayoutConstraint* _fbDisclaimerLabelTopConstraint;
	ECFacebookOrLabel* _fbDividerOrLabel;
	ECFacebookDividerLine* _socialLoginOrDividerLine;
	NSMutableArray* _blockNotificationhandlers;
	UILabel* _topLabel;
	NSLayoutConstraint* _topLabelHeightConstraint;
	UIButton* _continueButton;
	NSLayoutConstraint* _continueButtonTopConstraint;
	NSLayoutConstraint* _continueButtonHeightConstraint;
	ECSegmentedView* _segmentedView;
	ECPersistentPlaceholderTextField* _emailField;
	ECPersistentPlaceholderTextField* _passwordField;
	ECThemedButton* _signInButton;
	UILabel* _subLabel;
	NSLayoutConstraint* _bottomLabelConstraint;
	PPHTMLLabel* _htmlLabel;
	NSLayoutConstraint* _htmlLinkTopConstraint;
	NSLayoutConstraint* _htmlLinkHeightConstraint;
	ECGoogleLoginButton* _googlePlusSignInButton;
	NSLayoutConstraint* _googlePlusButtonHeightConstraint;
	NSLayoutConstraint* _googlePlusButtonTopConstraint;
	/*^block*/id _completionHandler;
	long long _mode;
	NSString* _cancelButtonTitle;
	ECGoogleLoginAdapter* _googleLoginAdapter;
	ECFacebookLoginAdapter* _facebookLoginAdapter;

}

@property (nonatomic,retain) NSString * email;                                                              //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * prompt;                                                             //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic,__weak) UIView * socialLoginContainerView;                                      //@synthesize socialLoginContainerView=_socialLoginContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * socialLoginContainerHeightConstraint;              //@synthesize socialLoginContainerHeightConstraint=_socialLoginContainerHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * socialLoginContainerTopConstraint;                 //@synthesize socialLoginContainerTopConstraint=_socialLoginContainerTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) ECFacebookLoginButton * fbLoginButton;                                  //@synthesize fbLoginButton=_fbLoginButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * fbLoginButtonHeightConstraint;                     //@synthesize fbLoginButtonHeightConstraint=_fbLoginButtonHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) ECFacebookDisclaimerLabel * fbDisclaimerLabel;                          //@synthesize fbDisclaimerLabel=_fbDisclaimerLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * fbDisclaimerLabelTopConstraint;                    //@synthesize fbDisclaimerLabelTopConstraint=_fbDisclaimerLabelTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) ECFacebookOrLabel * fbDividerOrLabel;                                   //@synthesize fbDividerOrLabel=_fbDividerOrLabel - In the implementation block
@property (assign,nonatomic,__weak) ECFacebookDividerLine * socialLoginOrDividerLine;                       //@synthesize socialLoginOrDividerLine=_socialLoginOrDividerLine - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockNotificationhandlers;                                    //@synthesize blockNotificationhandlers=_blockNotificationhandlers - In the implementation block
@property (nonatomic,retain) UILabel * topLabel;                                                            //@synthesize topLabel=_topLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * topLabelHeightConstraint;                          //@synthesize topLabelHeightConstraint=_topLabelHeightConstraint - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                                     //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * continueButtonTopConstraint;                       //@synthesize continueButtonTopConstraint=_continueButtonTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * continueButtonHeightConstraint;                    //@synthesize continueButtonHeightConstraint=_continueButtonHeightConstraint - In the implementation block
@property (nonatomic,retain) ECSegmentedView * segmentedView;                                               //@synthesize segmentedView=_segmentedView - In the implementation block
@property (nonatomic,retain) ECPersistentPlaceholderTextField * emailField;                                 //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) ECPersistentPlaceholderTextField * passwordField;                              //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) ECThemedButton * signInButton;                                                 //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UILabel * subLabel;                                                            //@synthesize subLabel=_subLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomLabelConstraint;                             //@synthesize bottomLabelConstraint=_bottomLabelConstraint - In the implementation block
@property (nonatomic,retain) PPHTMLLabel * htmlLabel;                                                       //@synthesize htmlLabel=_htmlLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * htmlLinkTopConstraint;                             //@synthesize htmlLinkTopConstraint=_htmlLinkTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * htmlLinkHeightConstraint;                          //@synthesize htmlLinkHeightConstraint=_htmlLinkHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) ECGoogleLoginButton * googlePlusSignInButton;                           //@synthesize googlePlusSignInButton=_googlePlusSignInButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * googlePlusButtonHeightConstraint;                  //@synthesize googlePlusButtonHeightConstraint=_googlePlusButtonHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * googlePlusButtonTopConstraint;                     //@synthesize googlePlusButtonTopConstraint=_googlePlusButtonTopConstraint - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                                    //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,retain) ECGoogleLoginAdapter * googleLoginAdapter;                                     //@synthesize googleLoginAdapter=_googleLoginAdapter - In the implementation block
@property (nonatomic,retain) ECFacebookLoginAdapter * facebookLoginAdapter;                                 //@synthesize facebookLoginAdapter=_facebookLoginAdapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateEnable;
-(void)setHtmlLabel:(PPHTMLLabel *)arg1 ;
-(PPHTMLLabel *)htmlLabel;
-(BOOL)handleURLClickedWithRequest:(id)arg1 ;
-(void)signInWithAccessToken:(id)arg1 email:(id)arg2 error:(id)arg3 socialType:(unsigned long long)arg4 ;
-(void)updateValues;
-(id)initForMode:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSegmentedView:(ECSegmentedView *)arg1 ;
-(ECSegmentedView *)segmentedView;
-(ECPersistentPlaceholderTextField *)emailField;
-(void)setEmailField:(ECPersistentPlaceholderTextField *)arg1 ;
-(void)removeKeyboardNotificationHandlers;
-(void)setupEmailPasswordFields;
-(void)socialLoginSetUp;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)textfieldDidChange:(id)arg1 ;
-(void)showGoolgePlusWebView:(id)arg1 ;
-(UIButton *)continueButton;
-(void)onCancelBtnClicked:(id)arg1 ;
-(id)forgotPasswordRegisterLoginHTMLString;
-(void)adjustConstraintsForSubViews;
-(NSLayoutConstraint *)topLabelHeightConstraint;
-(NSLayoutConstraint *)htmlLinkTopConstraint;
-(NSLayoutConstraint *)htmlLinkHeightConstraint;
-(NSLayoutConstraint *)continueButtonTopConstraint;
-(NSLayoutConstraint *)continueButtonHeightConstraint;
-(void)setUpKeyboardNotificationHandlers;
-(void)ecDismissViewControllerAnimated;
-(void)loginFinishedWithSuccess:(BOOL)arg1 ;
-(void)loginWithProgressController:(id)arg1 username:(id)arg2 password:(id)arg3 loginType:(unsigned long long)arg4 ;
-(void)onModalCancelBtnClicked:(id)arg1 ;
-(void)onSignInBtnClicked:(id)arg1 ;
-(NSLayoutConstraint *)fbDisclaimerLabelTopConstraint;
-(NSLayoutConstraint *)googlePlusButtonTopConstraint;
-(NSLayoutConstraint *)fbLoginButtonHeightConstraint;
-(ECFacebookDisclaimerLabel *)fbDisclaimerLabel;
-(NSLayoutConstraint *)socialLoginContainerHeightConstraint;
-(void)finishFbLoginViewSetup;
-(NSLayoutConstraint *)googlePlusButtonHeightConstraint;
-(ECGoogleLoginButton *)googlePlusSignInButton;
-(void)finishGooglePLoginViewSetup;
-(ECFacebookOrLabel *)fbDividerOrLabel;
-(void)adjustConstraintsForDisclaimerLabel;
-(void)adjustConstraintsForFacebookLogin:(BOOL)arg1 ;
-(void)adjustViewAndConstraintsForGoogleLogin:(BOOL)arg1 ;
-(ECGoogleLoginAdapter *)googleLoginAdapter;
-(void)setBlockNotificationhandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)blockNotificationhandlers;
-(UIView *)socialLoginContainerView;
-(void)adjustSocialContainerTopConstraintWith:(float)arg1 animationDuration:(float)arg2 ;
-(NSLayoutConstraint *)socialLoginContainerTopConstraint;
-(ECFacebookLoginButton *)fbLoginButton;
-(ECFacebookLoginAdapter *)facebookLoginAdapter;
-(void)handleFacebookLogin:(id)arg1 ;
-(void)handleGoogleLogin:(id)arg1 ;
-(void)setSocialLoginContainerView:(UIView *)arg1 ;
-(void)setSocialLoginContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSocialLoginContainerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFbLoginButton:(ECFacebookLoginButton *)arg1 ;
-(void)setFbLoginButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFbDisclaimerLabel:(ECFacebookDisclaimerLabel *)arg1 ;
-(void)setFbDisclaimerLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFbDividerOrLabel:(ECFacebookOrLabel *)arg1 ;
-(ECFacebookDividerLine *)socialLoginOrDividerLine;
-(void)setSocialLoginOrDividerLine:(ECFacebookDividerLine *)arg1 ;
-(void)setTopLabelHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)setContinueButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHtmlLinkTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHtmlLinkHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setGooglePlusSignInButton:(ECGoogleLoginButton *)arg1 ;
-(void)setGooglePlusButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setGooglePlusButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setGoogleLoginAdapter:(ECGoogleLoginAdapter *)arg1 ;
-(void)setFacebookLoginAdapter:(ECFacebookLoginAdapter *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)completionHandler;
-(CGSize)preferredContentSize;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)setCompletionHandler:(id)arg1 ;
-(ECPersistentPlaceholderTextField *)passwordField;
-(UILabel *)subLabel;
-(void)setSubLabel:(UILabel *)arg1 ;
-(UILabel *)topLabel;
-(void)setTopLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)bottomLabelConstraint;
-(void)setBottomLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)email;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(ECThemedButton *)signInButton;
-(void)setPasswordField:(ECPersistentPlaceholderTextField *)arg1 ;
-(void)setSignInButton:(ECThemedButton *)arg1 ;
@end


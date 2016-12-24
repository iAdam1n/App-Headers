/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView, MKLogoView, SKPAttributedLabel, MKDefaultButton;

@interface SKPLandingPageView : UIView {

	BOOL _animatingIn;
	BOOL _animationCanceled;
	BOOL _shouldBeAnimatingLogo;
	NSString* _titleMessage;
	/*^block*/id _createAccountBlock;
	/*^block*/id _signInSkypeBlock;
	/*^block*/id _signInMSABlock;
	UIView* _controlsContainerView;
	MKLogoView* _logoView;
	SKPAttributedLabel* _messageLabel;
	MKDefaultButton* _createAccountButton;
	MKDefaultButton* _skypeLoginButton;
	MKDefaultButton* _msaLoginButton;
	UIView* _backgroundProtectionCreateAccount;
	UIView* _iconsContainerView;

}

@property (nonatomic,retain) UIView * controlsContainerView;                          //@synthesize controlsContainerView=_controlsContainerView - In the implementation block
@property (nonatomic,retain) MKLogoView * logoView;                                   //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) SKPAttributedLabel * messageLabel;                       //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * createAccountButton;                   //@synthesize createAccountButton=_createAccountButton - In the implementation block
@property (nonatomic,retain) MKDefaultButton * skypeLoginButton;                      //@synthesize skypeLoginButton=_skypeLoginButton - In the implementation block
@property (nonatomic,retain) MKDefaultButton * msaLoginButton;                        //@synthesize msaLoginButton=_msaLoginButton - In the implementation block
@property (nonatomic,retain) UIView * backgroundProtectionCreateAccount;              //@synthesize backgroundProtectionCreateAccount=_backgroundProtectionCreateAccount - In the implementation block
@property (nonatomic,retain) UIView * iconsContainerView;                             //@synthesize iconsContainerView=_iconsContainerView - In the implementation block
@property (assign,getter=isAnimatingIn,nonatomic) BOOL animatingIn;                   //@synthesize animatingIn=_animatingIn - In the implementation block
@property (assign,nonatomic) BOOL animationCanceled;                                  //@synthesize animationCanceled=_animationCanceled - In the implementation block
@property (assign,nonatomic) BOOL shouldBeAnimatingLogo;                              //@synthesize shouldBeAnimatingLogo=_shouldBeAnimatingLogo - In the implementation block
@property (nonatomic,retain) NSString * titleMessage;                                 //@synthesize titleMessage=_titleMessage - In the implementation block
@property (nonatomic,copy) id createAccountBlock;                                     //@synthesize createAccountBlock=_createAccountBlock - In the implementation block
@property (nonatomic,copy) id signInSkypeBlock;                                       //@synthesize signInSkypeBlock=_signInSkypeBlock - In the implementation block
@property (nonatomic,copy) id signInMSABlock;                                         //@synthesize signInMSABlock=_signInMSABlock - In the implementation block
-(void)setCreateAccountBlock:(id)arg1 ;
-(id)createAccountBlock;
-(BOOL)isAnimatingIn;
-(void)updateActionButtons;
-(void)setAnimatingIn:(BOOL)arg1 ;
-(NSString *)titleMessage;
-(BOOL)animationCanceled;
-(id)animatableControls;
-(void)setAnimationCanceled:(BOOL)arg1 ;
-(id)signInSkypeBlock;
-(id)signInMSABlock;
-(void)prepareForIntroAnimation;
-(void)cancelLandingPageAnimation;
-(void)setTitleMessage:(NSString *)arg1 ;
-(void)setSignInSkypeBlock:(id)arg1 ;
-(void)setSignInMSABlock:(id)arg1 ;
-(void)animateLandingPageIn;
-(void)setupLogo;
-(void)setupControlsContainerView;
-(void)setupErrorLabel;
-(void)setupActionButtons;
-(void)setupIcons;
-(void)setControlsContainerView:(UIView *)arg1 ;
-(UIView *)controlsContainerView;
-(void)setSkypeLoginButton:(MKDefaultButton *)arg1 ;
-(MKDefaultButton *)skypeLoginButton;
-(void)setMsaLoginButton:(MKDefaultButton *)arg1 ;
-(MKDefaultButton *)msaLoginButton;
-(void)setBackgroundProtectionCreateAccount:(UIView *)arg1 ;
-(UIView *)backgroundProtectionCreateAccount;
-(void)setIconsContainerView:(UIView *)arg1 ;
-(UIView *)iconsContainerView;
-(BOOL)shouldBeAnimatingLogo;
-(void)setShouldBeAnimatingLogo:(BOOL)arg1 ;
-(void)setupLocalization;
-(void)setupAutomation;
-(void)didTouchUpInside:(id)arg1 ;
-(void)setCreateAccountButton:(MKDefaultButton *)arg1 ;
-(MKDefaultButton *)createAccountButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateLayout;
-(SKPAttributedLabel *)messageLabel;
-(void)setMessageLabel:(SKPAttributedLabel *)arg1 ;
-(MKLogoView *)logoView;
-(void)setLogoView:(MKLogoView *)arg1 ;
@end

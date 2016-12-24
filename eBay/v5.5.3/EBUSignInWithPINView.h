/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIView.h>

@class EUILabel, CustomBackgroundTextField, EUICallToActionButton, LengthLimitingTextFieldDelegate, ActivitySpinnerView, EUIView, EUIImageView, NSLayoutConstraint;

@interface EBUSignInWithPINView : EUIView {

	BOOL _layoutInitialized;
	EUILabel* _titleLabel;
	CustomBackgroundTextField* _usernameField;
	EUICallToActionButton* _nextButton;
	LengthLimitingTextFieldDelegate* _usernameFieldDelegate;
	ActivitySpinnerView* _nextActivityIndicator;
	EUIView* _errorView;
	EUIImageView* _errorImageView;
	EUILabel* _errorLabel;
	NSLayoutConstraint* _errorViewCollapsedHeightConstraint;

}

@property (nonatomic,retain) LengthLimitingTextFieldDelegate * usernameFieldDelegate;              //@synthesize usernameFieldDelegate=_usernameFieldDelegate - In the implementation block
@property (assign,nonatomic,__weak) ActivitySpinnerView * nextActivityIndicator;                   //@synthesize nextActivityIndicator=_nextActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) EUIView * errorView;                                           //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * errorImageView;                                 //@synthesize errorImageView=_errorImageView - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * errorLabel;                                         //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * errorViewCollapsedHeightConstraint;              //@synthesize errorViewCollapsedHeightConstraint=_errorViewCollapsedHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL layoutInitialized;                                               //@synthesize layoutInitialized=_layoutInitialized - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) CustomBackgroundTextField * usernameField;                     //@synthesize usernameField=_usernameField - In the implementation block
@property (assign,nonatomic,__weak) EUICallToActionButton * nextButton;                            //@synthesize nextButton=_nextButton - In the implementation block
-(void)setErrorImageView:(EUIImageView *)arg1 ;
-(EUIImageView *)errorImageView;
-(void)setLayoutInitialized:(BOOL)arg1 ;
-(BOOL)layoutInitialized;
-(CustomBackgroundTextField *)usernameField;
-(NSLayoutConstraint *)errorViewCollapsedHeightConstraint;
-(void)animateErrorViewIsVisible:(BOOL)arg1 ;
-(void)setTextFieldFirstResponder;
-(void)resignTextFieldResponders;
-(void)updateViewIsVisible:(BOOL)arg1 ;
-(void)setUsernameField:(CustomBackgroundTextField *)arg1 ;
-(void)setErrorViewCollapsedHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateNextButtonEnabled:(BOOL)arg1 ;
-(void)updateViewIsBusy:(BOOL)arg1 ;
-(ActivitySpinnerView *)nextActivityIndicator;
-(LengthLimitingTextFieldDelegate *)usernameFieldDelegate;
-(void)setUsernameFieldDelegate:(LengthLimitingTextFieldDelegate *)arg1 ;
-(void)setNextActivityIndicator:(ActivitySpinnerView *)arg1 ;
-(id)init;
-(void)updateConstraints;
-(EUILabel *)titleLabel;
-(id)accessibilityElements;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(EUICallToActionButton *)nextButton;
-(void)setNextButton:(EUICallToActionButton *)arg1 ;
-(void)presentError:(id)arg1 ;
-(EUILabel *)errorLabel;
-(void)setErrorLabel:(EUILabel *)arg1 ;
-(EUIView *)errorView;
-(void)setErrorView:(EUIView *)arg1 ;
@end

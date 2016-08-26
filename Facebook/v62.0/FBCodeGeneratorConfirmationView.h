/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBCodeGeneratorConfirmationViewDelegate;
@class UILabel, UITextField, UIButton, UIActivityIndicatorView, UIView, UITapGestureRecognizer, NSLayoutConstraint, NSString;

@interface FBCodeGeneratorConfirmationView : UIView <UITextFieldDelegate> {

	UILabel* _instructionsLabel;
	UITextField* _keyEntryField;
	UIButton* _confirmButton;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _spacerView1;
	UIView* _spacerView2;
	CGRect _keyboardFrame;
	UITapGestureRecognizer* _tapRecognizer;
	NSLayoutConstraint* _bottomConstraint;
	BOOL _haveConstraints;
	id<FBCodeGeneratorConfirmationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCodeGeneratorConfirmationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tappedBackground;
-(void)_tappedConfirm;
-(void)_updatePadConstraints;
-(void)_updatePhoneConstraints;
-(double)_bottomConstraintConstant;
-(void)setConfirming:(BOOL)arg1 ;
-(void)setFocusOnTextField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBCodeGeneratorConfirmationViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCodeGeneratorConfirmationViewDelegate>)delegate;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)updateConstraints;
-(void)_textFieldDidChange:(id)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

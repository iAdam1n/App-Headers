/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@protocol MNBusinessSignupTextFieldDelegate;
@class UIView, UIImage;

@interface MNBusinessSignupTextField : UITextField {

	UIView* _bottomBorder;
	BOOL _canPerformPasteAction;
	BOOL _canPerformActions;
	UIView* _inputAccessoryView;
	UIImage* _leftImage;
	id<MNBusinessSignupTextFieldDelegate> _registrationTextFieldDelegate;

}

@property (assign,nonatomic) BOOL canPerformPasteAction;                                                              //@synthesize canPerformPasteAction=_canPerformPasteAction - In the implementation block
@property (assign,nonatomic) BOOL canPerformActions;                                                                  //@synthesize canPerformActions=_canPerformActions - In the implementation block
@property (nonatomic,retain) UIImage * leftImage;                                                                     //@synthesize leftImage=_leftImage - In the implementation block
@property (assign,nonatomic,__weak) id<MNBusinessSignupTextFieldDelegate> registrationTextFieldDelegate;              //@synthesize registrationTextFieldDelegate=_registrationTextFieldDelegate - In the implementation block
-(void)setCanPerformPasteAction:(BOOL)arg1 ;
-(void)_layoutBottomBorder;
-(BOOL)canPerformPasteAction;
-(BOOL)canPerformActions;
-(void)setCanPerformActions:(BOOL)arg1 ;
-(id<MNBusinessSignupTextFieldDelegate>)registrationTextFieldDelegate;
-(void)setRegistrationTextFieldDelegate:(id<MNBusinessSignupTextFieldDelegate>)arg1 ;
-(void)setLeftImage:(UIImage *)arg1 ;
-(UIImage *)leftImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)deleteBackward;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(id)inputAccessoryView;
-(void)setInputAccessoryView:(id)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
@end

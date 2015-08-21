/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@protocol MNRegistrationTextFieldDelegate;
@class UIView, UIImage;

@interface MNRegistrationTextField : UITextField {

	UIView* _bottomBorder;
	BOOL _canPerformPasteAction;
	BOOL _canPerformActions;
	UIView* _inputAccessoryView;
	UIImage* _leftImage;
	id<MNRegistrationTextFieldDelegate> _registrationTextFieldDelegate;

}

@property (assign,nonatomic) BOOL canPerformPasteAction;                                                            //@synthesize canPerformPasteAction=_canPerformPasteAction - In the implementation block
@property (assign,nonatomic) BOOL canPerformActions;                                                                //@synthesize canPerformActions=_canPerformActions - In the implementation block
@property (nonatomic,retain) UIImage * leftImage;                                                                   //@synthesize leftImage=_leftImage - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationTextFieldDelegate> registrationTextFieldDelegate;              //@synthesize registrationTextFieldDelegate=_registrationTextFieldDelegate - In the implementation block
+(id)formFieldTextField;
-(void)_layoutBottomBorder;
-(BOOL)canPerformPasteAction;
-(void)setCanPerformPasteAction:(BOOL)arg1 ;
-(BOOL)canPerformActions;
-(void)setCanPerformActions:(BOOL)arg1 ;
-(id<MNRegistrationTextFieldDelegate>)registrationTextFieldDelegate;
-(void)setRegistrationTextFieldDelegate:(id<MNRegistrationTextFieldDelegate>)arg1 ;
-(void)setLeftImage:(UIImage *)arg1 ;
-(UIImage *)leftImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(void)deleteBackward;
-(id)inputAccessoryView;
-(void)setInputAccessoryView:(id)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
@end


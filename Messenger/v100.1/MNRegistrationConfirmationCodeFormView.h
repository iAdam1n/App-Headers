/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNRegistrationConfirmationCodeFormViewDelegate;
@class UIView, UILongPressGestureRecognizer, UITapGestureRecognizer, NSArray;

@interface MNRegistrationConfirmationCodeFormView : UIView {

	UIView* _formContainer;
	UIView* _textFieldOverlayView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSArray* _confirmationCodeCharacterTextFields;
	id<MNRegistrationConfirmationCodeFormViewDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * confirmationCodeCharacterTextFields;                            //@synthesize confirmationCodeCharacterTextFields=_confirmationCodeCharacterTextFields - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationConfirmationCodeFormViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handlePaste:(id)arg1 ;
-(id)_activeTextField;
-(void)focusTextField;
-(void)blurActiveTextFieldIfNecessary;
-(NSArray *)confirmationCodeCharacterTextFields;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNRegistrationConfirmationCodeFormViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNRegistrationConfirmationCodeFormViewDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)_handleTap;
@end


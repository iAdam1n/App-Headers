/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIView, TGTextField, UILabel, NSString;

@interface TGPasswordSetupView : UIView <UITextFieldDelegate> {

	UIEdgeInsets _contentInsets;
	UIView* _textFieldBackground;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	TGTextField* _textField;
	UILabel* _titleLabel;
	BOOL _secureEntry;
	/*^block*/id _passwordChanged;

}

@property (nonatomic,copy) id passwordChanged;                      //@synthesize passwordChanged=_passwordChanged - In the implementation block
@property (assign,nonatomic) BOOL secureEntry;                      //@synthesize secureEntry=_secureEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)passwordChanged;
-(void)setPasswordChanged:(id)arg1 ;
-(void)setSecureEntry:(BOOL)arg1 ;
-(void)textFieldChanged;
-(BOOL)secureEntry;
-(id)password;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)becomeFirstResponder;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setText:(id)arg1 ;
-(void)clearInput;
@end

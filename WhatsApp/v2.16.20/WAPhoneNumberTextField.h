/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@protocol WAPhoneNumberTextFieldDelegate;
@class WAPhoneNumberTextFieldHelper, NSString, UIFont;

@interface WAPhoneNumberTextField : UITextField {

	WAPhoneNumberTextFieldHelper* _textFieldHelper;
	NSString* _countryCode;
	UIFont* _phoneNumberFont;
	id<WAPhoneNumberTextFieldDelegate> _textFieldDelegate;

}

@property (nonatomic,copy) NSString * countryCode;                                                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) UIFont * phoneNumberFont;                                                 //@synthesize phoneNumberFont=_phoneNumberFont - In the implementation block
@property (assign,nonatomic,__weak) id<WAPhoneNumberTextFieldDelegate> textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
-(void)setPhoneNumberFont:(UIFont *)arg1 ;
-(void)reformatTextField;
-(UIFont *)phoneNumberFont;
-(void)setText:(id)arg1 ;
-(void)awakeFromNib;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTextFieldDelegate:(id<WAPhoneNumberTextFieldDelegate>)arg1 ;
-(id<WAPhoneNumberTextFieldDelegate>)textFieldDelegate;
@end

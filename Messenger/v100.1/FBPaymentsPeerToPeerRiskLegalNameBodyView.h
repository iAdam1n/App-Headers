/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UITextField;

@interface FBPaymentsPeerToPeerRiskLegalNameBodyView : UIView {

	UIView* _separatorView;
	UITextField* _firstNameInputView;
	UITextField* _lastNameInputView;

}

@property (nonatomic,readonly) UITextField * firstNameInputView;              //@synthesize firstNameInputView=_firstNameInputView - In the implementation block
@property (nonatomic,readonly) UITextField * lastNameInputView;               //@synthesize lastNameInputView=_lastNameInputView - In the implementation block
-(UITextField *)firstNameInputView;
-(UITextField *)lastNameInputView;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ;
@end

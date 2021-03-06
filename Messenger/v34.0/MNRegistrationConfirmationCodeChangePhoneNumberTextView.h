/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPhoneNumber, MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate;
@class FBRichTextView;

@interface MNRegistrationConfirmationCodeChangePhoneNumberTextView : UIView {

	FBRichTextView* _changePhoneNumberTextView;
	NSRange _changeButtonStringRange;
	id<FBPhoneNumber> _phoneNumber;
	id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)attributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_setChangePhoneNumberText;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 ;
-(void)setDelegate:(id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate>)delegate;
@end


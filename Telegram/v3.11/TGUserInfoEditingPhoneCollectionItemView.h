/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGEditableCollectionItemView.h>
#import <Telegram/TGPhoneTextFieldDelegate.h>

@protocol TGUserInfoEditingPhoneCollectionItemViewDelegate;
@class CALayer, UIImageView, TGModernButton, TGPhoneTextField, NSString;

@interface TGUserInfoEditingPhoneCollectionItemView : TGEditableCollectionItemView <TGPhoneTextFieldDelegate> {

	CALayer* _separatorLayer;
	UIImageView* _fieldSeparator;
	TGModernButton* _labelButton;
	UIImageView* _arrowView;
	TGPhoneTextField* _phoneField;
	BOOL _becomeFirstResponderOnLayout;
	id<TGUserInfoEditingPhoneCollectionItemViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TGUserInfoEditingPhoneCollectionItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)makePhoneFieldFirstResponder;
-(void)labelButtonPressed;
-(void)phoneTextField:(id)arg1 hasChangedPhone:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TGUserInfoEditingPhoneCollectionItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<TGUserInfoEditingPhoneCollectionItemViewDelegate>)delegate;
-(void)setLabel:(id)arg1 ;
-(void)setPhone:(id)arg1 ;
-(void)deleteAction;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIButton, MNPaymentsTransferReceiptPaymentIdViewModel;

@interface MNPaymentsTransferReceiptPaymentIdView : UIView {

	FBRichTextView* _buttonSeperatorTextView;
	FBRichTextView* _textView;
	FBRichTextView* _paymentIdView;
	UIButton* _helpButton;
	UIButton* _termButton;
	MNPaymentsTransferReceiptPaymentIdViewModel* _viewModel;

}

@property (nonatomic,readonly) FBRichTextView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * paymentIdView;                                   //@synthesize paymentIdView=_paymentIdView - In the implementation block
@property (nonatomic,readonly) UIButton * helpButton;                                            //@synthesize helpButton=_helpButton - In the implementation block
@property (nonatomic,readonly) UIButton * termButton;                                            //@synthesize termButton=_termButton - In the implementation block
@property (nonatomic,copy) MNPaymentsTransferReceiptPaymentIdViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(UIButton *)helpButton;
-(UIButton *)termButton;
-(FBRichTextView *)paymentIdView;
-(CGSize)_buttonsSizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBRichTextView *)textView;
-(MNPaymentsTransferReceiptPaymentIdViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsTransferReceiptPaymentIdViewModel *)arg1 ;
@end

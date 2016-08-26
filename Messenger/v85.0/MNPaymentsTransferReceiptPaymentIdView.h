/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIButton, MNPaymentsTransferReceiptPaymentIdViewModel;

@interface MNPaymentsTransferReceiptPaymentIdView : UIView {

	FBRichTextView* _buttonSeperatorTextView;
	FBRichTextView* _textView;
	UIButton* _helpButton;
	UIButton* _termButton;
	MNPaymentsTransferReceiptPaymentIdViewModel* _viewModel;

}

@property (nonatomic,readonly) FBRichTextView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIButton * helpButton;                                            //@synthesize helpButton=_helpButton - In the implementation block
@property (nonatomic,readonly) UIButton * termButton;                                            //@synthesize termButton=_termButton - In the implementation block
@property (nonatomic,copy) MNPaymentsTransferReceiptPaymentIdViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(UIButton *)helpButton;
-(UIButton *)termButton;
-(CGSize)_buttonsSizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBRichTextView *)textView;
-(MNPaymentsTransferReceiptPaymentIdViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsTransferReceiptPaymentIdViewModel *)arg1 ;
@end

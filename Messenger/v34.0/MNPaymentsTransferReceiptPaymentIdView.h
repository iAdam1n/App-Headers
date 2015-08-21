/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIButton, MNPaymentsTransferReceiptPaymentIdViewModel;

@interface MNPaymentsTransferReceiptPaymentIdView : UIView {

	FBRichTextView* _paymentIDTextView;
	UIButton* _helpButton;
	MNPaymentsTransferReceiptPaymentIdViewModel* _viewModel;

}

@property (nonatomic,readonly) FBRichTextView * paymentIDTextView;                               //@synthesize paymentIDTextView=_paymentIDTextView - In the implementation block
@property (nonatomic,readonly) UIButton * helpButton;                                            //@synthesize helpButton=_helpButton - In the implementation block
@property (nonatomic,copy) MNPaymentsTransferReceiptPaymentIdViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(void)setViewModel:(MNPaymentsTransferReceiptPaymentIdViewModel *)arg1 ;
-(MNPaymentsTransferReceiptPaymentIdViewModel *)viewModel;
-(UIButton *)helpButton;
-(FBRichTextView *)paymentIDTextView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


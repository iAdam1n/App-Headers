/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsTransferReceiptExtraInfoView.h>

@class MNCommerceItemView, FBRichTextView, MNAgentSuggestedItemPaymentDetailsExtraInfoViewModel, NSString;

@interface MNAgentSuggestedItemPaymentDetailsExtraInfoView : UIView <MNPaymentsTransferReceiptExtraInfoView> {

	MNCommerceItemView* _itemView;
	FBRichTextView* _statusTitleTextView;
	FBRichTextView* _statusTextView;
	FBRichTextView* _paymentMethodTitleTextView;
	FBRichTextView* _paymentMethodTextView;
	MNAgentSuggestedItemPaymentDetailsExtraInfoViewModel* _viewModel;

}

@property (nonatomic,copy) MNAgentSuggestedItemPaymentDetailsExtraInfoViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewModel:(MNAgentSuggestedItemPaymentDetailsExtraInfoViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(MNAgentSuggestedItemPaymentDetailsExtraInfoViewModel *)viewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end


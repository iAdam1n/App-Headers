/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNTransactionInvoiceXMAHandling;
@class FBUserSession, MNTransactionInvoiceFooterView, MNInvoiceSingleProductRowView, UITapGestureRecognizer, MNTransactionInvoiceViewModel, NSString;

@interface MNTransactionInvoiceView : UIView <MNAttachmentView> {

	FBUserSession* _session;
	MNTransactionInvoiceFooterView* _footerView;
	MNInvoiceSingleProductRowView* _singleProductView;
	id<MNTransactionInvoiceXMAHandling> _xmaHandler;
	UITapGestureRecognizer* _tapGesture;
	MNTransactionInvoiceViewModel* _viewModel;

}

@property (nonatomic,copy) MNTransactionInvoiceViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didSelectMessage;
-(id)initWithSession:(id)arg1 xmaHandler:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(MNTransactionInvoiceViewModel *)viewModel;
-(void)setViewModel:(MNTransactionInvoiceViewModel *)arg1 ;
@end

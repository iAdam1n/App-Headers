/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUCheckoutImageValueView.h>

@protocol EBNFundingSourceProtocol;
@class PaymentMethodViewController, EBUPaymentMethodActionHandler;

@interface EBUPaymentFundingSourceView : EBUCheckoutImageValueView {

	id<EBNFundingSourceProtocol> _fundingSource;
	PaymentMethodViewController* _actionDelegate;
	EBUPaymentMethodActionHandler* _actionHandler;

}

@property (__weak) PaymentMethodViewController * actionDelegate;               //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (__weak) EBUPaymentMethodActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (__weak) id<EBNFundingSourceProtocol> fundingSource;                 //@synthesize fundingSource=_fundingSource - In the implementation block
+(id)viewFromFundingSource:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)performActionWithTrackableURL:(id)arg1 ;
-(void)performActionWithURLString:(id)arg1 ;
-(void)setupLinks;
-(void)setupViewFromFundingSource:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)showMethodAsSelected;
-(void)hideCheckmarkView;
-(void)setupFundingSourceText;
-(void)updateFundingSource;
-(id<EBNFundingSourceProtocol>)fundingSource;
-(void)setFundingSource:(id<EBNFundingSourceProtocol>)arg1 ;
-(void)setActionDelegate:(PaymentMethodViewController *)arg1 ;
-(PaymentMethodViewController *)actionDelegate;
-(EBUPaymentMethodActionHandler *)actionHandler;
-(void)setActionHandler:(EBUPaymentMethodActionHandler *)arg1 ;
-(void)setupActions;
@end


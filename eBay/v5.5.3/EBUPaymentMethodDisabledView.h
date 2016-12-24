/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUCheckoutSimpleRowView.h>

@protocol EBNPaymentMethodProtocol;
@class EBUPaymentMethodActionHandler, ItemPictureView, EUIView;

@interface EBUPaymentMethodDisabledView : EBUCheckoutSimpleRowView {

	id<EBNPaymentMethodProtocol> _paymentMethod;
	EBUPaymentMethodActionHandler* _actionHandler;
	ItemPictureView* _itemPictureView;
	EUIView* _title;

}

@property (retain) id<EBNPaymentMethodProtocol> paymentMethod;                 //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (__weak) EBUPaymentMethodActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (retain) ItemPictureView * itemPictureView;                          //@synthesize itemPictureView=_itemPictureView - In the implementation block
@property (__weak) EUIView * title;                                            //@synthesize title=_title - In the implementation block
+(id)viewFromPaymentMethod:(id)arg1 ;
-(void)setupTitle;
-(ItemPictureView *)itemPictureView;
-(void)setItemPictureView:(ItemPictureView *)arg1 ;
-(void)setupItemPictureView;
-(void)executeLoader:(id)arg1 ;
-(double)heightToUse;
-(double)widthToUse;
-(void)viewFromPaymentMethod:(id)arg1 ;
-(void)setupDisabledText;
-(void)setupMessageList;
-(void)setupItemPictureViewAttrString:(id)arg1 ;
-(void)setTitle:(EUIView *)arg1 ;
-(EUIView *)title;
-(CGSize)imageSize;
-(CGSize)maxImageSize;
-(void)setPaymentMethod:(id<EBNPaymentMethodProtocol>)arg1 ;
-(void)setupActions;
-(void)setActionHandler:(EBUPaymentMethodActionHandler *)arg1 ;
-(EBUPaymentMethodActionHandler *)actionHandler;
-(id<EBNPaymentMethodProtocol>)paymentMethod;
@end

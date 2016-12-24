/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUCheckoutImageValueView.h>

@protocol EBNListingCheckoutInterface, EBUShippingMethodCellProtocol;
@interface EBUCheckoutHubShippingView : EBUCheckoutImageValueView {

	id<EBNListingCheckoutInterface> _cartItem;
	id<EBUShippingMethodCellProtocol> _actionDelegate;

}

@property (__weak) id<EBUShippingMethodCellProtocol> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (retain) id<EBNListingCheckoutInterface> cartItem;                      //@synthesize cartItem=_cartItem - In the implementation block
-(void)setCartItem:(id<EBNListingCheckoutInterface>)arg1 ;
-(void)setupShippingCellForCartItem:(id)arg1 delegate:(id)arg2 ;
-(void)setupBopisCellForCartItem:(id)arg1 delegate:(id)arg2 ;
-(void)setupCourierCellForCartItem:(id)arg1 delegate:(id)arg2 ;
-(void)setupPudoCellForCartItem:(id)arg1 delegate:(id)arg2 ;
-(void)setupDigitalDeliveryCellForCartItem:(id)arg1 delegate:(id)arg2 ;
-(void)setupLocalPickupCellForCartItem:(id)arg1 delegate:(id)arg2 ;
-(void)setupCellInsets;
-(void)showMethodAsSelected:(BOOL)arg1 ;
-(void)showCheckmarkView:(BOOL)arg1 ;
-(id)labelStyleForText;
-(id)labelStyleForPrice;
-(void)setupShippingAction;
-(id)labelStyleForError;
-(void)setupBopisAction;
-(void)setupCourierAction;
-(void)setupPudoAction;
-(void)setupLocalPickupAction;
-(void)handleLocalPickupAction;
-(void)handlePudoAction;
-(void)handleCourierAction;
-(void)handleBopisAction;
-(void)handleShippingAction;
-(id<EBNListingCheckoutInterface>)cartItem;
-(void)setActionDelegate:(id<EBUShippingMethodCellProtocol>)arg1 ;
-(id<EBUShippingMethodCellProtocol>)actionDelegate;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECFeaturePurchaseBaseTableViewController.h>

@class NSDecimalNumber;

@interface ECFeaturePurchaseReviewOrderViewController : ECFeaturePurchaseBaseTableViewController {

	BOOL _hideFeatureInfoButton;
	unsigned long long _previousFeaturePurchaseContext;
	NSDecimalNumber* _discountAmount;

}

@property (assign) unsigned long long previousFeaturePurchaseContext;              //@synthesize previousFeaturePurchaseContext=_previousFeaturePurchaseContext - In the implementation block
@property (readonly) BOOL acceptsPayments; 
@property (readonly) BOOL acceptsCreditCard; 
@property (readonly) BOOL acceptsPayPal; 
@property (nonatomic,retain) NSDecimalNumber * discountAmount;                     //@synthesize discountAmount=_discountAmount - In the implementation block
@property (assign) BOOL hideFeatureInfoButton;                                     //@synthesize hideFeatureInfoButton=_hideFeatureInfoButton - In the implementation block
-(NSDecimalNumber *)discountAmount;
-(void)setDiscountAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)acceptsPayPal;
-(BOOL)isDataDirty;
-(BOOL)acceptsCreditCard;
-(BOOL)isCreditCardRow:(id)arg1 ;
-(BOOL)isPayPalRow:(id)arg1 ;
-(void)updatePlaceOrderButton;
-(BOOL)acceptsPayments;
-(unsigned long long)previousFeaturePurchaseContext;
-(void)setFeatureProviders:(id)arg1 ;
-(void)setPreviousFeaturePurchaseContext:(unsigned long long)arg1 ;
-(void)didStartReloadingPurchaseMetaData;
-(void)reloadPaymentMethodRows;
-(void)didEndReloadingPurchaseMetaData;
-(BOOL)hideFeatureInfoButton;
-(BOOL)shouldShowAdDescriptionView;
-(void)setHideFeatureInfoButton:(BOOL)arg1 ;
-(void)applyPromotionCode:(id)arg1 ;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)cleanup;
@end


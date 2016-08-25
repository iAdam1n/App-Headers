/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ListingItemViewController.h>

@class SellingItemPaymentsPicker, ItemLocationPicker, SellingHandlingTimePicker, ReturnPolicyChooserController, SellingItemBuyerRequirementsPicker, EBUListingItemDonationPicker;

@interface SellingItemPreferencesPicker : ListingItemViewController {

	BOOL _showPaymentPicker;
	BOOL _showItemLocationPicker;
	SellingItemPaymentsPicker* _paymentsPicker;
	ItemLocationPicker* _locationPicker;
	SellingHandlingTimePicker* _handlingTimePicker;
	ReturnPolicyChooserController* _returnPolicyChooser;
	SellingItemBuyerRequirementsPicker* _buyerRequirementsPicker;
	EBUListingItemDonationPicker* _donationPicker;

}

@property (nonatomic,retain) SellingItemPaymentsPicker * paymentsPicker;                                //@synthesize paymentsPicker=_paymentsPicker - In the implementation block
@property (nonatomic,retain) ItemLocationPicker * locationPicker;                                       //@synthesize locationPicker=_locationPicker - In the implementation block
@property (nonatomic,retain) SellingHandlingTimePicker * handlingTimePicker;                            //@synthesize handlingTimePicker=_handlingTimePicker - In the implementation block
@property (nonatomic,retain) ReturnPolicyChooserController * returnPolicyChooser;                       //@synthesize returnPolicyChooser=_returnPolicyChooser - In the implementation block
@property (nonatomic,retain) SellingItemBuyerRequirementsPicker * buyerRequirementsPicker;              //@synthesize buyerRequirementsPicker=_buyerRequirementsPicker - In the implementation block
@property (nonatomic,retain) EBUListingItemDonationPicker * donationPicker;                             //@synthesize donationPicker=_donationPicker - In the implementation block
@property (assign,nonatomic) BOOL showPaymentPicker;                                                    //@synthesize showPaymentPicker=_showPaymentPicker - In the implementation block
@property (assign,nonatomic) BOOL showItemLocationPicker;                                               //@synthesize showItemLocationPicker=_showItemLocationPicker - In the implementation block
-(BOOL)setupTableSections;
-(void)chooseHandlingTime:(id)arg1 ;
-(SellingHandlingTimePicker *)handlingTimePicker;
-(void)setHandlingTimePicker:(SellingHandlingTimePicker *)arg1 ;
-(id)handlingTimeCell;
-(id)paymentsCell;
-(id)donationCell;
-(void)setShowPaymentPicker:(BOOL)arg1 ;
-(void)setShowItemLocationPicker:(BOOL)arg1 ;
-(void)chooseItemLocation:(id)arg1 ;
-(id)buyerRequirementsCell;
-(BOOL)showPaymentPicker;
-(void)choosePayments:(id)arg1 ;
-(BOOL)showItemLocationPicker;
-(id)itemLocationCell;
-(id)returnPolicyCell;
-(void)chooseReturnPolicy:(id)arg1 ;
-(void)chooseBuyerRequirements:(id)arg1 ;
-(void)chooseDonation:(id)arg1 ;
-(SellingItemPaymentsPicker *)paymentsPicker;
-(void)setPaymentsPicker:(SellingItemPaymentsPicker *)arg1 ;
-(ItemLocationPicker *)locationPicker;
-(void)setLocationPicker:(ItemLocationPicker *)arg1 ;
-(ReturnPolicyChooserController *)returnPolicyChooser;
-(void)setReturnPolicyChooser:(ReturnPolicyChooserController *)arg1 ;
-(SellingItemBuyerRequirementsPicker *)buyerRequirementsPicker;
-(void)setBuyerRequirementsPicker:(SellingItemBuyerRequirementsPicker *)arg1 ;
-(EBUListingItemDonationPicker *)donationPicker;
-(void)setDonationPicker:(EBUListingItemDonationPicker *)arg1 ;
-(id)trackingParams;
-(void)listingItemUpdated:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
@end


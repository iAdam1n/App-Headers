/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SimpleListPicker.h>

@class NSString, ListingItemDataManager, NSArray;

@interface SellingShippingServiceTypePicker : SimpleListPicker {

	BOOL _isInternational;
	BOOL _isCalculatedSupported;
	BOOL _isCalculatedAvailable;
	BOOL _isLocalPickupSupported;
	BOOL _isLocalPickupAvailable;
	unsigned long long _shippingDestinationType;
	NSString* _shipmentType;
	unsigned long long _domesticConstraint;
	unsigned long long _internationalConstraint;
	ListingItemDataManager* _dataManager;
	NSArray* _optionValues;

}

@property (nonatomic,retain) NSArray * optionValues;                                  //@synthesize optionValues=_optionValues - In the implementation block
@property (assign,nonatomic) unsigned long long shippingDestinationType;              //@synthesize shippingDestinationType=_shippingDestinationType - In the implementation block
@property (nonatomic,retain) NSString * shipmentType;                                 //@synthesize shipmentType=_shipmentType - In the implementation block
@property (assign,nonatomic) BOOL isInternational;                                    //@synthesize isInternational=_isInternational - In the implementation block
@property (assign,nonatomic) BOOL isCalculatedSupported;                              //@synthesize isCalculatedSupported=_isCalculatedSupported - In the implementation block
@property (assign,nonatomic) BOOL isCalculatedAvailable;                              //@synthesize isCalculatedAvailable=_isCalculatedAvailable - In the implementation block
@property (assign,nonatomic) BOOL isLocalPickupSupported;                             //@synthesize isLocalPickupSupported=_isLocalPickupSupported - In the implementation block
@property (assign,nonatomic) BOOL isLocalPickupAvailable;                             //@synthesize isLocalPickupAvailable=_isLocalPickupAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long domesticConstraint;                   //@synthesize domesticConstraint=_domesticConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long internationalConstraint;              //@synthesize internationalConstraint=_internationalConstraint - In the implementation block
@property (nonatomic,retain) ListingItemDataManager * dataManager;                    //@synthesize dataManager=_dataManager - In the implementation block
-(unsigned long long)shippingDestinationType;
-(void)setInternationalConstraint:(unsigned long long)arg1 ;
-(void)setDomesticConstraint:(unsigned long long)arg1 ;
-(void)setShippingDestinationType:(unsigned long long)arg1 ;
-(NSString *)shipmentType;
-(void)setShipmentType:(NSString *)arg1 ;
-(BOOL)isInternational;
-(void)setIsInternational:(BOOL)arg1 ;
-(BOOL)isCalculatedSupported;
-(void)setIsCalculatedSupported:(BOOL)arg1 ;
-(BOOL)isCalculatedAvailable;
-(void)setIsCalculatedAvailable:(BOOL)arg1 ;
-(BOOL)isLocalPickupSupported;
-(void)setIsLocalPickupSupported:(BOOL)arg1 ;
-(BOOL)isLocalPickupAvailable;
-(void)setIsLocalPickupAvailable:(BOOL)arg1 ;
-(unsigned long long)domesticConstraint;
-(unsigned long long)internationalConstraint;
-(NSArray *)optionValues;
-(void)setDataManager:(ListingItemDataManager *)arg1 ;
-(void)setOptionValues:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(ListingItemDataManager *)dataManager;
@end

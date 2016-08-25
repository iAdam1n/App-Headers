/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUSelectVehicleViewController.h>

@class EBNCompatibilityDataManager, NSArray, EBNUserSavedGarageProductsUsage, EBNCompatibleProductVehicleType;

@interface EBUPersonalizedVehiclesCollectionViewController : EBUSelectVehicleViewController {

	BOOL _dataManagerLoaded;
	EBNCompatibilityDataManager* _dataManager;
	NSArray* _allGarageCompatibleProducts;
	EBNUserSavedGarageProductsUsage* _userSavedGarageProductsUsage;
	EBNCompatibleProductVehicleType* _vehicleType;
	long long _siteID;

}

@property (nonatomic,retain) EBNCompatibilityDataManager * dataManager;                                   //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) NSArray * allGarageCompatibleProducts;                                       //@synthesize allGarageCompatibleProducts=_allGarageCompatibleProducts - In the implementation block
@property (nonatomic,retain) EBNUserSavedGarageProductsUsage * userSavedGarageProductsUsage;              //@synthesize userSavedGarageProductsUsage=_userSavedGarageProductsUsage - In the implementation block
@property (nonatomic,retain) EBNCompatibleProductVehicleType * vehicleType;                               //@synthesize vehicleType=_vehicleType - In the implementation block
@property (assign,nonatomic) long long siteID;                                                            //@synthesize siteID=_siteID - In the implementation block
@property (assign,nonatomic) BOOL dataManagerLoaded;                                                      //@synthesize dataManagerLoaded=_dataManagerLoaded - In the implementation block
-(void)setupDataManager;
-(void)setDataManagerLoaded:(BOOL)arg1 ;
-(void)pushCompatiblityPickerViewController;
-(BOOL)dataManagerLoaded;
-(void)pushProductTypeViewController;
-(id)initWithCompatibleProductVehicleType:(id)arg1 siteID:(long long)arg2 ;
-(long long)siteID;
-(void)setSiteID:(long long)arg1 ;
-(EBNCompatibleProductVehicleType *)vehicleType;
-(void)setVehicleType:(EBNCompatibleProductVehicleType *)arg1 ;
-(void)setDataManager:(EBNCompatibilityDataManager *)arg1 ;
-(EBNCompatibilityDataManager *)dataManager;
-(EBNUserSavedGarageProductsUsage *)userSavedGarageProductsUsage;
-(void)setUserSavedGarageProductsUsage:(EBNUserSavedGarageProductsUsage *)arg1 ;
-(NSArray *)allGarageCompatibleProducts;
-(void)setAllGarageCompatibleProducts:(NSArray *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setup;
@end


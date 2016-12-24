/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUSelectVehicleViewController.h>
#import <eBay/EBUCompatibilityPropertyPickerBackButtonProtocol.h>

@class EBNCompatibleProductMetadataSession, NSString;

@interface EBUCompatiblityHSNTSNSelectVehicleViewController : EBUSelectVehicleViewController <EBUCompatibilityPropertyPickerBackButtonProtocol> {

	EBNCompatibleProductMetadataSession* _activeSession;

}

@property (nonatomic,retain) EBNCompatibleProductMetadataSession * activeSession;              //@synthesize activeSession=_activeSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EBNCompatibleProductMetadataSession *)activeSession;
-(void)backButtonTappedOnViewController:(id)arg1 ;
-(id)vehicleDisplayNameFromCompatibleProductProperties:(id)arg1 ;
-(void)showProductDetailScreen;
-(double)topPaddingFromNavBar;
-(id)initWithCompatibleProductMetadataSession:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(CGSize)itemSize;
-(void)setActiveSession:(EBNCompatibleProductMetadataSession *)arg1 ;
-(void)setup;
@end

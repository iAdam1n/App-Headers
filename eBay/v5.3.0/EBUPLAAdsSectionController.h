/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUViewItemSectionController.h>
#import <nautilus/PLAAdsDataManagerObserver.h>
#import <eBay/EBUCollectionViewSectionDelegate.h>

@class EBNPLAAdsDataManager, NSArray, EBUProductListingAdCell, EBUTextAdCell, ActivitySpinnerView, HeightMetricsActionCell, NSString;

@interface EBUPLAAdsSectionController : EBUViewItemSectionController <PLAAdsDataManagerObserver, EBUCollectionViewSectionDelegate> {

	EBNPLAAdsDataManager* _adsDataManager;
	NSArray* _rtmContents;
	EBUProductListingAdCell* _plaMeasurementCell;
	EBUTextAdCell* _textAdMeasurementCell;
	ActivitySpinnerView* _loadingSpinner;
	HeightMetricsActionCell* _loadingCell;
	unsigned long long _adFetchState;

}

@property (nonatomic,retain) EBNPLAAdsDataManager * adsDataManager;                     //@synthesize adsDataManager=_adsDataManager - In the implementation block
@property (nonatomic,retain) NSArray * rtmContents;                                     //@synthesize rtmContents=_rtmContents - In the implementation block
@property (nonatomic,retain) EBUProductListingAdCell * plaMeasurementCell;              //@synthesize plaMeasurementCell=_plaMeasurementCell - In the implementation block
@property (nonatomic,retain) EBUTextAdCell * textAdMeasurementCell;                     //@synthesize textAdMeasurementCell=_textAdMeasurementCell - In the implementation block
@property (nonatomic,retain) ActivitySpinnerView * loadingSpinner;                      //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
@property (nonatomic,retain) HeightMetricsActionCell * loadingCell;                     //@synthesize loadingCell=_loadingCell - In the implementation block
@property (assign,nonatomic) unsigned long long adFetchState;                           //@synthesize adFetchState=_adFetchState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long cellCount; 
@property (nonatomic,readonly) BOOL loadedItems; 
-(void)setAdFetchState:(unsigned long long)arg1 ;
-(unsigned long long)adFetchState;
-(UIEdgeInsets)insetForLayout:(id)arg1 ;
-(void)registerCellsWithCollectionView:(id)arg1 ;
-(CGSize)layout:(id)arg1 sizeForItemAtIndex:(long long)arg2 totalWidth:(double)arg3 ;
-(double)minimumLineSpacingForLayout:(id)arg1 ;
-(double)minimumInteritemSpacingForLayout:(id)arg1 ;
-(void)loadItems;
-(BOOL)showAds;
-(HeightMetricsActionCell *)loadingCell;
-(void)setLoadingCell:(HeightMetricsActionCell *)arg1 ;
-(void)createDataManager;
-(void)setRtmContents:(NSArray *)arg1 ;
-(EBUProductListingAdCell *)plaMeasurementCell;
-(EBUTextAdCell *)textAdMeasurementCell;
-(void)setPlaMeasurementCell:(EBUProductListingAdCell *)arg1 ;
-(void)setTextAdMeasurementCell:(EBUTextAdCell *)arg1 ;
-(NSArray *)rtmContents;
-(EBNPLAAdsDataManager *)adsDataManager;
-(void)plaAdsDataManager:(id)arg1 adsUpdated:(id)arg2 ;
-(void)plaAdsDataManager:(id)arg1 receivedError:(id)arg2 ;
-(void)setAdsDataManager:(EBNPLAAdsDataManager *)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)title;
-(BOOL)isLoading;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(void)setLoadingSpinner:(ActivitySpinnerView *)arg1 ;
-(ActivitySpinnerView *)loadingSpinner;
-(void)updateViews;
-(BOOL)loadedItems;
-(long long)cellCount;
@end


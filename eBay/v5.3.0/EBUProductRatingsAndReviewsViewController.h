/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <nautilus/EBNDataManagerObserver.h>
#import <eBay/EBUDynamicHeightViewDelegate.h>
#import <eBay/EBUProductRatingsAndReviewsLayoutDelegate.h>
#import <eBay/SimpleListPickerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class EBNProductReviewsDataManager, EBNListing, NSMapTable, NSHashTable, SimpleListPicker, NSArray, EBUViewItemSectionStyler, EBUToastView, EBUDeckOverlayViewController, UICollectionView, EBUProductRatingView, EBUProductRatableReviewView, EBUDynamicHeightView, UIButton, NSString;

@interface EBUProductRatingsAndReviewsViewController : EUIViewController <EBNDataManagerObserver, EBUDynamicHeightViewDelegate, EBUProductRatingsAndReviewsLayoutDelegate, SimpleListPickerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _needsUpdateTracking;
	EBNProductReviewsDataManager* _dataManager;
	EBNListing* _listing;
	double _cellWidth;
	NSMapTable* _cellHeightCache;
	NSHashTable* _expandedReviewsMap;
	SimpleListPicker* _sortOrderPicker;
	NSArray* _sections;
	EBUViewItemSectionStyler* _headingSection;
	EBUViewItemSectionStyler* _writeReviewSection;
	EBUToastView* _loadingShield;
	EBUDeckOverlayViewController* _sortDeckController;
	UICollectionView* _collectionView;
	EBUProductRatingView* _ratingView;
	EBUProductRatableReviewView* _reviewMeasurementView;
	EBUDynamicHeightView* _reviewsSectionHeaderView;
	EBUDynamicHeightView* _loadingView;
	UIButton* _sortButton;
	UIEdgeInsets _cellInsets;

}

@property (nonatomic,retain) EBNProductReviewsDataManager * dataManager;                        //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) EBNListing * listing;                                              //@synthesize listing=_listing - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateTracking;                                          //@synthesize needsUpdateTracking=_needsUpdateTracking - In the implementation block
@property (assign,nonatomic) double cellWidth;                                                  //@synthesize cellWidth=_cellWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellInsets;                                           //@synthesize cellInsets=_cellInsets - In the implementation block
@property (nonatomic,retain) NSMapTable * cellHeightCache;                                      //@synthesize cellHeightCache=_cellHeightCache - In the implementation block
@property (nonatomic,retain) NSHashTable * expandedReviewsMap;                                  //@synthesize expandedReviewsMap=_expandedReviewsMap - In the implementation block
@property (nonatomic,retain) SimpleListPicker * sortOrderPicker;                                //@synthesize sortOrderPicker=_sortOrderPicker - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) EBUViewItemSectionStyler * headingSection;                  //@synthesize headingSection=_headingSection - In the implementation block
@property (assign,nonatomic,__weak) EBUViewItemSectionStyler * writeReviewSection;              //@synthesize writeReviewSection=_writeReviewSection - In the implementation block
@property (nonatomic,retain) EBUToastView * loadingShield;                                      //@synthesize loadingShield=_loadingShield - In the implementation block
@property (nonatomic,retain) EBUDeckOverlayViewController * sortDeckController;                 //@synthesize sortDeckController=_sortDeckController - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) EBUProductRatingView * ratingView;                          //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) EBUProductRatableReviewView * reviewMeasurementView;               //@synthesize reviewMeasurementView=_reviewMeasurementView - In the implementation block
@property (nonatomic,retain) EBUDynamicHeightView * reviewsSectionHeaderView;                   //@synthesize reviewsSectionHeaderView=_reviewsSectionHeaderView - In the implementation block
@property (nonatomic,retain) EBUDynamicHeightView * loadingView;                                //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * sortButton;                                      //@synthesize sortButton=_sortButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewHeightChanged:(id)arg1 ;
-(void)trackViewDidBecomeActive;
-(void)simpleListPickerSelectionDismissed:(id)arg1 ;
-(void)simpleListPickerSelectionChanged:(id)arg1 ;
-(id)initWithProductReviewsDataManager:(id)arg1 listing:(id)arg2 ;
-(EBUToastView *)loadingShield;
-(void)setupSections;
-(void)setCellInsets:(UIEdgeInsets)arg1 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 hasBackgroundOnSection:(unsigned long long)arg3 ;
-(void)setNeedsUpdateTracking:(BOOL)arg1 ;
-(BOOL)needsUpdateTracking;
-(UIButton *)sortButton;
-(void)setSortButton:(UIButton *)arg1 ;
-(UIEdgeInsets)cellInsets;
-(void)setReviewMeasurementView:(EBUProductRatableReviewView *)arg1 ;
-(EBUProductRatableReviewView *)reviewMeasurementView;
-(void)setSortOrderPicker:(SimpleListPicker *)arg1 ;
-(void)sortPanelDoneButtonTapped:(id)arg1 ;
-(SimpleListPicker *)sortOrderPicker;
-(void)setSortDeckController:(EBUDeckOverlayViewController *)arg1 ;
-(void)setLoadingShield:(EBUToastView *)arg1 ;
-(void)registerTrackingIfNeeded;
-(id)productDescriptionView;
-(void)writeReview;
-(id)allReviewsSection;
-(void)setHeadingSection:(EBUViewItemSectionStyler *)arg1 ;
-(void)setWriteReviewSection:(EBUViewItemSectionStyler *)arg1 ;
-(void)applyTraits:(id)arg1 andSize:(CGSize)arg2 ;
-(EBUDeckOverlayViewController *)sortDeckController;
-(NSHashTable *)expandedReviewsMap;
-(NSMapTable *)cellHeightCache;
-(void)reviewVotedUp:(id)arg1 ;
-(void)reviewVotedDown:(id)arg1 ;
-(void)reviewReported:(id)arg1 ;
-(EBUViewItemSectionStyler *)writeReviewSection;
-(EBUViewItemSectionStyler *)headingSection;
-(void)setCellWidth:(double)arg1 ;
-(EBUDynamicHeightView *)reviewsSectionHeaderView;
-(void)sortButtonTapped:(id)arg1 ;
-(void)setReviewsSectionHeaderView:(EBUDynamicHeightView *)arg1 ;
-(void)setCellHeightCache:(NSMapTable *)arg1 ;
-(void)setExpandedReviewsMap:(NSHashTable *)arg1 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(EBNListing *)listing;
-(void)setListing:(EBNListing *)arg1 ;
-(void)setDataManager:(EBNProductReviewsDataManager *)arg1 ;
-(EBNProductReviewsDataManager *)dataManager;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(EBUDynamicHeightView *)loadingView;
-(void)setRatingView:(EBUProductRatingView *)arg1 ;
-(EBUProductRatingView *)ratingView;
-(void)setLoadingView:(EBUDynamicHeightView *)arg1 ;
-(double)cellWidth;
@end


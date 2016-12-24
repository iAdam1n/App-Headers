/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUICollectionReusableView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <eBay/EBUCompatibilityProductDetailsDelegate.h>

@protocol EBUVehiclePartsFitmentAnswerHeaderDelegate;
@class EBNVehiclePartsFitmentAnswer, EBUVehiclePartsFitmentAnswerCollectionHeaderView, UICollectionView, UICollectionViewFlowLayout, UIPanGestureRecognizer, NSString;

@interface EBUVehiclePartsFitmentAnswerHeaderView : EUICollectionReusableView <UICollectionViewDelegate, UICollectionViewDataSource, EBUCompatibilityProductDetailsDelegate> {

	BOOL _splitViewModeEnabled;
	EBNVehiclePartsFitmentAnswer* _fitmentAnswer;
	id<EBUVehiclePartsFitmentAnswerHeaderDelegate> _headerDelegate;
	EBUVehiclePartsFitmentAnswerCollectionHeaderView* _headerView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;

}

@property (nonatomic,retain) EBUVehiclePartsFitmentAnswerCollectionHeaderView * headerView;                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                           //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) EBNVehiclePartsFitmentAnswer * fitmentAnswer;                                      //@synthesize fitmentAnswer=_fitmentAnswer - In the implementation block
@property (assign,nonatomic,__weak) id<EBUVehiclePartsFitmentAnswerHeaderDelegate> headerDelegate;              //@synthesize headerDelegate=_headerDelegate - In the implementation block
@property (assign,nonatomic) BOOL splitViewModeEnabled;                                                         //@synthesize splitViewModeEnabled=_splitViewModeEnabled - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)totalNumberOfItems:(id)arg1 ;
+(double)defaultHeightForAnswer:(id)arg1 splitViewModeEnabled:(BOOL)arg2 ;
-(void)setupColletionView;
-(void)setupHeaderView;
-(BOOL)splitViewModeEnabled;
-(unsigned long long)totalNumberOfVehicles;
-(double)topSpacing;
-(void)updateConstraintsOnLayoutchange;
-(void)updateVisibleCells;
-(void)setSplitViewModeEnabled:(BOOL)arg1 ;
-(id)constraintForAttribute:(long long)arg1 forView:(id)arg2 onView:(id)arg3 ;
-(id)garageProductAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg1 vehicleCellForItemAtIndexPath:(id)arg2 garageProduct:(id)arg3 ;
-(id)collectionView:(id)arg1 enterNewVehicleCellForItemAtIndexPath:(id)arg2 ;
-(BOOL)shouldShowFindPartsForYourVehiclesCell;
-(void)notifyDelegateForTappedGarageProduct:(id)arg1 ;
-(void)showViewController;
-(void)trackFitmentAnswerClick:(id)arg1 ;
-(void)setSelectionsOnSession:(id)arg1 ;
-(id)viewControllerToShow:(id)arg1 ;
-(BOOL)showVRMViewControllerForSession:(id)arg1 ;
-(BOOL)showHSNTSNViewControllerForSession:(id)arg1 ;
-(void)trackFitmentAnswerClickForGoButtonTappedOnDetailsViewController;
-(void)goButtonTappedOnDetailsViewController:(id)arg1 withGarageProduct:(id)arg2 ;
-(void)setFitmentAnswer:(EBNVehiclePartsFitmentAnswer *)arg1 ;
-(EBNVehiclePartsFitmentAnswer *)fitmentAnswer;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(double)minimumLineSpacing;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(UIEdgeInsets)edgeInsets;
-(void)prepareForReuse;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(EBUVehiclePartsFitmentAnswerCollectionHeaderView *)headerView;
-(void)setHeaderView:(EBUVehiclePartsFitmentAnswerCollectionHeaderView *)arg1 ;
-(void)invalidateLayout;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)itemSize;
-(id<EBUVehiclePartsFitmentAnswerHeaderDelegate>)headerDelegate;
-(void)setHeaderDelegate:(id<EBUVehiclePartsFitmentAnswerHeaderDelegate>)arg1 ;
-(void)setupConstraints;
-(void)setup;
@end

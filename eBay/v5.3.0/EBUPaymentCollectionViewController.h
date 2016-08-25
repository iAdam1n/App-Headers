/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/PaymentMethodViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSMutableDictionary, NSArray, UICollectionView, EBUPaymentMethodCollectionViewFactory, NSString;

@interface EBUPaymentCollectionViewController : PaymentMethodViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSMutableDictionary* _cellCache;
	NSArray* _sections;
	UICollectionView* _collectionView;
	EBUPaymentMethodCollectionViewFactory* _viewFactory;

}

@property (nonatomic,retain) NSMutableDictionary * cellCache;                        //@synthesize cellCache=_cellCache - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                      //@synthesize collectionView=_collectionView - In the implementation block
@property (retain) EBUPaymentMethodCollectionViewFactory * viewFactory;              //@synthesize viewFactory=_viewFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paymentMethodControllerWithDelegate:(id)arg1 dataManager:(id)arg2 ;
-(void)setSubclassStrongPointersToNil;
-(void)setupViewSectionsAndCells;
-(void)disableQtyStepper;
-(id)wrapDynamicHeightView:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setupNavBar;
-(void)setViewFactory:(EBUPaymentMethodCollectionViewFactory *)arg1 ;
-(BOOL)scrollToTopForError;
-(NSMutableDictionary *)cellCache;
-(void)setCellCache:(NSMutableDictionary *)arg1 ;
-(EBUPaymentMethodCollectionViewFactory *)viewFactory;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setupViewController;
@end


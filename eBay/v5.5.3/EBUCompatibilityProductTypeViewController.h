/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUCompatibilityBaseViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, UICollectionViewFlowLayout, NSArray, EBNCompatibilityDataManager, EBUCompatibilityPropertySpinnerFooter, EBNCompatibleProductMetadataSession, NSString;

@interface EBUCompatibilityProductTypeViewController : EBUCompatibilityBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSArray* _content;
	EBNCompatibilityDataManager* _dataManager;
	EBUCompatibilityPropertySpinnerFooter* _spinner;
	long long _compatibilityUsecase;
	EBNCompatibleProductMetadataSession* _activeSession;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                          //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) NSArray * content;                                                //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) EBNCompatibilityDataManager * dataManager;                        //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) EBUCompatibilityPropertySpinnerFooter * spinner;                  //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) long long compatibilityUsecase;                                   //@synthesize compatibilityUsecase=_compatibilityUsecase - In the implementation block
@property (nonatomic,retain) EBNCompatibleProductMetadataSession * activeSession;              //@synthesize activeSession=_activeSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EBNCompatibleProductMetadataSession *)activeSession;
-(void)setupActivitySpinnerView;
-(void)startAnimatingSpinnerAndPrepareView;
-(void)stopAnimatingSpinnerAndPrepareView;
-(void)setupDatamanager;
-(void)setupCollectionViewFlowlayout;
-(BOOL)showVRMScreen:(id)arg1 ;
-(BOOL)showHSNTSNScreen:(id)arg1 ;
-(void)setDataManager:(EBNCompatibilityDataManager *)arg1 ;
-(long long)compatibilityUsecase;
-(void)setCompatibilityUsecase:(long long)arg1 ;
-(long long)numberOfColumns;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)content;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setupCollectionView;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)itemSize;
-(double)headerHeight;
-(EBUCompatibilityPropertySpinnerFooter *)spinner;
-(void)setSpinner:(EBUCompatibilityPropertySpinnerFooter *)arg1 ;
-(void)setContent:(NSArray *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setActiveSession:(EBNCompatibleProductMetadataSession *)arg1 ;
-(EBNCompatibilityDataManager *)dataManager;
-(void)setup;
@end

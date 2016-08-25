/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <nautilus/EBNUserProfileDataManagerObserver.h>
#import <eBay/EGORefreshHelperDelegate.h>

@class EGORefreshHelper, EBNUser, EUICollectionView, NSArray, EBUDynamicMyEBayHeaderView, NSIndexPath, NSString;

@interface EBUMyEbayTabContentViewController : EUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EBNUserProfileDataManagerObserver, EGORefreshHelperDelegate> {

	BOOL _visible;
	EGORefreshHelper* _refreshHelper;
	EBNUser* _currentUser;
	EUICollectionView* _collectionView;
	NSArray* _modelArray;
	EBUDynamicMyEBayHeaderView* _dynamicHeaderView;
	double _dynamicHeaderViewHeight;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) EGORefreshHelper * refreshHelper;                            //@synthesize refreshHelper=_refreshHelper - In the implementation block
@property (nonatomic,retain) EBNUser * currentUser;                                       //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) EUICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * modelArray;                                        //@synthesize modelArray=_modelArray - In the implementation block
@property (nonatomic,retain) EBUDynamicMyEBayHeaderView * dynamicHeaderView;              //@synthesize dynamicHeaderView=_dynamicHeaderView - In the implementation block
@property (assign,nonatomic) double dynamicHeaderViewHeight;                              //@synthesize dynamicHeaderViewHeight=_dynamicHeaderViewHeight - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                             //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                               //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackViewDidBecomeActive;
-(EGORefreshHelper *)refreshHelper;
-(void)reloadTableViewDataSource;
-(void)setRefreshHelper:(EGORefreshHelper *)arg1 ;
-(void)scrollToTop:(BOOL)arg1 ;
-(NSArray *)modelArray;
-(void)setModelArray:(NSArray *)arg1 ;
-(EBUDynamicMyEBayHeaderView *)dynamicHeaderView;
-(void)setDynamicHeaderView:(EBUDynamicMyEBayHeaderView *)arg1 ;
-(double)dynamicHeaderViewHeight;
-(void)setDynamicHeaderViewHeight:(double)arg1 ;
-(void)updateCartButtonVisibility;
-(void)updateCartForAccessibility;
-(void)selectNavigationDestination:(long long)arg1 ;
-(void)updateProfileInfo;
-(void)updateMessagesBadgeCount;
-(void)notificationCountChanged;
-(void)updateModelArray;
-(id)modelForIdentifier:(id)arg1 ;
-(void)updateWatchingModel:(id)arg1 ;
-(void)updatePurchaseHistoryModel:(id)arg1 ;
-(void)updateBidsAndOffersModel:(id)arg1 ;
-(void)updateSellingModel:(id)arg1 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(void)dataManager:(id)arg1 didCompleteFetch:(id)arg2 ;
-(void)dcsChanged:(id)arg1 ;
-(void)registerTracking;
-(void)userDataUpdateFor:(id)arg1 error:(id)arg2 ;
-(void)dataManagerUpdateCartBadge:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(EUICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)setCollectionView:(EUICollectionView *)arg1 ;
-(void)updateViews;
-(void)setCurrentUser:(EBNUser *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(EBNUser *)currentUser;
@end


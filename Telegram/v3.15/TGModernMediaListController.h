/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol TGModernMediaListItem;
@class UICollectionView, TGModernMediaListLayout, UIView, NSMutableDictionary, NSMutableArray, TGModernMediaListModel, NSString;

@interface TGModernMediaListController : TGViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	CGSize _normalItemSize;
	CGSize _wideItemSize;
	double _widescreenWidth;
	double _normalLineSpacing;
	double _wideLineSpacing;
	UIEdgeInsets _normalEdgeInsets;
	UIEdgeInsets _wideEdgeInsets;
	UICollectionView* _collectionView;
	double _collectionViewWidth;
	TGModernMediaListLayout* _collectionLayout;
	UIView* _collectionContainer;
	NSMutableDictionary* _reusableItemContentViewsByIdentifier;
	id<TGModernMediaListItem> _hiddenItem;
	/*^block*/id _recycleItemContentView;
	NSMutableArray* _storedItemContentViews;
	TGModernMediaListModel* _model;

}

@property (nonatomic,retain) TGModernMediaListModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controllerInsetUpdated:(UIEdgeInsets)arg1 ;
-(void)enqueueView:(id)arg1 ;
-(BOOL)shouldAdjustScrollViewInsetsForInversedLayout;
-(void)_updateHiddenItems;
-(void)_adjustContentOffsetToBottom:(long long)arg1 ;
-(void)_adjustInverseContentOffset:(double)arg1 ;
-(id)dequeueViewForItem:(id)arg1 ;
-(id)init;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(TGModernMediaListModel *)model;
-(void)setModel:(TGModernMediaListModel *)arg1 ;
@end

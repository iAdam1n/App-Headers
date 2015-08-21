/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol TFNScrollBumpCellDataSource, TFNScrollBumpCellDelegate;
@class UILabel, UICollectionView, TFNScrollBumpCollectionViewLayout, TFNDataViewController, TFNTwitterAccount, TFNTwitterStatusCarousel, NSArray, TFNTwitterStatus, NSString;

@interface TFNScrollBumpCell : TFNTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {

	UILabel* _titleLabel;
	struct {
		unsigned needsReload : 1;
		unsigned delegateRespondsToDidRemovePageAtIndex : 1;
		unsigned delegateRespondsToDidStopToPageAtIndex : 1;
		unsigned delegateRespondsToDidScrollToPageAtIndex : 1;
		unsigned delegateRespondsToDidScrollWithAnimationToPageAtIndex : 1;
		unsigned delegateRespondsToDidTapPageAtIndex : 1;
	}  _flags;
	id _representedObject;
	unsigned long long _numberOfPages;
	unsigned long long _currentPage;
	id<TFNScrollBumpCellDataSource> _dataSource;
	id<TFNScrollBumpCellDelegate> _delegate;
	/*^block*/id _pageTapBlock;
	UICollectionView* _collectionView;
	TFNScrollBumpCollectionViewLayout* _layout;
	unsigned long long _visiblePageIndexAtStartOfDrag;
	/*^block*/id _scrollCompletionBlock;
	CGPoint _titleLabelOffset;

}

@property (nonatomic,__weak,readonly) TFNDataViewController * controller; 
@property (nonatomic,readonly) TFNTwitterAccount * account; 
@property (nonatomic,readonly) TFNTwitterStatusCarousel * carousel; 
@property (nonatomic,readonly) NSArray * statuses; 
@property (nonatomic,readonly) TFNTwitterStatus * currentStatus; 
@property (assign,nonatomic) double visibilityPercentage; 
@property (nonatomic,retain) id representedObject;                                           //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) UIEdgeInsets pageInsets; 
@property (assign,nonatomic) double pageSpacing; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (assign,nonatomic) CGPoint titleLabelOffset;                                       //@synthesize titleLabelOffset=_titleLabelOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPages;                             //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) unsigned long long currentPage;                                 //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic,__weak) id<TFNScrollBumpCellDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TFNScrollBumpCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id pageTapBlock;                                                  //@synthesize pageTapBlock=_pageTapBlock - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) TFNScrollBumpCollectionViewLayout * layout;                   //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long visiblePageIndexAtStartOfDrag;               //@synthesize visiblePageIndexAtStartOfDrag=_visiblePageIndexAtStartOfDrag - In the implementation block
@property (nonatomic,copy) id scrollCompletionBlock;                                         //@synthesize scrollCompletionBlock=_scrollCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)statuses;
-(void)setVisibilityPercentage:(double)arg1 ;
-(id)statusAtIndex:(unsigned long long)arg1 ;
-(double)visibilityPercentage;
-(TFNDataViewController *)controller;
-(TFNTwitterStatus *)currentStatus;
-(TFNTwitterAccount *)account;
-(TFNTwitterStatusCarousel *)carousel;
-(void)setPageTapBlock:(id)arg1 ;
-(id)pageTapBlock;
-(void)registerClass:(Class)arg1 forPageViewWithReuseIdentifier:(id)arg2 ;
-(void)setPageInsets:(UIEdgeInsets)arg1 ;
-(void)setTitleLabelOffset:(CGPoint)arg1 ;
-(id)dequeueReusablePageViewWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(CGPoint)titleLabelOffset;
-(void)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)pageInsets;
-(void)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)scrollCompletionBlock;
-(void)setScrollCompletionBlock:(id)arg1 ;
-(double)_contentOffsetXForScrollView:(id)arg1 pageIndex:(unsigned long long)arg2 ;
-(unsigned long long)visiblePageIndexAtStartOfDrag;
-(void)setVisiblePageIndexAtStartOfDrag:(unsigned long long)arg1 ;
-(id)pageViewAtIndex:(unsigned long long)arg1 ;
-(void)setDataSource:(id<TFNScrollBumpCellDataSource>)arg1 ;
-(void)setDelegate:(id<TFNScrollBumpCellDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<TFNScrollBumpCellDataSource>)dataSource;
-(id<TFNScrollBumpCellDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UILabel *)titleLabel;
-(void)_reloadDataIfNeeded;
-(void)prepareForReuse;
-(TFNScrollBumpCollectionViewLayout *)layout;
-(UICollectionView *)collectionView;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPages;
-(unsigned long long)currentPage;
-(void)setPageSpacing:(double)arg1 ;
-(double)pageSpacing;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TS_MMHorizontalListViewDelegate, TS_MMHorizontalListViewDataSource;
@class NSRecursiveLock, NSMutableArray, NSMutableDictionary, NSString;

@interface TS_MMHorizontalListView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	id<TS_MMHorizontalListViewDelegate> _horizontalListDelegate;
	NSRecursiveLock* _mainLock;
	NSMutableArray* _cellQueue;
	NSMutableDictionary* _visibleCells;
	NSMutableArray* _cellFrames;
	NSMutableArray* _selectedIndexes;
	NSMutableArray* _highlightedIndexes;
	id<TS_MMHorizontalListViewDataSource> dataSource;
	double cellSpacing;

}

@property (assign,nonatomic) id<TS_MMHorizontalListViewDelegate> delegate; 
@property (assign,nonatomic) id<TS_MMHorizontalListViewDataSource> dataSource; 
@property (assign,nonatomic) double cellSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateVisibleCells;
-(void)initiliase;
-(void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2 nearestPosition:(int)arg3 ;
-(void)cellTap:(id)arg1 ;
-(id)visibleIndexes;
-(void)addCellAtIndex:(long long)arg1 ;
-(void)enqueueCell:(id)arg1 forKey:(id)arg2 ;
-(void)highlightCellAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)unhighlightCellAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)selectCellAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)deselectCellAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)dequeueCellWithReusableIdentifier:(id)arg1 ;
-(void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<TS_MMHorizontalListViewDataSource>)arg1 ;
-(void)setDelegate:(id<TS_MMHorizontalListViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<TS_MMHorizontalListViewDataSource>)dataSource;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)awakeFromNib;
-(CGRect)visibleRect;
-(void)setCellSpacing:(double)arg1 ;
-(double)cellSpacing;
@end


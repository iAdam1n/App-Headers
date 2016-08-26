/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <AlienBlue/JMRefreshHeaderDelegate.h>
#import <AlienBlue/JMOutlineNodeProtocol.h>

@protocol UIScrollViewDelegate;
@class NSMutableArray, JMOutlineTableView, UIView, JMRefreshHeaderView, UIImageView, JMOutlineCustomNavigationBar, NSString;

@interface JMOutlineViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, JMRefreshHeaderDelegate, JMOutlineNodeProtocol> {

	BOOL showFloatingHeader_;
	BOOL _isReloadingNodes;
	NSMutableArray* nodes_;
	JMOutlineTableView* tableView_;
	UIView* floatingHeader_;
	double lastFloatRefresh_;
	JMRefreshHeaderView* pullRefreshView_;
	UIImageView* _topShadowView;
	id<UIScrollViewDelegate> _scrollObserver;
	Class _customTableClass;
	unsigned long long _selectedRow;
	unsigned long long _topVisibleRow;
	CGPoint savedScrollPosition_;

}

@property (assign) BOOL prefersFixedCompactCustomNavigationBar; 
@property (assign) BOOL shouldSuppressNavigationBarAdjustmentResponse; 
@property (readonly) JMOutlineCustomNavigationBar * attachedCustomNavigationBar; 
@property (assign) double navbarAggregateChangeWhileScrollViewIsPaused; 
@property (readonly) BOOL shouldUseCompactNavigationBar; 
@property (retain) JMOutlineTableView * tableView; 
@property (assign) BOOL showFloatingHeader; 
@property (retain) NSMutableArray * nodes; 
@property (assign) CGPoint savedScrollPosition; 
@property (retain) JMRefreshHeaderView * pullRefreshView; 
@property (retain) UIImageView * topShadowView;                                               //@synthesize topShadowView=_topShadowView - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollObserver;                  //@synthesize scrollObserver=_scrollObserver - In the implementation block
@property (retain) Class customTableClass;                                                    //@synthesize customTableClass=_customTableClass - In the implementation block
@property (retain) UIView * floatingHeader; 
@property (assign) double lastFloatRefresh; 
@property (assign) unsigned long long selectedRow;                                            //@synthesize selectedRow=_selectedRow - In the implementation block
@property (assign) unsigned long long topVisibleRow;                                          //@synthesize topVisibleRow=_topVisibleRow - In the implementation block
@property (assign) BOOL isReloadingNodes;                                                     //@synthesize isReloadingNodes=_isReloadingNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(JMOutlineCustomNavigationBar *)attachedCustomNavigationBar;
-(void)attachCustomNavigationBarView:(id)arg1 ;
-(void)setPrefersFixedCompactCustomNavigationBar:(BOOL)arg1 ;
-(void)customNavigationBarScrollHandler_viewWillAppear:(BOOL)arg1 ;
-(void)customNavigationBarScrollHandler_viewDidAppear:(BOOL)arg1 ;
-(void)customNavigationBarScrollHandler_viewWillDisappear:(BOOL)arg1 ;
-(void)customNavigationBarScrollHandler_scrollViewDidScroll:(id)arg1 ;
-(void)customNavigationBarScrollHandler_scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)customNavigationBarScrollHandler_scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)customNavigationBarScrollHandler_scrollViewWillBeginDragging:(id)arg1 ;
-(void)customNavigationBarScrollHandler_scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)customNavigationBarScrollHandler_scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)customNavigationBarScrollHandler_scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)customNavigationBarScrollHandler_scrollViewShouldScrollToTop:(id)arg1 ;
-(void)customNavigationBarScrollHandler_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)customNavigationBarScrollHandler_didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldUseCompactNavigationBar;
-(BOOL)prefersFixedCompactCustomNavigationBar;
-(BOOL)isConfiguringNavigationBarForLandscape;
-(id)customNavigationBarView;
-(void)setCustomNavigationBarView:(id)arg1 ;
-(void)setIsConfiguringNavigationBarForLandscape:(BOOL)arg1 ;
-(void)adjustInitialTableOffsets;
-(void)setNavbarAggregateChangeWhileScrollViewIsPaused:(double)arg1 ;
-(void)setShouldSuppressNavigationBarAdjustmentResponse:(BOOL)arg1 ;
-(void)properAdjustCustomNavigationBarForScrollView:(id)arg1 ;
-(void)resetAggregateChangeIfNecessary;
-(BOOL)isAdjustingNavigationBar;
-(void)setLastReportedScrollContentOffset:(CGPoint)arg1 ;
-(double)timeOfLastReportedScrollContentOffset;
-(void)setTimeOfLastReportedScrollContentOffset:(double)arg1 ;
-(CGPoint)lastReportedScrollContentOffset;
-(BOOL)shouldSuppressNavigationBarAdjustmentResponse;
-(BOOL)isScrollViewInPerpetualSlowDecelerationAnimation:(double)arg1 ;
-(double)navbarAggregateChangeWhileScrollViewIsPaused;
-(void)setIsAdjustingNavigationBar:(BOOL)arg1 ;
-(void)detachCustomNavigationBarView;
-(void)handleRotationAdjustments;
-(void)clearRenderForNode:(id)arg1 ;
-(void)initialisePrerenderCache;
-(id)prerenderedCellImageForNode:(id)arg1 ;
-(void)prerenderNode:(id)arg1 ;
-(void)setRenderCache:(id)arg1 ;
-(id)renderCacheKeyForNode:(id)arg1 ;
-(id)renderCache;
-(void)disableKeyboardReaction;
-(void)enableKeyboardReaction;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)setCurrentlyHandlingKeyboardEvent:(BOOL)arg1 ;
-(BOOL)currentlyHandlingKeyboardEvent;
-(void)initialiseHeightCache;
-(void)clearHeightCache;
-(void)clearCachedHeightForNode:(id)arg1 ;
-(double)cachedHeightForNode:(id)arg1 ;
-(void)setCachedHeight:(double)arg1 forNode:(id)arg2 ;
-(void)setHeightCache:(id)arg1 ;
-(id)heightCacheKeyForNode:(id)arg1 ;
-(id)heightCache;
-(void)setPullRefreshView:(JMRefreshHeaderView *)arg1 ;
-(JMRefreshHeaderView *)pullRefreshView;
-(void)reloadRowsForNodes:(id)arg1 ;
-(void)deselectNodes;
-(void)scrollToNode:(id)arg1 ;
-(void)toggleNode:(id)arg1 ;
-(void)createSubviews;
-(id)nodeForRow:(unsigned long long)arg1 ;
-(id)cellForNode:(id)arg1 ;
-(void)releaseViews;
-(void)setCustomTableClass:(Class)arg1 ;
-(BOOL)isNodeSelected:(id)arg1 ;
-(void)reloadRowForNode:(id)arg1 ;
-(void)setSelectedRow:(unsigned long long)arg1 ;
-(void)setScrollObserver:(id<UIScrollViewDelegate>)arg1 ;
-(void)setFloatingHeader:(UIView *)arg1 ;
-(Class)customTableClass;
-(void)setTopShadowView:(UIImageView *)arg1 ;
-(UIImageView *)topShadowView;
-(void)updateTopShadowWithLatestTableOffset;
-(CGPoint)savedScrollPosition;
-(void)setSavedScrollPosition:(CGPoint)arg1 ;
-(unsigned long long)rowForNode:(id)arg1 ;
-(BOOL)showFloatingHeader;
-(void)updateFloatingCell;
-(CGRect)rectForNode:(id)arg1 ;
-(UIView *)floatingHeader;
-(void)updateFloatingHeader;
-(id<UIScrollViewDelegate>)scrollObserver;
-(void)setTopVisibleRow:(unsigned long long)arg1 ;
-(unsigned long long)topVisibleRow;
-(void)testFinished;
-(void)insertNode:(id)arg1 atRowIndex:(unsigned long long)arg2 ;
-(void)insertNode:(id)arg1 afterNode:(id)arg2 ;
-(id)selectedNode;
-(void)reloadVisibleRows;
-(void)scrollNodeRectToVisible:(id)arg1 ;
-(void)setShowFloatingHeader:(BOOL)arg1 ;
-(double)lastFloatRefresh;
-(void)setLastFloatRefresh:(double)arg1 ;
-(BOOL)isReloadingNodes;
-(void)setIsReloadingNodes:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(JMOutlineTableView *)tableView;
-(void)setTableView:(JMOutlineTableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)selectNode:(id)arg1 ;
-(NSMutableArray *)nodes;
-(void)addNode:(id)arg1 ;
-(void)addNodes:(id)arg1 ;
-(unsigned long long)selectedRow;
-(void)removeNode:(id)arg1 ;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(long long)nodeCount;
-(void)removeAllNodes;
@end

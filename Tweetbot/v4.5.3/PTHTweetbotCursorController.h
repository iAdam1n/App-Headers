/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>

@class UITableView, PTHTweetbotCursor, NSArray, PTHTweetbotViewControllerStateView, PTHTweetbotRefreshView, PTHTweetbotCursorLoadingOlderView, PTHTweetbotCursorGapCell, PTHTweetbotCursorFilter, PTHTweetbotCursorUnreadItemsView, UIControl, NSMutableArray, UIView, PTHTweetbotCursorSearchHeaderView, NSTimer, NSString;

@interface PTHTweetbotCursorController : PTHViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching> {

	UITableView* _tableView;
	PTHTweetbotCursor* _tweetbotCursor;
	NSArray* _items;
	PTHTweetbotViewControllerStateView* _stateView;
	PTHTweetbotRefreshView* _refreshView;
	PTHTweetbotCursorLoadingOlderView* _loadingOlderView;
	PTHTweetbotCursorGapCell* _gapCell;
	long long _gapTID;
	PTHTweetbotCursorFilter* _cursorFilter;
	BOOL _unreadItemsShowing;
	PTHTweetbotCursorUnreadItemsView* _unreadItemsView;
	NSArray* _lastUnreadUpdateItems;
	long long _lastUnreadUpdateLastReadTID;
	unsigned long long _lastUnreadUpdateUnreadItemCount;
	long long _lastUnreadUpdateUnreadItemIndex;
	BOOL _needsUpdate;
	/*^block*/id _scrollingDidStopBlock;
	BOOL _isAnimatedScrolling;
	BOOL _loadingOlder;
	BOOL _loadingGap;
	BOOL _hasPositioned;
	BOOL _hasPlayedRefreshPull;
	BOOL _manuallyRefreshing;
	BOOL _isSearching;
	NSArray* _searchableItems;
	UIControl* _searchOverlayView;
	NSMutableArray* _searchCleanupItems;
	SCD_Struct_PT3 _searchCleanupPosition;
	long long _searchCleanupSelectedTID;
	UIView* _searchCleanupSeparator;
	NSArray* _searchHeaderConstraints;
	BOOL _hasLostParentViewController;
	UIView* _searchHeaderContainer;
	PTHTweetbotCursorSearchHeaderView* _searchHeader;
	unsigned long long _freezeCount;
	NSTimer* _freezeCheckTimer;
	NSMutableArray* _freezeArray;
	BOOL _changingFontHack;
	SCD_Struct_PT3 _disappearedDisplayPosition;
	BOOL _didActuallyAppear;
	NSMutableArray* _keyCommands;
	NSMutableArray* _transitionBlocks;
	BOOL _disableRefresh;
	BOOL _showLoadingFooter;
	BOOL _manuallyScrolling;
	BOOL _transitioning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long fullyVisibleTID; 
@property (assign,nonatomic) long long selectedTID; 
@property (nonatomic,readonly) SCD_Struct_PT3 displayPosition; 
@property (nonatomic,readonly) BOOL canManuallyRefresh; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                      //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) PTHTweetbotCursor * tweetbotCursor;                             //@synthesize tweetbotCursor=_tweetbotCursor - In the implementation block
@property (assign,nonatomic) BOOL disableRefresh;                                            //@synthesize disableRefresh=_disableRefresh - In the implementation block
@property (assign,nonatomic) BOOL showLoadingFooter;                                         //@synthesize showLoadingFooter=_showLoadingFooter - In the implementation block
@property (assign,getter=isManuallyScrolling,nonatomic) BOOL manuallyScrolling;              //@synthesize manuallyScrolling=_manuallyScrolling - In the implementation block
@property (nonatomic,readonly) BOOL canTransition; 
@property (nonatomic,readonly) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,__weak,readonly) NSString * reuseIdentifier; 
@property (nonatomic,__weak,readonly) NSString * searchTitle; 
@property (nonatomic,__weak,readonly) NSString * nothingFoundTitle; 
@property (nonatomic,readonly) BOOL needsCustomSeparators; 
@property (nonatomic,readonly) BOOL needsHeaderSeparator; 
@property (nonatomic,readonly) BOOL needsFooterSeparator; 
@property (nonatomic,retain) PTHTweetbotCursorFilter * cursorFilter;                         //@synthesize cursorFilter=_cursorFilter - In the implementation block
+(void)showTableViewAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithTweetbotCursor:(id)arg1 ;
-(void)setTweetbotCursor:(PTHTweetbotCursor *)arg1 ;
-(NSString *)nothingFoundTitle;
-(void)setShowLoadingFooter:(BOOL)arg1 ;
-(SCD_Struct_PT3)displayPosition;
-(long long)selectedTID;
-(void)_cancelSearch;
-(void)setSelectedTID:(long long)arg1 ;
-(void)setDisplayPosition:(SCD_Struct_PT3)arg1 actionName:(id)arg2 ;
-(void)pushFreezeUpdates:(id)arg1 ;
-(void)popFreezeUpdates;
-(void)didUpdate;
-(PTHTweetbotCursor *)tweetbotCursor;
-(PTHTweetbotCursorFilter *)cursorFilter;
-(void)cursorDidUpdate;
-(void)lastReadTIDDidUpdate;
-(void)_didBecomeActive;
-(void)_streamingTransitioned;
-(void)clearTransitions;
-(void)willChangeCursor;
-(void)didChangeCursor;
-(void)loadNewerIfNeeded;
-(void)loadNewerDidStart;
-(void)loadNewerDidStop;
-(void)_syncPositionDidChange:(id)arg1 ;
-(void)updateUnreadItemsView:(BOOL)arg1 ;
-(BOOL)needsCustomSeparators;
-(BOOL)needsFooterSeparator;
-(BOOL)needsHeaderSeparator;
-(void)_resetLastRead;
-(void)updateInsets;
-(void)setContentPosition:(double)arg1 actionName:(id)arg2 ;
-(void)_emergencyThaw;
-(void)runPendingTransition;
-(BOOL)canTransition;
-(void)_runTransitionBlock:(/*^block*/id)arg1 ;
-(BOOL)isManuallyScrolling;
-(void)setManuallyScrolling:(BOOL)arg1 ;
-(void)scrollPageUp;
-(void)scrollPageDown;
-(void)manualRefresh;
-(BOOL)canManuallyRefresh;
-(id)viewForSourceObject:(id)arg1 ;
-(void)setCursorFilter:(PTHTweetbotCursorFilter *)arg1 ;
-(BOOL)disableRefresh;
-(void)setDisableRefresh:(BOOL)arg1 ;
-(BOOL)showLoadingFooter;
-(void)_scrollViewDidStop:(id)arg1 ;
-(long long)fullyVisibleTID;
-(unsigned long long)rowForTID:(long long)arg1 ;
-(void)setContentPosition:(double)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_scrollToTop:(/*^block*/id)arg1 ;
-(void)_scrollToBottom:(/*^block*/id)arg1 ;
-(void)_scrollPageUp:(/*^block*/id)arg1 ;
-(void)_scrollPageDown:(/*^block*/id)arg1 ;
-(void)loadNewer;
-(void)updateUnreadItemsView;
-(void)_updateItems:(id)arg1 ;
-(void)loadOlder;
-(void)loadGap;
-(id)createItemsFromCursor;
-(void)_scrollToSyncTID:(/*^block*/id)arg1 ;
-(BOOL)_updateStatusViewIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_updateGapIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_updateLastIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_addNonFirstItemIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_deleteItemIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_hideHeaderIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_update:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)contentPositionForPosition:(SCD_Struct_PT3)arg1 ;
-(void)setDisplayPosition:(SCD_Struct_PT3)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadNewerDidStop:(/*^block*/id)arg1 ;
-(void)_didLoadOlder;
-(void)_didLoadGap;
-(void)addTransition:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)keyCommands;
-(NSArray *)items;
-(UIEdgeInsets)contentInset;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSString *)reuseIdentifier;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(UITableView *)tableView;
-(BOOL)isTransitioning;
-(Class)cellClass;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)update;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)forceUpdate;
-(NSString *)searchTitle;
-(void)setTransitioning:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)_loadHeaderView;
-(void)scrollToBottom;
-(void)_fontSizeChanged;
-(void)willUpdate;
-(double)contentPosition;
-(void)scrollToTop;
@end

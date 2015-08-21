/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotTableViewController.h>

@class NSMutableArray, PTHTweetbotRefreshView, PTHTweetbotCursorGapCell, PTHTweetbotCursorLoadingOlderView, PTHTweetbotCursorUnreadItemsView, NSArray, PTHTweetbotCursor;

@interface PTHTweetbotCursorController : PTHTweetbotTableViewController {

	NSMutableArray* _cursorItems;
	BOOL _hasPositioned;
	PTHTweetbotRefreshView* _refreshView;
	PTHTweetbotCursorGapCell* _gapCell;
	BOOL _manuallyScrolling;
	BOOL _loadNewerOnAppear;
	BOOL _hasPlayedRefreshPull;
	BOOL _manuallyRefreshing;
	BOOL _loadingOlder;
	BOOL _loadingGap;
	NSMutableArray* _transitionBlocks;
	BOOL _transitioning;
	BOOL _showMark;
	PTHTweetbotCursorLoadingOlderView* _loadingOlderView;
	BOOL _unreadItemsShowing;
	PTHTweetbotCursorUnreadItemsView* _unreadItemsView;
	BOOL _hideNewItemsBar;
	CGSize _oldTableViewSize;
	NSArray* _refreshViewConstraints;
	BOOL _disableRefresh;
	PTHTweetbotCursor* _tweetbotCursor;

}

@property (nonatomic,retain) PTHTweetbotCursor * tweetbotCursor;              //@synthesize tweetbotCursor=_tweetbotCursor - In the implementation block
@property (assign,nonatomic) BOOL disableRefresh;                             //@synthesize disableRefresh=_disableRefresh - In the implementation block
@property (nonatomic,readonly) long long fullyVisibleTID; 
@property (assign,nonatomic) long long selectedTID; 
@property (assign,nonatomic) BOOL manuallyScrolling;                          //@synthesize manuallyScrolling=_manuallyScrolling - In the implementation block
+(void)showTableViewAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithTweetbotCursor:(id)arg1 ;
-(void)setTweetbotCursor:(PTHTweetbotCursor *)arg1 ;
-(void)loadNewer;
-(void)loadNewerIfNeeded;
-(PTHTweetbotCursor *)tweetbotCursor;
-(void)_didBecomeActive;
-(void)_markIfNeeded;
-(void)_streamingTransitioned;
-(void)_updateShowMark;
-(id)newItems;
-(void)nextTransition;
-(void)runTransition:(/*^block*/id)arg1 ;
-(BOOL)shouldShowItem:(id)arg1 ;
-(double)_unreadItemsPosition;
-(void)_updateUnreadItemsView:(BOOL)arg1 ;
-(void)_syncPositionChanged;
-(void)_loadNewerDidStart;
-(void)_loadNewerDidStop;
-(void)updateInsets;
-(void)_resetLastRead;
-(double)_positionForDisplayTopTID;
-(long long)fullyVisibleTID;
-(void)loadGap;
-(void)storePosition;
-(void)_syncPositionIfNeeded:(BOOL)arg1 ;
-(unsigned long long)rowForTID:(long long)arg1 ;
-(long long)selectedTID;
-(void)setSelectedTID:(long long)arg1 ;
-(void)loadOlder;
-(BOOL)updateStatusViewIfNeeded:(id)arg1 ;
-(BOOL)_updateGapIfNeeded:(id)arg1 ;
-(BOOL)_updateLastIfNeeded:(id)arg1 ;
-(BOOL)_addNonFirstItemIfNeeded:(id)arg1 ;
-(BOOL)_deleteItemIfNeeded:(id)arg1 ;
-(BOOL)_hideSearchIfNeeded:(id)arg1 ;
-(void)didUpdate;
-(void)scrollViewDidStop:(id)arg1 ;
-(void)setManuallyScrolling:(BOOL)arg1 ;
-(void)searchTableViewControllerDidEndSearch:(id)arg1 ;
-(unsigned long long)itemDisplayCount;
-(BOOL)disableRefresh;
-(void)setDisableRefresh:(BOOL)arg1 ;
-(BOOL)manuallyScrolling;
-(void)_fontSizeChanged;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setItems:(id)arg1 ;
-(void)_update;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(void)scrollToTop;
@end

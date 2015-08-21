/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingInboxDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGDirectThreadViewControllerDelegate.h>

@class NSOrderedSet, IGPlainTableView, NSString, UIBarButtonItem, IGDirectPendingRequestsHeaderView, NSArray, IGPullToRefreshViewManager, IGGenericMegaphone, IGGenericMegaphoneView, IGDirectEmptyInboxView;

@interface IGDirectMainInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingInboxDelegate, IGGenericMegaphoneViewDelegate, IGPullToRefreshProtocol, IGDirectThreadViewControllerDelegate> {

	BOOL _isFetchingData;
	BOOL _loadingPreviousThreads;
	BOOL _hasLoadedOnce;
	NSOrderedSet* _threads;
	IGPlainTableView* _tableView;
	NSString* _nextMaxID;
	UIBarButtonItem* _createMessageButton;
	IGDirectPendingRequestsHeaderView* _pendingRequestsHeader;
	NSString* _countedAt;
	long long _unseenShareCount;
	NSArray* _pendingRequestUsers;
	long long _pendingRequestCount;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGGenericMegaphone* _megaphone;
	IGGenericMegaphoneView* _megaphoneView;
	IGDirectEmptyInboxView* _emptyInboxView;
	long long _unseenPendingRequestCount;

}

@property (nonatomic,retain) NSOrderedSet * threads;                                                 //@synthesize threads=_threads - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL isFetchingData;                                                    //@synthesize isFetchingData=_isFetchingData - In the implementation block
@property (nonatomic,copy) NSString * nextMaxID;                                                     //@synthesize nextMaxID=_nextMaxID - In the implementation block
@property (assign,nonatomic) BOOL loadingPreviousThreads;                                            //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * createMessageButton;                                  //@synthesize createMessageButton=_createMessageButton - In the implementation block
@property (nonatomic,retain) IGDirectPendingRequestsHeaderView * pendingRequestsHeader;              //@synthesize pendingRequestsHeader=_pendingRequestsHeader - In the implementation block
@property (nonatomic,copy) NSString * countedAt;                                                     //@synthesize countedAt=_countedAt - In the implementation block
@property (assign,nonatomic) long long unseenShareCount;                                             //@synthesize unseenShareCount=_unseenShareCount - In the implementation block
@property (nonatomic,retain) NSArray * pendingRequestUsers;                                          //@synthesize pendingRequestUsers=_pendingRequestUsers - In the implementation block
@property (assign,nonatomic) long long pendingRequestCount;                                          //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                  //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                         //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * megaphoneView;                                 //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedOnce;                                                     //@synthesize hasLoadedOnce=_hasLoadedOnce - In the implementation block
@property (nonatomic,retain) IGDirectEmptyInboxView * emptyInboxView;                                //@synthesize emptyInboxView=_emptyInboxView - In the implementation block
@property (assign,nonatomic) long long unseenPendingRequestCount;                                    //@synthesize unseenPendingRequestCount=_unseenPendingRequestCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cachedThreads;
-(void)refreshDataWithClearCount:(BOOL)arg1 ;
-(void)inboxUpdateNotificationReceived:(id)arg1 ;
-(void)threadUpdateNotificationReceived;
-(void)unseenShareCountUpdated:(id)arg1 ;
-(void)setUnseenShareCount:(long long)arg1 ;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)updateNux;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(void)setMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(long long)unseenShareCount;
-(void)refreshDataWithClearCount:(BOOL)arg1 withNextMaxID:(id)arg2 clearOperationCompletion:(/*^block*/id)arg3 fetchCompletion:(/*^block*/id)arg4 ;
-(void)sendNewDirect;
-(void)setCreateMessageButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)createMessageButton;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(void)onAppForeground:(id)arg1 ;
-(NSOrderedSet *)threads;
-(BOOL)isFetchingData;
-(long long)unseenPendingRequestCount;
-(void)setUnseenPendingRequestCount:(long long)arg1 ;
-(void)setIsFetchingData:(BOOL)arg1 ;
-(void)setPendingRequestUsers:(NSArray *)arg1 ;
-(void)setPendingRequestCount:(long long)arg1 ;
-(void)setNextMaxID:(NSString *)arg1 ;
-(void)setHasLoadedOnce:(BOOL)arg1 ;
-(BOOL)loadingPreviousThreads;
-(NSString *)nextMaxID;
-(void)setLoadingPreviousThreads:(BOOL)arg1 ;
-(BOOL)shouldShowPendingInbox;
-(long long)pendingRequestCount;
-(void)replaceThread:(id)arg1 withThread:(id)arg2 ;
-(double)cellProfilePictureVerticalPadding;
-(BOOL)shouldShowEmptyInbox;
-(void)configureCellForCurrentPendingRequests:(id)arg1 ;
-(id)tableView:(id)arg1 threadCellForInboxPath:(id)arg2 ;
-(IGDirectEmptyInboxView *)emptyInboxView;
-(NSArray *)pendingRequestUsers;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadMoreThreads;
-(BOOL)isFirstDelete;
-(void)performHideForThread:(id)arg1 ;
-(void)threadUpdated:(id)arg1 ;
-(BOOL)hasLoadedOnce;
-(void)megaphoneDidDismiss:(id)arg1 ;
-(void)pendingInbox:(id)arg1 didUpdateThread:(id)arg2 withAccept:(BOOL)arg3 ;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2 ;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3 ;
-(unsigned long long)inboxSubscriptionStatus;
-(id)endpointPath;
-(id)threadWithThreadId:(id)arg1 ;
-(IGDirectPendingRequestsHeaderView *)pendingRequestsHeader;
-(void)setPendingRequestsHeader:(IGDirectPendingRequestsHeaderView *)arg1 ;
-(NSString *)countedAt;
-(void)setCountedAt:(NSString *)arg1 ;
-(void)setEmptyInboxView:(IGDirectEmptyInboxView *)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(IGPlainTableView *)tableView;
@end


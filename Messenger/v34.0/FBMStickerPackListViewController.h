/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMStickerStoreBaseViewController.h>
#import <Messenger/FBMStickerStoreViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBStickerUserSettings;
@class FBUserSession, FBMStickerStoreView, NSArray, NSString;

@interface FBMStickerPackListViewController : FBMStickerStoreBaseViewController <FBMStickerStoreViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	id<FBStickerUserSettings> _userSettings;
	FBUserSession* _session;
	FBMStickerStoreView* _storeView;
	NSArray* _featuredStickerPacks;
	NSArray* _purchasedStickerPacksOnDevice;
	NSArray* _purchasedStickerPacksNotOnDevice;
	NSArray* _allStickerPacksData;

}

@property (nonatomic,retain) id<FBStickerUserSettings> userSettings;                  //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMStickerStoreView * storeView;                         //@synthesize storeView=_storeView - In the implementation block
@property (nonatomic,retain) NSArray * featuredStickerPacks;                          //@synthesize featuredStickerPacks=_featuredStickerPacks - In the implementation block
@property (nonatomic,retain) NSArray * purchasedStickerPacksOnDevice;                 //@synthesize purchasedStickerPacksOnDevice=_purchasedStickerPacksOnDevice - In the implementation block
@property (nonatomic,retain) NSArray * purchasedStickerPacksNotOnDevice;              //@synthesize purchasedStickerPacksNotOnDevice=_purchasedStickerPacksNotOnDevice - In the implementation block
@property (nonatomic,copy) NSArray * allStickerPacksData;                             //@synthesize allStickerPacksData=_allStickerPacksData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)initWithLayoutIdiom:(unsigned long long)arg1 session:(id)arg2 ;
-(void)stickerPackDownloaderDidBegin:(id)arg1 ;
-(void)stickerPackDownloaderDidFinish:(id)arg1 ;
-(void)stickerPackDownloader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)stickerPackDownloader:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)stickerPackDownloaderQueue:(id)arg1 didQueueDownloader:(id)arg2 ;
-(void)stickerPurchaseManager:(id)arg1 purchaseDidFailForPack:(id)arg2 withError:(id)arg3 ;
-(NSArray *)featuredStickerPacks;
-(void)setUserSettings:(id<FBStickerUserSettings>)arg1 ;
-(void)reloadStoreData;
-(void)stickerPurchaseManager:(id)arg1 downloadDidBeginForPack:(id)arg2 ;
-(id)initWithStickerManager:(id)arg1 stickerStoreManager:(id)arg2 stickerPurchaseManager:(id)arg3 stickerPackDownloaderQueue:(id)arg4 userSettings:(id)arg5 layoutIdiom:(unsigned long long)arg6 session:(id)arg7 ;
-(void)setStoreView:(FBMStickerStoreView *)arg1 ;
-(void)restoreButtonPressed;
-(void)setFeaturedStickerPacks:(NSArray *)arg1 ;
-(id)_getStoreStickerPacksOnDevice;
-(void)setPurchasedStickerPacksOnDevice:(NSArray *)arg1 ;
-(id)_getOwnedStickerPacksNotOnDevice;
-(void)setPurchasedStickerPacksNotOnDevice:(NSArray *)arg1 ;
-(id)_availableStickerPacksData;
-(void)setAllStickerPacksData:(NSArray *)arg1 ;
-(id)_firstLetterStickerPacksData;
-(id)_stickerPacksForTableView:(id)arg1 section:(long long)arg2 ;
-(id)tableView:(id)arg1 reuseIdentifierAtIndexPath:(id)arg2 ;
-(void)didPressDownload:(id)arg1 ;
-(void)_updateStickerPackCellState:(id)arg1 ;
-(id)_analyticsExtrasWithStickerPackFbId:(unsigned long long)arg1 ;
-(void)_navigateToDetailViewForStickerPack:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateCellsForStickerPack:(id)arg1 ;
-(id)_dirtyCellsForStickerPack:(id)arg1 ;
-(void)stickerStoreView:(id)arg1 didChangeToTab:(long long)arg2 ;
-(void)stickerStoreView:(id)arg1 didInitializeTableView:(id)arg2 ;
-(FBMStickerStoreView *)storeView;
-(NSArray *)purchasedStickerPacksOnDevice;
-(NSArray *)purchasedStickerPacksNotOnDevice;
-(NSArray *)allStickerPacksData;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidLoad;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id<FBStickerUserSettings>)userSettings;
@end

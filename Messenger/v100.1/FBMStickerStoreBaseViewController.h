/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMStickerPackDownloaderQueueObserver.h>
#import <Messenger/FBMStickerPurchaseObserver.h>
#import <Messenger/FBMStickerPackDownloadObserver.h>

@protocol FBMStickerStoreViewControllerDelegate;
@class FBLoadingIndicatorView, FBFullscreenErrorView, NSMutableSet, FBMStickerManager, FBMStickerStoreManager, FBMStickerPurchaseManager, FBMStickerPackDownloaderQueue, FBKVOController, NSString;

@interface FBMStickerStoreBaseViewController : UIViewController <FBMStickerPackDownloaderQueueObserver, FBMStickerPurchaseObserver, FBMStickerPackDownloadObserver> {

	id<FBMStickerStoreViewControllerDelegate> _delegate;
	FBLoadingIndicatorView* _loadingView;
	FBFullscreenErrorView* _errorView;
	NSMutableSet* _observingDownloaders;
	FBMStickerManager* _stickerManager;
	FBMStickerStoreManager* _stickerStoreManager;
	FBMStickerPurchaseManager* _stickerPurchaseManager;
	FBMStickerPackDownloaderQueue* _stickerPackDownloaderQueue;
	FBKVOController* _KVOController;
	unsigned long long _layoutIdiom;
	BOOL _showsDoneButton;

}

@property (assign,nonatomic,__weak) id<FBMStickerStoreViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                   //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)analyticsHasCachedNetworkContent;
-(BOOL)analyticsRequiresNetworkContent;
-(id)initWithStickerManager:(id)arg1 stickerStoreManager:(id)arg2 stickerPurchaseManager:(id)arg3 stickerPackDownloaderQueue:(id)arg4 layoutIdiom:(unsigned long long)arg5 ;
-(void)updateRightNavButton;
-(void)observeDownloader:(id)arg1 ;
-(void)updateStoreViewState;
-(unsigned long long)currentStoreViewState;
-(void)performRetry;
-(void)purchaseStickerPack:(id)arg1 ;
-(void)unobserveDownloader:(id)arg1 ;
-(void)reloadStoreData;
-(void)stickerPurchaseManagerOwnedStickerPacksDidChange:(id)arg1 ;
-(void)configureErrorView:(id)arg1 ;
-(void)stickerPacksOnDeviceDidChange;
-(void)_stopObservingDownloaders;
-(void)_fetchStickerPacks:(BOOL)arg1 ;
-(void)didPressDone;
-(void)hideLoading;
-(void)didPressRetry;
-(BOOL)f_requiresNavigationBarLayoutGuide;
-(void)setDelegate:(id<FBMStickerStoreViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMStickerStoreViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)hideError;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)showLoading;
-(void)showError;
@end


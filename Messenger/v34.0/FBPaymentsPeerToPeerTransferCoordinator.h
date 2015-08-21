/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/FBPaymentsPeerToPeerTransferCoordinatorDataFetcher.h>
#import <Messenger/FBPaymentsPeerToPeerTransferCoordinatorDataMutator.h>

@protocol FBNetworkDispatch;
@class FBPaymentsPeerToPeerTransferCoordinatorListenerAnnouncer, FBPaymentsPeerToPeerFetchController, FBPaymentsPeerToPeerPersistentStoreCoordinator, FBCache, NSString;

@interface FBPaymentsPeerToPeerTransferCoordinator : NSObject <FBPaymentsPeerToPeerFetchControllerListener, FBPaymentsPeerToPeerTransferCoordinatorDataFetcher, FBPaymentsPeerToPeerTransferCoordinatorDataMutator> {

	FBPaymentsPeerToPeerTransferCoordinatorListenerAnnouncer* _announcer;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	id<FBNetworkDispatch> _networkDispatcher;
	FBPaymentsPeerToPeerPersistentStoreCoordinator* _persistentStoreCoordinator;
	FBCache* _transferCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(id)dataFetcher;
-(id)transferForId:(id)arg1 ;
-(void)_announceTransferUpdateWithTransfer:(id)arg1 ;
-(void)_updateCacheAndAnnounceWithTransfer:(id)arg1 ;
-(void)_fetchTransferWithId:(id)arg1 ;
-(void)recentTransfersWithMaxCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentTransfersWithMaxCount:(long long)arg1 beforeTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersWithUserId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersWithUserId:(id)arg1 maxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentTransfersFromSenderId:(id)arg1 withMaxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersFromSenderId:(id)arg1 withMaxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentTransfersToRecipientId:(id)arg1 withMaxCount:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentTransfersToRecipientId:(id)arg1 withMaxCount:(long long)arg2 beforeTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleAddedTransfer:(id)arg1 ;
-(void)_handlePersistentStoreMutateError:(id)arg1 ;
-(void)addTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleUpdatedTransfer:(id)arg1 ;
-(void)updateTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleDownloadedTransfer:(id)arg1 ;
-(void)_handleDownloadedViewer:(id)arg1 ;
-(void)_insertOrUpdateTransfers:(id)arg1 ;
-(id)dataMutator;
-(id)initWithFetchController:(id)arg1 networkDispatcher:(id)arg2 persistentStoreCoordinator:(id)arg3 ;
-(void)loadTransfers;
-(void)transferForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleDownloadedResponse:(id)arg1 withError:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMMessageDeleterDelegate.h>
#import <Messenger/MNTypingNotificationManagerDelegate.h>
#import <Messenger/FBMThreadSetObserver.h>
#import <Messenger/FBMSPDeltaHandlerListener.h>
#import <Messenger/MNMessagesModelControllerMessagesLoaderDelegate.h>
#import <Messenger/FBMMessageReceivedListening.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/FBMMessageSenderListener.h>
#import <Messenger/FBMThreadCreationListener.h>
#import <Messenger/MNAttributionAppSupplementaryInfoLoaderListener.h>
#import <Messenger/MNThreadContextManagerListener.h>
#import <Messenger/MNPageResponsivenessUpdaterListener.h>
#import <Messenger/FBFriendListMonitorListener.h>

@protocol MNAuthenticationManager, FBProvider, MNThreadMessagesGenerator, FBMSPDeltaHandlerListener, MNMessagesModelControllerDelegate;
@class FBMLocalThreadMessagesQuerier, MNTypingNotificationManager, FBMThreadSet, MNThreadComposingMessagesModel, FBMThreadDescriptorFactory, MNMessagesModelChangedListenerAnnouncer, MNMessagesModelMessageDeleteListenerAnnouncer, FBMNetworkProtocolController, MNMessageVideoControllerMap, FBMMessagesFetchedThreadKeySet, FBMSPDeltaHandlerListenerAnnouncer, FBMMQTTManager, MNThreadViewModelLoader, MNMessagesModelControllerMessagesLoader, FBMMessageReceiptUpdater, FBMPendingThreadSet, NSMutableArray, MNMessagesModelControllerViewModelLoadingListenerAnnouncer, FBMSendKitAdapter, FBMSendKitMessageSender, FBMThreadMarkService, FBMMessageReceivedListeningAnnouncer, FBMSPDataStore, MNMessagesViewModel, FBMMutableMessage, FBMMessageAppModel, MNThreadViewModel, FBMMessageDeleter, NSString;

@interface MNMessagesModelController : NSObject <FBMMessageDeleterDelegate, MNTypingNotificationManagerDelegate, FBMThreadSetObserver, FBMSPDeltaHandlerListener, MNMessagesModelControllerMessagesLoaderDelegate, FBMMessageReceivedListening, MNThreadViewModelConfigurable, FBMMessageSenderListener, FBMThreadCreationListener, MNAttributionAppSupplementaryInfoLoaderListener, MNThreadContextManagerListener, MNPageResponsivenessUpdaterListener, FBFriendListMonitorListener> {

	id<MNAuthenticationManager> _authManager;
	id<FBProvider> _messageDeleterProvider;
	id<MNThreadMessagesGenerator> _threadMessagesFilter;
	FBMLocalThreadMessagesQuerier* _threadMessagesQuerier;
	MNTypingNotificationManager* _typingManager;
	FBMThreadSet* _threadSet;
	MNThreadComposingMessagesModel* _threadComposingMessagesModel;
	FBMThreadDescriptorFactory* _threadDescriptorFactory;
	MNMessagesModelChangedListenerAnnouncer* _modelChangedAnnouncer;
	MNMessagesModelMessageDeleteListenerAnnouncer* _deleteAnnouncer;
	FBMNetworkProtocolController* _networkProtocolController;
	MNMessageVideoControllerMap* _videoControllerMap;
	FBMMessagesFetchedThreadKeySet* _messagesFetchedThreadKeySet;
	FBMSPDeltaHandlerListenerAnnouncer* _deltaHandlerAnnouncer;
	id<FBMSPDeltaHandlerListener> _deltaHandlerListenerDispatcher;
	FBMMQTTManager* _mqttManager;
	MNThreadViewModelLoader* _threadModelLoader;
	long long _threadModelLoadRequestId;
	MNMessagesModelControllerMessagesLoader* _messagesLoader;
	FBMMessageReceiptUpdater* _messageReceiptUpdater;
	FBMPendingThreadSet* _pendingThreadSet;
	NSMutableArray* _pendingThreadMessages;
	MNMessagesModelControllerViewModelLoadingListenerAnnouncer* _threadViewModelLoadAnnouncer;
	FBMSendKitAdapter* _sendKitAdapter;
	FBMSendKitMessageSender* _sendKitMessageSender;
	FBMThreadMarkService* _threadMarkService;
	FBMMessageReceivedListeningAnnouncer* _messageReceivedAnnouncer;
	FBMSPDataStore* _syncProtocolDataStore;
	BOOL _requestsShouldBeForeground;
	BOOL _isCurrentlyPerformingNetworkFetch;
	id<MNMessagesModelControllerDelegate> _delegate;
	MNMessagesViewModel* _messagesViewModel;
	FBMMutableMessage* _createdThreadMessage;
	FBMMessageAppModel* _latestSeenMessage;
	MNThreadViewModel* _threadViewModel;
	FBMMessageDeleter* _messageDeleter;

}

@property (assign,nonatomic,__weak) id<MNMessagesModelControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNMessagesViewModel * messagesViewModel;                            //@synthesize messagesViewModel=_messagesViewModel - In the implementation block
@property (nonatomic,readonly) FBMMutableMessage * createdThreadMessage;                         //@synthesize createdThreadMessage=_createdThreadMessage - In the implementation block
@property (nonatomic,copy) FBMMessageAppModel * latestSeenMessage;                               //@synthesize latestSeenMessage=_latestSeenMessage - In the implementation block
@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                                //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,retain) FBMMessageDeleter * messageDeleter;                                 //@synthesize messageDeleter=_messageDeleter - In the implementation block
@property (assign,nonatomic) BOOL requestsShouldBeForeground;                                    //@synthesize requestsShouldBeForeground=_requestsShouldBeForeground - In the implementation block
@property (assign,nonatomic) BOOL isCurrentlyPerformingNetworkFetch;                             //@synthesize isCurrentlyPerformingNetworkFetch=_isCurrentlyPerformingNetworkFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didWriteUpdatesToSyncStoreInvalidatingFriendList;
-(void)nameFormatter:(id)arg1 failedToFormatNameForThread:(id)arg2 ;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadFbIds:(id)arg1 ;
-(void)didLoadAttributionAppSupplementaryInfoWithThreadKey:(id)arg1 ;
-(void)pageResponsivenessUpdaterDidUpdateResponsivenessForPage:(id)arg1 ;
-(void)messageDeleter:(id)arg1 didDeleteMessageWithId:(id)arg2 onThreadWithThreadKey:(id)arg3 deletedLastMessage:(BOOL)arg4 ;
-(void)messageDeleter:(id)arg1 couldNotDeleteMessageWithId:(id)arg2 onThreadWithThreadKey:(id)arg3 withError:(id)arg4 ;
-(void)thread:(id)arg1 didEnqueueMessage:(id)arg2 ;
-(void)thread:(id)arg1 didPublishMessage:(id)arg2 ;
-(void)thread:(id)arg1 didSendMessage:(id)arg2 ;
-(void)thread:(id)arg1 didCancelSendingMessage:(id)arg2 ;
-(void)thread:(id)arg1 couldNotSendMessage:(id)arg2 error:(id)arg3 ;
-(void)thread:(id)arg1 willRetrySendingMessage:(id)arg2 error:(id)arg3 ;
-(void)thread:(id)arg1 willSendQueuedMessage:(id)arg2 ;
-(void)thread:(id)arg1 willWaitToSendMessage:(id)arg2 ;
-(void)didReceiveMessage:(id)arg1 ;
-(void)threadSet:(id)arg1 didAddThread:(id)arg2 ;
-(void)threadSet:(id)arg1 didReplaceThreadWithThread:(id)arg2 ;
-(void)threadSet:(id)arg1 didEvictThread:(id)arg2 forReason:(unsigned long long)arg3 ;
-(void)threadSetWillClearAllThreads:(id)arg1 ;
-(void)didAddMessage:(id)arg1 toQueueForPendingThreadWithOfflineID:(id)arg2 ;
-(void)didCancelCreatingThreadWithOfflineID:(id)arg1 ;
-(void)willCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2 ;
-(void)didCreateThread:(id)arg1 withMessage:(id)arg2 forPendingThreadWithOfflineID:(id)arg3 ;
-(void)didFailToCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2 error:(id)arg3 ;
-(void)threadContextManagerDidUpdateThreadContextForThreadKey:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)typingBecameActive;
-(void)typingBecameInactive;
-(void)_stopObservations;
-(void)_clearCurrentRequest;
-(void)_startObservations;
-(void)setLatestSeenMessage:(FBMMessageAppModel *)arg1 ;
-(void)_clearMessageDeleter;
-(void)_didPrefetchMessages:(id)arg1 ;
-(void)_didFetchThreadMessages:(id)arg1 ;
-(void)_threadParticipantsDidChange:(id)arg1 ;
-(void)_threadImageDidChange:(id)arg1 ;
-(MNMessagesViewModel *)messagesViewModel;
-(id)_getLatestMessagesViewModelWithDetailsExpandedMessage:(id)arg1 ;
-(void)setMessagesViewModel:(MNMessagesViewModel *)arg1 ;
-(void)_reloadThreadViewModelWithNetworkIndicator:(BOOL)arg1 localThreadDescriptor:(id)arg2 messagesLoadingConfiguration:(id)arg3 ;
-(void)_handleViewModelLoaded:(id)arg1 ;
-(void)_handleViewModelProgress:(id)arg1 longOperationDidBegin:(BOOL)arg2 ;
-(void)_handleViewModelLoadFailure:(id)arg1 ;
-(void)_propagateThreadUpdateWith:(id)arg1 ;
-(id)_displayableMessages;
-(void)_updateTypingStateUponNewMessageFrom:(id)arg1 ;
-(void)reloadThreadViewModelWithNetworkIndicator:(BOOL)arg1 ;
-(BOOL)isCurrentlyPerformingFetch;
-(void)setRequestsShouldBeForeground:(BOOL)arg1 ;
-(void)_invalidatePendingThreadMessagesWithLoadedThreadViewModel:(id)arg1 ;
-(void)_markThreadReadIfNeeded;
-(void)setMessageDeleter:(FBMMessageDeleter *)arg1 ;
-(BOOL)_isCurrentlyDeletingMessage;
-(void)_addPendingThreadMessage:(id)arg1 ;
-(void)messagesLoader:(id)arg1 didBeginLoadingMoreMessages:(BOOL)arg2 withPreliminaryResult:(id)arg3 ;
-(void)messagesLoader:(id)arg1 didLoadMoreMessagesWithThreadViewModel:(id)arg2 ;
-(void)messagesLoader:(id)arg1 didFailLoadingMoreMessagesWithError:(id)arg2 ;
-(void)messagesLoader:(id)arg1 didLoadUnreadMessagesWithThreadViewModel:(id)arg2 ;
-(void)messagesLoader:(id)arg1 didFailLoadingUnreadMessagesWithError:(id)arg2 ;
-(id)initWithAuthenticationManager:(id)arg1 messageDeleterProvider:(id)arg2 threadMessagesFilter:(id)arg3 threadMessagesQuerier:(id)arg4 sendKitAdapter:(id)arg5 sendKitMessageSender:(id)arg6 typingManager:(id)arg7 threadMarkService:(id)arg8 threadSet:(id)arg9 threadCompingMessagesModel:(id)arg10 threadDescriptorFactory:(id)arg11 networkProtocolController:(id)arg12 deltaHandlerAnnouncer:(id)arg13 mqttManager:(id)arg14 threadModelLoader:(id)arg15 videoControllerMap:(id)arg16 pendingThreadSet:(id)arg17 messageReceiptUpdate:(id)arg18 threadViewModelLoadAnnouncer:(id)arg19 messageReceivedAnnouncer:(id)arg20 messagesFetchedThreadKeySet:(id)arg21 syncProtocolDataStore:(id)arg22 ;
-(void)reloadMessagesWithDetailsExpandedMessage:(id)arg1 ;
-(void)reloadComposingSticker;
-(BOOL)hasAnyMessages;
-(BOOL)hasOneMessage;
-(void)foregroundNetworkRequests;
-(void)backgroundNetworkRequests;
-(void)updateLatestSeenMessageWith:(id)arg1 ;
-(BOOL)canLoadMoreMessages;
-(BOOL)isLoadingMoreMessages;
-(void)fetchUnreadMessages:(long long)arg1 ;
-(void)deleteMessage:(id)arg1 ;
-(void)addMessagesModelUpdateListener:(id)arg1 ;
-(void)removeMessagesModelUpdateListener:(id)arg1 ;
-(void)addMessagesModelMessageDeletionListener:(id)arg1 ;
-(void)removeMessagesModelMessageDeletionListener:(id)arg1 ;
-(FBMMutableMessage *)createdThreadMessage;
-(FBMMessageAppModel *)latestSeenMessage;
-(FBMMessageDeleter *)messageDeleter;
-(BOOL)requestsShouldBeForeground;
-(BOOL)isCurrentlyPerformingNetworkFetch;
-(void)setIsCurrentlyPerformingNetworkFetch:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNMessagesModelControllerDelegate>)arg1 ;
-(id<MNMessagesModelControllerDelegate>)delegate;
-(void)loadMoreMessages;
@end

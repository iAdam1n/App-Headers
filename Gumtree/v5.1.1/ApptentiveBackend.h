/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ApptentiveConversationUpdaterDelegate.h>
#import <Gumtree/ATDeviceUpdaterDelegate.h>
#import <Gumtree/ATPersonUpdaterDelegate.h>
#import <Gumtree/NSFetchedResultsControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol ATBackendMessageDelegate;
@class NSString, ATFeedback, NSDictionary, UIViewController, NSTimer, ApptentiveDataManager, ApptentiveConversationUpdater, ApptentiveDeviceUpdater, ApptentivePersonUpdater, NSFetchedResultsController, NSMutableSet, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface ApptentiveBackend : NSObject <ApptentiveConversationUpdaterDelegate, ATDeviceUpdaterDelegate, ATPersonUpdaterDelegate, NSFetchedResultsControllerDelegate, UIAlertViewDelegate> {

	BOOL _working;
	BOOL _shouldStopWorking;
	BOOL _networkAvailable;
	BOOL _messageCenterInForeground;
	NSString* _supportDirectoryPath;
	ATFeedback* _currentFeedback;
	NSDictionary* _currentCustomData;
	UIViewController* _presentedMessageCenterViewController;
	id<ATBackendMessageDelegate> _messageDelegate;
	UIViewController* _presentingViewController;
	NSTimer* _messageRetrievalTimer;
	NSString* _cachedDeviceUUID;
	long long _state;
	ApptentiveDataManager* _dataManager;
	ApptentiveConversationUpdater* _conversationUpdater;
	ApptentiveDeviceUpdater* _deviceUpdater;
	ApptentivePersonUpdater* _personUpdater;
	NSFetchedResultsController* _unreadCountController;
	long long _previousUnreadCount;
	NSMutableSet* _activeMessageTasks;
	/*^block*/id _backgroundFetchBlock;

}

@property (nonatomic,retain) UIViewController * presentingViewController;                                      //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL working;                                                                     //@synthesize working=_working - In the implementation block
@property (nonatomic,retain) NSTimer * messageRetrievalTimer;                                                  //@synthesize messageRetrievalTimer=_messageRetrievalTimer - In the implementation block
@property (nonatomic,copy) NSString * cachedDeviceUUID;                                                        //@synthesize cachedDeviceUUID=_cachedDeviceUUID - In the implementation block
@property (assign,nonatomic) long long state;                                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) ApptentiveDataManager * dataManager;                                              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) ApptentiveConversationUpdater * conversationUpdater;                              //@synthesize conversationUpdater=_conversationUpdater - In the implementation block
@property (nonatomic,retain) ApptentiveDeviceUpdater * deviceUpdater;                                          //@synthesize deviceUpdater=_deviceUpdater - In the implementation block
@property (nonatomic,retain) ApptentivePersonUpdater * personUpdater;                                          //@synthesize personUpdater=_personUpdater - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * unreadCountController;                               //@synthesize unreadCountController=_unreadCountController - In the implementation block
@property (assign,nonatomic) long long previousUnreadCount;                                                    //@synthesize previousUnreadCount=_previousUnreadCount - In the implementation block
@property (assign,nonatomic) BOOL shouldStopWorking;                                                           //@synthesize shouldStopWorking=_shouldStopWorking - In the implementation block
@property (assign,nonatomic) BOOL networkAvailable;                                                            //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (getter=isMessageCenterInForeground,nonatomic,readonly) BOOL messageCenterInForeground;              //@synthesize messageCenterInForeground=_messageCenterInForeground - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeMessageTasks;                                                //@synthesize activeMessageTasks=_activeMessageTasks - In the implementation block
@property (nonatomic,copy) id backgroundFetchBlock;                                                            //@synthesize backgroundFetchBlock=_backgroundFetchBlock - In the implementation block
@property (nonatomic,retain) ATFeedback * currentFeedback;                                                     //@synthesize currentFeedback=_currentFeedback - In the implementation block
@property (nonatomic,retain) NSDictionary * currentCustomData;                                                 //@synthesize currentCustomData=_currentCustomData - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel; 
@property (nonatomic,readonly) NSString * supportDirectoryPath;                                                //@synthesize supportDirectoryPath=_supportDirectoryPath - In the implementation block
@property (nonatomic,retain) UIViewController * presentedMessageCenterViewController;                          //@synthesize presentedMessageCenterViewController=_presentedMessageCenterViewController - In the implementation block
@property (nonatomic,readonly) BOOL hideBranding; 
@property (nonatomic,readonly) BOOL notificationPopupsEnabled; 
@property (assign,nonatomic,__weak) id<ATBackendMessageDelegate> messageDelegate;                              //@synthesize messageDelegate=_messageDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageNamed:(id)arg1 ;
-(BOOL)sendTextMessageWithBody:(id)arg1 hiddenOnClient:(BOOL)arg2 ;
-(BOOL)sendImageMessageWithImage:(id)arg1 hiddenOnClient:(BOOL)arg2 ;
-(BOOL)sendFileMessageWithFileData:(id)arg1 andMimeType:(id)arg2 hiddenOnClient:(BOOL)arg3 ;
-(BOOL)presentMessageCenterFromViewController:(id)arg1 ;
-(BOOL)presentMessageCenterFromViewController:(id)arg1 withCustomData:(id)arg2 ;
-(void)fetchMessagesInBackground:(/*^block*/id)arg1 ;
-(void)checkForMessages;
-(void)dismissMessageCenterAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)notificationPopupsEnabled;
-(NSString *)supportDirectoryPath;
-(NSTimer *)messageRetrievalTimer;
-(id)createTextMessageWithBody:(id)arg1 hiddenOnClient:(BOOL)arg2 ;
-(BOOL)sendTextMessage:(id)arg1 ;
-(void)attachCustomDataToMessage:(id)arg1 ;
-(void)updatePersonIfNeeded;
-(BOOL)sendCompoundMessageWithText:(id)arg1 attachments:(id)arg2 hiddenOnClient:(BOOL)arg3 ;
-(NSMutableSet *)activeMessageTasks;
-(void)updateMessageTaskProgress;
-(void)setCachedDeviceUUID:(NSString *)arg1 ;
-(NSString *)cachedDeviceUUID;
-(id)imageCachePath;
-(void)setCurrentCustomData:(NSDictionary *)arg1 ;
-(UIViewController *)presentedMessageCenterViewController;
-(NSDictionary *)currentCustomData;
-(void)updateConversationIfNeeded;
-(void)updateConfigurationIfNeeded;
-(void)updateEngagementManifestIfNeeded;
-(ApptentiveDataManager *)dataManager;
-(ApptentiveConversationUpdater *)conversationUpdater;
-(void)setConversationUpdater:(ApptentiveConversationUpdater *)arg1 ;
-(void)updateDeviceIfNeeded;
-(ApptentiveDeviceUpdater *)deviceUpdater;
-(void)setDeviceUpdater:(ApptentiveDeviceUpdater *)arg1 ;
-(ApptentivePersonUpdater *)personUpdater;
-(void)setPersonUpdater:(ApptentivePersonUpdater *)arg1 ;
-(NSFetchedResultsController *)unreadCountController;
-(long long)previousUnreadCount;
-(BOOL)isMessageCenterInForeground;
-(void)setPreviousUnreadCount:(long long)arg1 ;
-(BOOL)shouldStopWorking;
-(void)setPresentedMessageCenterViewController:(UIViewController *)arg1 ;
-(void)checkForMessagesAtRefreshInterval:(double)arg1 ;
-(void)setMessageRetrievalTimer:(NSTimer *)arg1 ;
-(void)checkForMessagesAtForegroundRefreshInterval;
-(void)checkForMessagesAtBackgroundRefreshInterval;
-(void)setBackgroundFetchBlock:(id)arg1 ;
-(id)backgroundFetchBlock;
-(id<ATBackendMessageDelegate>)messageDelegate;
-(void)startWorking:(id)arg1 ;
-(void)stopWorking:(id)arg1 ;
-(void)handleRemoteNotificationInUIApplicationStateActive;
-(void)setActiveMessageTasks:(NSMutableSet *)arg1 ;
-(void)setupDataManager;
-(void)checkForProperConfiguration;
-(void)networkStatusChanged:(id)arg1 ;
-(void)startMonitoringUnreadMessages;
-(void)personDataChanged:(id)arg1 ;
-(void)deviceDataChanged:(id)arg1 ;
-(void)setWorking:(BOOL)arg1 ;
-(void)setNetworkAvailable:(BOOL)arg1 ;
-(void)updateWorking;
-(void)setShouldStopWorking:(BOOL)arg1 ;
-(void)setDataManager:(ApptentiveDataManager *)arg1 ;
-(void)continueStartupWithDataManagerFailure;
-(void)continueStartupWithDataManagerSuccess;
-(void)setUnreadCountController:(NSFetchedResultsController *)arg1 ;
-(void)personUpdater:(id)arg1 didFinish:(BOOL)arg2 ;
-(id)automatedMessageWithTitle:(id)arg1 body:(id)arg2 ;
-(BOOL)sendAutomatedMessage:(id)arg1 ;
-(BOOL)sendTextMessageWithBody:(id)arg1 ;
-(BOOL)sendImageMessageWithImage:(id)arg1 ;
-(BOOL)sendFileMessageWithFileData:(id)arg1 andMimeType:(id)arg2 ;
-(id)apptentiveHomepageURL;
-(BOOL)hideBranding;
-(void)messageCenterWillDismiss:(id)arg1 ;
-(id)apptentivePrivacyPolicyURL;
-(void)setMessageDelegate:(id<ATBackendMessageDelegate>)arg1 ;
-(ATFeedback *)currentFeedback;
-(void)setCurrentFeedback:(ATFeedback *)arg1 ;
-(BOOL)working;
-(void)conversationUpdater:(id)arg1 createdConversationSuccessfully:(BOOL)arg2 ;
-(void)conversationUpdater:(id)arg1 updatedConversationSuccessfully:(BOOL)arg2 ;
-(void)deviceUpdater:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)checkForEngagementManifest;
-(id)attachmentDirectoryPath;
-(void)completeMessageFetchWithResult:(unsigned long long)arg1 ;
-(id)distributionName;
-(id)distributionVersion;
-(void)messageCenterEnteredForeground;
-(void)messageCenterLeftForeground;
-(BOOL)isUpdatingPerson;
-(void)messageTaskDidBegin:(id)arg1 ;
-(void)messageTaskDidFinish:(id)arg1 ;
-(void)messageTask:(id)arg1 didProgress:(float)arg2 ;
-(void)messageTaskDidFail:(id)arg1 ;
-(BOOL)isReady;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UIViewController *)presentingViewController;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)networkAvailable;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)imageCache;
-(id)appName;
-(void)startup;
-(BOOL)sendMessage:(id)arg1 ;
-(unsigned long long)unreadMessageCount;
-(id)deviceUUID;
-(void)setup;
-(id)cacheDirectoryPath;
@end


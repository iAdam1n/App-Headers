/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECChatManagerDelegate.h>

@protocol ECChatViewModelDelegate, ECChatManagerProtocol;
@class NSMutableDictionary, NSObject, EMFAlertManager, ECErrorManager, ECUserManager, ECAdManager, NSDate, NSString, NSMutableArray, NSArray;

@interface ECChatViewModel : NSObject <ECChatManagerDelegate> {

	BOOL _shouldTrackPageView;
	BOOL _hasNeverConnected;
	BOOL _dialogListIsDirty;
	id<ECChatViewModelDelegate> _delegate;
	NSMutableDictionary* _draftMessages;
	NSObject*<ECChatManagerProtocol> _chatManager;
	EMFAlertManager* _alertManager;
	ECErrorManager* _errorManager;
	ECUserManager* _userManager;
	ECAdManager* _adManager;
	NSMutableDictionary* _unsendMessages;
	NSDate* _lastRequestTimestamp;
	NSString* _dialogToLoadFromNotification;
	NSMutableArray* _mutableDialogs;

}

@property (assign,nonatomic,__weak) id<ECChatViewModelDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * dialogs; 
@property (readonly) unsigned long long dialogCount; 
@property (nonatomic,readonly) NSString * unreadMessagesBadgeValue; 
@property (nonatomic,readonly) BOOL isRefreshing; 
@property (assign,nonatomic) BOOL shouldTrackPageView;                                  //@synthesize shouldTrackPageView=_shouldTrackPageView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * draftMessages;                       //@synthesize draftMessages=_draftMessages - In the implementation block
@property (nonatomic,retain) NSObject*<ECChatManagerProtocol> chatManager;              //@synthesize chatManager=_chatManager - In the implementation block
@property (nonatomic,retain) EMFAlertManager * alertManager;                            //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,retain) ECErrorManager * errorManager;                             //@synthesize errorManager=_errorManager - In the implementation block
@property (nonatomic,retain) ECUserManager * userManager;                               //@synthesize userManager=_userManager - In the implementation block
@property (nonatomic,retain) ECAdManager * adManager;                                   //@synthesize adManager=_adManager - In the implementation block
@property (assign,nonatomic) BOOL hasNeverConnected;                                    //@synthesize hasNeverConnected=_hasNeverConnected - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unsendMessages;                      //@synthesize unsendMessages=_unsendMessages - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestTimestamp;                             //@synthesize lastRequestTimestamp=_lastRequestTimestamp - In the implementation block
@property (nonatomic,copy) NSString * dialogToLoadFromNotification;                     //@synthesize dialogToLoadFromNotification=_dialogToLoadFromNotification - In the implementation block
@property (assign,nonatomic) BOOL dialogListIsDirty;                                    //@synthesize dialogListIsDirty=_dialogListIsDirty - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDialogs;                           //@synthesize mutableDialogs=_mutableDialogs - In the implementation block
+(id)addConversationsRetrievedObserver:(/*^block*/id)arg1 ;
-(ECAdManager *)adManager;
-(void)setAdManager:(ECAdManager *)arg1 ;
-(void)setShouldTrackPageView:(BOOL)arg1 ;
-(void)flagDialog:(id)arg1 ;
-(void)goToAdDetailsForAd:(id)arg1 ;
-(void)resendMessage:(id)arg1 ;
-(BOOL)shouldTrackPageView;
-(void)goToPostFlow;
-(unsigned long long)dialogCount;
-(id)dialogAtIndex:(unsigned long long)arg1 ;
-(id)draftMessageForDialog:(id)arg1 ;
-(void)deleteDialog:(id)arg1 ;
-(void)setMutableDialogs:(NSMutableArray *)arg1 ;
-(void)setChatManager:(NSObject*<ECChatManagerProtocol>)arg1 ;
-(NSObject*<ECChatManagerProtocol>)chatManager;
-(void)setAlertManager:(EMFAlertManager *)arg1 ;
-(void)setUnsendMessages:(NSMutableDictionary *)arg1 ;
-(void)handleUserSignedIn:(id)arg1 ;
-(void)handleUserSignedOut:(id)arg1 ;
-(void)loadDraftMessages;
-(NSMutableArray *)mutableDialogs;
-(void)setDraftMessages:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)draftMessages;
-(void)saveDraftMessages;
-(void)setHasNeverConnected:(BOOL)arg1 ;
-(void)setDialogListIsDirty:(BOOL)arg1 ;
-(NSString *)dialogToLoadFromNotification;
-(id)findDialogForDialogID:(id)arg1 ;
-(void)presentDialog:(id)arg1 fromPushNotification:(BOOL)arg2 ;
-(void)setDialogToLoadFromNotification:(NSString *)arg1 ;
-(void)moveDialogToTop:(id)arg1 ;
-(void)handleNewOrUpdatedMessage:(id)arg1 dialog:(id)arg2 ;
-(ECErrorManager *)errorManager;
-(void)handleUserTypedText:(id)arg1 forDialog:(id)arg2 ;
-(EMFAlertManager *)alertManager;
-(BOOL)dialogListIsDirty;
-(void)handleRefreshDialogsList;
-(ECUserManager *)userManager;
-(NSArray *)dialogs;
-(void)clearEverything;
-(void)sendMessage:(id)arg1 toDialog:(id)arg2 ;
-(void)loadAdDetailsForDialog:(id)arg1 ;
-(void)removeUnsendMessage:(id)arg1 fromRoomWithID:(id)arg2 ;
-(id)findNewDialogForAdID:(id)arg1 ;
-(NSMutableDictionary *)unsendMessages;
-(NSDate *)lastRequestTimestamp;
-(BOOL)shouldLoadMoreWhenViewingIndex:(id)arg1 ;
-(void)setLastRequestTimestamp:(NSDate *)arg1 ;
-(void)loadExtraItems;
-(void)clearDraftMessages;
-(void)chatManager:(id)arg1 refreshedDialogs:(id)arg2 ;
-(void)chatManager:(id)arg1 failedToSendMessage:(id)arg2 toDialog:(id)arg3 withError:(id)arg4 ;
-(void)chatManager:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)chatManager:(id)arg1 succeededToSendMessage:(id)arg2 toDialog:(id)arg3 ;
-(void)chatManager:(id)arg1 didReceiveChatHistory:(id)arg2 forDialog:(id)arg3 ;
-(void)chatManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)chatManager:(id)arg1 finishedDeletingDialog:(id)arg2 withError:(id)arg3 ;
-(void)chatManager:(id)arg1 didFlagDialog:(id)arg2 ;
-(void)setDialogs:(NSArray *)arg1 ;
-(id)flaggedMessageForDialog:(id)arg1 ;
-(NSString *)unreadMessagesBadgeValue;
-(void)dialogsWillBeDisplayed;
-(void)didReadAllMessagesInDialog:(id)arg1 ;
-(id)prepareDialogToBeDisplayedForAd:(id)arg1 ;
-(unsigned long long)indexForDialog:(id)arg1 ;
-(void)handleNotificationReceivedForDialog:(id)arg1 ad:(id)arg2 userSelectedNotification:(BOOL)arg3 ;
-(void)changeTrackPageViewStatus:(id)arg1 ;
-(void)loadExtraItemsIfNecessary:(id)arg1 ;
-(void)reloadMessagesForDialog:(id)arg1 ;
-(void)setErrorManager:(ECErrorManager *)arg1 ;
-(void)setUserManager:(ECUserManager *)arg1 ;
-(BOOL)hasNeverConnected;
-(void)setDelegate:(id<ECChatViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id<ECChatViewModelDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isRefreshing;
-(void)presentDialog:(id)arg1 ;
@end


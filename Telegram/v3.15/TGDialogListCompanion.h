/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TGDialogListController;

@interface TGDialogListCompanion : NSObject {

	BOOL _showListEditingControl;
	BOOL _forwardMode;
	BOOL _privacyMode;
	BOOL _showBroadcastsMenu;
	BOOL _showSecretInForwardMode;
	BOOL _showGroupsOnly;
	BOOL _botStartMode;
	int _unreadCount;
	TGDialogListController* _dialogListController;

}

@property (assign,nonatomic,__weak) TGDialogListController * dialogListController;              //@synthesize dialogListController=_dialogListController - In the implementation block
@property (assign,nonatomic) BOOL showListEditingControl;                                       //@synthesize showListEditingControl=_showListEditingControl - In the implementation block
@property (assign,nonatomic) BOOL forwardMode;                                                  //@synthesize forwardMode=_forwardMode - In the implementation block
@property (assign,nonatomic) BOOL privacyMode;                                                  //@synthesize privacyMode=_privacyMode - In the implementation block
@property (assign,nonatomic) BOOL showBroadcastsMenu;                                           //@synthesize showBroadcastsMenu=_showBroadcastsMenu - In the implementation block
@property (assign,nonatomic) BOOL showSecretInForwardMode;                                      //@synthesize showSecretInForwardMode=_showSecretInForwardMode - In the implementation block
@property (assign,nonatomic) BOOL showGroupsOnly;                                               //@synthesize showGroupsOnly=_showGroupsOnly - In the implementation block
@property (assign,nonatomic) BOOL botStartMode;                                                 //@synthesize botStartMode=_botStartMode - In the implementation block
@property (assign,nonatomic) int unreadCount;                                                   //@synthesize unreadCount=_unreadCount - In the implementation block
-(TGDialogListController *)dialogListController;
-(void)resetLocalization;
-(void)composeMessageAndOpenSearch:(BOOL)arg1 ;
-(void)deleteItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowSecretInForwardMode:(BOOL)arg1 ;
-(void)setShowListEditingControl:(BOOL)arg1 ;
-(BOOL)forwardMode;
-(BOOL)privacyMode;
-(void)conversationSelected:(id)arg1 ;
-(BOOL)isConversationOpened:(long long)arg1 ;
-(BOOL)showGroupsOnly;
-(BOOL)showSecretInForwardMode;
-(BOOL)botStartMode;
-(void)dialogListReady;
-(long long)openedConversationId;
-(id)dialogListCellAssetsSource;
-(void)navigateToBroadcastLists;
-(void)navigateToNewGroup;
-(void)searchResultSelectedConversation:(id)arg1 ;
-(void)searchResultSelectedConversation:(id)arg1 atMessageId:(int)arg2 ;
-(void)searchResultSelectedMessage:(id)arg1 ;
-(BOOL)shouldDisplayEmptyListPlaceholder;
-(void)hintMoveConversationAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)clearItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadMoreItems;
-(void)beginSearch:(id)arg1 inMessages:(BOOL)arg2 ;
-(void)searchResultSelectedUser:(id)arg1 ;
-(id)processSearchResultItem:(id)arg1 ;
-(void)setShowBroadcastsMenu:(BOOL)arg1 ;
-(void)setForwardMode:(BOOL)arg1 ;
-(void)setPrivacyMode:(BOOL)arg1 ;
-(void)setShowGroupsOnly:(BOOL)arg1 ;
-(void)setBotStartMode:(BOOL)arg1 ;
-(void)setDialogListController:(TGDialogListController *)arg1 ;
-(BOOL)showListEditingControl;
-(BOOL)showBroadcastsMenu;
-(void)wakeUp;
-(void)setUnreadCount:(int)arg1 ;
-(int)unreadCount;
-(void)clearData;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1DirectMessageInboxDeleteConfirmationProvider.h>
#import <Twitter/TFNDirectMessageInbox.h>
#import <Twitter/TFNDirectMessageContextInboxActions.h>

@protocol T1DirectMessageInboxDeleteConfirmationProvider, TFNDirectMessageInbox, TFNDirectMessageContextInboxActions;
@class NSArray, NSString;

@interface T1DirectMessageInbox : NSObject <T1DirectMessageInboxDeleteConfirmationProvider, TFNDirectMessageInbox, TFNDirectMessageContextInboxActions> {

	id<T1DirectMessageInboxDeleteConfirmationProvider> _deleteConfirmationProvider;
	id<TFNDirectMessageInbox> _inbox;
	id<TFNDirectMessageContextInboxActions> _inboxActions;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) id<TFNDirectMessageContextInboxActions> inboxActions;              //@synthesize inboxActions=_inboxActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNDirectMessageContext> context; 
@property (nonatomic,readonly) NSArray * allConversations; 
@property (nonatomic,readonly) unsigned long long countOfUnseenConversations; 
@property (nonatomic,readonly) unsigned long long countOfUnreadConversations; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,retain) id<NSCoding> session; 
@property (nonatomic,readonly) id<TFNDirectMessageInbox> inbox;                                   //@synthesize inbox=_inbox - In the implementation block
-(id<TFNDirectMessageInbox>)inbox;
-(NSArray *)allConversations;
-(id)reversePagesEnumerator;
-(id)initWithInbox:(id)arg1 ;
-(void)deleteConversation:(id)arg1 account:(id)arg2 confirmingWithCompletion:(/*^block*/id)arg3 ;
-(void)deleteConversationLocally:(id)arg1 ;
-(void)_inboxNotificationReflector:(id)arg1 ;
-(unsigned long long)countOfUnreadConversations;
-(unsigned long long)countOfUnseenConversations;
-(id<TFNDirectMessageContextInboxActions>)inboxActions;
-(void)markAsSeen;
-(void)removeConversation:(id)arg1 preservingTrust:(BOOL)arg2 ;
-(id)_deleteAlertTitle;
-(id)_legacyDeleteAlertMessageWithConversation:(id)arg1 ;
-(id)_legacyEndConversationActionLabel;
-(id)_deleteActionLabelWithConversation:(id)arg1 ;
-(id)_deleteAlertMessageWithConversation:(id)arg1 ;
-(void)_confirmDeletionWithConversation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_legacyConfirmDeletionWithConversation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmDeletionWithConversation:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerDeleteConfirmationProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEmpty;
-(id<TFNDirectMessageContext>)context;
-(BOOL)isLoaded;
-(void)markAsRead;
-(id<NSCoding>)session;
-(void)setSession:(id<NSCoding>)arg1 ;
@end


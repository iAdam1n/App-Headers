/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMConfigurable.h>
#import <Messenger/MNPushMessageHandling.h>

@protocol FBMPushedMessageEventHandler_DEPRECATED;
@class NSMutableSet, UIApplication, FBLazyCreator, NSString;

@interface FBMPushedMessageHandler : NSObject <FBSessionClassProvidable, FBMConfigurable, MNPushMessageHandling> {

	NSMutableSet* _pendingThreadFetchIds;
	NSMutableSet* _idsOfMessagesNavigatedTo;
	NSMutableSet* _idsOfMessagesStitched;
	id<FBMPushedMessageEventHandler_DEPRECATED> _eventHandler;
	UIApplication* _application;
	FBLazyCreator* _authManagerCreator;
	FBLazyCreator* _threadSetCreator;
	FBLazyCreator* _pushedMessageAdderCreator;
	FBLazyCreator* _threadStoreCreator;
	FBLazyCreator* _threadDescriptorFactoryCreator;
	FBLazyCreator* _pushLoggerCreator;
	FBLazyCreator* _databaseOpenedDelayerCreator;
	FBLazyCreator* _messageReceivedListenerCreator;
	FBLazyCreator* _attachmentUtilsCreator;
	FBLazyCreator* _threadMediaCacheCreator;
	FBLazyCreator* _appPropertiesCreator;
	FBLazyCreator* _threadMarkServiceCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 fetchCompletionHandler:(/*^block*/id)arg4 ;
-(void)handleSyncMessage:(id)arg1 ;
-(BOOL)isAPNSMessageAlreadyHandled:(id)arg1 ;
-(void)configureWithEventHandler:(id)arg1 ;
-(void)handleMQTTPushMessage:(id)arg1 supportsPreview:(BOOL)arg2 ;
-(id)initWithAuthManagerCreator:(/*^block*/id)arg1 threadSetCreator:(/*^block*/id)arg2 pushedMessageAdderCreator:(/*^block*/id)arg3 threadStoreCreator:(/*^block*/id)arg4 pushLoggerCreator:(/*^block*/id)arg5 threadDescriptorFactoryCreator:(/*^block*/id)arg6 databaseOpenedDelayerCreator:(/*^block*/id)arg7 messageReceivedListenerCreator:(/*^block*/id)arg8 attachmentUtilsCreator:(/*^block*/id)arg9 threadSharedMediaModelCacheCreator:(/*^block*/id)arg10 appPropertiesCreator:(/*^block*/id)arg11 threadMarkServiceCreator:(/*^block*/id)arg12 ;
-(void)_handlePushedMessage:(id)arg1 actionIdentifier:(id)arg2 responseInfo:(id)arg3 launchedByUser:(BOOL)arg4 supportsMessagePreview:(BOOL)arg5 isColdStart:(BOOL)arg6 handledCompletionBlock:(/*^block*/id)arg7 ;
-(void)_stitchPushMessage:(id)arg1 toThread:(id)arg2 descriptor:(id)arg3 actionIdentifier:(id)arg4 responseInfo:(id)arg5 launchedByUser:(BOOL)arg6 supportsMessagePreview:(BOOL)arg7 handledCompletionBlock:(/*^block*/id)arg8 ;
-(void)_updateMessageState:(id)arg1 ;
-(void)_updateThreadSyncActionId:(id)arg1 ;
-(void)_fireEventForMessageReceivedIfNecessary:(id)arg1 descriptor:(id)arg2 actionIdentifier:(id)arg3 launchedByUser:(BOOL)arg4 isColdStart:(BOOL)arg5 ;
-(void)_fetchThreadForMessage:(id)arg1 launchedByUser:(BOOL)arg2 threadBlock:(/*^block*/id)arg3 ;
-(BOOL)_isMessageIncomplete:(id)arg1 ;
-(id)_addPushMessage:(id)arg1 toThread:(id)arg2 ;
-(void)_markThreadReadForPushMessage:(id)arg1 thread:(id)arg2 added:(BOOL)arg3 ;
-(void)_markThreadRead:(id)arg1 pushedMessage:(id)arg2 ;
-(void)_markThreadReadIfAlreadyRead:(id)arg1 pushedMessage:(id)arg2 ;
-(void)_markThreadUnread:(id)arg1 ;
-(void)_sendThreadRequestWithDescriptor:(id)arg1 message:(id)arg2 launchedByUser:(BOOL)arg3 idForLogging:(id)arg4 threadResultBlock:(/*^block*/id)arg5 ;
-(void)_handleThreadFetched:(id)arg1 pushedMessage:(id)arg2 requestId:(id)arg3 ;
-(void)_handleThreadFetchedError:(id)arg1 forId:(id)arg2 pushedMessage:(id)arg3 launchedByUser:(BOOL)arg4 requestId:(id)arg5 ;
-(BOOL)shouldBuzzForThread:(id)arg1 ;
-(void)postNotificationForMessage:(id)arg1 pushSource:(unsigned long long)arg2 launchedByUser:(BOOL)arg3 ;
-(BOOL)isConfigured;
-(void)dealloc;
-(void)endSession;
@end


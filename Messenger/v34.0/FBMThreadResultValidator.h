/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@class FBMLocalThreadMessagesQuerier, FBMNetworkProtocolController, FBMFetchedThreadKeySet, FBMMessagesFetchedThreadKeySet, NSString;

@interface FBMThreadResultValidator : NSObject <FBSessionClassProvidable> {

	FBMLocalThreadMessagesQuerier* _messagesQuerier;
	FBMNetworkProtocolController* _networkProtocolController;
	FBMFetchedThreadKeySet* _fetchedThreadKeySet;
	FBMMessagesFetchedThreadKeySet* _messagesFetchedThreadKeySet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)numberOfMessagesNeededForThread:(id)arg1 numberOfMessagesRequested:(long long)arg2 oldestMessageTimestamp:(unsigned long long)arg3 ;
-(id)initWithMessagesQuerier:(id)arg1 networkProtocolController:(id)arg2 fetchedThreadKeySet:(id)arg3 messagesFetchedThreadKeySet:(id)arg4 ;
-(BOOL)isThreadResultUpToDate:(id)arg1 ensureNewMessagesLoaded:(BOOL)arg2 ;
-(BOOL)areAllThreadsUpToDate:(id)arg1 ensureNewMessagesLoaded:(BOOL)arg2 ;
-(BOOL)_checkThreadUpToDateInMQTTMode:(id)arg1 includeMessages:(BOOL)arg2 ;
-(BOOL)_checkThreadUpToDateInSyncProtocolMode:(id)arg1 includeMessages:(BOOL)arg2 ;
-(void)isThreadResultUpToDate:(id)arg1 ensureNewMessagesLoaded:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)areAllThreadsUpToDate:(id)arg1 ensureNewMessagesLoaded:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)areAllMessagesFetchedForThread:(id)arg1 ;
@end


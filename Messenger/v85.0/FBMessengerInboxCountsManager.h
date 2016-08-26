/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessengerInboxCountsFetcherDelegate.h>
#import <Messenger/FBMessengerInboxCountsMQTTServiceDelegate.h>

@class FBMessengerInboxCountsFetcher, FBMessengerInboxCountsMQTTService, FBMessengerInboxCountsListenerAnnouncer;

@interface FBMessengerInboxCountsManager : NSObject <FBMessengerInboxCountsFetcherDelegate, FBMessengerInboxCountsMQTTServiceDelegate> {

	FBMessengerInboxCountsFetcher* _inboxCountsFetcher;
	FBMessengerInboxCountsMQTTService* _inboxCountsMQTTService;
	FBMessengerInboxCountsListenerAnnouncer* _announcer;

}
-(void)messengerInboxCountsService:(id)arg1 didReceiveInboxCounts:(id)arg2 ;
-(void)messengerInboxCountsFetcher:(id)arg1 didReceiveInboxCounts:(id)arg2 ;
-(void)messengerInboxCountsFetcher:(id)arg1 didFailFetchWithError:(id)arg2 ;
-(id)initWithInboxCountsFetcher:(id)arg1 inboxCountsMQTTService:(id)arg2 ;
-(void)forceFetch;
-(void)cancelForceFetch;
-(void)addMessengerInboxCountsListener:(id)arg1 ;
-(void)removeMessengerInboxCountsListener:(id)arg1 ;
-(void)dealloc;
@end

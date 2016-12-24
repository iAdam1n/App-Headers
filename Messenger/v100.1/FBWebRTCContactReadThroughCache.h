/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager;
@class MNUserStore, MNThreadStore, MNThreadParticipantNameFormatter, NSMutableDictionary, FBWebRTCContactReadThroughCacheListenerAnnouncer, NSString;

@interface FBWebRTCContactReadThroughCache : NSObject <FBViewerContextClassProvidable> {

	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	MNThreadParticipantNameFormatter* _nameFormatter;
	NSMutableDictionary* _contacts;
	FBWebRTCContactReadThroughCacheListenerAnnouncer* _announcer;
	id<MNAuthenticationManager> _authManager;
	BOOL _isFetchingUsers;
	BOOL _isFetchingGroups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)getContactForFBID:(id)arg1 ;
-(void)fetchContactsIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasContactInCache:(id)arg1 ;
-(id)initWithUserStore:(id)arg1 threadStore:(id)arg2 nameFormatter:(id)arg3 authManager:(id)arg4 ;
-(void)_forceFetchContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addContactToCache:(id)arg1 ;
-(void)_fetchUserContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchGroupContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_maybeFinishedFetchingWithCompletion:(/*^block*/id)arg1 ;
-(void)_createConversationGroupFromThreadSummary:(id)arg1 andUsers:(id)arg2 withSuccess:(/*^block*/id)arg3 ;
-(void)_fetchUsersForSummaries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFinishFetchingWithCompletion:(/*^block*/id)arg1 ;
-(void)addContactsToCache:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

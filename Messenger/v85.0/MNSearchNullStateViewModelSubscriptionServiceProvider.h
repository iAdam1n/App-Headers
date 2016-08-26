/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelSubscriptionServiceProviding.h>

@protocol OS_dispatch_queue, FBGraphQLFragmentService, MNAuthenticationManager, MNThreadSummarySubscribing;
@class NSObject, MNSearchNullStateViewModelElementLoader, MNSearchNullStateUserSectionsViewModelLoader, MNSearchNullStateGroupSectionViewModelLoader, MNSearchNullStateBusinessSectionViewModelLoader, MNSearchNullStateBotsSectionViewModelLoader, MNSearchNullStateRecentSearchSectionViewModelLoader, MNUserProvider, MNTopPHATContactsRetriever, MNThreadStore, FBUserSession, MNGraphQLQueryConfigGenerator, MNThreadParticipantNameFormatter, MNRecentSearchStore, MNThreadSummarySubscribingAnnouncer, NSString;

@interface MNSearchNullStateViewModelSubscriptionServiceProvider : NSObject <MNViewModelSubscriptionServiceProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	MNSearchNullStateViewModelElementLoader* _searchNullStateViewModelElementLoader;
	MNSearchNullStateUserSectionsViewModelLoader* _userSectionsViewModelLoader;
	MNSearchNullStateGroupSectionViewModelLoader* _groupSectionViewModelLoader;
	MNSearchNullStateBusinessSectionViewModelLoader* _businessSectionViewModelLoader;
	MNSearchNullStateBotsSectionViewModelLoader* _botsSectionViewModelLoader;
	MNSearchNullStateRecentSearchSectionViewModelLoader* _recentSearchSectionViewModelLoader;
	MNUserProvider* _userProvider;
	MNTopPHATContactsRetriever* _topContactsRetriever;
	MNThreadStore* _threadStore;
	FBUserSession* _session;
	id<FBGraphQLFragmentService> _graphQLFragmentService;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	id<MNAuthenticationManager> _authManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNRecentSearchStore* _recentSearchStore;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	id<MNThreadSummarySubscribing> _dispatchedMNThreadSummarySubscribing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 ;
-(id)initWithUserProvider:(id)arg1 handlerChainManager:(id)arg2 session:(id)arg3 queryConfigGenerator:(id)arg4 authManager:(id)arg5 threadSummarySubscribingAnnouncer:(id)arg6 threadNameFormatter:(id)arg7 recentSearchStore:(id)arg8 ;
-(void)startMonitoring;
-(void)stop;
-(void)stopMonitoring;
-(id)coordinator;
-(id)serviceIdentifier;
@end

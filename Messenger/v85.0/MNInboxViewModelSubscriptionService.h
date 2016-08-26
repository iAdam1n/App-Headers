/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNViewModelSubscriptionService.h>

@class MNInboxViewModelSubscriptionServiceProvider, MNViewModelSubscriptionServiceHandler, NSString;

@interface MNInboxViewModelSubscriptionService : NSObject <MNServiceControllable, MNViewModelSubscriptionService> {

	MNInboxViewModelSubscriptionServiceProvider* _serviceProvider;
	MNViewModelSubscriptionServiceHandler* _serviceHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)unreadMessagesMutator;
-(id)startSubscription:(id)arg1 ;
-(id)viewStateMutator;
-(void)cancelSubscription:(id)arg1 ;
-(id)additionalPageRequesterForSubscriptionServiceTypePrimary:(long long)arg1 ;
-(id)initWithThreadListServiceDependencies:(id)arg1 inboxService:(id)arg2 handlerChainManager:(id)arg3 pymmStore:(id)arg4 presenceSubscriptionService:(id)arg5 userSessionObservingCenter:(id)arg6 userSortRankPolicy:(id)arg7 pendingRequestsStore:(id)arg8 threadListType:(long long)arg9 compositionConfigurationFactory:(id)arg10 session:(id)arg11 loggedInUserInfoManager:(id)arg12 recentContactsRetriever:(id)arg13 topContactsRetriever:(id)arg14 montageViewModelSubscriptionServiceProvider:(id)arg15 retrieverWithThreadSummaries:(id)arg16 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

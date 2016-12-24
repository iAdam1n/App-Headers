/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLSubscriptionHandle;
@class FBMemFeedback, FBUserSession, FBGraphQLLiveQuery, FBFeedbackSubscriberListenerAnnouncer;

@interface FBFeedbackSubscriber : NSObject {

	FBMemFeedback* _feedback;
	FBUserSession* _session;
	FBGraphQLLiveQuery* _graphqlFeedbackLikeLiveQueryHandle;
	id<FBGraphQLSubscriptionHandle> _graphqlFeedbackLikeSubscriptionHandle;
	FBFeedbackSubscriberListenerAnnouncer* _announcer;

}
-(id)initWithFeedback:(id)arg1 session:(id)arg2 ;
-(void)_createLiveLikeGraphQLSubscription;
-(void)_handleLiveReactionsFromSubscription:(id)arg1 ;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBAnalytics, FBGraphQLService, NSMutableDictionary, MNPageResponsivenessCache, MNPageResponsivenessUpdaterListenerAnnouncer;

@interface MNPageResponsivenessUpdater : NSObject {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBGraphQLService* _graphQLService;
	NSMutableDictionary* _graphQLRequests;
	MNPageResponsivenessCache* _pageResponsivenessCache;
	MNPageResponsivenessUpdaterListenerAnnouncer* _pageResponsivenessUpdaterListenerAnnouncer;

}
-(void)runUpdateIfNecessaryForCanonicalThreadWithOtherUser:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 pageResponsivenessCache:(id)arg3 responsivenessListenerAnnouncer:(id)arg4 ;
-(void)_processGraphQLResponse:(id)arg1 forUser:(id)arg2 ;
-(void)_stopTrackingRequestForUserId:(id)arg1 ;
-(void)_fetchPageResponsivenessForUser:(id)arg1 ;
@end

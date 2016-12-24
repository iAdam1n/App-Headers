/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLService, FBMediaSetStoreManager, FBUserSession, NSMutableSet;

@interface FBPhotoUpdater : NSObject {

	FBGraphQLService* _graphQLService;
	FBMediaSetStoreManager* _mediaSetStoreManager;
	FBUserSession* _session;
	/*^block*/id _queryProvider;
	NSMutableSet* _requestHandles;

}
-(id)updatePhotosWithPhotoIDs:(id)arg1 networkRequestThreshold:(long long)arg2 networkRequestActorID:(id)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_handleResponse:(id)arg1 photoIDs:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setQueryProvider:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

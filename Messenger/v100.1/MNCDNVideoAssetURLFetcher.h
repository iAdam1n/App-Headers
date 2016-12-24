/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBNetworkDispatch, MNAuthenticationManager;
@class NSObject;

@interface MNCDNVideoAssetURLFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBNetworkDispatch> _networkDispatcher;
	id<MNAuthenticationManager> _authManager;

}
-(id)initWithNetworkDispatcher:(id)arg1 queue:(id)arg2 authManager:(id)arg3 ;
-(void)fetchUrlForVideoId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

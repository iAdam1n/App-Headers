/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNPlatformAppListFetcherDelegate;
@class FBUserSession, MNPlatformAppFetchingConfiguration;

@interface MNPlatformAppListFetcher : NSObject {

	FBUserSession* _session;
	MNPlatformAppFetchingConfiguration* _configuration;
	id<FBServiceTransactionMutating> _graphqlRequestHandle;
	id<MNPlatformAppListFetcherDelegate> _delegate;

}
-(void)_applyServiceConfiguration:(id)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(void)_didFetchWithCachedResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 ;
-(void)_didFetchWithDownloadedResponse:(id)arg1 ;
-(void)_didFailToFetchWithError:(id)arg1 ;
-(void)startWithDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)cancel;
@end

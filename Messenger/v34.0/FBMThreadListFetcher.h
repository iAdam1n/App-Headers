/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNLegacyThreadListFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBMAppProperties, FBMThreadListFetcherDelegate, MNAuthenticationManager;
@class MNGraphQLThreadListFetcher, MNLegacyThreadListFetcher, FBMThreadSet, FBMNetworkProtocolController, FBMMemModelThreadParser, FBMUserInfoFetchManager, FBMUserFetchedListeningAnnouncer, NSString;

@interface FBMThreadListFetcher : NSObject <MNLegacyThreadListFetcherDelegate, FBClassProvidable> {

	MNGraphQLThreadListFetcher* _graphQLThreadListFetcher;
	MNLegacyThreadListFetcher* _legacyThreadListFetcher;
	id<FBMAppProperties> _appProperties;
	FBMThreadSet* _threadSet;
	FBMNetworkProtocolController* _networkProtocolController;
	FBMMemModelThreadParser* _memModelThreadParser;
	id<FBMThreadListFetcherDelegate> _delegate;
	id<MNAuthenticationManager> _authManager;
	FBMUserInfoFetchManager* _userInfoFetchManager;
	FBMUserFetchedListeningAnnouncer* _userFetchListeningAnnouncer;
	unsigned long long _threadListType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didCancelFetchThreads;
-(void)didFetchThreads:(id)arg1 ;
-(void)couldNotFetchThreadsWithError:(id)arg1 ;
-(void)_updateUserInfoQueryTimestampForThreads_DEPRECATED:(id)arg1 ;
-(void)configureAndFetchThreadListWithType:(unsigned long long)arg1 andDelegate:(id)arg2 ;
-(id)initWithGraphQLThreadListFetcher:(id)arg1 legacyThreadListFetcher:(id)arg2 threadSet:(id)arg3 memModelThreadParser:(id)arg4 appProperties:(id)arg5 networkProtocolController:(id)arg6 authManger:(id)arg7 userInfoFetchManager:(id)arg8 userFetchListeningAnnouncer:(id)arg9 ;
-(void)_didFetchMemModelForMessageThreadsConnection:(id)arg1 ;
-(void)cancel;
@end


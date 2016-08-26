/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBAccountStore, FBDeviceBasedLoginAccountStore, FBAuthUserInfoResolver, NSObject, NSMutableDictionary;

@interface FBDBLStoredUserAsyncFetcher : NSObject {

	unsigned long long _fetchCount;
	FBAccountStore* _accountStore;
	FBDeviceBasedLoginAccountStore* _dblProvider;
	FBAuthUserInfoResolver* _infoResolver;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _mergeQueue;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _users;
	BOOL _dblFetchCompleted;
	BOOL _ssoFetchCompleted;
	BOOL _completed;

}

@property (readonly) BOOL completed;              //@synthesize completed=_completed - In the implementation block
-(id)initWithAccountStore:(id)arg1 dblProvider:(id)arg2 infoResolver:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_fetchSSOAccount;
-(void)_fetchDBLAccounts;
-(void)_fetchUserInfoForAccount:(id)arg1 ;
-(void)_mergeDBLAccounts:(id)arg1 ;
-(void)_mergeSSOAccount:(id)arg1 ;
-(void)_completedSSOFetch;
-(void)_addAccountWithShortName:(id)arg1 userID:(id)arg2 accountType:(unsigned long long)arg3 ;
-(void)_completedDBLFetch;
-(void)_tryCallCompletion;
-(void)_markSelfForReleaseByManager;
-(id)initWithAccountStore:(id)arg1 dblProvider:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchUsers;
-(BOOL)completed;
@end

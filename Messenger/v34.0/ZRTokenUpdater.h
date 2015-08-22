/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/ZRCampaignDataFetcherDelegate.h>

@protocol FBProvider, ZRLoggedInUserId;
@class ZRApplicationState, ZRTokenCurrentNetwork, NSRecursiveLock, FBExponentialBackoffTimer, ZRCampaignDataFetcher, NSString;

@interface ZRTokenUpdater : NSObject <FBSessionClassProvidable, ZRCampaignDataFetcherDelegate> {

	id<FBProvider> _tokenFetcherProvider;
	ZRApplicationState* _zeroRatingState;
	ZRTokenCurrentNetwork* _network;
	NSRecursiveLock* _sharedZeroTokenDataLock;
	FBExponentialBackoffTimer* _backoffTimer;
	BOOL _refreshPending;
	BOOL _refreshAllowed;
	id<ZRLoggedInUserId> _loggedInUserId;
	ZRCampaignDataFetcher* _tokenFetcher;

}

@property (nonatomic,readonly) BOOL refreshPending;                             //@synthesize refreshPending=_refreshPending - In the implementation block
@property (assign,nonatomic) BOOL refreshAllowed;                               //@synthesize refreshAllowed=_refreshAllowed - In the implementation block
@property (nonatomic,retain) id<ZRLoggedInUserId> loggedInUserId;               //@synthesize loggedInUserId=_loggedInUserId - In the implementation block
@property (nonatomic,retain) ZRCampaignDataFetcher * tokenFetcher;              //@synthesize tokenFetcher=_tokenFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id<ZRLoggedInUserId>)loggedInUserId;
-(id)initWithTokenFetcherProvider:(id)arg1 zeroRatingState:(id)arg2 network:(id)arg3 loggedInUserId:(id)arg4 sharedZeroTokenDataLock:(id)arg5 backoffTimer:(id)arg6 ;
-(void)setRefreshAllowed:(BOOL)arg1 ;
-(void)stopRefresh;
-(BOOL)refreshIfPossible;
-(BOOL)_refreshIfPossible;
-(void)_cancelFetch;
-(void)_didFetchZeroCampaign:(id)arg1 ;
-(ZRCampaignDataFetcher *)tokenFetcher;
-(void)setTokenFetcher:(ZRCampaignDataFetcher *)arg1 ;
-(void)didFetchZeroCampaign:(id)arg1 ;
-(void)couldNotFetchZeroCampaign:(id)arg1 ;
-(BOOL)refreshIfNeeded;
-(BOOL)refreshPending;
-(BOOL)refreshAllowed;
-(void)setLoggedInUserId:(id<ZRLoggedInUserId>)arg1 ;
-(void)dealloc;
@end

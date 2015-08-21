/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBNetworker, FBPersistentKeyValueStore;

@interface FBAuthUserInfoResolver : NSObject {

	FBNetworker* _networker;
	FBPersistentKeyValueStore* _userInfoCache;

}

@property (nonatomic,readonly) FBNetworker * networker;                                //@synthesize networker=_networker - In the implementation block
@property (nonatomic,readonly) FBPersistentKeyValueStore * userInfoCache;              //@synthesize userInfoCache=_userInfoCache - In the implementation block
+(id)sharedResolver;
-(id)initWithNetworker:(id)arg1 keyValueStore:(id)arg2 ;
-(void)_fetchNetworkInfoForIdentifier:(id)arg1 accessToken:(id)arg2 cacheToKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchCachedInfoForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForCurrentUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForUser:(id)arg1 accessToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(FBNetworker *)networker;
-(FBPersistentKeyValueStore *)userInfoCache;
-(id)init;
@end


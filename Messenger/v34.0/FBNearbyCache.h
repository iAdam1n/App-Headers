/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBCheckinSearchController, NSMutableDictionary, FBUserSession;

@interface FBNearbyCache : NSObject {

	unsigned long long _checkinSearchHandle;
	unsigned long long _citySearchHandle;
	FBCheckinSearchController* _searchController;
	NSMutableDictionary* _cache;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBCheckinSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
+(void)updateShareCity:(BOOL)arg1 session:(id)arg2 ;
+(long long)_version;
-(void)cancelNearbyRequest;
-(void)getFBNearbyDataSetWithLocation:(id)arg1 locationDate:(id)arg2 query:(id)arg3 offset:(long long)arg4 searchType:(long long)arg5 lifeEventType:(unsigned long long)arg6 schoolType:(id)arg7 callback:(/*^block*/id)arg8 ;
-(id)_keyForQuery:(id)arg1 searchType:(long long)arg2 ;
-(BOOL)_verifyDataSet:(id)arg1 withLocation:(id)arg2 ;
-(id)_getUserDefaultsNearbySetsCache;
-(void)_storeUserDefaultsNearbySetsCache:(id)arg1 ;
-(void)retrieveOfflineResults:(id)arg1 query:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_mostRecentDataSetWithNearbyCityInCache:(id)arg1 ;
-(void)preheatWithLocation:(id)arg1 searchType:(long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)getFBNearbyCityDataSetWithLocation:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)cancelPreheatRequest;
-(void)clearMemoryCache;
-(void)clearDiskCache;
-(void)dealloc;
-(id)init;
-(FBCheckinSearchController *)searchController;
-(id)initWithSession:(id)arg1 ;
@end


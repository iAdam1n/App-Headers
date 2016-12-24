/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNURLExpirationEvaluating;
@class FBCache, FBDiskCache, FBAnalytics;

@interface MNCDNAssetGenericURLCache : NSObject {

	FBCache* _urlCache;
	FBDiskCache* _urlDiskCache;
	id<MNCDNURLExpirationEvaluating> _expirationEvaluator;
	FBAnalytics* _analytics;

}
-(id)initWithCache:(id)arg1 diskCache:(id)arg2 expirationEvaluator:(id)arg3 analytics:(id)arg4 ;
-(id)getAllKeys;
-(void)_diskCacheDidFetchData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheUrl:(id)arg1 forKey:(id)arg2 ;
-(void)fetchCachedUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cacheUrlToMemoryCache:(id)arg1 forKey:(id)arg2 ;
@end

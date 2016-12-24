/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CLGeocoder, FBDiskCache, FBAssetGeoCoderHelperDefaultRateLimiting;

@interface FBAssetGeoCoderHelper : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	CLGeocoder* _geoCoder;
	FBDiskCache* _cache;
	BOOL _canUseAreaOfInterest;
	FBAssetGeoCoderHelperDefaultRateLimiting* _rateLimiting;

}
+(BOOL)canUseLocation;
-(id)initWithSession:(id)arg1 canUseAreaOfInterest:(BOOL)arg2 rateLimiting:(id)arg3 ;
-(void)locationInfoForLocations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)locationInfoForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchAndCacheNameForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cachedValueForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_keyForLocation:(id)arg1 ;
-(void)_cacheAssetLocation:(id)arg1 ;
-(void)locationInfoForLocation:(id)arg1 withIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPrefetchVideoDownloaderDelegate.h>

@protocol OS_dispatch_queue;
@class FBOrderedDictionary, NSMutableDictionary, FBCache, FBExperimentManager, NSObject, FBUserSession, FBLayeredCache, NSString;

@interface FBVideoPrefetchManager : NSObject <FBPrefetchVideoDownloaderDelegate> {

	FBOrderedDictionary* _queuedPrefetchRequests;
	NSMutableDictionary* _prefetchTimes;
	FBCache* _prefetchDataKeys;
	unsigned long long _prefetchRequestsInProgress;
	unsigned long long _maxPrefetchRequestsInProgress;
	FBExperimentManager* _experimentManager;
	NSObject*<OS_dispatch_queue> _scheduleQueue;
	FBUserSession* _session;
	FBLayeredCache* _prefetchCache;
	BOOL _enabledCacheStatusQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasPrefetchedDataForDataKey:(id)arg1 ;
-(id)videoPrefetchedDataIfPresentInPrefetchCacheWithDataKey:(id)arg1 ;
-(id)getPrefetcherIfPossibleWithDataKey:(id)arg1 ;
-(id)initWithSession:(id)arg1 scheduleQueue:(id)arg2 ;
-(BOOL)isPrefetcherProbablyAvailableWithDataKey:(id)arg1 ;
-(id)createPrefetchCache:(id)arg1 ;
-(BOOL)_isPrefetchNeededVideoURL:(id)arg1 videoID:(id)arg2 dataKey:(id)arg3 definition:(long long)arg4 bytesToPrefetch:(unsigned long long)arg5 ;
-(void)_dispatchPrefetchIfPossible;
-(void)_addPrefetchWithVideoURL:(id)arg1 videoID:(id)arg2 definition:(long long)arg3 scenePath:(id)arg4 bytesToPrefetch:(unsigned long long)arg5 useQueue:(BOOL)arg6 ;
-(void)prefetchDownloader:(id)arg1 didReceiveData:(id)arg2 ;
-(void)prefetchDownloader:(id)arg1 didFinishWithData:(id)arg2 ;
-(void)prefetchDownloaderDidCancelOrFail:(id)arg1 ;
-(void)addPrefetchWithVideoURL:(id)arg1 videoID:(id)arg2 definition:(long long)arg3 scenePath:(id)arg4 bytesToPrefetch:(unsigned long long)arg5 useQueue:(BOOL)arg6 ;
-(void)clearCache;
@end

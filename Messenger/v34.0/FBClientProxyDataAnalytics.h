/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, FBDataUsageCounter, FBVideoWatchingTracker, NSMutableDictionary, FBClientProxyVideoStats;

@interface FBClientProxyDataAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _analyticsQueue;
	FBDataUsageCounter* _dataUsageCounter;
	FBVideoWatchingTracker* _tracker;
	NSMutableDictionary* _prefetchDataLengths;
	FBClientProxyVideoStats* _videoStats;

}
-(void)fetchUsageStats:(/*^block*/id)arg1 ;
-(id)_videoTrackerFileURL;
-(id)_dataUsageFileURL;
-(void)increaseTimeWatchedBy:(double)arg1 videoID:(id)arg2 metadata:(SCD_Struct_FB496)arg3 shouldIncreaseWatchedData:(BOOL)arg4 isHD:(BOOL)arg5 ;
-(void)updatePrefetchedBytes:(unsigned long long)arg1 toVideoID:(id)arg2 ;
-(void)addDownloadedBytes:(unsigned long long)arg1 toVideoID:(id)arg2 blobID:(id)arg3 isHD:(BOOL)arg4 isPrefetching:(BOOL)arg5 isFetchingFirstChunk:(BOOL)arg6 ;
-(void)updateVideoWatchingTrackerForVideoID:(id)arg1 metadata:(SCD_Struct_FB496)arg2 startingTime:(double)arg3 isHD:(BOOL)arg4 ;
-(id)init;
-(void)reset;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end

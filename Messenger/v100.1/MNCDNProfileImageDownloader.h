/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCDNProfileImageDownloadRunnerDelegate.h>

@protocol MNCDNAssetDownloading, MNCDNProfileImageDownloadRunnerDelegate, OS_dispatch_queue;
@class FBImageDownloader, MNAsyncOperationTracker, MNCDNProfileImageDownloadListenerAnnouncer, NSObject, MNCDNProfileImageRequestBehaviorConfig, NSString;

@interface MNCDNProfileImageDownloader : NSObject <MNCDNProfileImageDownloadRunnerDelegate> {

	id<MNCDNAssetDownloading> _assetDownloader;
	id<MNCDNProfileImageDownloadRunnerDelegate> _runnerDelegate;
	FBImageDownloader* _imageDownloader;
	MNAsyncOperationTracker* _asynOperationTracker;
	MNCDNProfileImageDownloadListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _queue;
	MNCDNProfileImageRequestBehaviorConfig* _profileImageReuqestBehaviorConfig;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)downloadProfileImageForProfileImageDownloadRequest:(id)arg1 ;
-(id)initWithAssetDownloader:(id)arg1 imageDownloader:(id)arg2 profileImageReuqestBehaviorConfig:(id)arg3 queue:(id)arg4 ;
-(void)cancelDownloadForDownloadId:(id)arg1 ;
-(void)downloadProfileImageWithUserId:(id)arg1 analyticsTags:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addProfileImageDownloadListener:(id)arg1 ;
-(void)removeProfileImageDownloadListener:(id)arg1 ;
-(void)profileImageDownloadRunnerDidFailToDownloadProfileImageWithError:(id)arg1 forDownloadRequest:(id)arg2 forDownloadId:(unsigned long long)arg3 ;
-(void)profileImageDownloadRunnerDidFinishWithProfileImage:(id)arg1 forDownloadRequest:(id)arg2 forDownloadId:(unsigned long long)arg3 ;
-(id)_downloadProfileImageForProfileImageDownloadRequest:(id)arg1 withFulfillmentPolicy:(unsigned long long)arg2 ;
@end


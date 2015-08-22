/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNCDNAssetDownloadRunning.h>
#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol OS_dispatch_queue, MNCDNVideoDownloadRunnerListening, MNCDNAssetDownloadRunnerRetrying, FBNetworkDispatch;
@class NSObject, MNCDNVideoDownloadRequest, FBNetworkerRangeRequest, FBClientProxy, NSURL, NSString;

@interface MNCDNVideoDownloadRunner : NSObject <MNCDNAssetDownloadRunning, FBNetworkerRequestDelegate> {

	BOOL _isRetrying;
	BOOL _didStartDownload;
	NSObject*<OS_dispatch_queue> _queue;
	long long _downloadId;
	id<MNCDNVideoDownloadRunnerListening> _downloadListener;
	id<MNCDNAssetDownloadRunnerRetrying> _retrier;
	id<FBNetworkDispatch> _networkDispatcher;
	MNCDNVideoDownloadRequest* _downloadRequest;
	FBNetworkerRangeRequest* _networkerRequest;
	FBClientProxy* _clientProxy;
	NSURL* _videoUrl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 willRetryWithError:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didReceiveResponseWithStatus:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didUploadDataWithStatus:(id)arg2 ;
-(void)initialURLResolutionDidFailWithError:(id)arg1 ;
-(void)downloadAssetAtURL:(id)arg1 withDownloadId:(long long)arg2 withRetrier:(id)arg3 onQueue:(id)arg4 ;
-(void)_downloadDidFailWithError:(id)arg1 ;
-(void)_retryDownloadAssetAtContentURL:(id)arg1 ;
-(id)initWithNetworkDispatcher:(id)arg1 videoDownloadRequest:(id)arg2 downloadListener:(id)arg3 clientProxy:(id)arg4 ;
-(void)cancelDownload;
@end

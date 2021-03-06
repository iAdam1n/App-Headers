/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNCDNAssetDownloadRunning.h>

@protocol MNCDNPhotoDownloadRunnerListening;
@class MNAdaptiveImageDownloader, MNCDNPhotoDownloadRequest, NSString;

@interface MNCDNPhotoDownloadRunner : NSObject <MNCDNAssetDownloadRunning> {

	id<MNCDNPhotoDownloadRunnerListening> _downloadListener;
	BOOL _didStartDownload;
	BOOL _isRetrying;
	id _adaptiveImageDownloaderToken;
	unsigned long long _downloadId;
	BOOL _didCancelDownload;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	MNCDNPhotoDownloadRequest* _downloadRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_adaptiveImageDownloaderDidFailWithError:(id)arg1 withFulfillmentPolicy:(unsigned long long)arg2 withRetrier:(id)arg3 withDownloadId:(unsigned long long)arg4 withUrl:(id)arg5 onQueue:(id)arg6 ;
-(void)_adaptiveImageDownloaderDidSucceedWithResponse:(id)arg1 withRetrier:(id)arg2 forDownloadId:(unsigned long long)arg3 withUrl:(id)arg4 isFinalResponse:(BOOL)arg5 ;
-(void)_downloadDidFailWithError:(id)arg1 ;
-(void)_retryDownloadAssetAtURL:(id)arg1 withDownloadId:(unsigned long long)arg2 withFulfillmentPolicy:(unsigned long long)arg3 withRetrier:(id)arg4 onQueue:(id)arg5 ;
-(void)_didDownloadPhoto:(id)arg1 withRetrier:(id)arg2 forDownloadId:(unsigned long long)arg3 withUrl:(id)arg4 isFinalResponse:(BOOL)arg5 ;
-(void)downloadAssetAtURL:(id)arg1 withDownloadId:(unsigned long long)arg2 withFulfillmentPolicy:(unsigned long long)arg3 withRetrier:(id)arg4 onQueue:(id)arg5 ;
-(void)initialURLResolutionDidFailWithError:(id)arg1 withDownloadId:(unsigned long long)arg2 ;
-(id)initWithAdaptiveImageDownloader:(id)arg1 photoDownloadRequest:(id)arg2 downloadListener:(id)arg3 ;
-(void)cancelDownload;
@end


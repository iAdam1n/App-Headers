/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNCDNPhotoDownloadRunnerListening.h>

@protocol MNCDNAssetDownloading;
@class MNAdaptiveImageDownloader, MNAsyncOperationTracker, NSString;

@interface MNCDNPhotoDownloader : NSObject <FBSessionClassProvidable, MNCDNPhotoDownloadRunnerListening> {

	id<MNCDNAssetDownloading> _assetDownloader;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	MNAsyncOperationTracker* _asynOperationTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAssetDownloader:(id)arg1 adaptiveImageDownloader:(id)arg2 ;
-(void)photoRunnerDidFinishWithPhoto:(id)arg1 forPhotoDownloadRequest:(id)arg2 forDownloadId:(long long)arg3 isFinalResponse:(BOOL)arg4 ;
-(void)photoRunnerDidFailToDownloadPhotoWithError:(id)arg1 forPhotoDownloadRequest:(id)arg2 forDownloadId:(long long)arg3 ;
-(void)cancelDownloadForDownloadId:(id)arg1 ;
-(id)downloadPhotoForPhotoDownloadRequest:(id)arg1 ;
@end


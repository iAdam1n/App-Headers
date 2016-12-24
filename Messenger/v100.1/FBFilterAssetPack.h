/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBFilterAssetDownloader, NSMutableArray, NSMutableDictionary;

@interface FBFilterAssetPack : NSObject {

	NSArray* _assets;
	NSArray* _assetsIdentifiers;
	FBFilterAssetDownloader* _assetDownloader;
	NSMutableArray* _fetchHandles;
	unsigned long long _assetDownloadsInFlight;
	NSMutableDictionary* _assetDownloadProgress;
	double _downloadProgress;
	unsigned long long _downloadStatus;

}

@property (assign,nonatomic) double downloadProgress;                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long downloadStatus;              //@synthesize downloadStatus=_downloadStatus - In the implementation block
-(void)cancelFetch;
-(void)startFetch;
-(id)initWithAssets:(id)arg1 assetDownloader:(id)arg2 ;
-(void)_calculatePackDownloadStatus;
-(void)_onAssetDownloadComplete:(id)arg1 ;
-(void)_onAssetDownloadProgress:(id)arg1 progress:(double)arg2 ;
-(void)_calculatePackDownloadProgress;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(unsigned long long)downloadStatus;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMediaCreativeToolMask, FBFilterPackageDownloader, NSMutableDictionary;

@interface FBMediaCreativeToolMaskDownloader : NSObject {

	FBUserSession* _session;
	FBMediaCreativeToolMask* _mask;
	FBFilterPackageDownloader* _packageDownloader;
	BOOL _isLoading;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	float _uniqueMaskBundleDownloadProgress;
	NSMutableDictionary* _communalFaceRecognitionModelsDownloadProgresses;
	unsigned long long _communalFaceRecognitionModelsCount;
	BOOL _areCommunalFaceRecognitionModelsAlreadyLocallyCached;

}

@property (nonatomic,readonly) BOOL hasLocalCache; 
-(BOOL)hasLocalCache;
-(id)initWithSession:(id)arg1 mask:(id)arg2 ;
-(void)loadWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadFaceRecognitionModelsOfMask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_uniqueMaskAssetDownloadProgressed:(float)arg1 ;
-(void)_downloadCompletedForEverything:(id)arg1 ;
-(void)_communalFaceRecognitionModelsDownloadProgressed:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_notifyDownloadProgress;
@end

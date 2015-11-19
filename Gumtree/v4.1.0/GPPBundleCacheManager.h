/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GPPShareboxService;
@class NSURL, GPPStopwatch, NSString;

@interface GPPBundleCacheManager : NSObject {

	NSURL* _updatingURL;
	GPPStopwatch* _bundleUpdateTotalTimer;
	GPPStopwatch* _bundleDownloadNetworkTimer;
	long long _bundleUpdateNetworkTime;
	id<GPPShareboxService> _service;

}

@property (nonatomic,retain) id<GPPShareboxService> service;                 //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) NSString * latestBundleIdentifier; 
+(id)bundleCachePath;
+(id)bundlePathForBundleIdentifier:(id)arg1 ;
+(id)fallbackBundle;
+(void)setFallbackBundlePath:(id)arg1 ;
+(id)sharedInstance;
-(NSString *)latestBundleIdentifier;
-(id)latestBundlePath;
-(void)deleteOldBundles;
-(id)identifierFromURL:(id)arg1 ;
-(void)finishUpdating;
-(id)temporaryDownloadFilePath;
-(void)didFinishDownloadingToPath:(id)arg1 ;
-(void)failUpdating;
-(void)markBundleForDeletion:(id)arg1 ;
-(void)setLatestBundleIdentifier:(NSString *)arg1 ;
-(BOOL)decompressedArchiveAtURL:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)latestBundle;
-(void)updateBundleFromURL:(id)arg1 ;
-(void)reset;
-(id<GPPShareboxService>)service;
-(void)setService:(id<GPPShareboxService>)arg1 ;
@end


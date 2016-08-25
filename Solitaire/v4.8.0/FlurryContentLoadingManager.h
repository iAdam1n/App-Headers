/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FlurryContentLoadOperationDelegate.h>

@protocol FlurryPreCachingDelegate;
@class NSString, NSLock, NSMutableDictionary, NSOperationQueue, NSDictionary, FlurryPreCachingDelegatesMapManager;

@interface FlurryContentLoadingManager : NSObject <FlurryContentLoadOperationDelegate> {

	NSString* cachesDirectoryPath_;
	NSLock* mutex;
	BOOL firstTimeCopy;
	BOOL diskNotFree;
	BOOL _sdkAssetUrlUpdated;
	int _cacheSize;
	int _maxAssetSize;
	NSMutableDictionary* localAssetInfo_;
	NSMutableDictionary* fileLoadOperations_;
	NSOperationQueue* fileLoadOperationsQueue_;
	NSMutableDictionary* httpLoadOperations_;
	NSOperationQueue* httpLoadOperationsQueue_;
	NSString* _sdkAssetUrl;
	NSDictionary* _sdkAssetDictionary;
	id<FlurryPreCachingDelegate> _delegate;
	FlurryPreCachingDelegatesMapManager* _precachingDelegatesMapManager;

}

@property (nonatomic,retain) NSMutableDictionary * localAssetInfo; 
@property (assign,nonatomic) BOOL diskNotFree; 
@property (assign,nonatomic) int cacheSize;                                                                    //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,nonatomic) int maxAssetSize;                                                                 //@synthesize maxAssetSize=_maxAssetSize - In the implementation block
@property (nonatomic,retain) NSString * sdkAssetUrl;                                                           //@synthesize sdkAssetUrl=_sdkAssetUrl - In the implementation block
@property (assign,nonatomic) BOOL sdkAssetUrlUpdated;                                                          //@synthesize sdkAssetUrlUpdated=_sdkAssetUrlUpdated - In the implementation block
@property (nonatomic,retain) NSDictionary * sdkAssetDictionary;                                                //@synthesize sdkAssetDictionary=_sdkAssetDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileLoadOperations; 
@property (nonatomic,retain) NSOperationQueue * fileLoadOperationsQueue; 
@property (nonatomic,retain) NSMutableDictionary * httpLoadOperations; 
@property (nonatomic,retain) NSOperationQueue * httpLoadOperationsQueue; 
@property (assign,nonatomic,__weak) id<FlurryPreCachingDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FlurryPreCachingDelegatesMapManager * precachingDelegatesMapManager;              //@synthesize precachingDelegatesMapManager=_precachingDelegatesMapManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setup;
-(void)deRegisterPreCachingDelegate:(id)arg1 ;
-(BOOL)isAssetPreCached:(id)arg1 withResourceId:(id)arg2 withCBEmbedded:(BOOL)arg3 withAltCBKey:(id)arg4 withFileRemovalType:(id)arg5 ;
-(void)registerPreCachingDelegate:(id)arg1 assetURLPath:(id)arg2 ;
-(id)getResourceId:(id)arg1 ;
-(BOOL)isLoadPending:(id)arg1 ;
-(id)cachedAssetForPath:(id)arg1 withResourceId:(id)arg2 startDownloadIfNotCached:(BOOL)arg3 withCBEmbedded:(BOOL)arg4 altCBKey:(id)arg5 withexpiryTime:(double)arg6 withTags:(id)arg7 withDelegate:(id)arg8 ;
-(void)assetPreCachingDone:(id)arg1 ;
-(void)assetPreCachingFailed:(id)arg1 ;
-(void)assetPreCachingCancelled:(id)arg1 ;
-(NSMutableDictionary *)localAssetInfo;
-(id)cachedAssetForPath:(id)arg1 withexpiryTime:(double)arg2 withTags:(id)arg3 withDelegate:(id)arg4 ;
-(void)appWillTerminate:(id)arg1 ;
-(void)appWillBackground:(id)arg1 ;
-(void)appWillResume:(id)arg1 ;
-(void)loadOperationDidCancel:(id)arg1 ;
-(void)loadOperationDidFailLoading:(id)arg1 ;
-(void)loadOperationDidFinishLoading:(id)arg1 ;
-(NSString *)sdkAssetUrl;
-(void)setSdkAssetUrlUpdated:(BOOL)arg1 ;
-(void)setSdkAssetUrl:(NSString *)arg1 ;
-(void)setMaxAssetSize:(int)arg1 ;
-(BOOL)sdkAssetUrlUpdated;
-(void)setSdkAssetDictionary:(NSDictionary *)arg1 ;
-(void)setFileLoadOperations:(NSMutableDictionary *)arg1 ;
-(void)setHttpLoadOperations:(NSMutableDictionary *)arg1 ;
-(void)setPrecachingDelegatesMapManager:(FlurryPreCachingDelegatesMapManager *)arg1 ;
-(void)setLocalAssetInfo:(NSMutableDictionary *)arg1 ;
-(void)setDiskNotFree:(BOOL)arg1 ;
-(id)getCachedAssetPaths:(id)arg1 withResourceId:(id)arg2 removalType:(id)arg3 ;
-(void)deleteAssetForPath:(id)arg1 withResourceId:(id)arg2 ;
-(int)maxAssetSize;
-(void)writeAssetsInfoToDisk;
-(BOOL)isCachedFilesSizeInLimits;
-(void)removeOldestAsset;
-(void)loadAsset:(id)arg1 withPath:(id)arg2 withExpiryTime:(double)arg3 withCBEmbedded:(BOOL)arg4 altCBKey:(id)arg5 withTags:(id)arg6 withAbsolutePath:(id)arg7 withRelativePath:(id)arg8 removalType:(id)arg9 forDelegate:(id)arg10 ;
-(id)relativeAssetPathForAssetType:(id)arg1 withResourceId:(id)arg2 andFile:(id)arg3 ;
-(NSOperationQueue *)httpLoadOperationsQueue;
-(NSMutableDictionary *)httpLoadOperations;
-(NSOperationQueue *)fileLoadOperationsQueue;
-(void)saveAssetCachingInfo:(id)arg1 withStatus:(id)arg2 ;
-(NSMutableDictionary *)fileLoadOperations;
-(void)writeCachedAssetForPath:(id)arg1 data:(id)arg2 checkDir:(BOOL)arg3 cbKey:(id)arg4 ;
-(void)updateCBKeyForResource:(id)arg1 andCbKey:(id)arg2 ;
-(void)writeAssetInfoToDiskAtPath:(id)arg1 ;
-(unsigned long long)getDirectoryFileSize:(id)arg1 ;
-(void)removeExpiredAssets;
-(void)removeCacheInProgressAssets;
-(void)removeOldCachesDirectory;
-(FlurryPreCachingDelegatesMapManager *)precachingDelegatesMapManager;
-(id)cachedAssetForPath:(id)arg1 withResourceId:(id)arg2 withCBEmbedded:(BOOL)arg3 altCBKey:(id)arg4 withexpiryTime:(double)arg5 withTags:(id)arg6 withDelegate:(id)arg7 ;
-(void)writeCachedAssetForPath:(id)arg1 data:(id)arg2 cbKey:(id)arg3 ;
-(void)updateLocalAssetInfoForResource:(id)arg1 withKey:(id)arg2 andValue:(id)arg3 ;
-(BOOL)cachedAssetExistsInCachesDirForPath:(id)arg1 ;
-(id)cachedAssetCachedPathForPath:(id)arg1 ;
-(id)cacheBustForResource:(id)arg1 ;
-(id)getCachedAssetLocalCbKey:(id)arg1 ;
-(void)removeCachedassetForPath:(id)arg1 ;
-(void)setFileLoadOperationsQueue:(NSOperationQueue *)arg1 ;
-(void)setHttpLoadOperationsQueue:(NSOperationQueue *)arg1 ;
-(BOOL)diskNotFree;
-(NSDictionary *)sdkAssetDictionary;
-(void)setDelegate:(id<FlurryPreCachingDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FlurryPreCachingDelegate>)delegate;
-(void)cancelAllLoads;
-(void)registerForNotifications:(id)arg1 ;
-(void)setCacheSize:(int)arg1 ;
-(int)cacheSize;
@end


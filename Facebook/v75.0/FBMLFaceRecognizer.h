/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class FBMLFaceRecognizerConfig, SRDeviceAssetsLibrary, FBMLFaceBoxStore, FBDiskCache, NSHashTable, SRQueueDispatcher, NSMutableArray, NSMutableSet, FBTimer, NSDictionary, FBMLFaceRecognitionCache;

@interface FBMLFaceRecognizer : NSObject {

	FBMLFaceRecognizerConfig* _config;
	SRDeviceAssetsLibrary* _deviceAssetsLibrary;
	FBMLFaceBoxStore* _faceBoxStore;
	FBDiskCache* _diskCache;
	id<FBNetworkDispatch> _networkDispatcher;
	NSHashTable* _subscriptions;
	SRQueueDispatcher* _serialPerformer;
	NSMutableArray* _requests;
	NSMutableSet* _assetIdentifiersBeingProcessed;
	BOOL _isCacheDirty;
	BOOL _initialized;
	NSMutableArray* _initializationCallbacks;
	FBTimer* _cacheSaveTimer;
	NSDictionary* _errorByAssetIdentifier;
	FBMLFaceRecognitionCache* _cache;

}

@property (retain) FBMLFaceRecognitionCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (copy) NSDictionary * errorByAssetIdentifier;                                      //@synthesize errorByAssetIdentifier=_errorByAssetIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * recognitionResultSetByAssetIdentifier; 
-(void)unsubscribe:(id)arg1 ;
-(id)initWithDeviceAssetsLibrary:(id)arg1 faceBoxStore:(id)arg2 diskCache:(id)arg3 networkDispatcher:(id)arg4 config:(id)arg5 ;
-(void)_waitForInitialization:(/*^block*/id)arg1 ;
-(void)_saveIfNecessary;
-(void)_drainRequests;
-(id)subscribeListener:(id)arg1 performer:(id)arg2 ;
-(void)waitForAssetIdentifierToBeProcessed:(id)arg1 performer:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)uuidSetByAssetIdentifier;
-(void)_serviceRequest:(id)arg1 callbackPerformer:(id)arg2 callback:(/*^block*/id)arg3 ;
-(BOOL)_canServiceRequest:(id)arg1 ;
-(void)_queueRequest:(id)arg1 callbackPerformer:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_process;
-(void)_handleResult:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setErrorByAssetIdentifier:(NSDictionary *)arg1 ;
-(void)_markCacheDirty;
-(void)_notifyIdentifiersProcessed:(id)arg1 ;
-(void)_onCacheSaveTimer;
-(NSDictionary *)recognitionResultSetByAssetIdentifier;
-(NSDictionary *)errorByAssetIdentifier;
-(FBMLFaceRecognitionCache *)cache;
-(void)setCache:(FBMLFaceRecognitionCache *)arg1 ;
-(void)_loadFromDisk;
@end

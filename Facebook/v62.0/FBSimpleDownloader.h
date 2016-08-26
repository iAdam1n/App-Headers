/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>

@protocol FBSimpleDownloaderPerfLogger, OS_dispatch_queue;
@class FBUserSession, FBSimpleDownloaderConfig, NSMutableDictionary, FBDiskCache, NSObject, NSString;

@interface FBSimpleDownloader : NSObject <FBNetworkerRequestDelegate> {

	FBUserSession* _session;
	FBSimpleDownloaderConfig* _config;
	id<FBSimpleDownloaderPerfLogger> _logger;
	NSMutableDictionary* _inFlightFetches;
	FBDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 logger:(id)arg3 ;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cancelFetchWithHandle:(id)arg1 ;
-(void)fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_informClientForFetch:(id)arg1 diskCacheURL:(id)arg2 ;
-(void)_startSimpleDownloadForFetch:(id)arg1 ;
-(void)_fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_informClientAboutFailureForFetch:(id)arg1 ;
-(void)_handleDownloadedFileForFetch:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
@end

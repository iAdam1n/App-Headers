/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SASFileCacherDelegate.h>

@protocol SASCacheManagerDelegate;
@class NSOperationQueue, NSString, NSURL, NSOperation;

@interface SASCacheManager : NSObject <SASFileCacherDelegate> {

	NSOperationQueue* _fileCacherOperationQueue;
	NSString* _localBasePath;
	NSURL* _indexURL;
	BOOL _isCancelled;
	NSString* _manifestURL;
	BOOL _isOperationCountObserverRegistered;
	NSOperation*<SASCacheManagerDelegate> _delegate;
	long long _numberOfFiles;
	long long _currentStep;

}

@property (assign,nonatomic,__weak) NSOperation*<SASCacheManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long numberOfFiles;                                                      //@synthesize numberOfFiles=_numberOfFiles - In the implementation block
@property (assign) long long currentStep;                                                        //@synthesize currentStep=_currentStep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeOperationsDelegates;
-(void)removeOperationCountObserver;
-(void)handleCachingFailedWithError:(id)arg1 ;
-(void)cancelFileCaching;
-(long long)numberOfFiles;
-(void)setNumberOfFiles:(long long)arg1 ;
-(void)addFileCacherOperationToQueueForFilePath:(id)arg1 relative:(BOOL)arg2 ;
-(void)cacheManifest;
-(BOOL)cleanupManifestAttributeFromIndexFile;
-(void)manageMRAIDBridge;
-(void)cacheResources;
-(void)addOperationCountObserver;
-(void)handleCachingFinished;
-(id)errorWithReason:(id)arg1 errorCode:(long long)arg2 underlyingError:(id)arg3 ;
-(BOOL)replaceMRAIDBridgeInIndexFileWithError:(id*)arg1 ;
-(void)downloadMRAIDBridge;
-(void)setCurrentStep:(long long)arg1 ;
-(id)manifestURLFromIndexFileWithError:(id*)arg1 ;
-(id)filesURLsFromManifestFileOrError:(id*)arg1 ;
-(id)manifestContentOrError:(id*)arg1 ;
-(void)operationDidFinishCachingFile:(id)arg1 ;
-(id)indexFileContentWithError:(id*)arg1 ;
-(id)localIndexFilePath;
-(id)parseURLsFromStringManifest:(id)arg1 ;
-(void)operation:(id)arg1 didFailCachingFileWithError:(id)arg2 ;
-(id)initWithBaseInsertionPath:(id)arg1 indexFileURL:(id)arg2 ;
-(BOOL)isOperationCountObserverRegistered;
-(void)cacheCreative;
-(void)setDelegate:(NSOperation*<SASCacheManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSOperation*<SASCacheManagerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)currentStep;
-(id)errorDescription;
@end


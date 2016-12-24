/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoUploadSessionDelegate.h>

@protocol FBVideoUploadHandlerDelegate, FBNetworkDispatch, FBKeyValueObjectStore, FBPersistentKeyValueStoreProtocol, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface FBVideoUploadHandler : NSObject <FBVideoUploadSessionDelegate> {

	NSMutableArray* _uploadSessions;
	id<FBVideoUploadHandlerDelegate> _delegate;
	id<FBNetworkDispatch> _networkDispatcher;
	id<FBKeyValueObjectStore> _objectStoreForCache;
	id<FBPersistentKeyValueStoreProtocol> _pkvStore;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoUploadSessionDidStart:(id)arg1 ;
-(void)videoUploadSessionDidFinish:(id)arg1 fbid:(id)arg2 uploadSessionID:(id)arg3 ;
-(void)videoUploadSessionDidCancel:(id)arg1 ;
-(void)videoUploadSession:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoUploadSession:(id)arg1 didUpdateProgressTo:(double)arg2 ;
-(id)_sessionWithWaterfallID:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 kvObjectStore:(id)arg2 pkvStore:(id)arg3 networkDispatcher:(id)arg4 callbackQueue:(id)arg5 ;
-(void)startUploadWithWaterfallID:(id)arg1 uploadConfig:(id)arg2 estimatedFileSize:(unsigned long long)arg3 loggingInfo:(id)arg4 ;
-(void)publishAfterUploadForUploadItem:(id)arg1 ;
-(void)cancelUploadWithWaterfallID:(id)arg1 ;
-(BOOL)addSegment:(id)arg1 toSessionWithWaterfallID:(id)arg2 ;
-(void)didFinishAddingSegment:(id)arg1 ;
@end

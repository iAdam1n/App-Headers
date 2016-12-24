/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPinnedThreadsRestoring.h>

@protocol OS_dispatch_queue;
@class MNThreadStore, NSObject, NSArray, NSString;

@interface FBMPinnedThreadRestorer : NSObject <FBMPinnedThreadsRestoring> {

	MNThreadStore* _threadStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _pendingRequestPinnedGroupInfos;
	BOOL _threadStoreIsStarted;
	/*^block*/id _failureBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _successBlock;
	unsigned long long _pendingRequestId;

}

@property (assign,nonatomic) unsigned long long pendingRequestId;              //@synthesize pendingRequestId=_pendingRequestId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadStore:(id)arg1 queue:(id)arg2 ;
-(void)restorePinnedThreadSummaries:(id)arg1 progressBlock:(/*^block*/id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_handleSuccess:(id)arg1 ;
-(void)_handleFailure:(id)arg1 ;
-(void)_handleProgress:(id)arg1 longOperationBegan:(BOOL)arg2 ;
-(void)_startThreadStore;
-(void)_cancelPendingRequestAndFailIfCancelled:(BOOL)arg1 ;
-(id)_requestForPinnedGroupInfos:(id)arg1 ;
-(unsigned long long)pendingRequestId;
-(void)setPendingRequestId:(unsigned long long)arg1 ;
-(void)dealloc;
@end

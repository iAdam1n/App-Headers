/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNThreadSummaryRequestListener.h>
#import <Facebook/MNThreadMessagingDataRequestListener.h>
#import <Facebook/MNThreadListRequestListener.h>
#import <Facebook/MNJointThreadListRequestListening.h>
#import <Facebook/MNSecureThreadRequestListener.h>
#import <Facebook/MNBatchSecureAndSyncedThreadRequestListening.h>

@protocol MNThreadRequestRunning, MNThreadListRequestRunning, MNJointThreadListRequestRunning;
@class MNAsyncOperationTracker, MNThreadRequestListenerFactory, NSString;

@interface MNThreadRequestCoordinator : NSObject <MNThreadSummaryRequestListener, MNThreadMessagingDataRequestListener, MNThreadListRequestListener, MNJointThreadListRequestListening, MNSecureThreadRequestListener, MNBatchSecureAndSyncedThreadRequestListening> {

	MNAsyncOperationTracker* _requestTracker;
	id<MNThreadRequestRunning> _requestRunner;
	id<MNThreadListRequestRunning> _threadListRequestRunner;
	id<MNJointThreadListRequestRunning> _jointThreadListRequestHandler;
	MNThreadRequestListenerFactory* _requestListenerFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleBatchThreadSummaryRequest:(id)arg1 ;
-(unsigned long long)handleSingleThreadSummaryRequest:(id)arg1 ;
-(unsigned long long)handleSingleThreadMessagingDataRequest:(id)arg1 ;
-(unsigned long long)handleBatchThreadMessagingDataRequest:(id)arg1 ;
-(unsigned long long)_handleThreadSummaryRequest:(id)arg1 ;
-(unsigned long long)_handleThreadMessagingDataRequest:(id)arg1 ;
-(unsigned long long)_handleBatchSecureThreadRequest:(id)arg1 ;
-(void)_broadcastSingleThreadSummaryRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastBatchThreadSummaryRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastSingleThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastBatchThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastSingleThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_broadcastBatchThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_broadcastSingleThreadMessagingDataRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastBatchThreadMessagingDataRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastSingleThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastBatchThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastSingleThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_broadcastBatchThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_handleThreadSummaryRequestFilter:(id)arg1 jobId:(unsigned long long)arg2 configuration:(id)arg3 ;
-(void)batchThreadSummaryRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchThreadSummaryRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchThreadSummaryRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)batchThreadDataRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchThreadDataRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchThreadDataRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)threadListRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)threadListRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)threadListRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)jointThreadListRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)jointThreadListRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)jointThreadListRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)batchSecureThreadRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchSecureThreadRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchSecureThreadRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)batchSecureAndSyncedThreadRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchSecureAndSyncedThreadRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchSecureAndSyncedThreadRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(id)initWithThreadRequestHandler:(id)arg1 threadListRequestHandler:(id)arg2 jointThreadListRequestHandler:(id)arg3 requestTracker:(id)arg4 listenerFactory:(id)arg5 ;
-(unsigned long long)handleBatchSecureThreadRequest:(id)arg1 ;
-(unsigned long long)handleBatchSecureAndSyncedThreadRequest:(id)arg1 ;
-(unsigned long long)handleThreadListRequest:(id)arg1 ;
-(unsigned long long)handleSecureAndSyncedThreadListRequest:(id)arg1 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

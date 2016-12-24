/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNWatchDataWriter.h>
#import <Messenger/MNThreadMessageSubscribing.h>
#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/FBMMessageSendListening.h>

@class MNWatchConnectivityManager, MNWatchThreadViewModelGenerator, FBTimeThrottler, MNWThreadViewModel, FBMSyncedThreadKey, NSString;

@interface MNWatchThreadViewModelWriter : NSObject <MNWatchDataWriter, MNThreadMessageSubscribing, MNThreadSummarySubscribing, FBMMessageSendListening> {

	MNWatchConnectivityManager* _watchConnectivityManager;
	MNWatchThreadViewModelGenerator* _generator;
	FBTimeThrottler* _writeThrottler;
	MNWThreadViewModel* _lastSentThreadViewModel;
	BOOL _enabled;
	BOOL _dirty;
	FBMSyncedThreadKey* _threadKey;

}

@property (nonatomic,copy) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                //@synthesize dirty=_dirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
-(void)setThreadKey:(FBMSyncedThreadKey *)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)flushForced:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithThreadKey:(id)arg1 watchConnectivityManager:(id)arg2 threadViewModelGenerator:(id)arg3 ;
-(void)_writeIfNeeded;
-(void)_sendThreadViewModel:(id)arg1 ;
-(void)_didUpdateThreadWithKey:(id)arg1 ;
-(void)_didUpdateThreadForOutgoingMessageWithTarget:(id)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(FBMSyncedThreadKey *)threadKey;
@end

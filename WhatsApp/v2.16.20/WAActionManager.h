/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSString, NSPort, NSMutableDictionary, NSLock, WATriggeredOperation, WAFinishOperation;

@interface WAActionManager : NSObject {

	NSOperationQueue* _queue;
	unsigned long long _options;
	AB _canceling;
	AB _finishing;
	NSString* _temporaryFilePath;
	AQ _temporaryFileIndex;
	NSPort* _mainThreadWaitPort;
	NSMutableDictionary* _phaseOperations;
	NSLock* _updatePhaseLock;
	unsigned long long _latestPhase;
	WATriggeredOperation* _wait;
	WAFinishOperation* _finish;
	unsigned long long _phase;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (readonly) BOOL canceled; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) unsigned long long maximumPhase; 
@property (nonatomic,readonly) unsigned long long phase;                     //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) float progress; 
-(BOOL)checkOption:(unsigned long long)arg1 ;
-(void)cancelWithReason:(unsigned long long)arg1 ;
-(void)setOperations:(id)arg1 forPhase:(unsigned long long)arg2 ;
-(unsigned long long)maximumPhase;
-(void)manuallyUpdatePhaseTo:(unsigned long long)arg1 ;
-(void)runBlockOnMainThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(id)uniqueTemporaryPath;
-(void)completeWithReason:(unsigned long long)arg1 ;
-(void)scheduleTemporaryDirectoryRemoval;
-(void)runMainThreadRunLoop;
-(void)incrementPhase;
-(void)updatePhase;
-(float)progressForOperations:(id)arg1 ;
-(void)waitForCompletion;
-(id)init;
-(void)dealloc;
-(void)setPhase:(unsigned long long)arg1 ;
-(unsigned long long)phase;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(void)addOperation:(id)arg1 ;
-(void)finish;
-(NSString *)errorDomain;
-(BOOL)canceled;
-(id)errorForCode:(unsigned long long)arg1 ;
-(BOOL)shouldFinish;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)addOperations:(id)arg1 ;
-(BOOL)shouldCancel;
@end

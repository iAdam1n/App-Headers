/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/ASWatcher.h>

@class TGWorkerPool, TGWorkerTask, SThreadPoolTask, NSString, ASHandle;

@interface TGMediaPreviewTask : NSObject <ASWatcher> {

	BOOL _idCancelled;
	TGWorkerPool* _workerPool;
	TGWorkerTask* _workerTask;
	SThreadPoolTask* _task;
	NSString* _uri;
	NSString* _targetFilePath;
	ASHandle* _actionHandle;
	/*^block*/id _completion;
	/*^block*/id _completionWithData;
	/*^block*/id _completionWithImage;
	/*^block*/id _progress;

}

@property (nonatomic,retain) ASHandle * actionHandle;               //@synthesize actionHandle=_actionHandle - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id completionWithData;                   //@synthesize completionWithData=_completionWithData - In the implementation block
@property (nonatomic,copy) id completionWithImage;                  //@synthesize completionWithImage=_completionWithImage - In the implementation block
@property (nonatomic,copy) id progress;                             //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3 ;
-(void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(void)executeWithWorkerTask:(id)arg1 workerPool:(id)arg2 ;
-(void)executeWithMapSnapshotOptions:(id)arg1 completionWithImage:(/*^block*/id)arg2 workerTask:(id)arg3 ;
-(void)executeWithTargetFilePath:(id)arg1 uri:(id)arg2 completion:(/*^block*/id)arg3 workerTask:(id)arg4 ;
-(void)executeWithWorkerTask:(id)arg1 threadPool:(id)arg2 ;
-(void)executeMultipartWithImageUri:(id)arg1 targetFilePath:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)executeWithTargetFilePath:(id)arg1 uri:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 workerTask:(id)arg5 ;
-(void)executeWithTargetFilePath:(id)arg1 document:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 workerTask:(id)arg5 ;
-(void)executeTempDownloadWithTargetFilePath:(id)arg1 uri:(id)arg2 progress:(/*^block*/id)arg3 completionWithData:(/*^block*/id)arg4 workerTask:(id)arg5 ;
-(id)completionWithData;
-(void)setCompletionWithData:(id)arg1 ;
-(id)completionWithImage;
-(void)setCompletionWithImage:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setProgress:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)progress;
@end

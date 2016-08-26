/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageProcessingRequestProtocol.h>

@class FBImageProcessingSchedulingContext, NSString;

@interface FBImageProcessingRequest : NSObject <FBImageProcessingRequestProtocol> {

	recursive_mutex _lock;
	BOOL _canCancelRequestIfNeeded;
	BOOL _canExecuteInBackground;
	unsigned long long _status;
	double _requestTime;
	FBImageProcessingSchedulingContext* _schedulingContext;
	/*^block*/id _progressBlock;
	/*^block*/id _cancelBlock;
	FBImageProcessingRequest* _topRequester;
	FBImageProcessingRequest* _previousRequester;
	FBImageProcessingRequest* _nextRequester;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id progressBlock;                                                      //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                        //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,nonatomic,__weak) FBImageProcessingRequest * topRequester;                      //@synthesize topRequester=_topRequester - In the implementation block
@property (assign,nonatomic,__weak) FBImageProcessingRequest * previousRequester;                 //@synthesize previousRequester=_previousRequester - In the implementation block
@property (nonatomic,retain) FBImageProcessingRequest * nextRequester;                            //@synthesize nextRequester=_nextRequester - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) FBImageProcessingSchedulingContext * schedulingContext;              //@synthesize schedulingContext=_schedulingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long status;                                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double requestTime;                                                  //@synthesize requestTime=_requestTime - In the implementation block
@property (assign,nonatomic) BOOL canCancelRequestIfNeeded;                                       //@synthesize canCancelRequestIfNeeded=_canCancelRequestIfNeeded - In the implementation block
@property (assign,nonatomic) BOOL canExecuteInBackground;                                         //@synthesize canExecuteInBackground=_canExecuteInBackground - In the implementation block
-(void)setSchedulingContext:(FBImageProcessingSchedulingContext *)arg1 ;
-(void)setCanCancelRequestIfNeeded:(BOOL)arg1 ;
-(BOOL)canCancelRequestIfNeeded;
-(void)addRequester:(id)arg1 ;
-(BOOL)canExecuteInBackground;
-(void)setCanExecuteInBackground:(BOOL)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 reportProgress:(/*^block*/id)arg2 cancel:(/*^block*/id)arg3 ;
-(FBImageProcessingRequest *)nextRequester;
-(void)setTopRequester:(FBImageProcessingRequest *)arg1 ;
-(FBImageProcessingRequest *)previousRequester;
-(void)setNextRequester:(FBImageProcessingRequest *)arg1 ;
-(void)setPreviousRequester:(FBImageProcessingRequest *)arg1 ;
-(FBImageProcessingRequest *)topRequester;
-(FBImageProcessingSchedulingContext *)schedulingContext;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)clear;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)finish;
-(double)requestTime;
-(void)setRequestTime:(double)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(void)reportProgress;
@end

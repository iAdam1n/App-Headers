/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/AFHTTPClient.h>

@protocol MTHttpWorkerDelegate;
@class MTTimer, AFHTTPRequestOperation;

@interface MTHttpWorker : AFHTTPClient {

	MTTimer* _timeoutTimer;
	AFHTTPRequestOperation* _operation;
	BOOL _notifiedDelegateAboutConnection;
	BOOL _isConnected;
	BOOL _stopped;
	double _timeout;
	BOOL _performsLongPolling;
	id _internalId;
	id<MTHttpWorkerDelegate> _delegate;

}

@property (nonatomic,readonly) id internalId;                                       //@synthesize internalId=_internalId - In the implementation block
@property (assign,nonatomic,__weak) id<MTHttpWorkerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL performsLongPolling;                            //@synthesize performsLongPolling=_performsLongPolling - In the implementation block
+(id)httpWorkerProcessingQueue;
-(id)internalId;
-(id)initWithDelegate:(id)arg1 address:(id)arg2 payloadData:(id)arg3 performsLongPolling:(BOOL)arg4 ;
-(void)requestTimeout;
-(void)requestCompleted:(id)arg1 error:(id)arg2 ;
-(void)requestUploadProgress;
-(void)terminateWithFailure;
-(BOOL)performsLongPolling;
-(void)setDelegate:(id<MTHttpWorkerDelegate>)arg1 ;
-(void)dealloc;
-(id<MTHttpWorkerDelegate>)delegate;
-(void)stop;
-(BOOL)isConnected;
-(void)cancelTimer;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAAsynchronousOperation.h>
#import <WhatsApp/WAURLSessionDownloadTaskHandler.h>

@protocol WAURLSessionDownloadTaskHandlerOS6Delegate;
@class NSURLRequest, NSURLResponse, NSURLConnection, NSHTTPURLResponse, NSFileHandle, NSString, WAURLTaskData, WAURLSessionTask;

@interface WAURLSessionDownloadTaskHandlerOS6 : WAAsynchronousOperation <WAURLSessionDownloadTaskHandler> {

	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSFileHandle* _outputFile;
	NSString* _outputFilePath;
	/*^block*/id _completionHandler;
	NSString* _etagForResume;
	WAURLTaskData* _wa_taskData;
	long long _countOfBytesExpectedToReceive;
	WAURLSessionTask* _wa_containerTask;
	id<WAURLSessionDownloadTaskHandlerOS6Delegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAURLSessionDownloadTaskHandlerOS6Delegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) WAURLTaskData * wa_taskData;                                                   //@synthesize wa_taskData=_wa_taskData - In the implementation block
@property (nonatomic,retain) WAURLSessionTask * wa_containerTask;                                         //@synthesize wa_containerTask=_wa_containerTask - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long countOfBytesExpectedToReceive;                                   //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (nonatomic,readonly) long long countOfBytesReceived; 
@property (nonatomic,readonly) NSURLRequest * currentRequest; 
@property (nonatomic,readonly) NSURLResponse * response; 
+(void)suspendAll;
+(void)resumeAll;
+(void)initialize;
-(void)performTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didFinishDownloadWithError:(id)arg1 ;
-(void)setWa_taskData:(WAURLTaskData *)arg1 ;
-(id)initWithTaskData:(id)arg1 ;
-(WAURLTaskData *)wa_taskData;
-(WAURLSessionTask *)wa_containerTask;
-(void)setWa_containerTask:(WAURLSessionTask *)arg1 ;
-(void)cancelTcpConnectionTimeout;
-(void)handleTcpConnectionTimeout;
-(long long)countOfBytesExpectedToReceive;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<WAURLSessionDownloadTaskHandlerOS6Delegate>)arg1 ;
-(id<WAURLSessionDownloadTaskHandlerOS6Delegate>)delegate;
-(long long)state;
-(void)suspend;
-(void)resume;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSURLRequest *)currentRequest;
-(long long)countOfBytesReceived;
@end


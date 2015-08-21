/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSSet, NSURLConnection, NSURLRequest, NSHTTPURLResponse, NSError, NSData, NSMutableData, NSOutputStream, NSString;

@interface MASTRequestOperation : NSOperation {

	NSSet* _runLoopModes;
	NSURLConnection* _connection;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSError* _error;
	NSData* _responseBody;
	int _totalBytesRead;
	NSMutableData* _dataAccumulator;
	NSOutputStream* _outputStream;
	int _state;
	char _cancelled;
	id connectionDelegate;
	/*^block*/id _uploadProgress;
	/*^block*/id _downloadProgress;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSSet * runLoopModes;                           //@synthesize runLoopModes=_runLoopModes - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id connectionDelegate; 
@property (nonatomic,retain) NSData * responseBody;                          //@synthesize responseBody=_responseBody - In the implementation block
@property (readonly) NSString * responseString; 
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int totalBytesRead;                             //@synthesize totalBytesRead=_totalBytesRead - In the implementation block
@property (nonatomic,retain) NSMutableData * dataAccumulator;                //@synthesize dataAccumulator=_dataAccumulator - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                  //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,copy) id uploadProgress;                                //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (nonatomic,copy) id downloadProgress;                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
+(id)operationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)networkRequestThreadEntryPoint:(id)arg1 ;
+(id)networkRequestThread;
+(id)streamingOperationWithRequest:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setUploadProgress:(id)arg1 ;
-(void)operationDidStart;
-(void)setDataAccumulator:(NSMutableData *)arg1 ;
-(int)totalBytesRead;
-(void)setTotalBytesRead:(int)arg1 ;
-(NSMutableData *)dataAccumulator;
-(void)setResponseBody:(NSData *)arg1 ;
-(id)uploadProgress;
-(NSString *)responseString;
-(char)isReady;
-(NSSet *)runLoopModes;
-(void)setRunLoopModes:(NSSet *)arg1 ;
-(NSData *)responseBody;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSURLRequest *)request;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)start;
-(NSHTTPURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(char)isConcurrent;
-(NSError *)error;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setUploadProgressBlock:(/*^block*/id)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setConnectionDelegate:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSOutputStream *)outputStream;
-(id)connectionDelegate;
-(id)downloadProgress;
-(void)setDownloadProgress:(id)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end


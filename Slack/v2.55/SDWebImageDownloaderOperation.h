/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <Slack/SDWebImageOperation.h>

@class NSURLRequest, NSURLCredential, NSURLResponse, NSMutableData, NSURLConnection, NSThread, NSString;

@interface SDWebImageDownloaderOperation : NSOperation <NSURLConnectionDataDelegate, SDWebImageOperation> {

	unsigned long long width;
	unsigned long long height;
	long long orientation;
	BOOL responseFromCached;
	BOOL _executing;
	BOOL _finished;
	BOOL _shouldDecompressImages;
	BOOL _shouldUseCredentialStorage;
	NSURLRequest* _request;
	NSURLCredential* _credential;
	unsigned long long _options;
	long long _expectedSize;
	NSURLResponse* _response;
	/*^block*/id _progressBlock;
	/*^block*/id _completedBlock;
	/*^block*/id _cancelBlock;
	NSMutableData* _imageData;
	NSURLConnection* _connection;
	NSThread* _thread;
	unsigned long long _backgroundTaskId;

}

@property (nonatomic,readonly) NSURLRequest * request;                         //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL shouldDecompressImages;                      //@synthesize shouldDecompressImages=_shouldDecompressImages - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCredentialStorage;                  //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                     //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long expectedSize;                           //@synthesize expectedSize=_expectedSize - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                         //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) id progressBlock;                                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completedBlock;                                  //@synthesize completedBlock=_completedBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                     //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSMutableData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (retain) NSThread * thread;                                          //@synthesize thread=_thread - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskId;              //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)orientationFromPropertyValue:(long long)arg1 ;
-(void)setShouldDecompressImages:(BOOL)arg1 ;
-(void)setShouldUseCredentialStorage:(BOOL)arg1 ;
-(BOOL)shouldUseCredentialStorage;
-(id)scaledImageForKey:(id)arg1 image:(id)arg2 ;
-(BOOL)shouldDecompressImages;
-(id)initWithRequest:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 completed:(/*^block*/id)arg4 cancelled:(/*^block*/id)arg5 ;
-(BOOL)shouldContinueWhenAppEntersBackground;
-(unsigned long long)backgroundTaskId;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(id)completedBlock;
-(void)cancelInternalAndStop;
-(void)cancelInternal;
-(void)setCompletedBlock:(id)arg1 ;
-(void)setExpectedSize:(long long)arg1 ;
-(BOOL)isConcurrent;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(NSMutableData *)imageData;
-(void)cancel;
-(NSURLRequest *)request;
-(void)reset;
-(void)start;
-(void)done;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(unsigned long long)options;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setImageData:(NSMutableData *)arg1 ;
-(id)cancelBlock;
-(void)setExecuting:(BOOL)arg1 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)setThread:(NSThread *)arg1 ;
-(NSThread *)thread;
-(NSURLCredential *)credential;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(long long)expectedSize;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BITPersistence, NSObject, NSOperationQueue, NSString, NSURL;

@interface BITSender : NSObject {

	unsigned long long _runningRequestsCount;
	BITPersistence* _persistence;
	NSObject*<OS_dispatch_queue> _requestsCountQueue;
	NSObject*<OS_dispatch_queue> _senderTasksQueue;
	NSOperationQueue* _operationQueue;
	NSString* _endpointPath;
	unsigned long long _maxRequestCount;
	NSURL* _serverURL;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestsCountQueue;              //@synthesize requestsCountQueue=_requestsCountQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> senderTasksQueue;                //@synthesize senderTasksQueue=_senderTasksQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSString * endpointPath;                                        //@synthesize endpointPath=_endpointPath - In the implementation block
@property (assign,nonatomic) unsigned long long maxRequestCount;                           //@synthesize maxRequestCount=_maxRequestCount - In the implementation block
@property (assign,nonatomic) unsigned long long runningRequestsCount;                      //@synthesize runningRequestsCount=_runningRequestsCount - In the implementation block
@property (nonatomic,readonly) NSURL * serverURL;                                          //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) BITPersistence * persistence;                               //@synthesize persistence=_persistence - In the implementation block
-(void)registerObservers;
-(void)sendSavedDataAsync;
-(NSObject*<OS_dispatch_queue>)senderTasksQueue;
-(void)sendSavedData;
-(unsigned long long)runningRequestsCount;
-(void)setRunningRequestsCount:(unsigned long long)arg1 ;
-(void)sendData:(id)arg1 withFilePath:(id)arg2 ;
-(id)requestForData:(id)arg1 ;
-(void)sendRequest:(id)arg1 filePath:(id)arg2 ;
-(void)sendUsingURLSessionWithRequest:(id)arg1 filePath:(id)arg2 ;
-(void)sendUsingURLConnectionWithRequest:(id)arg1 filePath:(id)arg2 ;
-(void)handleResponseWithStatusCode:(long long)arg1 responseData:(id)arg2 filePath:(id)arg3 error:(id)arg4 ;
-(void)resumeSessionDataTask:(id)arg1 ;
-(BOOL)shouldDeleteDataWithStatusCode:(long long)arg1 ;
-(id)initWithPersistence:(id)arg1 serverURL:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)requestsCountQueue;
-(void)setRequestsCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSenderTasksQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)endpointPath;
-(void)setEndpointPath:(NSString *)arg1 ;
-(unsigned long long)maxRequestCount;
-(void)setMaxRequestCount:(unsigned long long)arg1 ;
-(BOOL)isURLSessionSupported;
-(NSURL *)serverURL;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BITPersistence *)persistence;
@end

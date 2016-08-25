/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, GTMFetcherAuthorizationProtocol, GTMSessionFetcherServiceProtocol;
@class NSMutableURLRequest, NSURLSession, NSURLSessionConfiguration, NSURLSessionTask, NSString, NSURLResponse, NSMutableData, NSError, NSData, NSURL, NSURLCredential, NSMutableDictionary, NSObject, NSOperationQueue, NSTimer, NSDate, NSDictionary, NSArray, NSHTTPCookieStorage, GSDK_GTMSessionUploadFetcher;

@interface GSDK_GTMSessionFetcher : NSObject <NSURLSessionDelegate> {

	NSMutableURLRequest* _request;
	NSURLSession* _session;
	BOOL _shouldInvalidateSession;
	NSURLSession* _sessionNeedingInvalidation;
	NSURLSessionConfiguration* _configuration;
	NSURLSessionTask* _sessionTask;
	NSString* _taskDescription;
	float _taskPriority;
	NSURLResponse* _response;
	NSString* _sessionIdentifier;
	BOOL _wasCreatedFromBackgroundSession;
	BOOL _didCreateSessionIdentifier;
	NSString* _sessionIdentifierUUID;
	BOOL _userRequestedBackgroundSession;
	BOOL _usingBackgroundSession;
	NSMutableData* _downloadedData;
	NSError* _downloadFinishedError;
	NSData* _downloadResumeData;
	NSURL* _destinationFileURL;
	long long _downloadedLength;
	NSURLCredential* _credential;
	NSURLCredential* _proxyCredential;
	BOOL _isStopNotificationNeeded;
	BOOL _isUsingTestBlock;
	id _userData;
	NSMutableDictionary* _properties;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _callbackGroup;
	NSOperationQueue* _delegateQueue;
	id<GTMFetcherAuthorizationProtocol> _authorizer;
	id<GTMSessionFetcherServiceProtocol> _service;
	NSString* _serviceHost;
	long long _servicePriority;
	BOOL _userStoppedFetching;
	BOOL _isRetryEnabled;
	NSTimer* _retryTimer;
	unsigned long long _retryCount;
	double _maxRetryInterval;
	double _minRetryInterval;
	double _retryFactor;
	double _lastRetryInterval;
	NSDate* _initialBeginFetchDate;
	NSDate* _initialRequestDate;
	BOOL _hasAttemptedAuthRefresh;
	NSString* _comment;
	NSString* _log;
	NSMutableData* _loggedStreamData;
	NSURL* _redirectedFromURL;
	NSString* _logRequestBody;
	NSString* _logResponseBody;
	BOOL _hasLoggedError;
	BOOL _deferResponseBodyLogging;
	BOOL _canShareSession;
	BOOL _useUploadTask;
	BOOL _allowLocalhostRequest;
	BOOL _allowInvalidServerCertificates;
	/*^block*/id _configurationBlock;
	NSDictionary* _sessionUserInfo;
	/*^block*/id _completionHandler;
	NSData* _bodyData;
	NSURL* _bodyFileURL;
	long long _bodyLength;
	/*^block*/id _bodyStreamProvider;
	/*^block*/id _accumulateDataBlock;
	/*^block*/id _receivedProgressBlock;
	/*^block*/id _downloadProgressBlock;
	/*^block*/id _resumeDataBlock;
	/*^block*/id _didReceiveResponseBlock;
	/*^block*/id _willRedirectBlock;
	/*^block*/id _sendProgressBlock;
	/*^block*/id _willCacheURLResponseBlock;
	/*^block*/id _retryBlock;
	NSArray* _allowedInsecureSchemes;
	NSHTTPCookieStorage* _cookieStorage;
	/*^block*/id _testBlock;
	unsigned long long _backgroundTaskIdentifier;

}

@property (readonly) GSDK_GTMSessionUploadFetcher * parentUploadFetcher; 
@property (retain) NSMutableURLRequest * mutableRequest;                              //@synthesize request=_request - In the implementation block
@property (retain) NSData * downloadResumeData;                                       //@synthesize downloadResumeData=_downloadResumeData - In the implementation block
@property (retain) NSURLSessionConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (copy) id configurationBlock;                                               //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (retain) NSURLSession * session; 
@property (readonly) NSURLSessionTask * sessionTask;                                  //@synthesize sessionTask=_sessionTask - In the implementation block
@property (readonly) NSString * sessionIdentifier; 
@property (readonly) BOOL wasCreatedFromBackgroundSession;                            //@synthesize wasCreatedFromBackgroundSession=_wasCreatedFromBackgroundSession - In the implementation block
@property (retain) NSDictionary * sessionUserInfo;                                    //@synthesize sessionUserInfo=_sessionUserInfo - In the implementation block
@property (copy) NSString * taskDescription;                                          //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) float taskPriority;                                                //@synthesize taskPriority=_taskPriority - In the implementation block
@property (assign) BOOL useBackgroundSession;                                         //@synthesize userRequestedBackgroundSession=_userRequestedBackgroundSession - In the implementation block
@property (getter=isUsingBackgroundSession) BOOL usingBackgroundSession;              //@synthesize usingBackgroundSession=_usingBackgroundSession - In the implementation block
@property (assign) BOOL useUploadTask;                                                //@synthesize useUploadTask=_useUploadTask - In the implementation block
@property (readonly) BOOL canShareSession;                                            //@synthesize canShareSession=_canShareSession - In the implementation block
@property (copy) NSArray * allowedInsecureSchemes;                                    //@synthesize allowedInsecureSchemes=_allowedInsecureSchemes - In the implementation block
@property (assign) BOOL allowLocalhostRequest;                                        //@synthesize allowLocalhostRequest=_allowLocalhostRequest - In the implementation block
@property (assign) BOOL allowInvalidServerCertificates;                               //@synthesize allowInvalidServerCertificates=_allowInvalidServerCertificates - In the implementation block
@property (retain) NSHTTPCookieStorage * cookieStorage;                               //@synthesize cookieStorage=_cookieStorage - In the implementation block
@property (retain) NSURLCredential * credential;                                      //@synthesize credential=_credential - In the implementation block
@property (retain) NSURLCredential * proxyCredential;                                 //@synthesize proxyCredential=_proxyCredential - In the implementation block
@property (retain) NSData * bodyData;                                                 //@synthesize bodyData=_bodyData - In the implementation block
@property (retain) NSURL * bodyFileURL;                                               //@synthesize bodyFileURL=_bodyFileURL - In the implementation block
@property (readonly) long long bodyLength;                                            //@synthesize bodyLength=_bodyLength - In the implementation block
@property (copy) id bodyStreamProvider;                                               //@synthesize bodyStreamProvider=_bodyStreamProvider - In the implementation block
@property (retain) id<GTMFetcherAuthorizationProtocol> authorizer;                    //@synthesize authorizer=_authorizer - In the implementation block
@property (retain) id<GTMSessionFetcherServiceProtocol> service;                      //@synthesize service=_service - In the implementation block
@property (copy) NSString * serviceHost;                                              //@synthesize serviceHost=_serviceHost - In the implementation block
@property (assign) long long servicePriority;                                         //@synthesize servicePriority=_servicePriority - In the implementation block
@property (copy) id didReceiveResponseBlock;                                          //@synthesize didReceiveResponseBlock=_didReceiveResponseBlock - In the implementation block
@property (copy) id willRedirectBlock;                                                //@synthesize willRedirectBlock=_willRedirectBlock - In the implementation block
@property (copy) id sendProgressBlock;                                                //@synthesize sendProgressBlock=_sendProgressBlock - In the implementation block
@property (copy) id accumulateDataBlock;                                              //@synthesize accumulateDataBlock=_accumulateDataBlock - In the implementation block
@property (copy) id receivedProgressBlock;                                            //@synthesize receivedProgressBlock=_receivedProgressBlock - In the implementation block
@property (copy) id downloadProgressBlock;                                            //@synthesize downloadProgressBlock=_downloadProgressBlock - In the implementation block
@property (copy) id willCacheURLResponseBlock;                                        //@synthesize willCacheURLResponseBlock=_willCacheURLResponseBlock - In the implementation block
@property (getter=isRetryEnabled) BOOL retryEnabled; 
@property (copy) id retryBlock;                                                       //@synthesize retryBlock=_retryBlock - In the implementation block
@property (assign) double maxRetryInterval; 
@property (assign) double minRetryInterval; 
@property (assign) double retryFactor;                                                //@synthesize retryFactor=_retryFactor - In the implementation block
@property (readonly) unsigned long long retryCount; 
@property (readonly) double nextRetryInterval; 
@property (getter=isFetching,readonly) BOOL fetching; 
@property (copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) id resumeDataBlock;                                                  //@synthesize resumeDataBlock=_resumeDataBlock - In the implementation block
@property (readonly) long long statusCode; 
@property (readonly) NSDictionary * responseHeaders; 
@property (readonly) NSURLResponse * response; 
@property (readonly) long long downloadedLength;                                      //@synthesize downloadedLength=_downloadedLength - In the implementation block
@property (retain) NSData * downloadedData; 
@property (retain) NSURL * destinationFileURL; 
@property (readonly) NSDate * initialBeginFetchDate;                                  //@synthesize initialBeginFetchDate=_initialBeginFetchDate - In the implementation block
@property (retain) id userData; 
@property (copy) NSDictionary * properties; 
@property (copy) NSString * comment;                                                  //@synthesize comment=_comment - In the implementation block
@property (copy) NSString * log;                                                      //@synthesize log=_log - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (retain) NSOperationQueue * sessionDelegateQueue; 
@property (copy) id testBlock;                                                        //@synthesize testBlock=_testBlock - In the implementation block
@property (copy) NSString * logRequestBody;                                           //@synthesize logRequestBody=_logRequestBody - In the implementation block
@property (assign) BOOL deferResponseBodyLogging; 
@property (copy) NSString * logResponseBody;                                          //@synthesize logResponseBody=_logResponseBody - In the implementation block
@property (readonly) NSData * loggedStreamData; 
@property (assign) BOOL hasLoggedError;                                               //@synthesize hasLoggedError=_hasLoggedError - In the implementation block
@property (retain) NSURL * redirectedFromURL;                                         //@synthesize redirectedFromURL=_redirectedFromURL - In the implementation block
@property (assign) unsigned long long backgroundTaskIdentifier;                       //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snipSubstringOfString:(id)arg1 betweenStartString:(id)arg2 endString:(id)arg3 ;
+(id)headersStringForDictionary:(id)arg1 ;
+(id)loggingDirectory;
+(id)processNameLogPrefix;
+(id)loggingDateStamp;
+(id)loggingProcessName;
+(id)logDirectoryForCurrentRun;
+(id)htmlFileName;
+(id)symlinkNameSuffix;
+(void)setLoggingDirectory:(id)arg1 ;
+(void)setLogDirectoryForCurrentRun:(id)arg1 ;
+(void)setLoggingToFileEnabled:(BOOL)arg1 ;
+(BOOL)isLoggingToFileEnabled;
+(void)setLoggingProcessName:(id)arg1 ;
+(void)setLoggingDateStamp:(id)arg1 ;
+(void)deleteLogDirectoriesOlderThanDate:(id)arg1 ;
+(void)setLoggingEnabled:(BOOL)arg1 ;
+(BOOL)isLoggingEnabled;
+(id)fetcherWithURLString:(id)arg1 ;
+(id)fetcherWithRequest:(id)arg1 ;
+(id)fetchersForBackgroundSessions;
+(id)fetcherWithURL:(id)arg1 ;
+(id)sessionIdentifierToFetcherMap;
+(BOOL)appAllowsInsecureRequests;
+(id)staticCookieStorage;
+(id)fetcherUserDefaults;
+(id)activePersistedBackgroundSessions;
+(id)fetcherWithSessionIdentifier:(id)arg1 ;
+(/*^block*/id)systemCompletionHandlerForSessionIdentifier:(id)arg1 ;
+(void)setSystemCompletionHandler:(/*^block*/id)arg1 forSessionIdentifier:(id)arg2 ;
+(id)fetcherWithDownloadResumeData:(id)arg1 ;
+(void)setGlobalTestBlock:(/*^block*/id)arg1 ;
+(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)load;
-(GSDK_GTMSessionUploadFetcher *)parentUploadFetcher;
-(void)inputStream:(id)arg1 readIntoBuffer:(void*)arg2 length:(long long)arg3 ;
-(id)loggedInputStreamForInputStream:(id)arg1 ;
-(/*^block*/id)loggedStreamProviderForStreamProvider:(/*^block*/id)arg1 ;
-(void)logFetchWithError:(id)arg1 ;
-(id)formattedStringFromData:(id)arg1 contentType:(id)arg2 JSON:(id*)arg3 ;
-(id)stringFromStreamData:(id)arg1 contentType:(id)arg2 ;
-(void)setCookieStorageMethod:(long long)arg1 ;
-(void)stopFetching;
-(double)nextRetryInterval;
-(void)setRetryEnabled:(BOOL)arg1 ;
-(void)setMaxRetryInterval:(double)arg1 ;
-(void)beginFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)waitForCompletionWithTimeout:(double)arg1 ;
-(void)setAuthorizer:(id<GTMFetcherAuthorizationProtocol>)arg1 ;
-(void)setCommentWithFormat:(id)arg1 ;
-(void)setServicePriority:(long long)arg1 ;
-(void)beginFetchWithDelegate:(id)arg1 didFinishSelector:(SEL)arg2 ;
-(id)initWithRequest:(id)arg1 configuration:(id)arg2 ;
-(void)setDownloadResumeData:(NSData *)arg1 ;
-(NSMutableURLRequest *)mutableRequest;
-(NSData *)downloadResumeData;
-(void)forgetSessionIdentifierForFetcherWithoutSyncCheck;
-(void)beginFetchMayDelay:(BOOL)arg1 mayAuthorize:(BOOL)arg2 ;
-(/*^block*/id)completionHandlerWithTarget:(id)arg1 didFinishSelector:(SEL)arg2 ;
-(void)failToBeginFetchWithError:(id)arg1 ;
-(BOOL)useBackgroundSession;
-(BOOL)canFetchWithBackgroundSession;
-(NSURL *)bodyFileURL;
-(BOOL)allowLocalhostRequest;
-(NSHTTPCookieStorage *)cookieStorage;
-(BOOL)isUsingBackgroundSession;
-(void)setCanShareSession:(BOOL)arg1 ;
-(BOOL)canShareSession;
-(id)createSessionIdentifierWithMetadata:(id)arg1 ;
-(NSOperationQueue *)sessionDelegateQueue;
-(void)removePersistedBackgroundSessionFromDefaults;
-(void)setDownloadedLength:(long long)arg1 ;
-(void)authorizeRequest;
-(BOOL)isRetryEnabled;
-(double)maxRetryInterval;
-(void)sendStopNotificationIfNeeded;
-(void)addPersistedBackgroundSessionToDefaults;
-(void)setStopNotificationNeeded:(BOOL)arg1 ;
-(void)postNotificationOnMainThreadWithName:(id)arg1 userInfo:(id)arg2 requireAsync:(BOOL)arg3 ;
-(void)simulateFetchForTestBlock;
-(void)simulateDataCallbacksForTestBlockWithBodyData:(id)arg1 response:(id)arg2 responseData:(id)arg3 error:(id)arg4 ;
-(void)invokeOnCallbackQueue:(id)arg1 afterUserStopped:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)invokeOnCallbackQueueUnlessStopped:(/*^block*/id)arg1 ;
-(void)invokeOnCallbackUnsynchronizedQueueAfterUserStopped:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)simulateByteTransferReportWithDataLength:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)finishWithError:(id)arg1 shouldRetry:(BOOL)arg2 ;
-(void)shouldRetryNowForStatus:(long long)arg1 error:(id)arg2 forceAssumeRetry:(BOOL)arg3 response:(/*^block*/id)arg4 ;
-(void)setSystemCompletionHandler:(/*^block*/id)arg1 ;
-(void)restoreDefaultStateForSessionIdentifierMetadata;
-(id)sessionIdentifierMetadataUnsynchronized;
-(id)sessionIdentifierDefaultMetadata;
-(void)invokeFetchCallbacksOnCallbackQueueWithData:(id)arg1 error:(id)arg2 ;
-(void)releaseCallbacks;
-(id<GTMFetcherAuthorizationProtocol>)authorizer;
-(void)authorizer:(id)arg1 request:(id)arg2 finishedWithError:(id)arg3 ;
-(id)responseUnsynchronized;
-(long long)statusCodeUnsynchronized;
-(void)setDidReceiveResponseBlock:(id)arg1 ;
-(void)setWillRedirectBlock:(id)arg1 ;
-(void)setSendProgressBlock:(id)arg1 ;
-(void)setReceivedProgressBlock:(id)arg1 ;
-(void)setAccumulateDataBlock:(id)arg1 ;
-(void)setWillCacheURLResponseBlock:(id)arg1 ;
-(void)setRetryBlock:(id)arg1 ;
-(void)setResumeDataBlock:(id)arg1 ;
-(void)stopFetchReleasingCallbacks:(BOOL)arg1 ;
-(void)destroyRetryTimer;
-(/*^block*/id)systemCompletionHandler;
-(void)forgetSessionIdentifierForFetcher;
-(BOOL)userStoppedFetching;
-(void)logNowWithError:(id)arg1 ;
-(id)willRedirectBlock;
-(void)setMutableRequest:(NSMutableURLRequest *)arg1 ;
-(void)invokeOnCallbackQueueAfterUserStopped:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)sessionNeedingInvalidation;
-(void)setSessionNeedingInvalidation:(id)arg1 ;
-(BOOL)hasLoggedError;
-(void)setHasLoggedError:(BOOL)arg1 ;
-(void)beginRetryTimer;
-(BOOL)shouldReleaseCallbacksUponCompletion;
-(BOOL)isRetryEnabledUnsynchronized;
-(BOOL)hasRetryAfterInterval;
-(double)nextRetryIntervalUnsynchronized;
-(BOOL)isRetryError:(id)arg1 ;
-(id)responseHeadersUnsynchronized;
-(void)retryTimerFired:(id)arg1 ;
-(void)retryFetch;
-(double)retryAfterInterval;
-(NSDictionary *)sessionUserInfo;
-(void)setSessionUserInfo:(NSDictionary *)arg1 ;
-(id)sessionIdentifierMetadata;
-(double)minRetryInterval;
-(void)setMinRetryInterval:(double)arg1 ;
-(id)mutableRequestUnsynchronized;
-(void)setBodyFileURL:(NSURL *)arg1 ;
-(NSData *)downloadedData;
-(long long)downloadedLength;
-(void)setUseBackgroundSession:(BOOL)arg1 ;
-(void)setSessionDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)addPropertiesFromDictionary:(id)arg1 ;
-(NSData *)loggedStreamData;
-(void)appendLoggedStreamData:(id)arg1 ;
-(void)clearLoggedStreamData;
-(void)setDeferResponseBodyLogging:(BOOL)arg1 ;
-(BOOL)deferResponseBodyLogging;
-(float)taskPriority;
-(void)setTaskPriority:(float)arg1 ;
-(NSURLCredential *)proxyCredential;
-(void)setProxyCredential:(NSURLCredential *)arg1 ;
-(id)bodyStreamProvider;
-(void)setBodyStreamProvider:(id)arg1 ;
-(long long)servicePriority;
-(id)accumulateDataBlock;
-(id)receivedProgressBlock;
-(id)resumeDataBlock;
-(id)didReceiveResponseBlock;
-(id)sendProgressBlock;
-(id)willCacheURLResponseBlock;
-(id)retryBlock;
-(double)retryFactor;
-(void)setRetryFactor:(double)arg1 ;
-(BOOL)useUploadTask;
-(void)setUseUploadTask:(BOOL)arg1 ;
-(NSArray *)allowedInsecureSchemes;
-(void)setAllowedInsecureSchemes:(NSArray *)arg1 ;
-(void)setAllowLocalhostRequest:(BOOL)arg1 ;
-(BOOL)allowInvalidServerCertificates;
-(void)setAllowInvalidServerCertificates:(BOOL)arg1 ;
-(NSDate *)initialBeginFetchDate;
-(id)testBlock;
-(NSURL *)redirectedFromURL;
-(void)setRedirectedFromURL:(NSURL *)arg1 ;
-(NSString *)logRequestBody;
-(void)setLogRequestBody:(NSString *)arg1 ;
-(NSString *)logResponseBody;
-(void)setLogResponseBody:(NSString *)arg1 ;
-(BOOL)wasCreatedFromBackgroundSession;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setTestBlock:(id)arg1 ;
-(NSURL *)destinationFileURL;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(void)endBackgroundTask;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)sessionIdentifier;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSString *)log;
-(NSURLResponse *)response;
-(long long)statusCode;
-(id)initWithRequest:(id)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(unsigned long long)retryCount;
-(NSString *)comment;
-(NSURLCredential *)credential;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
-(BOOL)isFetching;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)setService:(id<GTMSessionFetcherServiceProtocol>)arg1 ;
-(id<GTMSessionFetcherServiceProtocol>)service;
-(void)setLog:(NSString *)arg1 ;
-(NSData *)bodyData;
-(NSURLSession *)session;
-(void)setComment:(NSString *)arg1 ;
-(void)setDownloadedData:(NSData *)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(long long)bodyLength;
-(NSString *)serviceHost;
-(void)setServiceHost:(NSString *)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(void)setCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(NSDictionary *)responseHeaders;
-(NSString *)taskDescription;
-(id)downloadProgressBlock;
-(void)setDownloadProgressBlock:(id)arg1 ;
-(void)setTaskDescription:(NSString *)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSURLSessionTask *)sessionTask;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
-(id)retryTimer;
-(void)setUsingBackgroundSession:(BOOL)arg1 ;
@end


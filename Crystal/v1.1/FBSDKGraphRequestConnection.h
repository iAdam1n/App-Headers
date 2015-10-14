/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/FBSDKURLConnectionDelegate.h>
#import <Crystal/FBSDKGraphErrorRecoveryProcessorDelegate.h>

@protocol FBSDKGraphRequestConnectionDelegate;
@class NSString, FBSDKGraphRequestMetadata, FBSDKGraphErrorRecoveryProcessor, NSOperationQueue, NSHTTPURLResponse, FBSDKURLConnection, NSMutableArray, FBSDKLogger;

@interface FBSDKGraphRequestConnection : NSObject <FBSDKURLConnectionDelegate, FBSDKGraphErrorRecoveryProcessorDelegate> {

	NSString* _overrideVersionPart;
	FBSDKGraphRequestMetadata* _recoveringRequestMetadata;
	FBSDKGraphErrorRecoveryProcessor* _errorRecoveryProcessor;
	unsigned long long _expectingResults;
	NSOperationQueue* _delegateQueue;
	id<FBSDKGraphRequestConnectionDelegate> _delegate;
	double _timeout;
	NSHTTPURLResponse* _URLResponse;
	FBSDKURLConnection* _connection;
	NSMutableArray* _requests;
	unsigned long long _state;
	FBSDKLogger* _logger;
	unsigned long long _requestStartTime;

}

@property (assign,nonatomic) id<FBSDKGraphRequestConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double timeout;                                                //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain,readonly) NSHTTPURLResponse * URLResponse;                      //@synthesize URLResponse=_URLResponse - In the implementation block
@property (nonatomic,retain) FBSDKURLConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                                     //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBSDKLogger * logger;                                          //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) unsigned long long requestStartTime;                           //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userAgent;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchEntryName:(id)arg3 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(id)requestWithBatch:(id)arg1 timeout:(double)arg2 ;
-(void)logRequest:(id)arg1 bodyLength:(unsigned long long)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4 ;
-(void)completeFBSDKURLConnectionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3 ;
-(void)registerTokenToOmitFromLog:(id)arg1 ;
-(id)urlStringForSingleRequest:(id)arg1 forBatch:(BOOL)arg2 ;
-(id)accessTokenWithRequest:(id)arg1 ;
-(void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4 ;
-(BOOL)_shouldWarnOnMissingFieldsParam:(id)arg1 ;
-(void)_validateFieldsParamForGetRequests:(id)arg1 ;
-(void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(BOOL)arg3 logger:(id)arg4 ;
-(void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4 ;
-(id)parseJSONResponse:(id)arg1 error:(id*)arg2 statusCode:(long long)arg3 ;
-(void)completeWithResults:(id)arg1 networkError:(id)arg2 ;
-(id)parseJSONOrOtherwise:(id)arg1 error:(id*)arg2 ;
-(id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5 ;
-(id)errorFromResult:(id)arg1 request:(id)arg2 ;
-(void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3 canNotifyDelegate:(BOOL)arg4 ;
-(void)processResultDebugDictionary:(id)arg1 ;
-(void)facebookURLConnection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)processorDidAttemptRecovery:(id)arg1 didRecover:(BOOL)arg2 error:(id)arg3 ;
-(void)overrideVersionPartWith:(id)arg1 ;
-(FBSDKLogger *)logger;
-(void)setLogger:(FBSDKLogger *)arg1 ;
-(double)timeout;
-(void)cancel;
-(void)setDelegate:(id<FBSDKGraphRequestConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<FBSDKGraphRequestConnectionDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)start;
-(FBSDKURLConnection *)connection;
-(void)setConnection:(FBSDKURLConnection *)arg1 ;
-(void)setDelegateQueue:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
-(unsigned long long)requestStartTime;
-(void)setRequestStartTime:(unsigned long long)arg1 ;
@end


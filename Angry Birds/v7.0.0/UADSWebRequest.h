/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString, NSDictionary, NSMutableData, NSError, NSCondition, NSMutableURLRequest, NSURLConnection;

@interface UADSWebRequest : NSObject <NSURLConnectionDelegate> {

	BOOL _canceled;
	BOOL _finished;
	int _connectTimeout;
	NSString* _url;
	NSString* _requestType;
	NSString* _body;
	NSDictionary* _headers;
	NSDictionary* _responseHeaders;
	NSMutableData* _receivedData;
	NSError* _error;
	long long _expectedContentLength;
	long long _responseCode;
	NSCondition* _blockCondition;
	/*^block*/id _progressBlock;
	/*^block*/id _startBlock;
	NSMutableURLRequest* _request;
	NSURLConnection* _connection;

}

@property (nonatomic,retain) NSString * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * requestType;                       //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                       //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;               //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                 //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long expectedContentLength;              //@synthesize expectedContentLength=_expectedContentLength - In the implementation block
@property (assign,nonatomic) long long responseCode;                       //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL finished;                                //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSCondition * blockCondition;                 //@synthesize blockCondition=_blockCondition - In the implementation block
@property (nonatomic,copy) id progressBlock;                               //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id startBlock;                                  //@synthesize startBlock=_startBlock - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int connectTimeout;                           //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUrl:(id)arg1 requestType:(id)arg2 headers:(id)arg3 connectTimeout:(int)arg4 ;
-(id)makeRequest;
-(NSCondition *)blockCondition;
-(void)setBlockCondition:(NSCondition *)arg1 ;
-(id)makeUserInfoDictionary:(long long)arg1 message:(id)arg2 ;
-(void)receiveTimerTimedOut;
-(void)setExpectedContentLength:(long long)arg1 ;
-(void)cancel;
-(NSString *)url;
-(NSMutableURLRequest *)request;
-(NSString *)body;
-(void)setUrl:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setRequestType:(NSString *)arg1 ;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)canceled;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(NSError *)error;
-(NSString *)requestType;
-(void)setError:(NSError *)arg1 ;
-(BOOL)finished;
-(int)connectTimeout;
-(void)setConnectTimeout:(int)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(NSDictionary *)responseHeaders;
-(long long)expectedContentLength;
-(id)startBlock;
-(void)setStartBlock:(id)arg1 ;
-(void)setResponseCode:(long long)arg1 ;
-(long long)responseCode;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
@end

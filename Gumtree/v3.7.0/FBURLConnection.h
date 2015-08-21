/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSURLConnectionDataDelegate.h>

@protocol FBURLConnectionDelegate;
@class NSURLConnection, NSMutableData, NSURLResponse, NSString;

@interface FBURLConnection : NSObject <NSURLConnectionDataDelegate> {

	BOOL _skipRoundtripIfCached;
	id<FBURLConnectionDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _data;
	/*^block*/id _handler;
	NSURLResponse* _response;
	unsigned long long _requestStartTime;
	unsigned long long _loggerSerialNumber;

}

@property (assign,nonatomic) id<FBURLConnectionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id handler;                                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                             //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long long requestStartTime;                  //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long loggerSerialNumber;              //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL skipRoundtripIfCached;                           //@synthesize skipRoundtripIfCached=_skipRoundtripIfCached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)skipRoundtripIfCached;
-(void)setSkipRoundtripIfCached:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)loggerSerialNumber;
-(id)initWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getCache;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 cachedData:(id)arg2 forURL:(id)arg3 ;
-(void)invokeHandler:(/*^block*/id)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(BOOL)isCDNURL:(id)arg1 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 response:(id)arg2 responseData:(id)arg3 ;
-(BOOL)shouldShortCircuitRedirectResponse:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<FBURLConnectionDelegate>)arg1 ;
-(id<FBURLConnectionDelegate>)delegate;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(unsigned long long)requestStartTime;
-(void)setRequestStartTime:(unsigned long long)arg1 ;
-(void)logMessage:(id)arg1 ;
@end


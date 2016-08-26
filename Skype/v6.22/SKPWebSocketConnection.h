/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <Skype/SKPIDispatcher.h>

@protocol SKPWebSocketConnectionDelegate, SKPITCPStreamFactory;
@class NSURLRequest, NSInputStream, NSOutputStream, NSObject, SKPDispatcher, SKPWebSocketMessage, SKPWSHTTPResponse, NSString;

@interface SKPWebSocketConnection : NSObject <NSStreamDelegate, SKPIDispatcher> {

	BOOL _started;
	BOOL _receivedPong;
	NSURLRequest* _request;
	NSInputStream* _is;
	NSOutputStream* _os;
	long long _connectionState;
	NSObject*<SKPWebSocketConnectionDelegate> _delegate;
	id<SKPITCPStreamFactory> _streamFactory;
	SKPDispatcher* _dispatcher;
	SKPWebSocketMessage* _currentMessage;
	SKPWSHTTPResponse* _currentHandshakeResponse;
	/*^block*/id _pingCompletionBlock;

}

@property (nonatomic,retain) SKPWebSocketMessage * currentMessage;                                   //@synthesize currentMessage=_currentMessage - In the implementation block
@property (nonatomic,retain) SKPWSHTTPResponse * currentHandshakeResponse;                           //@synthesize currentHandshakeResponse=_currentHandshakeResponse - In the implementation block
@property (assign,nonatomic) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL receivedPong;                                                      //@synthesize receivedPong=_receivedPong - In the implementation block
@property (nonatomic,copy) id pingCompletionBlock;                                                   //@synthesize pingCompletionBlock=_pingCompletionBlock - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSInputStream * is;                                                     //@synthesize is=_is - In the implementation block
@property (nonatomic,retain) NSOutputStream * os;                                                    //@synthesize os=_os - In the implementation block
@property (assign,nonatomic) long long connectionState;                                              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SKPWebSocketConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SKPITCPStreamFactory> streamFactory;                                 //@synthesize streamFactory=_streamFactory - In the implementation block
@property (nonatomic,retain) SKPDispatcher * dispatcher;                                             //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateNonce;
+(id)webSocketMutableRequestWithURL:(id)arg1 ;
-(void)setStreamFactory:(id<SKPITCPStreamFactory>)arg1 ;
-(void)sendPingWithTimeout:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<SKPITCPStreamFactory>)streamFactory;
-(void)tearDownSockets;
-(NSInputStream *)is;
-(void)setIs:(NSInputStream *)arg1 ;
-(void)resetNetworkOperations;
-(void)setupAndScheduleStreams;
-(void)dispatchNetworkOperationWithBlock:(/*^block*/id)arg1 ;
-(void)sendFrameWithHeader:(unsigned char)arg1 message:(id)arg2 ;
-(void)closeAndCleanUp;
-(void)cancelAllNetworkOperations;
-(void)dispatchUIOperationWithBlock:(/*^block*/id)arg1 ;
-(id)dataForRequest:(id)arg1 ;
-(void)setupStreams;
-(void)scheduleStreams;
-(void)openStreams;
-(void)processRawIncomingHTTPData:(id)arg1 ;
-(void)processRawIncomingWebSocketData:(id)arg1 ;
-(void)failConnection:(id)arg1 ;
-(SKPWSHTTPResponse *)currentHandshakeResponse;
-(void)setCurrentHandshakeResponse:(SKPWSHTTPResponse *)arg1 ;
-(BOOL)validateHandshakeResponse:(id)arg1 ;
-(void)dispatchIncomingWebSocketMessage:(id)arg1 ;
-(void)sendPong:(id)arg1 ;
-(void)setReceivedPong:(BOOL)arg1 ;
-(id)pingCompletionBlock;
-(BOOL)receivedPong;
-(void)setPingCompletionBlock:(id)arg1 ;
-(void)dispatchIncomingTextMessage:(id)arg1 ;
-(void)handleBytesAvailable:(id)arg1 ;
-(void)sendUpgradeRequest;
-(void)processInStreamData:(id)arg1 ;
-(void)sendPing:(id)arg1 ;
-(void)dispatchBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 injectStreamFactory:(id)arg2 injectDispatcher:(id)arg3 ;
-(unsigned long long)detectEncodingForData:(id)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(NSObject*<SKPWebSocketConnectionDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<SKPWebSocketConnectionDelegate>)delegate;
-(NSURLRequest *)request;
-(void)start;
-(void)close;
-(void)setOs:(NSOutputStream *)arg1 ;
-(NSOutputStream *)os;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(SKPWebSocketMessage *)currentMessage;
-(long long)connectionState;
-(void)setCurrentMessage:(SKPWebSocketMessage *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)send:(id)arg1 ;
-(BOOL)started;
-(void)setConnectionState:(long long)arg1 ;
-(SKPDispatcher *)dispatcher;
-(void)setDispatcher:(SKPDispatcher *)arg1 ;
@end

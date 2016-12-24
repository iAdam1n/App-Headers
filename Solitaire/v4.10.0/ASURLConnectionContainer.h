/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSError, NSTimer, ASURLConnectionInternalDelegate, NSURLConnection, NSURLResponse, NSData;

@interface ASURLConnectionContainer : NSObject {

	NSMutableData* _data;
	/*^block*/id _handler;
	NSError* _error;
	NSTimer* _timer;
	ASURLConnectionInternalDelegate* _timeoutDelegate;
	NSURLConnection* connection;
	NSURLResponse* response;

}

@property (nonatomic,retain) NSURLConnection * connection; 
@property (nonatomic,retain) NSURLResponse * response; 
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) ASURLConnectionInternalDelegate * timeoutDelegate;              //@synthesize timeoutDelegate=_timeoutDelegate - In the implementation block
@property (nonatomic,retain) NSData * data;                                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id handler;                                                       //@synthesize handler=_handler - In the implementation block
-(id)initWithConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTimeoutDelegate:(ASURLConnectionInternalDelegate *)arg1 ;
-(id)initWithConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 timeout:(float)arg3 timeoutDelegate:(id)arg4 ;
-(ASURLConnectionInternalDelegate *)timeoutDelegate;
-(void)dealloc;
-(NSURLResponse *)response;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)cancelTimer;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)timeoutOccurred;
@end

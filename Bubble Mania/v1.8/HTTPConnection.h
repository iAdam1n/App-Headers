/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HTTPConnectionDelegate;
@class HTTPResponse, NSURLConnection;

@interface HTTPConnection : NSObject {

	HTTPResponse* response;
	id<HTTPConnectionDelegate> delegate;
	NSURLConnection* nsConnection;
	double startTime;

}

@property (assign,nonatomic) id<HTTPConnectionDelegate> delegate; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,retain) NSURLConnection * nsConnection; 
+(id)connectionWithRequest:(id)arg1 delegate:(id)arg2 ;
+(id)timeout;
-(void)sendSynchronously;
-(void)sendAsynchronously;
-(void)cancelConnectionFailed:(BOOL)arg1 ;
-(NSURLConnection *)nsConnection;
-(void)setNsConnection:(NSURLConnection *)arg1 ;
-(void)setDelegate:(id<HTTPConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<HTTPConnectionDelegate>)delegate;
-(void)setStartTime:(double)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(double)startTime;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
@end

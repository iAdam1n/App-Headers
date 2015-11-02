/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CLSURLSessionTaskDelegate, OS_dispatch_queue;
@class NSURLRequest, NSURLResponse, NSError, NSObject;

@interface CLSURLSessionTask : NSObject {

	id<CLSURLSessionTaskDelegate> _delegate;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _invokesDelegate;

}

@property (nonatomic,copy) NSURLRequest * originalRequest;                        //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,copy) NSURLRequest * currentRequest;                         //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) id<CLSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL invokesDelegate;                                //@synthesize invokesDelegate=_invokesDelegate - In the implementation block
+(id)task;
-(BOOL)invokesDelegate;
-(void)setInvokesDelegate:(BOOL)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(NSError *)error;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)setDelegate:(id<CLSURLSessionTaskDelegate>)arg1 ;
-(id)init;
-(id<CLSURLSessionTaskDelegate>)delegate;
-(void)start;
-(void)resume;
-(NSURLResponse *)response;
-(void)cleanup;
-(NSURLRequest *)currentRequest;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLRequest *)originalRequest;
-(void)setError:(NSError *)arg1 ;
@end

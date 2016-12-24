/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSession, NSOperationQueue, TigonNSURLSessionBuilder, TigonNSURLCompletionHandlersMap, NSString;

@interface TigonNSURLRequester : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSURLSession* _session;
	NSURLSession* _persistentBackgroundSession;
	NSOperationQueue* _queue;
	TigonNSURLSessionBuilder* _sessionBuilder;
	/*^block*/id _auth;
	TigonNSURLCompletionHandlersMap* _handlersMap;
	mutex _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)persistentBackgroundSession;
-(void)onResponse:(id)arg1 requestInfo:(id)arg2 ;
-(void)onBody:(id)arg1 requestInfo:(id)arg2 ;
-(id)initWithAuth:(/*^block*/id)arg1 handlersMap:(id)arg2 sessionBuilder:(id)arg3 ;
-(void)send:(id)arg1 fromFile:(id)arg2 taskPriority:(float)arg3 tigonRequest:(const TigonRequest*)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(id)session;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
@end

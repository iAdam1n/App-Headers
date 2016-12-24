/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAHTTPFetcher.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSURLSessionTask, NSString;

@interface _WAHTTPFetcherNSURLSession : WAHTTPFetcher <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSURLSessionTask* _urlSessionTask;
	BOOL _cancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginFetchOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopFetching;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
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
-(void)stopFetching;
-(void)beginFetchOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end


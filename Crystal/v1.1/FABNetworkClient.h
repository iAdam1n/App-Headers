/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/Crystal-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class FABCertificatePinner, NSURLSession, NSString;

@interface FABNetworkClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	FABCertificatePinner* _certPinner;
	NSURLSession* _session;

}

@property (nonatomic,readonly) FABCertificatePinner * certPinner;              //@synthesize certPinner=_certPinner - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                         //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSessionConfiguration:(id)arg1 queue:(id)arg2 pinnedCertificates:(id)arg3 ;
-(double)randomDoubleWithMin:(double)arg1 max:(double)arg2 ;
-(double)generateRandomJitter;
-(double)computeDelayForResponse:(id)arg1 withRetryCount:(unsigned long long)arg2 ;
-(void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 onQueue:(dispatch_queue_sRef)arg3 block:(/*^block*/id)arg4 ;
-(void)startDataTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 tries:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)startDownloadTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 tries:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(FABCertificatePinner *)certPinner;
-(void)startDownloadTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 pinnedCertificates:(id)arg2 ;
-(void)startDataTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSession *)session;
-(void)dealloc;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)invalidateAndCancel;
@end


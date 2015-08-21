/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSURLSessionDelegate.h>
#import <Twitter/NSURLSessionTaskDelegate.h>

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
+(double)randomDoubleWithMin:(double)arg1 max:(double)arg2 ;
+(double)generateRandomJitter;
+(double)computeDelayForResponse:(id)arg1 withRetryCount:(unsigned long long)arg2 ;
+(void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 onQueue:(id)arg3 block:(/*^block*/id)arg4 ;
+(void)startDataTaskForSession:(id)arg1 withRequest:(id)arg2 retryCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
+(void)startDataTaskForSession:(id)arg1 withRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)startDownloadTaskForSession:(id)arg1 withRequest:(id)arg2 retryCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)startDownloadTaskForSession:(id)arg1 withRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 pinnedCertificates:(id)arg2 ;
-(FABCertificatePinner *)certPinner;
-(id)initWithSessionConfiguration:(id)arg1 queue:(id)arg2 pinnedCertificates:(id)arg3 ;
-(void)startDownloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


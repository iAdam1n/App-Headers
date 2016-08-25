/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/CLSURLSessionDownloadDelegate.h>

@protocol NSURLSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSURLSessionConfiguration, NSMutableSet, NSObject, NSString;

@interface CLSURLSession : NSObject <CLSURLSessionDownloadDelegate> {

	id<NSURLSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _configuration;
	NSMutableSet* _taskSet;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _sessionDescription;

}

@property (nonatomic,retain) NSOperationQueue * delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id<NSURLSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * sessionDescription;                          //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)NSURLSessionShouldBeUsed;
+(id)newDefaultDelegateQueue;
+(id)sessionWithConfiguration:(id)arg1 ;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)shouldInvokeDelegateSelector:(SEL)arg1 forTask:(id)arg2 ;
-(void)removeTaskFromSet:(id)arg1 ;
-(void)downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)task:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)task:(id)arg1 didReceiveData:(id)arg2 ;
-(id)task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 ;
-(void)task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(void)setDelegate:(id<NSURLSessionDelegate>)arg1 ;
-(id)init;
-(id<NSURLSessionDelegate>)delegate;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(void)finishTasksAndInvalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)invalidateAndCancel;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOperationQueue;


@protocol GTMSessionFetcherServiceProtocol <NSObject>
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (assign) BOOL reuseSession; 
@property (readonly) NSOperationQueue * delegateQueue; 
@required
-(id)fetcherWithRequest:(id)arg1;
-(id)sessionForFetcherCreation;
-(void)fetcherDidCreateSession:(id)arg1;
-(BOOL)fetcherShouldBeginFetching:(id)arg1;
-(void)fetcherDidBeginFetching:(id)arg1;
-(void)fetcherDidStop:(id)arg1;
-(BOOL)isDelayingFetcher:(id)arg1;
-(id)stoppedAllFetchersDate;
-(BOOL)reuseSession;
-(void)setReuseSession:(BOOL)arg1;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(id)arg1;
-(id)session;
-(id)sessionDelegate;
-(NSOperationQueue *)delegateQueue;

@end


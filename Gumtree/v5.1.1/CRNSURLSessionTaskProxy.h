/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Foundation/NSProxy.h>

@class NSURLSessionTask, CRNetStatDispatch, CRNetworkStatistics;

@interface CRNSURLSessionTaskProxy : NSProxy {

	NSURLSessionTask* _taskDelegate;
	CRNetStatDispatch* _dispatch;
	CRNetworkStatistics* _networkStatistics;
	unsigned long long _resumeDataSize;

}

@property (nonatomic,readonly) CRNetStatDispatch * dispatch;                       //@synthesize dispatch=_dispatch - In the implementation block
@property (nonatomic,retain) CRNetworkStatistics * networkStatistics;              //@synthesize networkStatistics=_networkStatistics - In the implementation block
@property (assign,nonatomic) unsigned long long resumeDataSize;                    //@synthesize resumeDataSize=_resumeDataSize - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * taskDelegate;                    //@synthesize taskDelegate=_taskDelegate - In the implementation block
-(void)receivedResponse:(id)arg1 ;
-(id)initDataTaskWithSession:(id)arg1 URL:(id)arg2 completionHandler:(/*^block*/id)arg3 dispatch:(id)arg4 ;
-(id)initDataTaskWithSession:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 dispatch:(id)arg4 ;
-(id)initDownloadTaskWithSession:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 dispatch:(id)arg4 ;
-(id)initDownloadTaskWithSession:(id)arg1 url:(id)arg2 completionHandler:(/*^block*/id)arg3 dispatch:(id)arg4 ;
-(id)initDownloadTaskWithSession:(id)arg1 resumeData:(id)arg2 completionHandler:(/*^block*/id)arg3 dispatch:(id)arg4 ;
-(/*^block*/id)wrapDataCompletionHandler:(/*^block*/id)arg1 forSession:(id)arg2 ;
-(id)initWithTaskDelegate:(id)arg1 dispatch:(id)arg2 ;
-(/*^block*/id)wrapDownloadCompletionHandler:(/*^block*/id)arg1 forSession:(id)arg2 ;
-(void)setResumeDataSize:(unsigned long long)arg1 ;
-(NSURLSessionTask *)taskDelegate;
-(unsigned long long)resumeDataSize;
-(void)responseFinishedWithError:(id)arg1 ;
-(void)receivedBytes:(unsigned long long)arg1 ;
-(void)finishedDownloadingToURL:(id)arg1 ;
-(void)cancel;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copy;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)suspend;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)resume;
-(CRNetStatDispatch *)dispatch;
-(void)setNetworkStatistics:(CRNetworkStatistics *)arg1 ;
-(CRNetworkStatistics *)networkStatistics;
@end

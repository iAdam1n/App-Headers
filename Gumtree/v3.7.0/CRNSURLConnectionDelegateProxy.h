/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <Gumtree/NSURLConnectionDelegate.h>
#import <Gumtree/NSURLConnectionDataDelegate.h>

@class CRNetStatDispatch, CRRequestState, NSString;

@interface CRNSURLConnectionDelegateProxy : NSProxy <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	id _delegate;
	CRNetStatDispatch* _dispatch;
	CRRequestState* _reqState;

}

@property (nonatomic,retain) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CRNetStatDispatch * dispatch;              //@synthesize dispatch=_dispatch - In the implementation block
@property (nonatomic,retain) CRRequestState * reqState;                 //@synthesize reqState=_reqState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isInstrumented;
+(void)instrumentNSURLConnectionWithDispatch:(id)arg1 ;
+(void)uninstrumentNSURLConnection;
-(void)setReqState:(CRRequestState *)arg1 ;
-(CRRequestState *)reqState;
-(void)setDispatch:(CRNetStatDispatch *)arg1 ;
-(id)initWithDelegate:(id)arg1 andStatsDispatch:(id)arg2 ;
-(void)startRequest:(id)arg1 ;
-(void)addAssociationToConnection:(id)arg1 ;
-(void)logStats;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(CRNetStatDispatch *)dispatch;
@end

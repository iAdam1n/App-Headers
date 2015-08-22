/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>
#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBMReachabilityAwareNetworkerDelegate;
@class FBNetworkerRequest, FBDelayer, NSString;

@interface FBMReachabilityAwareNetworker : NSObject <FBReachabilityListener, FBNetworkerRequestDelegate> {

	FBNetworkerRequest* _networkerRequest;
	id<FBNetworkDispatch> _networkDispatcher;
	unsigned long long _reachabilityState;
	BOOL _requestStarted;
	FBDelayer* _delayer;
	id<FBMReachabilityAwareNetworkerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMReachabilityAwareNetworkerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithNetworkerRequest:(id)arg1 networkDispatcher:(id)arg2 ;
-(void)_addRequestWithReachabilityCheck:(id)arg1 ;
-(void)_requestDidSucceedWithResult:(id)arg1 complete:(BOOL)arg2 ;
-(void)_requestDidFailWithError:(id)arg1 ;
-(id)initWithNetworkerRequest:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMReachabilityAwareNetworkerDelegate>)arg1 ;
-(id<FBMReachabilityAwareNetworkerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

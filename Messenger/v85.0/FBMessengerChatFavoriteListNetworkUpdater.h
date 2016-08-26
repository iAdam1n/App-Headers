/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBCancelable.h>

@protocol FBNetworkDispatch;
@class FBSimpleNetworkerRequest, NSString;

@interface FBMessengerChatFavoriteListNetworkUpdater : NSObject <FBNetworkerRequestDelegate, FBCancelable> {

	/*^block*/id _finished;
	FBSimpleNetworkerRequest* _networkerRequest;
	id<FBNetworkDispatch> _networkDispatcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNetworkDispatcher:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)startRequestWithUpdatedFavorites:(id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)cancel;
@end

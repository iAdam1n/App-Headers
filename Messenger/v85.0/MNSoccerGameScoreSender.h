/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBCancelable.h>
#import <Messenger/FBClassProvidable.h>

@protocol OS_dispatch_queue;
@class FBUserSession, MNMessagingRegionHeaderHelper, NSObject, FBGraphRequest, FBSimpleNetworkerRequest, NSString;

@interface MNSoccerGameScoreSender : NSObject <FBNetworkerRequestDelegate, FBCancelable, FBClassProvidable> {

	FBUserSession* _session;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	NSObject*<OS_dispatch_queue> _queue;
	FBGraphRequest* _soccerGameScoreSenderRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 queue:(id)arg3 ;
-(void)setGameScoreForThread:(id)arg1 score:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)_didFailWithError:(id)arg1 ;
@end

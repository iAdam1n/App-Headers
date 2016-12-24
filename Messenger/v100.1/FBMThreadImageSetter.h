/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBCancelable.h>
#import <Messenger/FBMDetachable.h>

@protocol FBMThreadImageSetterDelegate;
@class FBUserSession, FBMDetchedNetworkRequestsQueue, MNMessagingRegionHeaderHelper, FBMGroupThreadKey, FBGraphBatchParticipatingRequest, FBSimpleNetworkerRequest, NSString;

@interface FBMThreadImageSetter : NSObject <FBNetworkerRequestDelegate, FBClassProvidable, FBCancelable, FBMDetachable> {

	FBUserSession* _session;
	FBMDetchedNetworkRequestsQueue* _detachQueue;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBMGroupThreadKey* _groupThreadKey;
	id<FBMThreadImageSetterDelegate> _delegate;
	FBGraphBatchParticipatingRequest* _changeImageRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	BOOL _requestFinished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)updateGroupThreadKey:(id)arg1 withImage:(id)arg2 delegate:(id)arg3 ;
-(void)_cleanUpDetachedState;
-(id)initWithSession:(id)arg1 detachedQueue:(id)arg2 messagingRegionHeaderHelper:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)detach;
-(void)_didFailWithError:(id)arg1 ;
@end

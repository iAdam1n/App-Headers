/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSyncEngine.h>

@protocol FBNetworkDispatch, OS_dispatch_queue, FBSyncEngineDelegate;
@class FBSimpleNetworkerRequest, NSObject, NSString;

@interface FBPresenceSyncEngine : NSObject <FBSyncEngine> {

	id<FBNetworkDispatch> _networker;
	FBSimpleNetworkerRequest* _currentRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<FBSyncEngineDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<FBSyncEngineDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworker:(id)arg1 ;
-(void)syncUsersWithPreviousSyncSummary:(id)arg1 ;
-(id)_syncEventsForResponse:(id)arg1 ;
-(void)forceUserSyncWithPreviousSyncSummary:(id)arg1 ;
-(void)_onSyncComplete:(id)arg1 ;
-(void)_onSyncError:(id)arg1 ;
-(void)cleanUpSync;
-(id)syncGroupConversationParticipantForResult:(id)arg1 ;
-(id)_syncPersonForResult:(id)arg1 ;
-(void)setDelegate:(id<FBSyncEngineDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSyncEngineDelegate>)delegate;
-(void)cancelSync;
@end

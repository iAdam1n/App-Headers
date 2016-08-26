/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@protocol MNPushMessageHandling, MNAuthenticationManager;
@class NSNotificationCenter, MNThreadUpdateService, NSMutableSet, NSString;

@interface FBMSPThreadUpdater : NSObject <FBViewerContextClassProvidable> {

	id<MNPushMessageHandling> _pushMessageHandler;
	id<MNAuthenticationManager> _authManager;
	NSNotificationCenter* _notificationCenter;
	MNThreadUpdateService* _threadUpdateService;
	NSMutableSet* _pendingThreadFetchIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithPushMessageHandler:(id)arg1 notificationCenter:(id)arg2 authManager:(id)arg3 threadUpdateService:(id)arg4 ;
-(void)_processNewMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateThreadWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateThreadByReplacingMessageWithId:(id)arg1 withNewMessageContent:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

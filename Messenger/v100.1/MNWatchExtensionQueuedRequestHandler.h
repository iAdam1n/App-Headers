/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBSingletonClassProvidable.h>
#import <Messenger/MNWatchConnectivityListener.h>

@protocol FBProvider;
@class NSMutableArray, NSString;

@interface MNWatchExtensionQueuedRequestHandler : NSObject <MNServiceControllable, FBSingletonClassProvidable, MNWatchConnectivityListener> {

	BOOL _isReady;
	NSMutableArray* _pendingRequests;
	id<FBProvider> _watchExtensionRequestHandlerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_processPendingRequestsUnlocked;
-(void)_handleWatchExtensionRequest:(id)arg1 withFileURL:(id)arg2 ;
-(void)reachabilityDidChangeTo:(BOOL)arg1 ;
-(void)watchStateDidChange;
-(void)didReceiveMessage:(id)arg1 withFileURL:(id)arg2 ;
-(void)didUpdateAppContext:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

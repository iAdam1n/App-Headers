/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol FBProvider;
@class FBUserSession, MNWatchDataWaiter, NSMutableArray, NSString;

@interface MNWatchExtensionRequestHandler : NSObject <MNServiceControllable, FBSessionClassProvidable> {

	FBUserSession* _session;
	MNWatchDataWaiter* _watchDataWaiter;
	id<FBProvider> _messageSenderProvider;
	id<FBProvider> _analyticsUploaderProvider;
	BOOL _isReady;
	NSMutableArray* _pendingRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)handleWatchExtensionRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_handleWatchExtensionRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_processPendingRequestsUnlocked;
-(void)stop;
-(void)start:(id)arg1 ;
@end

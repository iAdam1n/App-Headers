/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNSessionStateMachineDelegate.h>

@protocol FBMAppProperties, FBProvider, OS_dispatch_queue, MNSessionStateMachineTransitionHandlerDelegate;
@class UIApplication, FBAPISessionStore, FBUserSession, MNServiceController, NSObject, MNLigerAdapter;

@interface MNSessionStateMachineTransitionHandler : NSObject <MNSessionStateMachineDelegate> {

	UIApplication* _application;
	FBAPISessionStore* _apiSessionStore;
	id<FBMAppProperties> _appProperties;
	FBUserSession* _session;
	MNServiceController* _serviceController;
	id<FBProvider> _experimentManagerProvider;
	id<FBProvider> _mobileConfigFactoryProvider;
	id<FBProvider> _stateRestorationStrategyProvider;
	id<FBProvider> _storeOpenerProvider;
	id<FBProvider> _syncStoreProvider;
	id<FBProvider> _messagingStoreProvider;
	NSObject*<OS_dispatch_queue> _storeOpeningQueue;
	MNLigerAdapter* _ligerAdapter;
	id<MNSessionStateMachineTransitionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSessionStateMachineTransitionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithApplication:(id)arg1 session:(id)arg2 apiSessionStore:(id)arg3 appProperties:(id)arg4 serviceController:(id)arg5 experimentManagerProvider:(id)arg6 mobileConfigFactoryProvider:(id)arg7 stateRestorationStrategyProvider:(id)arg8 storeOpenerProvider:(id)arg9 syncStoreProvider:(id)arg10 messagingStoreProvider:(id)arg11 ligerAdapter:(id)arg12 ;
-(void)_configureLiger:(id)arg1 ;
-(void)_startBackgroundServices:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)_openStoresAndRestoreState:(long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_startForegroundServices:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)_presentLoggedInUI:(long long)arg1 ;
-(void)_restoreStateInStore:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_openStores:(/*^block*/id)arg1 ;
-(void)willTransitionFromStateNotReadyForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateReadyForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateBackgroundOnlyForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateRestoreCompleteForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateCompleteForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStatePresentedLoggedInUIForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<MNSessionStateMachineTransitionHandlerDelegate>)arg1 ;
-(id<MNSessionStateMachineTransitionHandlerDelegate>)delegate;
@end


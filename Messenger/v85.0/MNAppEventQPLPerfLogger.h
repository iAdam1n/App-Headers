/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAppEventProcessing.h>

@protocol OS_dispatch_queue;
@class NSObject, MNQPLEventLogger, NSString;

@interface MNAppEventQPLPerfLogger : NSObject <MNAppEventProcessing> {

	NSObject*<OS_dispatch_queue> _queue;
	MNQPLEventLogger* _startupEventLogger;
	MNQPLEventLogger* _configSetupLogger;
	MNQPLEventLogger* _backgroundServicesLogger;
	MNQPLEventLogger* _foregroundServicesLogger;
	MNQPLEventLogger* _restoreStateLogger;
	long long _startupType;
	Class _firstPresentedViewControllerClass;
	BOOL _isActive;
	BOOL _hasBeenActive;
	Class _inboxVCClass;
	Class _placeholderVCClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldUseQPLPerfLogger;
+(void)setShouldUseQPLPerfLogger:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 inboxViewControllerClass:(Class)arg2 placeholderViewControllerClass:(Class)arg3 qplLogger:(id)arg4 ;
-(void)processEvent:(id)arg1 ;
-(void)_handleMain:(long long)arg1 ;
-(void)_handleDidBecomeActive:(long long)arg1 ;
-(void)_handleWillEnterForeground:(long long)arg1 ;
-(void)_handleDidEnterBackground:(long long)arg1 ;
-(void)_handleWillResignActive:(long long)arg1 ;
-(void)_handleUserSetupFlowBegin:(long long)arg1 ;
-(void)_handleFirstViewController:(Class)arg1 presented:(long long)arg2 ;
-(void)_handleNavigationFromViewController:(Class)arg1 toViewController:(Class)arg2 timeInterval:(long long)arg3 ;
-(void)_handleThreadListDisplayed:(long long)arg1 ;
-(BOOL)_isStartingUp;
-(void)_handleDidFinishLaunching:(long long)arg1 ;
-(void)_handleConfigSetupBegin:(long long)arg1 ;
-(void)_handleConfigSetupEnd:(long long)arg1 ;
-(void)_handleBackgroundServicesBegin:(long long)arg1 ;
-(void)_handleBackgroundServicesEnd:(long long)arg1 ;
-(void)_handleForegroundServicesBegin:(long long)arg1 ;
-(void)_handleForegroundServicesEnd:(long long)arg1 ;
-(void)_handleUserSetupFlowEnd:(long long)arg1 ;
-(void)_handleRestoreStateBegin:(long long)arg1 ;
-(void)_handleRestoreStateEnd:(long long)arg1 ;
-(void)_handleMQTTConnecting:(long long)arg1 ;
-(void)_handleMQTTConnected:(long long)arg1 ;
-(void)_handleMQTTDisconnected:(long long)arg1 ;
-(void)_handleDeltaRequest:(long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_handleQueueCreation:(long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_handleNavigationTriggeredByPushHandler:(long long)arg1 ;
-(void)_handleThreadListLoaded:(long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_beginStartupEventAtTimestamp:(long long)arg1 ;
-(void)_addStartupNote:(int)arg1 timestamp:(long long)arg2 ;
-(void)_endStartupEventAtTimestamp:(long long)arg1 ;
-(void)_cancelStartupEvent;
-(BOOL)_isWaitingForInboxDisplay;
@end

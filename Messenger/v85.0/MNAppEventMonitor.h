/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAppEventMonitoring.h>

@class NSSet, NSNotificationCenter, NSString;

@interface MNAppEventMonitor : NSObject <MNAppEventMonitoring> {

	NSSet* _eventProcessors;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1 ;
-(void)applicationDidCompleteSetupFlow;
-(void)markMain;
-(void)markDidFinishLaunching;
-(void)markWillEnterForeground;
-(void)markDidBecomeActive;
-(void)markDidEnterBackground;
-(void)markWillResignActive;
-(void)inboxDidDisplayThreadList;
-(void)inboxDidLoadThreadListDataModel;
-(void)inboxDidFailToLoadThreadListDataModel;
-(void)inboxViewAppearanceStateDidChangeTo:(unsigned long long)arg1 ;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(id)initWithEventProcessors:(id)arg1 notificationCenter:(id)arg2 ;
-(void)mqttConnectionStatusChanged:(id)arg1 ;
-(void)_makeAnnouncersProcessEvent:(id)arg1 ;
-(void)didOpenDatabase;
-(void)didFailToOpenDatabaseWithError:(id)arg1 ;
-(void)didCreateDatabaseTables;
-(void)didDiscardDatabaseFile;
-(void)willDiscardDatabaseContents;
-(void)syncProtocolQueueCreationSucceeded;
-(void)syncProtocolQueueCreationFailedWithError:(id)arg1 ;
-(void)syncProtocolDeltaRequestSucceeded;
-(void)syncProtocolDeltaRequestFailedWithError:(id)arg1 ;
-(void)tabBarControllerDidSelectViewController:(id)arg1 ;
-(void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4 ;
-(void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)markNavigationTriggeredByPush;
-(void)markConfigurationSetupBegin;
-(void)markConfigurationSetupEnd;
-(void)markBackgroundServicesBegin;
-(void)markBackgroundServicesEnd;
-(void)markForegroundServicesBegin;
-(void)markForegroundServicesEnd;
-(void)markRestoreStateBegin;
-(void)markRestoreStateEnd;
-(void)dealloc;
@end

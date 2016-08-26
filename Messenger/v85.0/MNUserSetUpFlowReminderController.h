/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMAppUserSetupListening.h>

@class NSNotificationCenter, MNLocalNotificationController, NSString;

@interface MNUserSetUpFlowReminderController : NSObject <FBViewerContextClassProvidable, FBMAppUserSetupListening> {

	NSNotificationCenter* _notificationCenter;
	BOOL _isUserSetUpActive;
	MNLocalNotificationController* _localNotificationController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1 ;
-(void)applicationDidCompleteSetupFlow;
-(void)_scheduleReminder;
-(void)_stopObservering;
-(id)initWithNotificationCenter:(id)arg1 localNotificationController:(id)arg2 ;
-(void)_deleteScheduledReminderIfNecessary;
-(void)_onApplicationDidBecomeActive;
-(void)_onApplicationDidEnterBackgroundNotification;
-(void)dealloc;
-(void)_startObserving;
@end

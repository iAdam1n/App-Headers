/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, OS_dispatch_queue;
@class MNMessageLocalNotificationDataPreparer, MNMessageLocalNotificationActionPolicy, MNMessageLocalNotificationScheduler, MNThreadSnippetGenerator, MNLocalNotificationController, FBPushRegistrar, MNThreadParticipantNameFormatter, NSObject;

@interface MNMessageLocalNotificationMessageHandler : NSObject {

	MNMessageLocalNotificationDataPreparer* _dataPreparer;
	MNMessageLocalNotificationActionPolicy* _actionPolicy;
	MNMessageLocalNotificationScheduler* _scheduler;
	MNThreadSnippetGenerator* _snippetGenerator;
	id<MNAuthenticationManager> _authenticationManager;
	MNLocalNotificationController* _localNotificationController;
	FBPushRegistrar* _pushRegistrar;
	MNThreadParticipantNameFormatter* _nameFormatter;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_processPreparedData:(id)arg1 ;
-(id)_messageLocalNotificationsFromPreparedData:(id)arg1 ;
-(id)initWithDataPreparer:(id)arg1 actionPolicy:(id)arg2 scheduler:(id)arg3 snippetGenerator:(id)arg4 authenticationManager:(id)arg5 localNotificationController:(id)arg6 pushRegistrar:(id)arg7 nameFormatter:(id)arg8 queue:(id)arg9 ;
-(void)handleMessages:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, OS_dispatch_queue;
@class MNMessageLocalNotificationDataPreparer, MNMessageLocalNotificationActionPolicy, MNMessageLocalNotificationScheduler, MNThreadSnippetGenerator, FBPushRegistrar, MNThreadParticipantNameFormatter, MNMessageRawSnippetFormatter, FBMobileConfigContextManager, MNUserSettings, NSObject;

@interface MNMessageLocalNotificationMessageHandler : NSObject {

	MNMessageLocalNotificationDataPreparer* _dataPreparer;
	MNMessageLocalNotificationActionPolicy* _actionPolicy;
	MNMessageLocalNotificationScheduler* _scheduler;
	MNThreadSnippetGenerator* _snippetGenerator;
	id<MNAuthenticationManager> _authenticationManager;
	FBPushRegistrar* _pushRegistrar;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNMessageRawSnippetFormatter* _rawSnippetFormatter;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	MNUserSettings* _userSettings;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_processPreparedData:(id)arg1 ;
-(id)_messageLocalNotificationsFromPreparedData:(id)arg1 ;
-(void)_recordLatestHandledMessageTimestampFromMessageLocalNotifications:(id)arg1 ;
-(id)initWithDataPreparer:(id)arg1 actionPolicy:(id)arg2 scheduler:(id)arg3 snippetGenerator:(id)arg4 authenticationManager:(id)arg5 pushRegistrar:(id)arg6 nameFormatter:(id)arg7 rawSnippetFormatter:(id)arg8 mobileConfigContextManager:(id)arg9 userSettings:(id)arg10 queue:(id)arg11 ;
-(void)handleMessages:(id)arg1 ;
@end

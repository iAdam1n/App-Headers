/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNThreadEventsReminderUpdater : NSObject
-(id)updateForReminderId:(id)arg1 reminderType:(id)arg2 reminderTime:(id)arg3 reminderTitle:(id)arg4 reminderLocationName:(id)arg5 reminderAllowsRSVP:(id)arg6 actorFbId:(id)arg7 threadSummary:(id)arg8 ;
-(id)deleteEventId:(id)arg1 forThreadSummary:(id)arg2 ;
-(id)updateRsvpStatus:(long long)arg1 forUserId:(id)arg2 reminderId:(id)arg3 threadSummary:(id)arg4 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNThreadEventsReminderUpdater : NSObject
-(id)updateForReminderId:(id)arg1 reminderType:(id)arg2 reminderTime:(id)arg3 reminderTitle:(id)arg4 reminderLocationName:(id)arg5 reminderAllowsRSVP:(id)arg6 actorFbId:(id)arg7 threadSummary:(id)arg8 ;
-(id)deleteEventId:(id)arg1 forThreadSummary:(id)arg2 ;
-(id)updateRsvpStatus:(long long)arg1 forUserId:(id)arg2 reminderId:(id)arg3 threadSummary:(id)arg4 ;
@end

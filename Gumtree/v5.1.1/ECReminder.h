/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECReminder : NSObject
+(id)scheduleWithDelay:(double)arg1 forAdIdentifier:(id)arg2 ;
+(void)scheduleIfNeededForAdIdentifier:(id)arg1 ;
+(void)cancelReminderWithClassName:(id)arg1 ;
+(void)handleUserEngagementForAdIdentifier:(id)arg1 ;
+(id)scheduleWithDelay:(double)arg1 ;
+(void)scheduleIfNeeded;
+(void)cancelIfNeeded;
+(void)handleUserEngagement;
+(id)gleanAppInstallDate;
+(void)scheduleLocalNotification:(id)arg1 ;
+(void)registerForLocalNotifications;
@end


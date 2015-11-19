/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ECNotificationHandlingManager : NSObject {

	NSMutableDictionary* _currentNotifications;

}

@property (nonatomic,retain) NSMutableDictionary * currentNotifications;              //@synthesize currentNotifications=_currentNotifications - In the implementation block
-(void)executeNextNotification;
-(void)savedSearchPerformed:(id)arg1 ;
-(void)bumpUpNotificationHandled:(id)arg1 ;
-(void)chatMessageNotificationHandled:(id)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 whileInState:(long long)arg3 ;
-(NSMutableDictionary *)currentNotifications;
-(void)removeNotificationForID:(id)arg1 withRemoteNotificationType:(long long)arg2 ;
-(void)setCurrentNotifications:(NSMutableDictionary *)arg1 ;
-(void)application:(id)arg1 didLaunchWithOptions:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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


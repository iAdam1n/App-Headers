/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLKShortcutItemMediator : NSObject
+(void)performActionForShortcutItem:(id)arg1 dependencies:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)jumpKey;
+(id)searchKey;
+(void)registerShortcutItems:(id)arg1 ;
+(id)defaultUserInfo;
+(id)createShortcutItemForAccount:(id)arg1 ;
+(void)performSearchActionForShortcutItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)performJumpActionForShortcutItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)performTeamSwitchActionForShortcutItem:(id)arg1 dependencies:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)initialize;
+(id)appVersion;
@end


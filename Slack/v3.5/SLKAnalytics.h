/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLKAnalytics : NSObject
+(id)sharedInstance;
-(void)track:(id)arg1 properties:(id)arg2 ;
-(void)didSwitchTeams:(id)arg1 ;
-(void)identifyUser;
-(void)trackExposure:(id)arg1 ;
-(id)init;
-(void)flush;
-(void)start;
-(void)track:(id)arg1 ;
@end


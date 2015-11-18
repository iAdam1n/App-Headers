/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class PTHTweetbotAccount, UISegmentedControl, PTHTweetbotStatisticsController, PTHTweetbotActivityController, UIViewController;

@interface PTHTweetbotAccountDataController : PTHViewController {

	PTHTweetbotAccount* _account;
	UISegmentedControl* _modeSegmentedControl;
	PTHTweetbotStatisticsController* _statiticsController;
	PTHTweetbotActivityController* _activityController;
	UIViewController* _childController;
	unsigned long long _mode;

}
-(BOOL)shouldShowPushNotification:(id)arg1 ;
-(void)_changeMode:(id)arg1 ;
-(id)controllerForMode:(unsigned long long)arg1 ;
-(void)showStats;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollToTop;
-(void)showActivity;
-(id)initWithAccount:(id)arg1 ;
@end

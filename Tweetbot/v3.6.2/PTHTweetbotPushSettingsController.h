/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>

@class PTHTweetbotAccount, PTHStaticOptionsSectionView, PTHStaticSectionView, PTHStaticSectionCell, NSDateFormatter;

@interface PTHTweetbotPushSettingsController : PTHViewController {

	PTHTweetbotAccount* _account;
	PTHStaticOptionsSectionView* _mentionsSection;
	PTHStaticSectionView* _notificationsSection;
	PTHStaticSectionCell* _lastNotificationCell;
	PTHStaticSectionCell* _requestTestCell;
	long long _lastPushTypes;
	BOOL _needsSettings;
	BOOL _syncedSettings;
	NSDateFormatter* _dateFormatter;

}
-(void)_didBecomeActive;
-(void)_didEnterBackground;
-(id)_dateFromMinute:(unsigned long long)arg1 ;
-(void)changePushOption;
-(void)_testPush:(id)arg1 ;
-(void)_showMessage:(id)arg1 actionURL:(id)arg2 ;
-(id)_stringFromMinute:(unsigned long long)arg1 ;
-(unsigned long long)_minuteFromDate:(id)arg1 ;
-(void)_updateDisplay;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateSettings;
-(id)initWithAccount:(id)arg1 ;
@end


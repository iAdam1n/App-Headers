/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

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
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateSettings;
-(void)_updateDisplay;
-(id)initWithAccount:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)_updateDisplay;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateSettings;
-(id)initWithAccount:(id)arg1 ;
@end


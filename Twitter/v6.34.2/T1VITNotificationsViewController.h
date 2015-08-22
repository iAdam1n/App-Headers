/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1ContainerViewController.h>
#import <Twitter/T1PanelRootViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1VITNotificationsSettingsTakeoverDelegate.h>

@class TFNTwitterAccount, NSDate, T1ActivityStreamViewController, NSArray, TFNBarButtonItem, TFNTwitterInteractionsTimeline, T1VITNotificationsSettingsTakeoverViewController, NSString;

@interface T1VITNotificationsViewController : T1ContainerViewController <T1PanelRootViewController, TFNTwitterAuthenticated, T1VITNotificationsSettingsTakeoverDelegate> {

	TFNTwitterAccount* _account;
	NSDate* _lastViewed;
	T1ActivityStreamViewController* _allActivityStreamViewController;
	T1ActivityStreamViewController* _mentionsActivityStreamViewController;
	T1ActivityStreamViewController* _verifiedActivityStreamViewController;
	NSArray* _timelinesViewControllers;
	TFNBarButtonItem* _filtersButton;
	TFNTwitterInteractionsTimeline* _timeline;
	T1VITNotificationsSettingsTakeoverViewController* _settingsTakeoverViewController;

}

@property (nonatomic,retain) T1ActivityStreamViewController * allActivityStreamViewController;                               //@synthesize allActivityStreamViewController=_allActivityStreamViewController - In the implementation block
@property (nonatomic,retain) T1ActivityStreamViewController * mentionsActivityStreamViewController;                          //@synthesize mentionsActivityStreamViewController=_mentionsActivityStreamViewController - In the implementation block
@property (nonatomic,retain) T1ActivityStreamViewController * verifiedActivityStreamViewController;                          //@synthesize verifiedActivityStreamViewController=_verifiedActivityStreamViewController - In the implementation block
@property (nonatomic,retain) NSArray * timelinesViewControllers;                                                             //@synthesize timelinesViewControllers=_timelinesViewControllers - In the implementation block
@property (nonatomic,retain) TFNBarButtonItem * filtersButton;                                                               //@synthesize filtersButton=_filtersButton - In the implementation block
@property (nonatomic,retain) TFNTwitterInteractionsTimeline * timeline;                                                      //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,retain) T1VITNotificationsSettingsTakeoverViewController * settingsTakeoverViewController;              //@synthesize settingsTakeoverViewController=_settingsTakeoverViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * panelID; 
@property (nonatomic,readonly) NSDate * lastViewed;                                                                          //@synthesize lastViewed=_lastViewed - In the implementation block
@property (nonatomic,readonly) NSString * scribePage; 
-(NSString *)scribePage;
-(void)setTimeline:(TFNTwitterInteractionsTimeline *)arg1 ;
-(NSString *)panelID;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(TFNBarButtonItem *)filtersButton;
-(void)setFiltersButton:(TFNBarButtonItem *)arg1 ;
-(void)viewWillFullyAppear:(BOOL)arg1 ;
-(void)_timelineDidFinishDeserialization:(id)arg1 ;
-(TFNTwitterInteractionsTimeline *)timeline;
-(void)takeoverPromptViewDidTapCloseButton:(id)arg1 ;
-(void)takeoverPromptViewDidTapActionButton:(id)arg1 ;
-(void)_consumerFilterDidChange;
-(void)_migrateSettingsAndApplyDefaults;
-(void)_initializeTimelines;
-(void)_setupSettingsControls;
-(void)setSettingsTakeoverViewController:(T1VITNotificationsSettingsTakeoverViewController *)arg1 ;
-(T1VITNotificationsSettingsTakeoverViewController *)settingsTakeoverViewController;
-(void)_dismissTakeoverPrompt;
-(void)_showSettings;
-(NSArray *)timelinesViewControllers;
-(void)_setupAllStreamFromTimeline;
-(id)_activityStreamViewControllerWithFilter:(long long)arg1 source:(long long)arg2 ;
-(void)setTimelinesViewControllers:(NSArray *)arg1 ;
-(id)_defaultScopeHeaderView;
-(id)_activityStreamWithFilter:(long long)arg1 source:(long long)arg2 ;
-(id)_newActivityStreamWithAccount:(id)arg1 ;
-(id)_timelinesTitles;
-(id)_timelinesSelectionBlocks;
-(/*^block*/id)_defaultHeaderViewSelectionBlock;
-(void)takeoverPromptViewDidTapViewSettings:(id)arg1 ;
-(id)initWithInteractionsTimeline:(id)arg1 account:(id)arg2 ;
-(T1ActivityStreamViewController *)allActivityStreamViewController;
-(void)setAllActivityStreamViewController:(T1ActivityStreamViewController *)arg1 ;
-(T1ActivityStreamViewController *)mentionsActivityStreamViewController;
-(void)setMentionsActivityStreamViewController:(T1ActivityStreamViewController *)arg1 ;
-(T1ActivityStreamViewController *)verifiedActivityStreamViewController;
-(void)setVerifiedActivityStreamViewController:(T1ActivityStreamViewController *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSDate *)lastViewed;
-(void)setSelectedViewControllerIndex:(unsigned long long)arg1 ;
@end

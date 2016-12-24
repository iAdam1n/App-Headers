/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Slack/Slack.SLKGenericTableViewCellDelegate.h>

@class NSString, SLKDependencies;

@interface SLPushSettingsViewController : UITableViewController <Slack.SLKGenericTableViewCellDelegate> {

	BOOL _imsEnabled;
	BOOL _mentionsEnabled;
	BOOL _everythingEnabled;
	BOOL _pushShowPreview;
	NSString* _pushSound;
	NSString* _pushTiming;
	NSString* _highlightWords;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic) BOOL imsEnabled;                                    //@synthesize imsEnabled=_imsEnabled - In the implementation block
@property (assign,nonatomic) BOOL mentionsEnabled;                               //@synthesize mentionsEnabled=_mentionsEnabled - In the implementation block
@property (assign,nonatomic) BOOL everythingEnabled;                             //@synthesize everythingEnabled=_everythingEnabled - In the implementation block
@property (assign,nonatomic) BOOL pushShowPreview;                               //@synthesize pushShowPreview=_pushShowPreview - In the implementation block
@property (nonatomic,copy) NSString * pushSound;                                 //@synthesize pushSound=_pushSound - In the implementation block
@property (nonatomic,copy) NSString * pushTiming;                                //@synthesize pushTiming=_pushTiming - In the implementation block
@property (nonatomic,copy) NSString * highlightWords;                            //@synthesize highlightWords=_highlightWords - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
-(void)setMentionsEnabled:(BOOL)arg1 ;
-(void)switchSwitched:(id)arg1 on:(BOOL)arg2 ;
-(BOOL)mentionsEnabled;
-(void)prefsChanged;
-(BOOL)areNotificationsDisabled;
-(void)updatePrefValues;
-(void)refreshHeader;
-(void)setImsEnabled:(BOOL)arg1 ;
-(void)setEverythingEnabled:(BOOL)arg1 ;
-(void)setPushSound:(NSString *)arg1 ;
-(void)setPushTiming:(NSString *)arg1 ;
-(void)setHighlightWords:(NSString *)arg1 ;
-(void)setPushShowPreview:(BOOL)arg1 ;
-(BOOL)imsEnabled;
-(BOOL)everythingEnabled;
-(NSString *)pushSound;
-(NSString *)pushTiming;
-(BOOL)pushShowPreview;
-(NSString *)highlightWords;
-(void)handleNotificationSectionTapped:(id)arg1 ;
-(void)updatePushDuration:(long long)arg1 ;
-(void)showNotificationSounds;
-(void)showNotificationTimes;
-(void)showHighlightWords;
-(void)performNotificationTest;
-(void)updatePushOptions;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)registerForRemoteNotifications;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)openSettings;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)scrollToTop;
-(void)registerForNotifications;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/ABOutlineViewController.h>

@class LegacySettingsTableViewController;

@interface SettingsViewController : ABOutlineViewController {

	unsigned long long _settingsSection;
	LegacySettingsTableViewController* _legacySettingsController;

}

@property (assign) unsigned long long settingsSection;                                        //@synthesize settingsSection=_settingsSection - In the implementation block
@property (retain) LegacySettingsTableViewController * legacySettingsController;              //@synthesize legacySettingsController=_legacySettingsController - In the implementation block
+(void)toggleNightTheme;
-(id)initWithSettingsSection:(unsigned long long)arg1 ;
-(id)generateNodesForHomeScreen;
-(void)generateNodes;
-(void)setSettingsSection:(unsigned long long)arg1 ;
-(void)setLegacySettingsController:(LegacySettingsTableViewController *)arg1 ;
-(LegacySettingsTableViewController *)legacySettingsController;
-(id)generateContainerNodeForCellAtIndexPath:(id)arg1 ;
-(id)generateSectionSelectorNodeForSettingsSection:(unsigned long long)arg1 ;
-(unsigned long long)settingsSection;
-(id)generateNodesForSettingSection:(unsigned long long)arg1 ;
-(void)showLatestAnnouncement;
-(void)navigateToSettingsSection:(unsigned long long)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

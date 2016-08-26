/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class FBUserSession, FBContactSyncTableViewCell, FBContactSyncNetworker, NSString;

@interface FBContactSyncSettingViewController : FBTableViewController <UIAlertViewDelegate> {

	FBUserSession* _session;
	FBContactSyncTableViewCell* _settingsCell;
	FBContactSyncNetworker* _networker;
	BOOL _dismissWhenTurnOn;

}

@property (assign,nonatomic) BOOL dismissWhenTurnOn;                //@synthesize dismissWhenTurnOn=_dismissWhenTurnOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(void)setDismissWhenTurnOn:(BOOL)arg1 ;
-(void)_switcherChanged:(id)arg1 ;
-(void)_customizeSwitcherCell:(id)arg1 ;
-(void)_didTapLearnMore:(id)arg1 ;
-(BOOL)dismissWhenTurnOn;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
@end

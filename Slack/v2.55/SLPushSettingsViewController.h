/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@interface SLPushSettingsViewController : UITableViewController {

	BOOL _imsEnabled;
	BOOL _mentionsEnabled;
	BOOL _everythingEnabled;

}

@property (assign,nonatomic) BOOL imsEnabled;                     //@synthesize imsEnabled=_imsEnabled - In the implementation block
@property (assign,nonatomic) BOOL mentionsEnabled;                //@synthesize mentionsEnabled=_mentionsEnabled - In the implementation block
@property (assign,nonatomic) BOOL everythingEnabled;              //@synthesize everythingEnabled=_everythingEnabled - In the implementation block
-(void)setMentionsEnabled:(BOOL)arg1 ;
-(BOOL)mentionsEnabled;
-(void)refreshPushToken;
-(void)prefsChanged;
-(void)updatePrefValues;
-(void)refreshHeader;
-(void)setImsEnabled:(BOOL)arg1 ;
-(void)setEverythingEnabled:(BOOL)arg1 ;
-(BOOL)imsEnabled;
-(BOOL)everythingEnabled;
-(void)updatePushOptions;
-(void)reloadTableView;
-(void)dealloc;
-(id)init;
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
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scrollToTop;
@end

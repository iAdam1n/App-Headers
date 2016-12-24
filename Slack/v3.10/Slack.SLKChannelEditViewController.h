/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSManagedObject, UIBarButtonItem;

@interface Slack.SLKChannelEditViewController : UITableViewController {

	 originalChannel;
	 canRenameChannel;
	 channel;
	 doneButton;
	 cancelButton;
	 backButton;
	 currentEditField;
	 initialFocus;

}

@property (retain,nonatomic) NSManagedObject * originalChannel; 
@property (retain,nonatomic) UIBarButtonItem * doneButton; 
@property (retain,nonatomic) UIBarButtonItem * cancelButton; 
@property (retain,nonatomic) UIBarButtonItem * backButton; 
@property (assign,nonatomic) long long initialFocus; 
-(id)initWithChannel:(id)arg1 dependencies:(id)arg2 ;
-(id)initWithChannel:(id)arg1 initalFocus:(long long)arg2 dependencies:(id)arg3 ;
-(NSManagedObject *)originalChannel;
-(void)setOriginalChannel:(NSManagedObject *)arg1 ;
-(long long)initialFocus;
-(void)setInitialFocus:(long long)arg1 ;
-(void)exitEditMode;
-(void)saveName:(id)arg1 ;
-(void)savePurpose:(id)arg1 ;
-(void)saveTopic:(id)arg1 ;
-(void)setTitleForSelectedField:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)cancelEdits;
-(UIBarButtonItem *)backButton;
-(void)save;
-(void)setupToolbar;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)enterEditMode;
@end

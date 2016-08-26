/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSString, NSArray;

@interface Slack.SLKFeatureFlagsTableViewController : UITableViewController {

	 dependencies;
	 teamId;
	 featureFlags;
	 localFlags;
	 serverFlags;

}

@property (copy,nonatomic) NSString * teamId; 
@property (copy,nonatomic) NSArray * featureFlags; 
@property (copy,nonatomic) NSArray * localFlags; 
@property (copy,nonatomic) NSArray * serverFlags; 
-(void)setFeatureFlags:(NSArray *)arg1 ;
-(NSString *)teamId;
-(NSArray *)featureFlags;
-(void)setTeamId:(NSString *)arg1 ;
-(NSArray *)localFlags;
-(void)setLocalFlags:(NSArray *)arg1 ;
-(NSArray *)serverFlags;
-(void)setServerFlags:(NSArray *)arg1 ;
-(id)initWithDependencies:(id)arg1 teamId:(id)arg2 ;
-(void)loadFeatureFlags;
-(id)initWithCoder:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

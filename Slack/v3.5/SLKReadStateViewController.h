/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSDictionary, NSArray;

@interface SLKReadStateViewController : UITableViewController {

	NSDictionary* _logs;
	NSArray* _logKeys;

}

@property (nonatomic,retain) NSDictionary * logs;              //@synthesize logs=_logs - In the implementation block
@property (nonatomic,retain) NSArray * logKeys;                //@synthesize logKeys=_logKeys - In the implementation block
-(void)setLogs:(NSDictionary *)arg1 ;
-(NSArray *)logKeys;
-(void)setLogKeys:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(NSDictionary *)logs;
@end


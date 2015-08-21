/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@class IGQEExperiment;

@interface IGQEExperimentGroupViewController : IGGroupedTableViewController {

	IGQEExperiment* _experiment;

}

@property (nonatomic,retain) IGQEExperiment * experiment;              //@synthesize experiment=_experiment - In the implementation block
-(void)setExperiment:(IGQEExperiment *)arg1 ;
-(IGQEExperiment *)experiment;
-(id)userGroupAtIndexPath:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end


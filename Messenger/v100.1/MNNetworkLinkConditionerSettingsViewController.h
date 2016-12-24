/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MNNetworkLinkConditionerSettingsSliderCell, NSString;

@interface MNNetworkLinkConditionerSettingsViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	MNNetworkLinkConditionerSettingsSliderCell* _upstreamCell;
	MNNetworkLinkConditionerSettingsSliderCell* _downstreamCell;
	MNNetworkLinkConditionerSettingsSliderCell* _latencyCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sliderChanges:(id)arg1 ;
-(id)_prepareOnOffSwitchCell;
-(void)_changeOption:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
@end

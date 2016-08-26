/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView;

@interface Slack.SLKNotificationTimingController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	 selectedRow;
	 picker;
	 showPicker;
	 dependencies;

}

@property (assign,nonatomic) long long selectedRow; 
@property (retain,nonatomic) UIPickerView * picker; 
@property (assign,nonatomic) BOOL showPicker; 
-(id)initWithDependencies:(id)arg1 ;
-(void)setSelectedRow:(long long)arg1 ;
-(BOOL)showPicker;
-(void)setShowPicker:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIPickerView *)picker;
-(void)setPicker:(UIPickerView *)arg1 ;
-(long long)selectedRow;
@end

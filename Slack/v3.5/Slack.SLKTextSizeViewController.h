/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, _TtC5Slack13SLKStepSlider;

@interface Slack.SLKTextSizeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	 dependencies;
	 tableView;
	 slider;

}

@property (assign,__weak,nonatomic) UITableView * tableView; 
@property (assign,__weak,nonatomic) _TtC5Slack13SLKStepSlider * slider; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 dependencies:(id)arg3 ;
-(void)didUpdateValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)setSlider:(_TtC5Slack13SLKStepSlider *)arg1 ;
-(_TtC5Slack13SLKStepSlider *)slider;
@end


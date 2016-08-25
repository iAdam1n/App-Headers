/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIViewController, UIToolbar, UIButton, UILabel, UITableView, NSString;

@interface PreferredSportSettingsVC : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIViewController* _masterViewController;
	UIToolbar* _headerToolbar;
	UIButton* _backButton;
	UILabel* _titleLabel;
	UITableView* _paramsTableView;

}

@property (nonatomic,retain) UIToolbar * headerToolbar;                                   //@synthesize headerToolbar=_headerToolbar - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                       //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITableView * paramsTableView;                               //@synthesize paramsTableView=_paramsTableView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * masterViewController;              //@synthesize masterViewController=_masterViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)flurryTag;
-(void)setMasterViewController:(UIViewController *)arg1 ;
-(void)prepareSelectionCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(UIToolbar *)headerToolbar;
-(void)setHeaderToolbar:(UIToolbar *)arg1 ;
-(UITableView *)paramsTableView;
-(void)setParamsTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(UIViewController *)masterViewController;
-(void)dismiss;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)backButton;
-(void)setBackButton:(UIButton *)arg1 ;
@end


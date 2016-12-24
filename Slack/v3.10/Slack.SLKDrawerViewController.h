/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Slack/Slack.SLKDrawerHeaderViewDelegate.h>
#import <Slack/SLKDisplayPerformanceProtocol.h>
#import <Slack/Slack.SLKDrawerTeamSwitcherHintViewControllerDelegate.h>

@class SLKUser;

@interface Slack.SLKDrawerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, Slack.SLKDrawerHeaderViewDelegate, SLKDisplayPerformanceProtocol, Slack.SLKDrawerTeamSwitcherHintViewControllerDelegate> {

	 drawerDelegate;
	 dependencies;
	 drawerCellIdentifier;
	 sectionHeaderHeight;
	 drawerDefaultHeaderHeight;
	 drawerIPhone5HeaderHeight;
	 drawerMiniHeaderHeight;
	 tableView;
	 closingView;
	 presentInModal;
	 user;
	 drawerHintsViewController;
	 sectionOneOptions;
	 sectionTwoOptions;
	 sectionThreeOptions;
	 cellHeight;
	 modalCellHeight;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack31SLKDrawerViewControllerDelegate_> drawerDelegate; 
@property (assign,nonatomic) BOOL presentInModal; 
@property (readonly,nonatomic) SLKUser * user; 
@property (assign,nonatomic) double cellHeight; 
@property (assign,nonatomic) double modalCellHeight; 
@property (readonly,nonatomic) double headerHeight; 
+(double)drawerPadding;
+(id)lightBackgroundGray;
-(id)initWithUser:(id)arg1 dependencies:(id)arg2 ;
-(void)featureFlagValueChanged:(id)arg1 ;
-(BOOL)presentInModal;
-(void)setDrawerDelegate:(id<_TtP5Slack31SLKDrawerViewControllerDelegate_>)arg1 ;
-(id)initWithUser:(id)arg1 dependencies:(id)arg2 presentInModal:(BOOL)arg3 ;
-(id)performanceEventName;
-(void)showStarredItemsView;
-(void)showMentionsView;
-(void)currentStatusChanged;
-(void)closingViewTapped:(id)arg1 ;
-(id<_TtP5Slack31SLKDrawerViewControllerDelegate_>)drawerDelegate;
-(void)setPresentInModal:(BOOL)arg1 ;
-(double)modalCellHeight;
-(void)setModalCellHeight:(double)arg1 ;
-(void)setupTableSectionOptions;
-(BOOL)shouldHeightAdjustCells;
-(void)calculateCellHeight;
-(void)setupHeaderView;
-(void)setupClosingView;
-(BOOL)isHintsViewControllerShowing;
-(void)drawerHeaderTapped:(id)arg1 ;
-(BOOL)isCustomStatusEnabled;
-(void)showTeamSwitcher:(id)arg1 ;
-(void)removeDrawerHints;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(double)headerHeight;
-(double)cellHeight;
-(void)showSettings;
-(void)close:(id)arg1 ;
-(SLKUser *)user;
-(void)setCellHeight:(double)arg1 ;
@end

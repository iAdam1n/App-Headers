/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKTeamSwitcherBaseViewController.h>
#import <Slack/Slack.SLKTeamSwitcherEnterpriseTableViewCellDelegate.h>

@class UIView, UILabel, NSArray, NSDictionary;

@interface Slack.SLKTeamSwitcherViewController : Slack.SLKTeamSwitcherBaseViewController <Slack.SLKTeamSwitcherEnterpriseTableViewCellDelegate> {

	 delegate;
	 useUnreadCountsTimer;
	 lastUnreadLoadTime;
	 unreadCountsTimer;
	 unreadCountsInterval;
	 teamsHeaderView;
	 teamsHeaderLabel;
	 SLKTeamSwitcherEnterpriseTableViewCellId;
	 SLKTeamSwitcherTableViewCellId;
	 enterpriseOrgCellHeight;
	 enterpriseCellHeight;
	 tallCellHeight;
	 defaultsHasUnreads;
	 defaultsMentionsCounts;
	 hasUnreads;
	 unreadCountsDefaultsKey;
	 mentionCountsDefaultsKey;
	 switcherModels;
	 switcherModelDictionary;
	 selectedTeamId;
	 selectedEnterpriseId;
	 isAccountSwitching;
	 tableSeparatorInset;
	 headerView;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_> delegate; 
@property (retain,nonatomic) UIView * teamsHeaderView; 
@property (retain,nonatomic) UILabel * teamsHeaderLabel; 
@property (copy,nonatomic) NSArray * switcherModels; 
@property (copy,nonatomic) NSDictionary * switcherModelDictionary; 
-(id)initWithDependencies:(id)arg1 ;
-(void)refreshAndReloadData;
-(void)teamSwitched;
-(void)updateTheme;
-(void)loadCounts;
-(void)enterpriseSettingsAction:(id)arg1 switcherModel:(id)arg2 ;
-(UIView *)teamsHeaderView;
-(void)setTeamsHeaderView:(UIView *)arg1 ;
-(UILabel *)teamsHeaderLabel;
-(void)setTeamsHeaderLabel:(UILabel *)arg1 ;
-(NSArray *)switcherModels;
-(void)setSwitcherModels:(NSArray *)arg1 ;
-(NSDictionary *)switcherModelDictionary;
-(void)setSwitcherModelDictionary:(NSDictionary *)arg1 ;
-(void)refreshDataWithLoadCounts:(BOOL)arg1 ;
-(void)loadTeams;
-(void)loadDefaultsCounts;
-(BOOL)defaultsHasUnreadsForTeamId:(id)arg1 ;
-(long long)defaultsMentionsCountForTeamId:(id)arg1 ;
-(void)loadUnreadCountsTimerFired:(id)arg1 ;
-(void)loadUnreadCounts;
-(void)updateLoadingCounts;
-(void)setupHeaderFooter;
-(void)hideSeparatorForCell:(id)arg1 hide:(BOOL)arg2 ;
-(void)swtichToAccount:(id)arg1 ;
-(id)initWithDependencies:(id)arg1 nibName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_>)delegate;
-(void)viewDidLoad;
@end


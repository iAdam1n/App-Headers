/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKTeamSwitcherBaseViewController.h>
#import <Slack/SLKDisplayPerformanceProtocol.h>

@class UIView, UILabel, NSArray, NSDictionary;

@interface Slack.SLKTeamSwitcherViewController : Slack.SLKTeamSwitcherBaseViewController <SLKDisplayPerformanceProtocol> {

	 delegate;
	 useUnreadCountsTimer;
	 lastUnreadLoadTime;
	 unreadCountsTimer;
	 unreadCountsInterval;
	 teamsHeaderView;
	 teamsHeaderLabel;
	 SLKTeamSwitcherEnterpriseTableViewCellId;
	 SLKTeamSwitcherTableViewCellId;
	 cellHeight;
	 tableSectionFirstCellContentOffset;
	 sectionHeaderHeight;
	 defaultsHasUnreads;
	 defaultsMentionsCounts;
	 hasUnreads;
	 unreadCountsDefaultsKey;
	 mentionCountsDefaultsKey;
	 enterpriseIds;
	 enterpriseSwitcherModels;
	 switcherLookupDictionary;
	 selectedTeamId;
	 selectedEnterpriseId;
	 isAccountSwitching;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_> delegate; 
@property (retain,nonatomic) UIView * teamsHeaderView; 
@property (retain,nonatomic) UILabel * teamsHeaderLabel; 
@property (copy,nonatomic) NSArray * enterpriseIds; 
@property (copy,nonatomic) NSDictionary * enterpriseSwitcherModels; 
@property (copy,nonatomic) NSDictionary * switcherLookupDictionary; 
@property (readonly,nonatomic) BOOL hasEnterpriseTeams; 
-(void)refreshAndReloadData;
-(id)stationaryView;
-(void)teamSwitched;
-(void)updateTheme;
-(id)performanceEventName;
-(UIView *)teamsHeaderView;
-(void)setTeamsHeaderView:(UIView *)arg1 ;
-(UILabel *)teamsHeaderLabel;
-(void)setTeamsHeaderLabel:(UILabel *)arg1 ;
-(NSArray *)enterpriseIds;
-(void)setEnterpriseIds:(NSArray *)arg1 ;
-(NSDictionary *)enterpriseSwitcherModels;
-(void)setEnterpriseSwitcherModels:(NSDictionary *)arg1 ;
-(NSDictionary *)switcherLookupDictionary;
-(void)setSwitcherLookupDictionary:(NSDictionary *)arg1 ;
-(BOOL)hasEnterpriseTeams;
-(void)loadUnreadCountsTimerFired:(id)arg1 ;
-(void)updateLoadingCounts;
-(id)initWithDependencies:(id)arg1 nibName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_>)delegate;
-(void)viewDidLoad;
-(id)initWithDependencies:(id)arg1 ;
@end

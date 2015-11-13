/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, _TtC5Slack25SLChannelsSearchEmptyView, UIColor, NSString, UITableView;

@interface Slack.SLChannelsSearchTableDataDelegate : NSObject <UITableViewDataSource, UITableViewDelegate> {

	 isQuickSwitching;
	 quickSwitcherDM;
	 filterText;
	 resultsHeaderView;
	 notMemberHeaderView;
	 otherHeaderView;
	 footerView;
	 emptyView;
	 sectionHeaderHeight;
	 sectionPadding;
	 sectionHeaderInset;
	 hoverItemColor;
	 textColor;
	 badgeColor;
	 activePresenceColor;
	 columnBackgroundColor;
	 SLKChannelCellId;
	 tableView;
	 onScrollFunction;

}

@property (assign,nonatomic) BOOL isQuickSwitching; 
@property (retain,nonatomic) UIView * resultsHeaderView; 
@property (retain,nonatomic) UIView * notMemberHeaderView; 
@property (retain,nonatomic) UIView * otherHeaderView; 
@property (retain,nonatomic) UIView * footerView; 
@property (retain,nonatomic) _TtC5Slack25SLChannelsSearchEmptyView * emptyView; 
@property (readonly,nonatomic) double sectionHeaderHeight; 
@property (readonly,nonatomic) double sectionPadding; 
@property (readonly,nonatomic) double sectionHeaderInset; 
@property (retain,nonatomic) UIColor * hoverItemColor; 
@property (retain,nonatomic) UIColor * textColor; 
@property (retain,nonatomic) UIColor * badgeColor; 
@property (retain,nonatomic) UIColor * activePresenceColor; 
@property (retain,nonatomic) UIColor * columnBackgroundColor; 
@property (readonly,nonatomic) NSString * SLKChannelCellId; 
@property (retain,nonatomic) UITableView * tableView; 
-(void)hideCounts:(BOOL)arg1 ;
-(void)onScroll:(/*^block*/id)arg1 ;
-(void)noRowsState;
-(void)filterTable:(id)arg1 ;
-(void)setHoverItemColor:(UIColor *)arg1 ;
-(void)setActivePresenceColor:(UIColor *)arg1 ;
-(void)setColumnBackgroundColor:(UIColor *)arg1 ;
-(void)refreshForThemeChange;
-(void)showEmptyState:(BOOL)arg1 ;
-(id)firstRowItemGhostText:(id)arg1 ;
-(BOOL)isQuickSwitching;
-(void)quickSwitchToFirstRowItem;
-(id)firstRowItem;
-(UIColor *)columnBackgroundColor;
-(void)setIsQuickSwitching:(BOOL)arg1 ;
-(UIView *)resultsHeaderView;
-(void)setResultsHeaderView:(UIView *)arg1 ;
-(UIView *)notMemberHeaderView;
-(void)setNotMemberHeaderView:(UIView *)arg1 ;
-(UIView *)otherHeaderView;
-(void)setOtherHeaderView:(UIView *)arg1 ;
-(_TtC5Slack25SLChannelsSearchEmptyView *)emptyView;
-(void)setEmptyView:(_TtC5Slack25SLChannelsSearchEmptyView *)arg1 ;
-(double)sectionPadding;
-(double)sectionHeaderInset;
-(UIColor *)hoverItemColor;
-(UIColor *)activePresenceColor;
-(NSString *)SLKChannelCellId;
-(id)createSectionHeaderView:(id)arg1 withHeight:(double)arg2 withInset:(double)arg3 ;
-(id)paddingCell;
-(void)quickSwitch:(id)arg1 ;
-(void)sectionHeaderTapped:(id)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(double)sectionHeaderHeight;
-(UIColor *)textColor;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)loadData:(/*^block*/id)arg1 ;
@end


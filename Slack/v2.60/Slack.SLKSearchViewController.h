/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <Slack/Slack.SLKSearchBarViewDelegate.h>

@class _TtC5Slack16SLKSearchBarView, _TtC5Slack18SLKSearchEmptyView, AKSegmentedControl, UITableView, NSLayoutConstraint, UIView, UIActivityIndicatorView;

@interface Slack.SLKSearchViewController : UIViewController <Slack.SLKSearchBarViewDelegate> {

	 initialSegmentedControlIndex;
	 searchBarView;
	 emptyStateView;
	 segmentedControl;
	 tableView;
	 hairlineConstraint;
	 topContainerView;
	 loadingIndicatorView;
	 loadMoreActivityIndicator;
	 loadMoreInsetHeight;
	 isKeybaordTransitioning;
	 currentSearchQuery;
	 searchDataManager;
	 messagesTableDelegate;
	 filesTableDelegate;
	 messageTableContentOffset;
	 fileTableContentOffset;
	 isSearching;
	 isSearchingHistory;
	 isLoadingFiles;
	 isResortingFiles;
	 filesQuery;
	 filesQueryCurrentPage;
	 fileSearchResults;
	 isLoadingMessages;
	 isResortingMessages;
	 messagesQuery;
	 messagesQueryCurrentPage;
	 messageSearchResults;
	 actionSheetHelper.storage;
	 useArchiveViewerOnly;

}

@property (assign,nonatomic) unsigned long long initialSegmentedControlIndex; 
@property (retain,nonatomic) _TtC5Slack16SLKSearchBarView * searchBarView; 
@property (retain,nonatomic) _TtC5Slack18SLKSearchEmptyView * emptyStateView; 
@property (retain,nonatomic) AKSegmentedControl * segmentedControl; 
@property (retain,nonatomic) UITableView * tableView; 
@property (retain,nonatomic) NSLayoutConstraint * hairlineConstraint; 
@property (retain,nonatomic) UIView * topContainerView; 
@property (retain,nonatomic) UIActivityIndicatorView * loadingIndicatorView; 
@property (retain,nonatomic) UIActivityIndicatorView * loadMoreActivityIndicator; 
@property (readonly,nonatomic) double searchBarWidth; 
-(void)setEmptyStateView:(_TtC5Slack18SLKSearchEmptyView *)arg1 ;
-(_TtC5Slack18SLKSearchEmptyView *)emptyStateView;
-(void)setInitialSegmentedControlIndex:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)hairlineConstraint;
-(void)setHairlineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)reloadTableCellsAfterRotationHack;
-(void)searchBarDidCancel:(id)arg1 ;
-(void)searchBarDidReturn:(id)arg1 text:(id)arg2 ;
-(void)searchBarDidEditText:(id)arg1 text:(id)arg2 ;
-(unsigned long long)initialSegmentedControlIndex;
-(_TtC5Slack16SLKSearchBarView *)searchBarView;
-(void)setSearchBarView:(_TtC5Slack16SLKSearchBarView *)arg1 ;
-(UIView *)topContainerView;
-(void)setTopContainerView:(UIView *)arg1 ;
-(UIActivityIndicatorView *)loadMoreActivityIndicator;
-(void)setLoadMoreActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(double)searchBarWidth;
-(void)scrollToTopWithAnimated:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(AKSegmentedControl *)segmentedControl;
-(void)segmentedControlChanged:(id)arg1 ;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicatorView;
-(void)setSegmentedControl:(AKSegmentedControl *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end


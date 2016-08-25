/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <Slack/SLKImageCellDelegate.h>

@class UITableView, NSLayoutConstraint, UIActivityIndicatorView;

@interface Slack.SLKSearchArchiveViewController : UIViewController <SLKImageCellDelegate> {

	 tableView;
	 hairlineConstraint;
	 loadingIndicatorView;
	 actionSheetHelper;
	 topActivityIndicator;
	 bottomActivityIndicator;
	 loadMoreInsetHeight;
	 oldestLoadingTimestamp;
	 didLoadOlder;
	 hasOlder;
	 newestLoadingTimestamp;
	 didLoadNewer;
	 hasNewer;
	 searchMessage;
	 dataManager;
	 messageArchiveOrderedSet;
	 messageArchiveDictionary;
	 SLKSearchArchiveTableViewCellId;
	 SLKSearchArchiveTableViewImageCellId;
	 SLKSearchArchiveTableViewEmailCellId;
	 SLKSearchArchiveTableViewFileCellId;
	 SLKSearchArchiveQueryCount;
	 apiCallCount;
	 concurrentQueue;
	 cancelsTableLongPress;
	 dependencies;
	 rootDependencies;

}

@property (retain,nonatomic) UITableView * tableView; 
@property (retain,nonatomic) NSLayoutConstraint * hairlineConstraint; 
@property (retain,nonatomic) UIActivityIndicatorView * loadingIndicatorView; 
@property (retain,nonatomic) UIActivityIndicatorView * topActivityIndicator; 
@property (retain,nonatomic) UIActivityIndicatorView * bottomActivityIndicator; 
-(void)imageCellReactionsUpdated:(id)arg1 message:(id)arg2 ;
-(id)initWithSearchMessage:(id)arg1 dependencies:(id)arg2 ;
-(NSLayoutConstraint *)hairlineConstraint;
-(void)setHairlineConstraint:(NSLayoutConstraint *)arg1 ;
-(UIActivityIndicatorView *)topActivityIndicator;
-(void)setTopActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)bottomActivityIndicator;
-(void)setBottomActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(id)initWithSearchMessage:(id)arg1 dependencies:(id)arg2 rootDependencies:(id)arg3 ;
-(void)searchArchiveCellReactionsUpdated:(id)arg1 searchMessage:(id)arg2 ;
-(void)searchArchiveCellExpandAttachment:(id)arg1 tsid:(id)arg2 ;
-(void)searchArchiveCellShowFullScreenImage:(id)arg1 image:(id)arg2 subviewRect:(CGRect)arg3 ;
-(void)searchArchiveCellDidTapLink:(id)arg1 link:(id)arg2 ;
-(void)searchArchiveCellDidLongPressLink:(id)arg1 link:(id)arg2 ;
-(void)tableLongPressed:(id)arg1 ;
-(void)reloadTableCellsAfterRotationHack;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)jump;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicatorView;
@end


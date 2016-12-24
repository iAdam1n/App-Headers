/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <eBay/EGORefreshHelperDelegate.h>

@class EGORefreshHelper, UITableView, NSMutableArray, RefreshThrobber, ViewUserController, UIView, NSIndexPath, EBNUser, UINavigationBar, NSString;

@interface ViewFeedbackController : EUIViewController <UITableViewDataSource, UITableViewDelegate, EGORefreshHelperDelegate> {

	EGORefreshHelper* refreshHelper;
	UITableView* myTableView;
	NSMutableArray* feedbackDetails;
	RefreshThrobber* refreshThrobber;
	int currentPage;
	int entriesPerPage;
	int maxPages;
	int totalPages;
	int totalEntries;
	int totalDetails;
	BOOL dataLoaded;
	BOOL loggedIn;
	ViewUserController* viewUserController;
	long long feedbackDepth;
	BOOL apiErrors;
	BOOL loadingFromPullDown;
	long long feedbackPeriod;
	long long feedbackType;
	long long feedbackCommentType;
	UIView* emptyFeedbackResults;
	NSIndexPath* lastSelectedIndexPath;
	long long numberOfSections;
	long long numberOfSelectableRows;
	EBNUser* _user;
	UINavigationBar* _navBar;

}

@property (nonatomic,retain) UINavigationBar * navBar;                   //@synthesize navBar=_navBar - In the implementation block
@property (assign,nonatomic) long long feedbackDepth; 
@property (assign,nonatomic) long long feedbackPeriod; 
@property (assign,nonatomic) long long feedbackType; 
@property (assign,nonatomic) long long feedbackCommentType; 
@property (nonatomic,retain) EBNUser * user;                             //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UITableView * myTableView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initThrobber;
-(void)setFeedbackDepth:(long long)arg1 ;
-(UITableView *)myTableView;
-(void)reloadTableViewDataSource;
-(void)setMyTableView:(UITableView *)arg1 ;
-(void)refreshData:(BOOL)arg1 ;
-(void)setFeedbackPeriod:(long long)arg1 ;
-(void)setFeedbackCommentType:(long long)arg1 ;
-(BOOL)filterFeedbackFromDetails:(id)arg1 ;
-(void)feedbackDetailsChanged;
-(long long)feedbackDepth;
-(long long)feedbackCommentType;
-(void)finishFetchData:(id)arg1 ;
-(long long)feedbackPeriod;
-(long long)offsetOfRow0InSection:(long long)arg1 ;
-(id)feedbackTypeString;
-(id)feedbackCommentTypeString;
-(void)removeEmptyFeedbackResults;
-(void)updateEmptyFeedbackResults;
-(void)showUser:(id)arg1 ;
-(void)showItemForFeedback:(id)arg1 ;
-(void)filterFeedback;
-(id)getEmptyFeedbackResults;
-(void)showUserWhoLeftFeedback:(id)arg1 ;
-(void)changeFeedback;
-(void)changeFeedbackPeriod:(long long)arg1 ;
-(void)changeFeedbackType:(long long)arg1 ;
-(void)changeFeedbackCommentType:(long long)arg1 ;
-(void)dealloc;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(long long)feedbackType;
-(void)setFeedbackType:(long long)arg1 ;
-(void)fetchData;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(EBNUser *)user;
-(void)setUser:(EBNUser *)arg1 ;
@end

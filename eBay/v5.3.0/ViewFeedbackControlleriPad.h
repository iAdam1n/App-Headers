/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/TexturedBackgroundTableViewController.h>
#import <nautilus/EBNUserProfileDataManagerObserver.h>
#import <nautilus/EBNFollowedDataManagerObserver.h>
#import <eBay/RotatingPopoverDelegate.h>

@class NSMutableArray, UIView, UIImageView, UILabel, SegmentedControl, UIButton, NSString, ActivitySpinnerView, RotatingPopover, UITableView, NSArray, UserFeedback, EBNUser;

@interface ViewFeedbackControlleriPad : TexturedBackgroundTableViewController <EBNUserProfileDataManagerObserver, EBNFollowedDataManagerObserver, RotatingPopoverDelegate> {

	NSMutableArray* feedbackDetails;
	int currentPage;
	int maxPages;
	int totalPages;
	int totalEntries;
	BOOL dataLoaded;
	long long feedbackDepth;
	BOOL apiErrors;
	UIView* emptyFeedbackResults;
	UIView* _headerView;
	UIImageView* _avatarImageView;
	UILabel* _userNameLabel;
	UILabel* _positiveFeedbackPercentLabel;
	SegmentedControl* _segmentedControl;
	UIButton* _dropDownButton;
	UIButton* _filterButton;
	NSString* _userID;
	long long _feedbackType;
	ActivitySpinnerView* _spinner;
	id _currentPopoverButton;
	RotatingPopover* _popover;
	UITableView* _tableViewInPopover;
	NSArray* _feedbackCommentTypes;
	NSArray* _feedbackTypes;
	UserFeedback* _userFeedback;
	EBNUser* _user;
	long long _feedbackCommentType;

}

@property (nonatomic,retain) ActivitySpinnerView * spinner;                              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic,__weak) id currentPopoverButton;                             //@synthesize currentPopoverButton=_currentPopoverButton - In the implementation block
@property (nonatomic,retain) UIView * emptyFeedbackResults; 
@property (nonatomic,retain) RotatingPopover * popover;                                  //@synthesize popover=_popover - In the implementation block
@property (nonatomic,retain) UITableView * tableViewInPopover;                           //@synthesize tableViewInPopover=_tableViewInPopover - In the implementation block
@property (nonatomic,retain) NSArray * feedbackCommentTypes;                             //@synthesize feedbackCommentTypes=_feedbackCommentTypes - In the implementation block
@property (nonatomic,retain) NSArray * feedbackTypes;                                    //@synthesize feedbackTypes=_feedbackTypes - In the implementation block
@property (nonatomic,retain) UserFeedback * userFeedback;                                //@synthesize userFeedback=_userFeedback - In the implementation block
@property (nonatomic,retain) EBNUser * user;                                             //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) long long feedbackCommentType;                              //@synthesize feedbackCommentType=_feedbackCommentType - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * avatarImageView;                       //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * userNameLabel;                             //@synthesize userNameLabel=_userNameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * positiveFeedbackPercentLabel;              //@synthesize positiveFeedbackPercentLabel=_positiveFeedbackPercentLabel - In the implementation block
@property (assign,nonatomic,__weak) SegmentedControl * segmentedControl;                 //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic,__weak) UIButton * dropDownButton;                           //@synthesize dropDownButton=_dropDownButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * filterButton;                             //@synthesize filterButton=_filterButton - In the implementation block
@property (assign,nonatomic) long long feedbackDepth; 
@property (nonatomic,retain) NSString * userID;                                          //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) long long feedbackType;                                     //@synthesize feedbackType=_feedbackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackDepth:(long long)arg1 ;
-(UILabel *)userNameLabel;
-(void)setUserNameLabel:(UILabel *)arg1 ;
-(void)setUserFeedback:(UserFeedback *)arg1 ;
-(void)setupSegmentedControl;
-(void)handleCloseItemNotification:(id)arg1 ;
-(UILabel *)positiveFeedbackPercentLabel;
-(void)setPositiveFeedbackPercentLabel:(UILabel *)arg1 ;
-(void)setFeedbackCommentType:(long long)arg1 ;
-(long long)feedbackDepth;
-(long long)feedbackCommentType;
-(void)removeEmptyFeedbackResults;
-(void)updateEmptyFeedbackResults;
-(UIView *)emptyFeedbackResults;
-(void)toggleFollow:(id)arg1 ;
-(void)setFeedbackCommentTypes:(NSArray *)arg1 ;
-(void)setFeedbackTypes:(NSArray *)arg1 ;
-(NSArray *)feedbackTypes;
-(id)displayStringForFeedbackType:(long long)arg1 ;
-(void)setupFilterUI;
-(void)setFollowButtonState:(BOOL)arg1 ;
-(void)setupDropDownButton;
-(UIButton *)dropDownButton;
-(id)displayStringForFeedbackCommentType:(long long)arg1 ;
-(unsigned long long)indexOfCurrentFeedbackType;
-(id)defaultAvatarImage;
-(void)setEmptyFeedbackResults:(UIView *)arg1 ;
-(id)makeEmptyFeedbackResultsView;
-(void)setAvatarImageFromUser:(id)arg1 ;
-(void)presentPopover:(id)arg1 ;
-(void)finishFetchDataWithResponse:(id)arg1 ;
-(void)refreshFollowing;
-(void)postSignInAction;
-(UITableView *)tableViewInPopover;
-(long long)feedbackTableSectionCount;
-(id)currentPopoverButton;
-(NSArray *)feedbackCommentTypes;
-(long long)effectiveIndexForRowAtIndexPath:(id)arg1 ;
-(long long)indexOfSectionContainingFeedbackOlderThan90Days;
-(void)dismissItemDetail;
-(void)setCurrentPopoverButton:(id)arg1 ;
-(void)setTableViewInPopover:(UITableView *)arg1 ;
-(void)dropDownButtonAction:(id)arg1 ;
-(void)handleEbayUserImageChanged:(id)arg1 ;
-(unsigned long long)indexOfCurrentFeedbackCommentType;
-(void)viewItem:(id)arg1 ;
-(UIImageView *)avatarImageView;
-(void)setAvatarImageView:(UIImageView *)arg1 ;
-(void)setDropDownButton:(UIButton *)arg1 ;
-(void)refreshData;
-(void)followedDataManager:(id)arg1 didUpdate:(long long)arg2 ;
-(void)followedDataManager:(id)arg1 didError:(long long)arg2 ;
-(void)userDataUpdateFor:(id)arg1 error:(id)arg2 ;
-(UserFeedback *)userFeedback;
-(EBNUser *)user;
-(void)setUser:(EBNUser *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)dismiss;
-(SegmentedControl *)segmentedControl;
-(ActivitySpinnerView *)spinner;
-(void)setSpinner:(ActivitySpinnerView *)arg1 ;
-(void)setFeedbackType:(long long)arg1 ;
-(long long)feedbackType;
-(void)dismissPopover;
-(RotatingPopover *)popover;
-(void)setPopover:(RotatingPopover *)arg1 ;
-(void)fetchData;
-(void)setSegmentedControl:(SegmentedControl *)arg1 ;
-(void)segmentedControlAction:(id)arg1 ;
-(BOOL)isFollowing;
-(UIButton *)filterButton;
-(void)setFilterButton:(UIButton *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end


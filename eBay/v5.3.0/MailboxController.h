/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <eBay/EGORefreshHelperDelegate.h>
#import <eBay/EBUMessagesViewControllerProtocol.h>

@class EGORefreshHelper, RefreshThrobber, UITableView, UIView, UILabel, FolderController, NSString, NSArray;

@interface MailboxController : EUIViewController <UITableViewDelegate, UITableViewDataSource, UITabBarControllerDelegate, EGORefreshHelperDelegate, EBUMessagesViewControllerProtocol> {

	EGORefreshHelper* refreshHelper;
	RefreshThrobber* refreshThrobber;
	UITableView* myTableView;
	UIView* emptyMessagesView;
	UILabel* emptyMessageLabel;
	long long unreadMessagesAndAlerts;
	FolderController* inboxController;
	FolderController* folderController;
	double lastLoadedTime;
	BOOL visible;
	BOOL loading;
	BOOL isObserving;
	long long navigationRootID;
	NSString* _mc3MessageId;
	NSString* _notificationReferenceId;
	NSArray* _folders;

}

@property (nonatomic,retain) UITableView * myTableView; 
@property (nonatomic,retain) UIView * emptyMessagesView; 
@property (nonatomic,retain) UILabel * emptyMessageLabel; 
@property (nonatomic,copy) NSString * mc3MessageId;                         //@synthesize mc3MessageId=_mc3MessageId - In the implementation block
@property (nonatomic,copy) NSString * notificationReferenceId;              //@synthesize notificationReferenceId=_notificationReferenceId - In the implementation block
@property (nonatomic,retain) NSArray * folders;                             //@synthesize folders=_folders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id postLoadHandler; 
@property (assign,nonatomic) long long navigationRootID; 
+(id)sharedController;
-(UITableView *)myTableView;
-(void)initThrobber;
-(void)fetchDataWithThrobber;
-(void)setNavigationRootID:(long long)arg1 ;
-(long long)navigationRootID;
-(void)reset:(id)arg1 ;
-(void)trackViewDidBecomeActive;
-(void)reloadTableViewDataSource;
-(void)setMyTableView:(UITableView *)arg1 ;
-(void)handleBadgeCountChange:(id)arg1 ;
-(void)fetchMessageSummary;
-(void)setNotificationReferenceId:(NSString *)arg1 ;
-(UILabel *)emptyMessageLabel;
-(UIView *)emptyMessagesView;
-(void)handleRefreshButton;
-(void)showBusy:(BOOL)arg1 ;
-(void)showFirstMessageForListingID:(id)arg1 ;
-(void)showEBayMessage:(id)arg1 ;
-(void)showInboxAnimated:(BOOL)arg1 ;
-(void)setEmptyMessagesView:(UIView *)arg1 ;
-(void)setEmptyMessageLabel:(UILabel *)arg1 ;
-(NSString *)notificationReferenceId;
-(void)showInboxAction:(id)arg1 ;
-(void)resizeCountButton:(id)arg1 withCount:(id)arg2 ;
-(void)showFolderAction:(id)arg1 ;
-(void)showInboxAction:(id)arg1 animated:(BOOL)arg2 ;
-(void)createInbox;
-(NSString *)mc3MessageId;
-(void)setMc3MessageId:(NSString *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)track;
-(NSArray *)folders;
-(void)setFolders:(NSArray *)arg1 ;
-(void)clearData;
-(void)setup;
@end

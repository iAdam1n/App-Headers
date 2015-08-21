/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <TestFlight/OAAppDetailHeaderViewDelegate.h>
#import <TestFlight/OAAppDetailTableViewCellDelegate.h>
#import <TestFlight/OABuyButtonDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <TestFlight/OAAppDetailErrorTableViewCellDelegate.h>

@class OASAppContext, UITableView, UIBarButtonItem, OAAppDetailHeaderView, NSMutableArray, NSString;

@interface OAAppDetailViewController : UIViewController <OAAppDetailHeaderViewDelegate, OAAppDetailTableViewCellDelegate, OABuyButtonDelegate, UITableViewDataSource, UITableViewDelegate, OAAppDetailErrorTableViewCellDelegate> {

	BOOL _shouldHeaderFloat;
	OASAppContext* _appContext;
	UITableView* _tableView;
	UIBarButtonItem* _doneButton;
	OAAppDetailHeaderView* _appView;
	NSMutableArray* _cells;

}

@property (nonatomic,retain) OASAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) BOOL shouldHeaderFloat;                       //@synthesize shouldHeaderFloat=_shouldHeaderFloat - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                 //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) OAAppDetailHeaderView * appView;              //@synthesize appView=_appView - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                       //@synthesize cells=_cells - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAppContext:(id)arg1 isModal:(BOOL)arg2 ;
-(void)setAppView:(OAAppDetailHeaderView *)arg1 ;
-(OAAppDetailHeaderView *)appView;
-(void)itemOfferButton:(id)arg1 inviteAcceptanceDidComplete:(BOOL)arg2 appContext:(id)arg3 error:(id)arg4 ;
-(void)tappedRetryButton;
-(void)appDetailAppViewSizeDidChange:(id)arg1 ;
-(void)showActivityIndicatorWithHeader:(BOOL)arg1 ;
-(void)getAppDetails;
-(void)getInviteDetails;
-(void)showDetails;
-(void)showErrorMessage:(id)arg1 withHeader:(BOOL)arg2 withRetryButton:(BOOL)arg3 ;
-(BOOL)shouldHeaderFloat;
-(void)setShouldHeaderFloat:(BOOL)arg1 ;
-(void)populateHeaderWithWatchHeader:(BOOL)arg1 ;
-(void)showBuildDetails;
-(void)showIncompatibleBuildCell;
-(void)appDetailTableViewCellSizeDidChange:(id)arg1 ;
-(void)setCells:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)done;
-(UITableView *)tableView;
-(void)doneButtonTapped:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)setAppContext:(OASAppContext *)arg1 ;
-(void)loadData;
-(OASAppContext *)appContext;
-(NSMutableArray *)cells;
@end


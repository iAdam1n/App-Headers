/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class EBUDebugCategoryViewController, NSMutableArray, NSArray, NSTimer, EBUDebugCellBase, NSDictionary, EUITableView, NSString;

@interface EBUDebugViewController : UIViewController <UIAlertViewDelegate, UISearchControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	EBUDebugCategoryViewController* _currentCategory;
	NSMutableArray* _section0Cells;
	NSMutableArray* _categoryHeaderCells;
	NSArray* _categoryNames;
	NSMutableArray* _settingCells;
	NSTimer* _dateDisplayTimer;
	EBUDebugCellBase* _timeCell;
	NSDictionary* _titleStyle;
	NSDictionary* _bodyStyle;
	NSDictionary* _rightJustStyle;
	EUITableView* _tableView;

}

@property (retain) EBUDebugCategoryViewController * currentCategory;              //@synthesize currentCategory=_currentCategory - In the implementation block
@property (retain) NSMutableArray * section0Cells;                                //@synthesize section0Cells=_section0Cells - In the implementation block
@property (retain) NSMutableArray * categoryHeaderCells;                          //@synthesize categoryHeaderCells=_categoryHeaderCells - In the implementation block
@property (retain) NSArray * categoryNames;                                       //@synthesize categoryNames=_categoryNames - In the implementation block
@property (retain) NSMutableArray * settingCells;                                 //@synthesize settingCells=_settingCells - In the implementation block
@property (retain) NSTimer * dateDisplayTimer;                                    //@synthesize dateDisplayTimer=_dateDisplayTimer - In the implementation block
@property (retain) EBUDebugCellBase * timeCell;                                   //@synthesize timeCell=_timeCell - In the implementation block
@property (retain) NSDictionary * titleStyle;                                     //@synthesize titleStyle=_titleStyle - In the implementation block
@property (retain) NSDictionary * bodyStyle;                                      //@synthesize bodyStyle=_bodyStyle - In the implementation block
@property (retain) NSDictionary * rightJustStyle;                                 //@synthesize rightJustStyle=_rightJustStyle - In the implementation block
@property (retain) EUITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupTableCells;
-(void)setSection0Cells:(NSMutableArray *)arg1 ;
-(void)setCategoryHeaderCells:(NSMutableArray *)arg1 ;
-(void)setupSubTableCells;
-(void)setupSubTableInfoCells;
-(void)setupExpositionBlocks;
-(void)addCellsToExtraCategories;
-(void)updateTimeDisplay:(id)arg1 ;
-(void)setDateDisplayTimer:(NSTimer *)arg1 ;
-(void)removeAllDebugOverrides;
-(NSMutableArray *)section0Cells;
-(void)addCategoryCellWithTitle:(id)arg1 ;
-(NSMutableArray *)categoryHeaderCells;
-(id)addSettingCellWithType:(unsigned)arg1 forSetting:(id)arg2 category:(id)arg3 ;
-(id)addSwitchCellForSetting:(id)arg1 category:(id)arg2 ;
-(id)addOverButtonCellWithTitle:(id)arg1 buttonLabel:(id)arg2 category:(id)arg3 action:(/*^block*/id)arg4 ;
-(id)addButtonCellWithTitle:(id)arg1 buttonLabel:(id)arg2 category:(id)arg3 action:(/*^block*/id)arg4 ;
-(id)addEmailCellWithTitle:(id)arg1 buttonLabel:(id)arg2 category:(id)arg3 ;
-(void)listAnItem;
-(void)showSellingDrafts;
-(void)showSellingActiveItems;
-(void)showSellingScheduledItems;
-(void)crashApplication;
-(void)clearKeychainAndCrashApplication;
-(void)assertApp;
-(NSMutableArray *)settingCells;
-(id)cellForDebugSetting:(id)arg1 ;
-(id)addDCSCellWithType:(unsigned)arg1 forSetting:(id)arg2 category:(id)arg3 ;
-(NSDictionary *)bodyStyle;
-(id)makeAttributedString:(id)arg1 ;
-(id)addInfoCellWithString:(id)arg1 named:(id)arg2 category:(id)arg3 ;
-(void)copyEPGuid;
-(NSDictionary *)rightJustStyle;
-(void)setTimeCell:(EBUDebugCellBase *)arg1 ;
-(void)showSiteSpeed;
-(void)copyAPNSToken;
-(void)showCopiedToast;
-(EBUDebugCellBase *)timeCell;
-(id)appVersionString;
-(EBUDebugCategoryViewController *)currentCategory;
-(void)setCategoryNames:(NSArray *)arg1 ;
-(void)setSettingCells:(NSMutableArray *)arg1 ;
-(NSTimer *)dateDisplayTimer;
-(void)setBodyStyle:(NSDictionary *)arg1 ;
-(void)setRightJustStyle:(NSDictionary *)arg1 ;
-(NSArray *)categoryNames;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(EUITableView *)tableView;
-(void)setTableView:(EUITableView *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setCurrentCategory:(EBUDebugCategoryViewController *)arg1 ;
-(NSDictionary *)titleStyle;
-(void)setTitleStyle:(NSDictionary *)arg1 ;
-(void)doneAction;
@end


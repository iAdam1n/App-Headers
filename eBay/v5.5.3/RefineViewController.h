/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <eBay/EBURefineViewControllerProtocol.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol EBURefineResultsDelegate;
@class UITableView, NSMutableArray, EBNSearchOptions, EBNDataManager, NSArray, RefineTitleView, NSString;

@interface RefineViewController : EUIViewController <EBURefineViewControllerProtocol, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* hiddenOptionList;
	double fontSize;
	EBNSearchOptions* searchOptions;
	long long checkedItem;
	BOOL _suppressRefresh;
	BOOL _visibleInDeck;
	EBNDataManager* _dataManager;
	id<EBURefineResultsDelegate> resultsDelegate;
	NSMutableArray* _optionList;
	NSMutableArray* _sections;
	NSArray* _refineControllers;
	RefineTitleView* _refineTitleView;

}

@property (nonatomic,retain) RefineTitleView * refineTitleView;                                                            //@synthesize refineTitleView=_refineTitleView - In the implementation block
@property (nonatomic,retain) NSMutableArray * optionList;                                                                  //@synthesize optionList=_optionList - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                                                    //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL suppressRefresh;                                                                         //@synthesize suppressRefresh=_suppressRefresh - In the implementation block
@property (nonatomic,retain) NSArray * refineControllers;                                                                  //@synthesize refineControllers=_refineControllers - In the implementation block
@property (assign,nonatomic) BOOL visibleInDeck;                                                                           //@synthesize visibleInDeck=_visibleInDeck - In the implementation block
@property (nonatomic,readonly) EBNDataManager*<EBNSearchResultsDataManagerProtocol> searchResultsDataManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EBNSearchOptions * searchOptions; 
@property (nonatomic,retain) EBNDataManager * dataManager;                                                                 //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic,__weak) id<EBURefineResultsDelegate> resultsDelegate; 
@property (nonatomic,retain) NSString * titleStatus; 
@property (nonatomic,readonly) NSString * descriptionOfOptions; 
@property (nonatomic,readonly) BOOL isCustomizedOption; 
+(id)makeRefineViewController;
+(id)aspectNameForDisplay:(id)arg1 ;
-(double)calculatePreferredContentHeight;
-(NSMutableArray *)optionList;
-(void)setOptionList:(NSMutableArray *)arg1 ;
-(void)dismissThisView;
-(void)applySearchOptionChanges:(id)arg1 ;
-(void)reloadTableData;
-(BOOL)checkIfOkayToDismissThisView:(BOOL)arg1 ;
-(NSString *)titleStatus;
-(void)setTitleStatus:(NSString *)arg1 ;
-(NSString *)descriptionOfOptions;
-(BOOL)isCustomizedOption;
-(void)contentDeckOverlayView:(id)arg1 wasHidden:(BOOL)arg2 ;
-(void)enableScrollingDuringPan:(BOOL)arg1 ;
-(BOOL)contentDeckOverlayViewShouldHideDeck:(id)arg1 ;
-(void)contentDeckOverlayViewWillSwipeToShow:(id)arg1 ;
-(EBNDataManager*<EBNSearchResultsDataManagerProtocol>)searchResultsDataManager;
-(void)searchOptionsChanged;
-(id)checkboxCellWithTitle:(id)arg1 ;
-(void)refreshSettingsDisplay;
-(void)computeFontSize;
-(void)refreshOptionList;
-(void)setSuppressRefresh:(BOOL)arg1 ;
-(NSArray *)refineControllers;
-(void)checkboxAction:(id)arg1 ;
-(void)updatePopoverPreferredContentSize;
-(RefineTitleView *)refineTitleView;
-(void)setVisibleInDeck:(BOOL)arg1 ;
-(BOOL)visibleInDeck;
-(void)setRefineTitleView:(RefineTitleView *)arg1 ;
-(void)autoScrollToCheckedItem;
-(id)cellNameFont;
-(void)applySearchOptionChanges:(id)arg1 dismissPicker:(BOOL)arg2 ;
-(void)dismissThisViewWithValidation:(BOOL)arg1 ;
-(void)jumpToRefinementById:(id)arg1 animated:(BOOL)arg2 hideBackButton:(BOOL)arg3 ;
-(id)refineOptionForIdentifier:(id)arg1 ;
-(void)forceDismissThisView;
-(id)refineOptionAtIndexPath:(id)arg1 ;
-(BOOL)shouldDisableIndexPath:(id)arg1 ;
-(void)jumpToRefinementById:(id)arg1 animated:(BOOL)arg2 ;
-(id)secondaryNameFont;
-(BOOL)suppressRefresh;
-(void)setRefineControllers:(NSArray *)arg1 ;
-(void)setDataManager:(EBNDataManager *)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(void)calculatePreferredContentSize;
-(id<EBURefineResultsDelegate>)resultsDelegate;
-(void)setResultsDelegate:(id<EBURefineResultsDelegate>)arg1 ;
-(void)setSearchOptions:(EBNSearchOptions *)arg1 ;
-(EBNSearchOptions *)searchOptions;
-(EBNDataManager *)dataManager;
@end

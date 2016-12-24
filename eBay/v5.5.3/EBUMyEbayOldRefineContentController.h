/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <eBay/EBUMyEbayRefineElementController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol EBUMyEbayOldRefineContentControllerDelegate;
@class EBUMyEbayRefineOverlayController, UITableView, EBNMyEbayRefineFilters, NSMutableArray, NSString;

@interface EBUMyEbayOldRefineContentController : EUIViewController <EBUMyEbayRefineElementController, UITableViewDelegate, UITableViewDataSource> {

	EBUMyEbayRefineOverlayController* deckOverlay;
	UITableView* _tableView;
	long long _sortByOption;
	long long _defaultSortByOption;
	long long _filterByOption;
	id<EBUMyEbayOldRefineContentControllerDelegate> _refineDelegate;
	EBNMyEbayRefineFilters* _filterOptions;
	NSMutableArray* _tableSections;
	NSMutableArray* _sortByOptions;
	NSMutableArray* _sortByStrings;
	unsigned long long _sectionIndex;

}

@property (nonatomic,retain) NSMutableArray * tableSections;                                                     //@synthesize tableSections=_tableSections - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortByOptions;                                                     //@synthesize sortByOptions=_sortByOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortByStrings;                                                     //@synthesize sortByStrings=_sortByStrings - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                                    //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long sortByOption;                                                             //@synthesize sortByOption=_sortByOption - In the implementation block
@property (assign,nonatomic) long long defaultSortByOption;                                                      //@synthesize defaultSortByOption=_defaultSortByOption - In the implementation block
@property (assign,nonatomic) long long filterByOption;                                                           //@synthesize filterByOption=_filterByOption - In the implementation block
@property (assign,nonatomic,__weak) id<EBUMyEbayOldRefineContentControllerDelegate> refineDelegate;              //@synthesize refineDelegate=_refineDelegate - In the implementation block
@property (nonatomic,retain) EBNMyEbayRefineFilters * filterOptions;                                             //@synthesize filterOptions=_filterOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) EBUMyEbayRefineOverlayController * deckOverlay; 
+(/*^block*/id)activeListSort:(long long)arg1 ;
+(BOOL)canSortSection:(unsigned long long)arg1 ;
+(BOOL)canFilterSection:(unsigned long long)arg1 ;
+(long long)filterOptionFromMyEbaySection:(unsigned long long)arg1 ;
-(double)calculatePreferredContentHeight;
-(void)dismissThisView;
-(void)contentDeckOverlayView:(id)arg1 wasHidden:(BOOL)arg2 ;
-(void)enableScrollingDuringPan:(BOOL)arg1 ;
-(NSMutableArray *)tableSections;
-(void)setupTableSections;
-(void)setTableSections:(NSMutableArray *)arg1 ;
-(void)setRefineDelegate:(id<EBUMyEbayOldRefineContentControllerDelegate>)arg1 ;
-(id<EBUMyEbayOldRefineContentControllerDelegate>)refineDelegate;
-(unsigned long long)sectionIndex:(long long)arg1 ;
-(void)setDeckOverlay:(EBUMyEbayRefineOverlayController *)arg1 ;
-(id)resetOptionsSection;
-(EBUMyEbayRefineOverlayController *)deckOverlay;
-(void)resetAllOptions:(id)arg1 ;
-(void)removeFilterByOptions;
-(id)sortBySection;
-(id)filterBySection;
-(void)didSelectSortByOption:(long long)arg1 ;
-(void)didSelectFilterByOption:(long long)arg1 ;
-(long long)defaultSortByOption;
-(void)setupRefineSection:(unsigned long long)arg1 ;
-(void)resetSectionForFilterByOption:(long long)arg1 ;
-(/*^block*/id)activeListSort;
-(void)setDefaultSortByOption:(long long)arg1 ;
-(void)setSortByOptions:(NSMutableArray *)arg1 ;
-(void)setSortByStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sortByOptions;
-(long long)sortByOption;
-(NSMutableArray *)sortByStrings;
-(long long)filterByOption;
-(void)setSortByOption:(long long)arg1 ;
-(void)setFilterByOption:(long long)arg1 ;
-(void)addSortByOption:(id)arg1 sortByString:(id)arg2 ;
-(void)removeSortByOptions;
-(void)addSortByOption:(long long)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)calculatePreferredContentSize;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setFilterOptions:(EBNMyEbayRefineFilters *)arg1 ;
-(EBNMyEbayRefineFilters *)filterOptions;
@end

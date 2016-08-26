/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/RefineViewController.h>
#import <eBay/SearchResultsDataManagerObserver.h>

@class NSIndexPath, NSString;

@interface RefineCategoryController : RefineViewController <SearchResultsDataManagerObserver> {

	BOOL showAllCategory;
	NSIndexPath* spinnerPath;

}

@property (assign,nonatomic) BOOL showAllCategory; 
@property (nonatomic,retain) NSIndexPath * spinnerPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionOfOptions;
-(BOOL)isCustomizedOption;
-(void)setupCheckedItem;
-(void)setShowAllCategory:(BOOL)arg1 ;
-(void)setupCategories;
-(void)collectCategoryHistograms:(id)arg1 ;
-(void)setSpinnerPath:(NSIndexPath *)arg1 ;
-(void)refreshCategoriesAndCheckedItem;
-(void)autoScrollToCheckedItem;
-(BOOL)showAllCategory;
-(NSIndexPath *)spinnerPath;
-(void)searchResultsDataManagerCategoryHistogramUpdated:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSearchOptions:(id)arg1 ;
@end

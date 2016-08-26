/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECTreePickerViewController.h>

@class ECCategory, NSString, ECCellAttributeDataSource, ECMutableSectionMap, NSArray, NSObject;

@interface ECCategoryTreePickerViewController : ECTreePickerViewController {

	BOOL _showRecentCategories;
	BOOL _showSuggestedCategories;
	BOOL _isPost;
	BOOL _isViewShown;
	/*^block*/id _extendedCompletionHandler;
	ECCategory* _currentCategory;
	NSString* _titleForSuggestions;
	ECCellAttributeDataSource* _activityIndicatorDataSource;
	ECMutableSectionMap* _sectionMap;
	NSArray* _suggestedCategories;
	NSObject* _suggestionsLoadingStamp;

}

@property (nonatomic,retain) ECCellAttributeDataSource * activityIndicatorDataSource;              //@synthesize activityIndicatorDataSource=_activityIndicatorDataSource - In the implementation block
@property (nonatomic,retain) ECMutableSectionMap * sectionMap;                                     //@synthesize sectionMap=_sectionMap - In the implementation block
@property (nonatomic,retain) NSArray * suggestedCategories;                                        //@synthesize suggestedCategories=_suggestedCategories - In the implementation block
@property (nonatomic,readonly) BOOL suggestionsLoading; 
@property (nonatomic,retain) NSObject * suggestionsLoadingStamp;                                   //@synthesize suggestionsLoadingStamp=_suggestionsLoadingStamp - In the implementation block
@property (assign,nonatomic) BOOL isViewShown;                                                     //@synthesize isViewShown=_isViewShown - In the implementation block
@property (nonatomic,copy) id extendedCompletionHandler;                                           //@synthesize extendedCompletionHandler=_extendedCompletionHandler - In the implementation block
@property (nonatomic,retain) ECCategory * currentCategory;                                         //@synthesize currentCategory=_currentCategory - In the implementation block
@property (assign,nonatomic) BOOL showRecentCategories;                                            //@synthesize showRecentCategories=_showRecentCategories - In the implementation block
@property (assign,nonatomic) BOOL showSuggestedCategories;                                         //@synthesize showSuggestedCategories=_showSuggestedCategories - In the implementation block
@property (assign,nonatomic) BOOL isPost;                                                          //@synthesize isPost=_isPost - In the implementation block
@property (nonatomic,copy) NSString * titleForSuggestions;                                         //@synthesize titleForSuggestions=_titleForSuggestions - In the implementation block
-(void)updateSectionMap;
-(void)treeNodeDataSourceNeedsReload:(id)arg1 inView:(id)arg2 ;
-(ECCellAttributeDataSource *)activityIndicatorDataSource;
-(void)setIsViewShown:(BOOL)arg1 ;
-(BOOL)showSuggestedCategories;
-(BOOL)suggestionsLoading;
-(NSArray *)suggestedCategories;
-(BOOL)isPost;
-(BOOL)showRecentCategories;
-(NSString *)titleForSuggestions;
-(BOOL)isViewShown;
-(void)setSuggestionsLoadingStamp:(NSObject *)arg1 ;
-(void)setSuggestedCategories:(NSArray *)arg1 ;
-(NSObject *)suggestionsLoadingStamp;
-(ECCategory *)currentCategory;
-(id)cellForTable:(id)arg1 category:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)extendedCompletionHandler;
-(void)setTitleForSuggestions:(NSString *)arg1 ;
-(void)setExtendedCompletionHandler:(id)arg1 ;
-(void)setShowRecentCategories:(BOOL)arg1 ;
-(void)setShowSuggestedCategories:(BOOL)arg1 ;
-(void)setIsPost:(BOOL)arg1 ;
-(void)setActivityIndicatorDataSource:(ECCellAttributeDataSource *)arg1 ;
-(void)setSectionMap:(ECMutableSectionMap *)arg1 ;
-(ECMutableSectionMap *)sectionMap;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setCurrentCategory:(ECCategory *)arg1 ;
@end

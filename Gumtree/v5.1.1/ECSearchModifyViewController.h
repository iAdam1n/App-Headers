/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Gumtree/ECCellAttributeDataSourceDelegate.h>

@class ECSearchParameters, ECNavigationItemTitleView, ECSearchBar, ECSearchBarTableViewCell, UITableView, ECFooterLoadingView, UIButton, ECSliderTableViewCell, ECSectionMapDataSource, ECBufferedSectionMapTransformer, ECTreePickerThinModule, ECSearchSuggestionController, NSObject, NSString, NSDictionary, NSMutableDictionary, NSNumberFormatter, ECSectionMap;

@interface ECSearchModifyViewController : ECBaseViewController <UITableViewDelegate, UITextFieldDelegate, ECCellAttributeDataSourceDelegate> {

	ECSearchParameters* _parameters;
	/*^block*/id _completionHandler;
	ECNavigationItemTitleView* _navigationTitleView;
	ECSearchBar* _keywordView;
	ECSearchBarTableViewCell* _searchBarCell;
	UITableView* _tableView;
	ECFooterLoadingView* _footerLoadingView;
	UIButton* _resetButton;
	ECSliderTableViewCell* _gpsDistanceSliderTableViewCell;
	ECSectionMapDataSource* _tableDataSource;
	ECBufferedSectionMapTransformer* _transformer;
	ECTreePickerThinModule* _pickerModule;
	ECSearchSuggestionController* _searchSuggestionController;
	NSObject* _metadataLoadingToken;
	NSString* _searchOptionPriceType;
	NSDictionary* _categoryHistogram;
	ECSearchParameters* _categoryHistogramParameters;
	NSMutableDictionary* _resultsCache;
	long long _resultsCount;
	ECSearchParameters* _resultsCountParameters;
	NSNumberFormatter* _resultsCountFormatter;

}

@property (nonatomic,retain) ECNavigationItemTitleView * navigationTitleView;                     //@synthesize navigationTitleView=_navigationTitleView - In the implementation block
@property (nonatomic,retain) ECSearchBar * keywordView;                                           //@synthesize keywordView=_keywordView - In the implementation block
@property (nonatomic,retain) ECSearchBarTableViewCell * searchBarCell;                            //@synthesize searchBarCell=_searchBarCell - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) ECFooterLoadingView * footerLoadingView;                             //@synthesize footerLoadingView=_footerLoadingView - In the implementation block
@property (nonatomic,retain) UIButton * resetButton;                                              //@synthesize resetButton=_resetButton - In the implementation block
@property (nonatomic,retain) ECSliderTableViewCell * gpsDistanceSliderTableViewCell;              //@synthesize gpsDistanceSliderTableViewCell=_gpsDistanceSliderTableViewCell - In the implementation block
@property (nonatomic,retain) ECSectionMapDataSource * tableDataSource;                            //@synthesize tableDataSource=_tableDataSource - In the implementation block
@property (nonatomic,readonly) ECSectionMap * sectionMap; 
@property (nonatomic,retain) ECBufferedSectionMapTransformer * transformer;                       //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,retain) ECTreePickerThinModule * pickerModule;                               //@synthesize pickerModule=_pickerModule - In the implementation block
@property (retain) ECSearchSuggestionController * searchSuggestionController;                     //@synthesize searchSuggestionController=_searchSuggestionController - In the implementation block
@property (nonatomic,retain) NSObject * metadataLoadingToken;                                     //@synthesize metadataLoadingToken=_metadataLoadingToken - In the implementation block
@property (nonatomic,retain) NSString * searchOptionPriceType;                                    //@synthesize searchOptionPriceType=_searchOptionPriceType - In the implementation block
@property (nonatomic,retain) NSDictionary * categoryHistogram;                                    //@synthesize categoryHistogram=_categoryHistogram - In the implementation block
@property (nonatomic,retain) ECSearchParameters * categoryHistogramParameters;                    //@synthesize categoryHistogramParameters=_categoryHistogramParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultsCache;                                  //@synthesize resultsCache=_resultsCache - In the implementation block
@property (assign,nonatomic) long long resultsCount;                                              //@synthesize resultsCount=_resultsCount - In the implementation block
@property (nonatomic,retain) ECSearchParameters * resultsCountParameters;                         //@synthesize resultsCountParameters=_resultsCountParameters - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * resultsCountFormatter;                           //@synthesize resultsCountFormatter=_resultsCountFormatter - In the implementation block
@property (nonatomic,copy) ECSearchParameters * parameters;                                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCategoryHistogram:(NSDictionary *)arg1 ;
-(NSDictionary *)categoryHistogram;
-(void)trackPageView;
-(void)updateEnable;
-(void)updateSectionMap;
-(void)updateData;
-(ECFooterLoadingView *)footerLoadingView;
-(void)updateValues;
-(void)parametersValueChanged:(id)arg1 ;
-(ECSearchBar *)keywordView;
-(void)setupNavigationItem:(BOOL)arg1 ;
-(void)setTransformer:(ECBufferedSectionMapTransformer *)arg1 ;
-(void)setFooterLoadingView:(ECFooterLoadingView *)arg1 ;
-(void)setupResetButton;
-(void)loadMetadata;
-(void)setNavigationTitleView:(ECNavigationItemTitleView *)arg1 ;
-(ECNavigationItemTitleView *)navigationTitleView;
-(void)updateSearchResults;
-(BOOL)supportsAutocomplete;
-(ECSearchSuggestionController *)searchSuggestionController;
-(void)updateSearchOptionsForKeyword:(id)arg1 ;
-(void)adjustTableViewForSearch:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSearchSuggestionController:(ECSearchSuggestionController *)arg1 ;
-(ECSearchParameters *)resultsCountParameters;
-(void)setResultsCount:(long long)arg1 ;
-(void)setResultsCountParameters:(ECSearchParameters *)arg1 ;
-(void)updateResultsCount;
-(id)cachedSearchResult:(id)arg1 ;
-(void)addCachedSearch:(id)arg1 result:(id)arg2 ;
-(void)updateCategoryHistogram;
-(NSNumberFormatter *)resultsCountFormatter;
-(id)histogramSearchParametersWithSearchParamaters:(id)arg1 ;
-(ECSearchParameters *)categoryHistogramParameters;
-(void)setCategoryHistogramParameters:(ECSearchParameters *)arg1 ;
-(void)reloadCategoryPickerTree;
-(BOOL)isMetaDataLoading;
-(NSMutableDictionary *)resultsCache;
-(BOOL)shouldShowDistance;
-(void)setSearchOptionPriceType:(NSString *)arg1 ;
-(NSString *)searchOptionPriceType;
-(id)attributedDataSourceForMetadataElement:(id)arg1 object:(id)arg2 key:(id)arg3 ;
-(NSObject *)metadataLoadingToken;
-(void)showCategoryPickerAnimated:(BOOL)arg1 ;
-(void)showLocationPickerAnimated:(BOOL)arg1 ;
-(void)resignFirstResponderIfInTable;
-(void)setMetadataLoadingToken:(NSObject *)arg1 ;
-(id)dataSourceForIndexPath:(id)arg1 ;
-(ECBufferedSectionMapTransformer *)transformer;
-(id)createDistanceCellData;
-(id)createSortCellData;
-(void)multiplexer:(id)arg1 addSection:(unsigned long long)arg2 ifDataSourceNotNil:(id)arg3 ;
-(id)createPriceCellData;
-(void)multiplexer:(id)arg1 addSection:(unsigned long long)arg2 ifListHasItems:(id)arg3 ;
-(id)createAttributeCellData;
-(id)createAdCellData;
-(unsigned long long)sectionTypeForIndex:(unsigned long long)arg1 ;
-(BOOL)hasHeaderForSectionType:(unsigned long long)arg1 ;
-(id)headerTitleForSectionTypeMap;
-(ECSearchBarTableViewCell *)searchBarCell;
-(void)setSearchBarCell:(ECSearchBarTableViewCell *)arg1 ;
-(void)setKeywordView:(ECSearchBar *)arg1 ;
-(void)setupSearchBar:(id)arg1 ;
-(id)sliderCellForTableView:(id)arg1 ;
-(void)didSelectSectionLocation:(id)arg1 animated:(BOOL)arg2 ;
-(void)handleSelectForAttributeDataSource:(id)arg1 ;
-(void)setGpsDistanceSliderTableViewCell:(ECSliderTableViewCell *)arg1 ;
-(void)showSection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)reloadTableViewRowForSearchOption:(id)arg1 ;
-(BOOL)shouldShowPriceType;
-(ECSliderTableViewCell *)gpsDistanceSliderTableViewCell;
-(void)setResultsCache:(NSMutableDictionary *)arg1 ;
-(void)setResultsCountFormatter:(NSNumberFormatter *)arg1 ;
-(ECTreePickerThinModule *)pickerModule;
-(void)setPickerModule:(ECTreePickerThinModule *)arg1 ;
-(id)attributedDataSourceForMetadataElement:(id)arg1 dependentElement:(id)arg2 mode:(unsigned long long)arg3 object:(id)arg4 key:(id)arg5 options:(id)arg6 ;
-(void)cellAttributeDataSourceValueHasChanged:(id)arg1 ;
-(void)setResetButton:(UIButton *)arg1 ;
-(UIButton *)resetButton;
-(void)reset:(id)arg1 ;
-(ECSectionMap *)sectionMap;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(ECSearchParameters *)parameters;
-(void)setParameters:(ECSearchParameters *)arg1 ;
-(void)setTableDataSource:(ECSectionMapDataSource *)arg1 ;
-(ECSectionMapDataSource *)tableDataSource;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(long long)resultsCount;
@end


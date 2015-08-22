/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGSearchResultsViewController.h>
#import <Instagram/IGExploreSearchChildViewController.h>

@class IGSearchResultsEnableLocationCell, IGPlacesAutocompleteDataSource, NSString;

@interface IGPlacesSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController> {

	IGSearchResultsEnableLocationCell* _enableLocationCell;

}

@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * dataSource; 
@property (nonatomic,readonly) IGSearchResultsEnableLocationCell * enableLocationCell;              //@synthesize enableLocationCell=_enableLocationCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsExtras;
-(BOOL)enableNavState;
-(id)fallbackIcon;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadTableView;
-(void)logItemTap:(id)arg1 atRow:(long long)arg2 searchString:(id)arg3 ;
-(id)searchBarPlaceholder;
-(void)filterBySearchString:(id)arg1 ;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logRaindropSearchQueryEvent;
-(void)prepareLoggingForQueryText:(id)arg1 ;
-(BOOL)shouldShowLocationCellInSection:(long long)arg1 ;
-(IGSearchResultsEnableLocationCell *)enableLocationCell;
-(id)nearbyTitle;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(int)viewType;
-(int)searchType;
@end

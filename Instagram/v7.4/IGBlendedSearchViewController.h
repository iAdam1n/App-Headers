/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGSearchResultsViewController.h>
#import <Instagram/IGExploreSearchChildViewController.h>

@class IGUserListLocalDataSource, IGBlendedSearchDataSource, NSString;

@interface IGBlendedSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController> {

	IGUserListLocalDataSource* _localUserDataSource;

}

@property (nonatomic,readonly) IGBlendedSearchDataSource * dataSource; 
@property (nonatomic,readonly) IGUserListLocalDataSource * localUserDataSource;              //@synthesize localUserDataSource=_localUserDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enableNavState;
-(id)fallbackIcon;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 ;
-(IGUserListLocalDataSource *)localUserDataSource;
-(void)reloadTableView;
-(void)filterLocalResultsBySearchString:(id)arg1 ;
-(void)logItemTap:(id)arg1 atRow:(long long)arg2 searchString:(id)arg3 ;
-(id)blendedResultsList:(id)arg1 ;
-(id)searchBarPlaceholder;
-(void)filterBySearchString:(id)arg1 ;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logRaindropSearchQueryEvent;
-(void)viewDidLoad;
-(int)viewType;
-(int)searchType;
@end


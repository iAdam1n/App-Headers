/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchResultsActivityListener.h>
#import <Facebook/FBSearchResultsFiltersEntryView.h>

@protocol FBSearchResultsFiltersEntryViewDelegate;
@class UIViewController, FBUserSession, FBSearchSession, FBSearchResultsFiltersPresenter, FBScenePath, FBSearchResultsAnnouncers, FBSearchMultiResultsCoordinator, FBNuxController, UIButton, UIBarButtonItem, NSString;

@interface FBSearchResultsAccessoryButtonsManager : NSObject <FBSearchResultsActivityListener, FBSearchResultsFiltersEntryView> {

	UIViewController* _hostViewController;
	FBUserSession* _userSession;
	FBSearchSession* _searchSession;
	FBSearchResultsFiltersPresenter* _filtersPresenter;
	FBScenePath* _scenePath;
	FBSearchResultsAnnouncers* _announcers;
	FBSearchMultiResultsCoordinator* _multiResultsCoordinator;
	FBNuxController* _nuxController;
	UIButton* _filtersButton;
	UIBarButtonItem* _filtersBarButtonItem;
	UIBarButtonItem* _mapBarButtonItem;
	BOOL _filtersButtonShown;
	BOOL _mapButtonShown;
	id<FBSearchResultsFiltersEntryViewDelegate> _filtersEntryViewDelegate;

}

@property (nonatomic,readonly) BOOL filtersButtonShown;                                                                //@synthesize filtersButtonShown=_filtersButtonShown - In the implementation block
@property (nonatomic,readonly) BOOL mapButtonShown;                                                                    //@synthesize mapButtonShown=_mapButtonShown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSearchResultsFiltersEntryViewDelegate> filtersEntryViewDelegate;              //@synthesize filtersEntryViewDelegate=_filtersEntryViewDelegate - In the implementation block
@property (assign,getter=isFiltersHidden,nonatomic) BOOL filtersHidden; 
@property (assign,getter=isFiltersEnabled,nonatomic) BOOL filtersEnabled; 
-(void)_setupToShowFiltersButton:(BOOL)arg1 withFilterCount:(unsigned long long)arg2 buttonEnabled:(BOOL)arg3 ;
-(void)_refreshAccessoryButtonsOnSearchBar;
-(BOOL)_areFiltersEnabled;
-(BOOL)_hasFiltersInFilterTypeSets:(id)arg1 ;
-(BOOL)_filtersButtonAlwaysEnabledForTab:(unsigned long long)arg1 semantic:(id)arg2 ;
-(void)_setupToShowMapToggleButton:(BOOL)arg1 withTitle:(id)arg2 enabled:(BOOL)arg3 ;
-(void)_didTapFiltersButton:(id)arg1 ;
-(id<FBSearchResultsFiltersEntryViewDelegate>)filtersEntryViewDelegate;
-(void)_showFiltersViewWithInitialExpandedFiltersIndex:(long long)arg1 ;
-(void)_didTapMapToggleButton:(id)arg1 ;
-(void)_showAccessoryButtonsIfSupportedForActiveViewController:(id)arg1 ;
-(void)_shouldShowFiltersButton:(BOOL)arg1 withFilterCount:(unsigned long long)arg2 ;
-(void)updateViewWithFilterTypeSets:(id)arg1 ;
-(void)setFiltersEntryViewDelegate:(id<FBSearchResultsFiltersEntryViewDelegate>)arg1 ;
-(BOOL)isFiltersHidden;
-(void)setFiltersHidden:(BOOL)arg1 ;
-(BOOL)isFiltersEnabled;
-(void)setFiltersEnabled:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 userSession:(id)arg2 searchSession:(id)arg3 scenePath:(id)arg4 announcers:(id)arg5 resultsCoordinator:(id)arg6 ;
-(void)DEPRECATED_showFiltersViewController;
-(BOOL)filtersButtonShown;
-(BOOL)mapButtonShown;
@end

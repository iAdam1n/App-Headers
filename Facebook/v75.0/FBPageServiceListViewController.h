/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBEmbeddedTab.h>

@protocol FBCardViewProvider, FBPageTabItemsModifyingDelegate;
@class NSString, FBUserSession, FBTransientViewStateManager, UITableView, FBComponentTableViewDataSource, NSArray, FBScenePath, UIScrollView, UIView;

@interface FBPageServiceListViewController : UIViewController <CKComponentProvider, FBComponentTableViewDataSourceCellConfigProvider, UIActionSheetDelegate, FBEmbeddedTab> {

	NSString* _pageFBID;
	FBUserSession* _session;
	NSString* _highlightedItemFBID;
	FBTransientViewStateManager* _viewStateManager;
	UITableView* _tableView;
	FBComponentTableViewDataSource* _componentDataSource;
	BOOL _dataSourceFilled;
	BOOL _shouldClearData;
	BOOL _hasAppeared;
	BOOL _dataIsReady;
	BOOL _isPageAdmin;
	NSArray* _featuredItems;
	NSArray* _serviceItems;
	BOOL _someServiceHasPrice;
	long long _totalModalCount;
	FBScenePath* _scenePath;
	BOOL _useReactNativeForEditing;
	id<FBCardViewProvider> _bottomCardViewProviderForServices;
	id<FBPageTabItemsModifyingDelegate> _tabItemsModifier;
	BOOL _serviceCardVisibility;
	BOOL _shouldShowFeaturedItem;
	BOOL _shoudShowSettingButton;
	BOOL _withRequestTimeCTA;
	unsigned long long _serviceListStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)refreshData;
-(BOOL)shouldApplyTabBarContentInsets;
-(id)initWithSession:(id)arg1 pageFBID:(id)arg2 highlightedItemFBID:(id)arg3 tabItemsModifier:(id)arg4 shouldShowFeaturedItem:(BOOL)arg5 shoudShowSettingButton:(BOOL)arg6 serviceListStyle:(unsigned long long)arg7 ;
-(BOOL)fb_hidesTabBar;
-(void)setBottomCardViewProviderForServices:(id)arg1 ;
-(void)_handleResponseData:(id)arg1 ;
-(void)_startLoadingServices;
-(void)_didTapServiceItem:(id)arg1 ;
-(void)_handleFetchingFailure:(id)arg1 ;
-(void)_clearData:(Items*)arg1 ;
-(void)_insertData:(Items*)arg1 ;
-(void)_didTapAddEditButton;
-(void)_didTapServiceItemFromTopFeaturedArea:(id)arg1 ;
-(void)_didTapServiceItemFromList:(id)arg1 ;
-(void)_didTapSettingsButton;
-(void)_didToggleServicesSwitch:(id)arg1 toggle:(id)arg2 ;
-(void)_showDeleteServicesAlert;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_doneButtonTapped;
-(void)_updateDataSourceIfNeeded;
-(void)_deleteButtonTapped;
@end

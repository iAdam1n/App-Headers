/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBLocationAccessManagerDelegate.h>
#import <Facebook/FBHotspotHelperRoadBlockViewControllerDelegate.h>

@class FBUserSession, FBHotspotHelperDataController, UIBarButtonItem, FBLocationAccessManager, UIViewController, FBHotspotHelperMapViewController, FBHotspotHelperTableViewController, FBHotspotHelperRoadBlockViewController, FBHotspotHelperAnalyticsLogger, NSDate, NSString;

@interface FBHotspotHelperViewController : UIViewController <FBLocationAccessManagerDelegate, FBHotspotHelperRoadBlockViewControllerDelegate> {

	FBUserSession* _session;
	unsigned long long _preNonLoadingState;
	unsigned long long _currentState;
	FBHotspotHelperDataController* _dataController;
	UIBarButtonItem* _mapModeButtonItem;
	UIBarButtonItem* _listModeButtonItem;
	UIBarButtonItem* _settingGearButtonItem;
	FBLocationAccessManager* _locationAccessManager;
	UIViewController* _childViewController;
	FBHotspotHelperMapViewController* _mapViewController;
	FBHotspotHelperTableViewController* _tableViewController;
	FBHotspotHelperRoadBlockViewController* _hotspotHelperNotOnRoadBlockViewController;
	FBHotspotHelperRoadBlockViewController* _locationServiceNotOnRoadBlockViewController;
	UIViewController* _loadingViewController;
	FBHotspotHelperAnalyticsLogger* _analyticsLogger;
	long long _entrySource;
	BOOL _hasLoggedDashboardView;
	NSDate* _listViewAppearTime;
	NSDate* _mapViewAppearTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)_viewControllerForState:(unsigned long long)arg1 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(id)initWithSession:(id)arg1 entrySource:(long long)arg2 ;
-(void)_resetViewControllerStatusIfNecessary;
-(CGRect)_frameForState:(unsigned long long)arg1 ;
-(void)_logViewCloseIfNeededWithState:(unsigned long long)arg1 ;
-(void)_loadWifiData;
-(void)_showLoadingViewIfNecessary;
-(void)_renderWifis;
-(void)_updateViewControllerForState:(unsigned long long)arg1 ;
-(void)_logViewImpressionIfNeededWithState:(unsigned long long)arg1 ;
-(void)_didCompleteTransitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)_logRoadBlockViewOptIn;
-(void)_initializeMapModeButtonItemIfNecessary;
-(void)_logDashboardImpressionIfNecessary;
-(void)_initializeListModeButtonItemIfNecessary;
-(id)_roadBlockViewControllerForViewControllerType:(unsigned long long)arg1 ;
-(void)_initializeSettingGearButtonItemIfNecessary;
-(void)_didTapMapModeButton;
-(void)_didTapListModeButton;
-(void)_didTapSettingButton;
-(void)_settingsDataDidLoad;
-(void)didTurnOnHotspotHelper;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)willMoveToParentViewController:(id)arg1 ;
@end

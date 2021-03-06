/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAppNavigator.h>
#import <eBay/EUITabBarViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <eBay/EUIActionMenuControllerDelegate.h>

@protocol EBUHomeViewControllerProtocol, EBUMyEBayLandingViewControllerProtocol, EBUSearchLandingViewControllerProtocol, EBUNotificationsLandingViewControllerProtocol, EBUSellLandingViewControllerProtocol;
@class EBUAppTabBarViewController, EBUAppRootController, EBUTabRootNavigationViewController, UIViewController, EUIActionMenuController, EBUAppNavigationContext, NSString;

@interface EBUTabNavigator : EBUAppNavigator <EUITabBarViewControllerDelegate, UINavigationControllerDelegate, EUIActionMenuControllerDelegate> {

	EBUAppTabBarViewController* _tabController;
	EBUAppRootController* _appRootViewController;
	EBUTabRootNavigationViewController* _homeNavigationController;
	UIViewController*<EBUHomeViewControllerProtocol> _homeController;
	EBUTabRootNavigationViewController* _myEBayNavigationController;
	UIViewController*<EBUMyEBayLandingViewControllerProtocol> _myEbayController;
	EBUTabRootNavigationViewController* _searchNavigationController;
	UIViewController*<EBUSearchLandingViewControllerProtocol> _searchController;
	EBUTabRootNavigationViewController* _notificationsNavigationController;
	UIViewController*<EBUNotificationsLandingViewControllerProtocol> _notificationsController;
	EBUTabRootNavigationViewController* _sellNavigationController;
	UIViewController*<EBUSellLandingViewControllerProtocol> _sellController;
	EUIActionMenuController* _actionMenuController;
	EBUAppNavigationContext* _currentNavigationContext;

}

@property (nonatomic,retain) EBUAppRootController * appRootViewController;                                                          //@synthesize appRootViewController=_appRootViewController - In the implementation block
@property (nonatomic,retain) EBUAppTabBarViewController * tabController;                                                            //@synthesize tabController=_tabController - In the implementation block
@property (nonatomic,retain) EBUTabRootNavigationViewController * homeNavigationController;                                         //@synthesize homeNavigationController=_homeNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<EBUHomeViewControllerProtocol> homeController;                                       //@synthesize homeController=_homeController - In the implementation block
@property (nonatomic,retain) EBUTabRootNavigationViewController * myEBayNavigationController;                                       //@synthesize myEBayNavigationController=_myEBayNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<EBUMyEBayLandingViewControllerProtocol> myEbayController;                            //@synthesize myEbayController=_myEbayController - In the implementation block
@property (nonatomic,retain) EBUTabRootNavigationViewController * searchNavigationController;                                       //@synthesize searchNavigationController=_searchNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<EBUSearchLandingViewControllerProtocol> searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) EBUTabRootNavigationViewController * notificationsNavigationController;                                //@synthesize notificationsNavigationController=_notificationsNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<EBUNotificationsLandingViewControllerProtocol> notificationsController;              //@synthesize notificationsController=_notificationsController - In the implementation block
@property (nonatomic,retain) EBUTabRootNavigationViewController * sellNavigationController;                                         //@synthesize sellNavigationController=_sellNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<EBUSellLandingViewControllerProtocol> sellController;                                //@synthesize sellController=_sellController - In the implementation block
@property (nonatomic,retain) EUIActionMenuController * actionMenuController;                                                        //@synthesize actionMenuController=_actionMenuController - In the implementation block
@property (nonatomic,retain) EBUAppNavigationContext * currentNavigationContext;                                                    //@synthesize currentNavigationContext=_currentNavigationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(EBUAppRootController *)appRootViewController;
-(UIViewController*<EBUSellLandingViewControllerProtocol>)sellController;
-(void)setSellController:(UIViewController*<EBUSellLandingViewControllerProtocol>)arg1 ;
-(void)userDidSignOut;
-(void)siteDidChange;
-(void)updateNavigationBarItemsForViewController:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3 ;
-(void)showInWindow:(id)arg1 ;
-(void)showSearchResultsPageForDataManager:(id)arg1 context:(id)arg2 ;
-(BOOL)destinationRequiresUserToSignIn:(long long)arg1 ;
-(id)frontmostViewController;
-(id)homeViewController;
-(void)updateRootContainerAccessibilityNavigation;
-(id)defaultAccessibilityFocusView;
-(void)updateActionMenu;
-(void)presentActionMenuFromView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupTabController:(BOOL)arg1 ;
-(void)internalNavigateToDestination:(long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentNavigationContext:(EBUAppNavigationContext *)arg1 ;
-(EBUAppNavigationContext *)currentNavigationContext;
-(void)selectRootNavigationController:(id)arg1 popToRoot:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)presentNavigationRootViewControllerInCustomModal:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 navigationController:(id)arg2 popToRoot:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)updateSearchBarForViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupSIDTrackingForEnterSearchEvent:(id)arg1 ;
-(id)rootViewControllerForTabIndex:(long long)arg1 ;
-(long long)destinationForTabAtIndex:(long long)arg1 ;
-(void)resetCurrentTabContent:(id)arg1 ;
-(void)notifyAccessibilityScreenChangeIfNecessaryFor:(id)arg1 ;
-(void)updateActionMenuControllerWithViewController:(id)arg1 redisplayIfMenuVisible:(BOOL)arg2 ;
-(void)prepareToShowViewController:(id)arg1 inNavigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateNavigationActionBarVisiblityForViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupSIDTrackingForActionMenuEvent;
-(void)setTabController:(EBUAppTabBarViewController *)arg1 ;
-(void)setAppRootViewController:(EBUAppRootController *)arg1 ;
-(EBUTabRootNavigationViewController *)homeNavigationController;
-(void)setHomeNavigationController:(EBUTabRootNavigationViewController *)arg1 ;
-(UIViewController*<EBUHomeViewControllerProtocol>)homeController;
-(void)setHomeController:(UIViewController*<EBUHomeViewControllerProtocol>)arg1 ;
-(EBUTabRootNavigationViewController *)myEBayNavigationController;
-(void)setMyEBayNavigationController:(EBUTabRootNavigationViewController *)arg1 ;
-(UIViewController*<EBUMyEBayLandingViewControllerProtocol>)myEbayController;
-(void)setMyEbayController:(UIViewController*<EBUMyEBayLandingViewControllerProtocol>)arg1 ;
-(EBUTabRootNavigationViewController *)searchNavigationController;
-(void)setSearchNavigationController:(EBUTabRootNavigationViewController *)arg1 ;
-(EBUTabRootNavigationViewController *)notificationsNavigationController;
-(void)setNotificationsNavigationController:(EBUTabRootNavigationViewController *)arg1 ;
-(UIViewController*<EBUNotificationsLandingViewControllerProtocol>)notificationsController;
-(void)setNotificationsController:(UIViewController*<EBUNotificationsLandingViewControllerProtocol>)arg1 ;
-(EBUTabRootNavigationViewController *)sellNavigationController;
-(void)setSellNavigationController:(EBUTabRootNavigationViewController *)arg1 ;
-(void)navigateToDestination:(long long)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)tabBar:(id)arg1 shouldSelectTabIndex:(long long)arg2 ;
-(void)tabBar:(id)arg1 didSelectTabAtIndex:(long long)arg2 ;
-(void)actionMenuControllerDidPresent:(id)arg1 ;
-(void)actionMenuControllerWillSelectMenuItem:(id)arg1 ;
-(void)actionMenuControllerDidDismiss:(id)arg1 menuItemSelected:(id)arg2 ;
-(id)view;
-(id)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(UIViewController*<EBUSearchLandingViewControllerProtocol>)searchController;
-(void)setSearchController:(UIViewController*<EBUSearchLandingViewControllerProtocol>)arg1 ;
-(void)dismissActionMenuAnimated:(BOOL)arg1 ;
-(void)setActionMenuController:(EUIActionMenuController *)arg1 ;
-(EUIActionMenuController *)actionMenuController;
-(EBUAppTabBarViewController *)tabController;
@end


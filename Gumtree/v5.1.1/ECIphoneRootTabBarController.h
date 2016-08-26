/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <Gumtree/ECHomeRootViewControllerNavigationProtocol.h>
#import <Gumtree/ECLoginViewControllerProtocol.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Gumtree/ECRootViewControllerProtocol.h>
#import <Gumtree/ECRouterProtocol.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class ECProgressViewController, ECLoginController, ECMetricsTracker, NSString;

@interface ECIphoneRootTabBarController : UITabBarController <ECHomeRootViewControllerNavigationProtocol, ECLoginViewControllerProtocol, UIActionSheetDelegate, UIActionSheetDelegate, ECRootViewControllerProtocol, ECRouterProtocol, UITabBarControllerDelegate> {

	/*^block*/id _eulaAcceptedAction;
	unsigned long long _selectedTabIndex;
	unsigned long long _previousSelectedTabIndex;
	ECProgressViewController* _initialLocationProgressController;
	/*^block*/id _tabSwitchWithIdentifier;
	/*^block*/id _deepLinkBlock;
	ECLoginController* _loginController;
	ECMetricsTracker* _metricsTracker;

}

@property (nonatomic,retain) ECProgressViewController * initialLocationProgressController;              //@synthesize initialLocationProgressController=_initialLocationProgressController - In the implementation block
@property (nonatomic,copy) id tabSwitchWithIdentifier;                                                  //@synthesize tabSwitchWithIdentifier=_tabSwitchWithIdentifier - In the implementation block
@property (nonatomic,copy) id deepLinkBlock;                                                            //@synthesize deepLinkBlock=_deepLinkBlock - In the implementation block
@property (nonatomic,retain) ECLoginController * loginController;                                       //@synthesize loginController=_loginController - In the implementation block
@property (nonatomic,retain) ECMetricsTracker * metricsTracker;                                         //@synthesize metricsTracker=_metricsTracker - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTabIndex;                                       //@synthesize selectedTabIndex=_selectedTabIndex - In the implementation block
@property (assign,nonatomic) unsigned long long previousSelectedTabIndex;                               //@synthesize previousSelectedTabIndex=_previousSelectedTabIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showMyAdsAndPopToRoot:(BOOL)arg1 ;
-(void)gotoPostAndCloseModal:(BOOL)arg1 ;
-(ECMetricsTracker *)metricsTracker;
-(void)setMetricsTracker:(ECMetricsTracker *)arg1 ;
-(void)showSearchAds;
-(void)gotoCategoryPicker;
-(void)homeRootViewControllerShowWatchlist:(id)arg1 ;
-(void)gotoSearchResultsWithParameters:(id)arg1 ;
-(void)gotoSearchResultsWithParameters:(id)arg1 andCloseModal:(BOOL)arg2 ;
-(void)gotoAdDetailsForAdWithIdentifier:(id)arg1 withSourceApplication:(id)arg2 ;
-(void)presentEULA:(/*^block*/id)arg1 ;
-(void)handleEULAAccepted;
-(void)viewControllerAppeared:(id)arg1 ;
-(void)presentAsModal:(id)arg1 ;
-(void)showMyAdsAndResetPostFlow;
-(void)goToPreviousSelectedTab;
-(void)showSearchAdsAndPopToRoot:(BOOL)arg1 ;
-(void)showMessages;
-(void)showPostFlow;
-(void)showPostFlowAndPopToRoot:(BOOL)arg1 ;
-(void)gotoWatchlist;
-(void)gotoMyAds;
-(void)gotoPromoteAd;
-(void)gotoHomePage;
-(void)gotoLogin;
-(void)gotoConversationsAndCloseModal:(BOOL)arg1 ;
-(void)gotoChat:(id)arg1 ;
-(void)gotoNewChat:(id)arg1 ;
-(void)gotoResetPasswordViewWithSignInData:(id)arg1 ;
-(void)activateAccountWithSignInData:(id)arg1 ;
-(void)signUserInWithSignInData:(id)arg1 ;
-(void)presentInitialLocationSelectorIfNecessary;
-(void)handleAppBecameActive;
-(void)handleAppWillResignActive;
-(id)createNavigationControllerForModule:(id)arg1 ;
-(BOOL)canGoToTabWithIdentifier:(id)arg1 ;
-(void)goToTabWithIdentifier:(id)arg1 popToRoot:(BOOL)arg2 ;
-(ECProgressViewController *)initialLocationProgressController;
-(void)setInitialLocationProgressController:(ECProgressViewController *)arg1 ;
-(id)currentViewController;
-(void)presentFullEULA;
-(void)presentInitialLocationSelectionAndRequestCurrentLocation:(BOOL)arg1 ;
-(void)dismissProgressView;
-(void)showLocationPicker;
-(void)popToRootViewController:(id)arg1 ;
-(void)updateLastSelectedTabIndexWithController:(id)arg1 ;
-(id)deepLinkBlock;
-(void)setDeepLinkBlock:(id)arg1 ;
-(unsigned long long)selectedTabIndex;
-(unsigned long long)previousSelectedTabIndex;
-(BOOL)tabAtIndexWillPresentAuthentication:(unsigned long long)arg1 ;
-(void)goToTabAtIndex:(unsigned long long)arg1 popToRoot:(BOOL)arg2 ;
-(void)goToTabWithIdentifier:(id)arg1 popToRoot:(BOOL)arg2 viewController:(id)arg3 ;
-(id)tabIndexPathWithIdentifier:(id)arg1 ;
-(void)goToTabAtIndexPath:(id)arg1 popToRoot:(BOOL)arg2 viewController:(id)arg3 ;
-(unsigned long long)tabIndexWithIdentifier:(id)arg1 ;
-(void)setPreviousSelectedTabIndex:(unsigned long long)arg1 ;
-(void)setSelectedTabIndex:(unsigned long long)arg1 ;
-(void)updateSelectedControllers:(unsigned long long)arg1 controller:(id)arg2 ;
-(id)topControllerConformingToProtocol:(id)arg1 ;
-(id)tabSwitchWithIdentifier;
-(ECLoginController *)loginController;
-(id)identifierForModule:(Class)arg1 ;
-(void)switchTabWithModuleClass:(Class)arg1 ;
-(id)rootControllerConformingToProtocol:(id)arg1 inTabModules:(id)arg2 ;
-(id)actualViewController:(id)arg1 ;
-(void)displayProgressViewWithTitle:(id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(void)setTabSwitchWithIdentifier:(id)arg1 ;
-(void)setLoginController:(ECLoginController *)arg1 ;
-(BOOL)canLoginOnCurrentController;
-(void)handleSessionExpired:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)finishWithResult:(id)arg1 ;
-(BOOL)isModal;
-(void)showSettings;
-(void)updateLocation:(id)arg1 ;
@end

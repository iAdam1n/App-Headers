/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIBarPositioningDelegate.h>
#import <Gumtree/ECRootViewControllerProtocol.h>
#import <Gumtree/ECRouterProtocol.h>

@class UINavigationBar, UISwipeGestureRecognizer, UIViewController, ECIpadSearchResultsViewController, UILabel, NSString;

@interface ECIpadRootViewController : ECBaseViewController <UINavigationBarDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, UIBarPositioningDelegate, ECRootViewControllerProtocol, ECRouterProtocol> {

	/*^block*/id _eulaAcceptedAction;
	BOOL _gestureWaitingForFirstTouch;
	UINavigationBar* _navBar;
	UISwipeGestureRecognizer* _showMenuGestureRecognizer;
	UIViewController* _currentChildVC;
	ECIpadSearchResultsViewController* _searchResultsViewController;
	UILabel* _watchlistCounter;

}

@property (nonatomic,retain) UINavigationBar * navBar;                                                     //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * showMenuGestureRecognizer;                         //@synthesize showMenuGestureRecognizer=_showMenuGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL gestureWaitingForFirstTouch;                                             //@synthesize gestureWaitingForFirstTouch=_gestureWaitingForFirstTouch - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * currentChildVC;                                     //@synthesize currentChildVC=_currentChildVC - In the implementation block
@property (nonatomic,retain) ECIpadSearchResultsViewController * searchResultsViewController;              //@synthesize searchResultsViewController=_searchResultsViewController - In the implementation block
@property (assign,nonatomic,__weak) UILabel * watchlistCounter;                                            //@synthesize watchlistCounter=_watchlistCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postAd;
-(void)toolTipHasBeenDismissed:(id)arg1 ;
-(void)showMyAdsAndPopToRoot:(BOOL)arg1 ;
-(void)doCancelSearch:(id)arg1 ;
-(void)doSearchWithParameters:(id)arg1 sender:(id)arg2 ;
-(void)handleRemoteWatchlistChangeNotification:(id)arg1 ;
-(void)createAndAddNavBar;
-(void)createAndAddShowMenuGestureRecognizer;
-(void)setCurrentChildVC:(UIViewController *)arg1 ;
-(void)addConstraintsToSubController:(id)arg1 ;
-(void)addNavBarButtons;
-(void)viewControllerHasBeenVisibleForASecond;
-(void)setWatchlistLabelText;
-(UIViewController *)currentChildVC;
-(void)overrideSubViewRightSwipeGestureRecognizers:(id)arg1 ;
-(UILabel *)watchlistCounter;
-(void)setWatchlistCounter:(UILabel *)arg1 ;
-(void)showWatchlist;
-(void)presentSearch;
-(void)presentMenu:(id)arg1 ;
-(UISwipeGestureRecognizer *)showMenuGestureRecognizer;
-(void)setShowMenuGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(void)setGestureWaitingForFirstTouch:(BOOL)arg1 ;
-(void)overrideRightSwipeGestureRecognizers:(id)arg1 ;
-(void)handleEULAAccepted;
-(void)presentEULA:(/*^block*/id)arg1 ;
-(void)viewControllerAppeared:(id)arg1 ;
-(void)presentAsModal:(id)arg1 ;
-(void)reloadModule:(Class)arg1 ;
-(void)showMyAdsAndResetPostFlow;
-(void)goToPreviousSelectedTab;
-(void)handleSessionExpired:(BOOL)arg1 ;
-(void)showUserBids;
-(void)showSavedSearch;
-(void)showPostFlow;
-(void)loadWatchlist;
-(void)loadMyAds;
-(void)promoteAd;
-(void)showCategoryPicker;
-(void)showHomePage;
-(void)performSearchWithParameters:(id)arg1 ;
-(void)viewItemDetailsForAdWithIdentifier:(id)arg1 ;
-(void)goToTabWithIdentifier:(id)arg1 popToRoot:(BOOL)arg2 ;
-(BOOL)gestureWaitingForFirstTouch;
-(ECIpadSearchResultsViewController *)searchResultsViewController;
-(void)setSearchResultsViewController:(ECIpadSearchResultsViewController *)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)positionForBar:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(void)showSettings;
@end


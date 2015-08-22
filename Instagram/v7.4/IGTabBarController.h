/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGNavigationControllerDelegate.h>
#import <Instagram/IGToastViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class IGTabBar, IGTabBarButton, NSArray, IGToastViewPopup, IGToastData, IGUnreadBubbleView, UIViewController, UIView, IGNavigationController, IGNewsViewController, NSString;

@interface IGTabBarController : UIViewController <IGNavigationControllerDelegate, IGToastViewDelegate, UIGestureRecognizerDelegate> {

	IGTabBar* _tabBar;
	IGTabBarButton* _homeButton;
	IGTabBarButton* _popularButton;
	IGTabBarButton* _cameraButton;
	IGTabBarButton* _newsButton;
	IGTabBarButton* _profileButton;
	BOOL _isPerformingTabBarAction;
	NSArray* _viewControllers;
	long long _selectedTabBarItem;
	IGToastViewPopup* _activityToastView;
	long long _cameraButtonMode;
	IGToastData* _suppressedToastData;
	long long _pendingRequestCount;
	IGUnreadBubbleView* _directUnreadBubbleView;

}

@property (nonatomic,readonly) BOOL isTabBarVisible; 
@property (nonatomic,readonly) long long selectedTabBarItem;                                   //@synthesize selectedTabBarItem=_selectedTabBarItem - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
@property (nonatomic,readonly) NSArray * viewControllers;                                      //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIView * tabBar; 
@property (assign,nonatomic) BOOL isPerformingTabBarAction;                                    //@synthesize isPerformingTabBarAction=_isPerformingTabBarAction - In the implementation block
@property (nonatomic,retain) IGToastViewPopup * activityToastView;                             //@synthesize activityToastView=_activityToastView - In the implementation block
@property (nonatomic,readonly) IGNavigationController * newsNavigationController; 
@property (nonatomic,readonly) IGNewsViewController * newsViewController; 
@property (assign,nonatomic) long long cameraButtonMode;                                       //@synthesize cameraButtonMode=_cameraButtonMode - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayToastPopup; 
@property (nonatomic,retain) IGToastData * suppressedToastData;                                //@synthesize suppressedToastData=_suppressedToastData - In the implementation block
@property (assign,nonatomic) long long pendingRequestCount;                                    //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,retain) IGUnreadBubbleView * directUnreadBubbleView;                      //@synthesize directUnreadBubbleView=_directUnreadBubbleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPendingRequestCount:(long long)arg1 ;
-(long long)pendingRequestCount;
-(BOOL)isTabBarVisible;
-(void)setSelectedTabBarItem:(long long)arg1 animated:(BOOL)arg2 ;
-(id)navigationControllerForTabBarItem:(long long)arg1 ;
-(void)openURLInNewsTab:(id)arg1 ;
-(long long)selectedTabBarItem;
-(void)prefetchAndFocusInboxInNewsTab;
-(void)inboxCountDidUpdate:(id)arg1 ;
-(void)toastCountsReceived:(id)arg1 ;
-(void)tabBarIsHiding;
-(void)popularButtonPressed;
-(void)popularButtonLongPressed:(id)arg1 ;
-(void)cameraButtonPressed;
-(void)cameraButtonLongPressed:(id)arg1 ;
-(void)newsButtonPressed;
-(void)profileButtonPressed;
-(IGNavigationController *)newsNavigationController;
-(void)logNavigationEventForClickPoint:(id)arg1 ;
-(BOOL)itemNeedsAttention:(long long)arg1 ;
-(void)hideActivityToastAnimated:(BOOL)arg1 ;
-(BOOL)isPerformingTabBarAction;
-(void)setIsPerformingTabBarAction:(BOOL)arg1 ;
-(void)setNeedsAttention:(BOOL)arg1 forItem:(long long)arg2 ;
-(IGToastViewPopup *)activityToastView;
-(void)layoutToast;
-(void)hideActivityToastWithAnimation;
-(IGNewsViewController *)newsViewController;
-(BOOL)shouldDelayToastPopup;
-(void)displaySuppressedActivityToastWhenApporiate;
-(IGToastData *)suppressedToastData;
-(void)displayActivityToastWithToastData:(id)arg1 ;
-(void)setSuppressedToastData:(IGToastData *)arg1 ;
-(BOOL)showingActivityToast;
-(void)toastViewTapped:(id)arg1 ;
-(void)initializeViewControllersWithMainFeedSource:(id)arg1 ;
-(id)profileNavigationController;
-(IGUnreadBubbleView *)directUnreadBubbleView;
-(void)setNeedsAttentionItem:(long long)arg1 ;
-(void)moveDownTabBarToOffset:(double)arg1 ;
-(void)setActivityToastView:(IGToastViewPopup *)arg1 ;
-(long long)cameraButtonMode;
-(void)setCameraButtonMode:(long long)arg1 ;
-(void)setDirectUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(UIView *)tabBar;
-(NSArray *)viewControllers;
-(UIViewController *)selectedViewController;
-(void)homeButtonPressed;
@end

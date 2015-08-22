/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNViewController.h>
#import <Twitter/TFNSwipeViewControllerDataSource.h>
#import <Twitter/TFNSwipeViewControllerDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, T1SwipeTitleView, UIView, UITapGestureRecognizer, TFNTimer, T1ComposeEntrypointBar, TFNTwitterAccount, TFNSwipeViewController, NSString;

@interface T1TimelineSwipeViewController : TFNViewController <TFNSwipeViewControllerDataSource, TFNSwipeViewControllerDelegate, TFNTwitterAuthenticated, UIGestureRecognizerDelegate> {

	NSMutableArray* _timelines;
	T1SwipeTitleView* _swipeTitleView;
	UIView* _swipeTitleContainerView;
	UITapGestureRecognizer* _tapRecognizer;
	long long _swipingFromIndex;
	TFNTimer* _unloadUnviewedControllersTimer;
	T1ComposeEntrypointBar* _composeBar;
	TFNTwitterAccount* _account;
	TFNSwipeViewController* _swipeController;

}

@property (nonatomic,readonly) T1SwipeTitleView * swipeTitleView; 
@property (nonatomic,readonly) TFNSwipeViewController * swipeController;              //@synthesize swipeController=_swipeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                             //@synthesize account=_account - In the implementation block
-(id)scribePage;
-(id)scribeSection;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(long long)tfn_preferredNavigationBarShadowVisibility;
-(void)layoutGuidesDidChange:(long long)arg1 ;
-(double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2 ;
-(void)setCurrentPanel:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)showsComposeButton;
-(id)currentPanelID;
-(id)tfn_debugStrings;
-(long long)currentPanelIndex;
-(void)setCurrentPanelIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)currentPanelViewController;
-(void)_swipeTitleViewTapped:(id)arg1 ;
-(void)_unloadUnviewedViewControllers;
-(void)_timelinesDidChange:(id)arg1 ;
-(void)_updateTimelineStateFromNotification:(id)arg1 ;
-(void)_unloadViewControllersNotViewedInTimeInterval:(double)arg1 ;
-(long long)_insertionIndexForTimeline:(id)arg1 ;
-(void)_selectTimeline:(id)arg1 ;
-(void)_scribeNavigationFromIndex:(long long)arg1 toViewController:(id)arg2 atIndex:(long long)arg3 ;
-(TFNSwipeViewController *)swipeController;
-(long long)numberOfViewControllersInSwipeViewController:(id)arg1 ;
-(id)swipeViewController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(UIEdgeInsets)swipeViewController:(id)arg1 contentEdgeInsetsForViewControllerAtIndex:(long long)arg2 ;
-(void)swipeViewController:(id)arg1 didUpdateSwipePosition:(double)arg2 ;
-(void)swipeViewController:(id)arg1 willUpdateCurrentIndex:(long long)arg2 ;
-(void)swipeViewController:(id)arg1 didUpdateCurrentIndex:(long long)arg2 ;
-(id)timelinesScrollView;
-(T1SwipeTitleView *)swipeTitleView;
-(id)allPanelViewControllers;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(id)timelines;
@end

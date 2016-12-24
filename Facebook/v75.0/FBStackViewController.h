/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBContainerViewController.h>
#import <Facebook/FBStackViewControllerProtocol.h>
#import <Facebook/FBInAppNotificationEligibilityProtocol.h>

@class NSArray, UIViewController, NSMutableOrderedSet, FBStackView, NSString;

@interface FBStackViewController : FBContainerViewController <FBStackViewControllerProtocol, FBInAppNotificationEligibilityProtocol> {

	NSMutableOrderedSet* _viewControllers;
	FBStackView* _stackView;

}

@property (nonatomic,retain) FBStackView * stackView;                                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) unsigned long long stackCount; 
@property (nonatomic,readonly) UIViewController * bottomStackViewController; 
@property (nonatomic,readonly) UIViewController * topStackViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(id)analyticsModule;
-(id)analyticsPresentedViewController;
-(void)addModalItem:(id)arg1 ;
-(NSArray *)modalPresentationItems;
-(UIViewController *)topStackViewController;
-(UIViewController *)topModalViewController;
-(void)modalItem:(id)arg1 didUpdateOcclusionState:(BOOL)arg2 ;
-(UIViewController *)bottomModalViewController;
-(void)removeModalItem:(id)arg1 ;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;
-(UIViewController *)bottomStackViewController;
-(id)viewControllerAtIndex:(unsigned long long)arg1 ;
-(void)removeViewController:(id)arg1 ;
-(void)addViewControllerOnTop:(id)arg1 ;
-(unsigned long long)stackCount;
-(BOOL)containsViewController:(id)arg1 ;
-(void)removeAllViewControllers;
-(NSString *)description;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)transitioningDelegate;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(FBStackView *)stackView;
-(BOOL)accessibilityPerformEscape;
-(id)_topViewController;
-(void)setStackView:(FBStackView *)arg1 ;
@end

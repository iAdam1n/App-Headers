/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIViewController, UITraitCollection, UIView, UIButton, NSString;

@interface OASExhibitViewController : UIViewController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	BOOL _collapsed;
	BOOL _wrapDetailViewControllersInNavigationController;
	UIViewController* _masterViewController;
	UIViewController* _detailViewController;
	UITraitCollection* _traitCollectionForCollapsedMode;
	UIViewController* _exhibitedViewController;
	UIView* _masterSuperview;
	UIButton* _exhibitBackground;
	UIView* _exhibitSuperview;

}

@property (nonatomic,retain) UIViewController * masterViewController;                           //@synthesize masterViewController=_masterViewController - In the implementation block
@property (nonatomic,retain) UIViewController * detailViewController;                           //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollectionForCollapsedMode;               //@synthesize traitCollectionForCollapsedMode=_traitCollectionForCollapsedMode - In the implementation block
@property (assign,nonatomic) BOOL collapsed;                                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,nonatomic) BOOL wrapDetailViewControllersInNavigationController;              //@synthesize wrapDetailViewControllersInNavigationController=_wrapDetailViewControllersInNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController * exhibitedViewController;                        //@synthesize exhibitedViewController=_exhibitedViewController - In the implementation block
@property (nonatomic,retain) UIView * masterSuperview;                                          //@synthesize masterSuperview=_masterSuperview - In the implementation block
@property (nonatomic,retain) UIButton * exhibitBackground;                                      //@synthesize exhibitBackground=_exhibitBackground - In the implementation block
@property (nonatomic,retain) UIView * exhibitSuperview;                                         //@synthesize exhibitSuperview=_exhibitSuperview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)oas_removeChildViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setWrapDetailViewControllersInNavigationController:(BOOL)arg1 ;
-(void)setMasterViewController:(UIViewController *)arg1 ;
-(UIView *)masterSuperview;
-(void)setMasterSuperview:(UIView *)arg1 ;
-(void)_setDetailViewController:(id)arg1 ;
-(void)setExhibitedViewController:(UIViewController *)arg1 ;
-(BOOL)wrapDetailViewControllersInNavigationController;
-(UIViewController *)exhibitedViewController;
-(void)setExhibitedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showExhibitedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_hideExhibitedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)exhibitSuperview;
-(void)setExhibitBackground:(UIButton *)arg1 ;
-(UIButton *)exhibitBackground;
-(void)escapeExhibitedViewController;
-(void)setExhibitSuperview:(UIView *)arg1 ;
-(CGRect)frameForExhibitedViewController;
-(BOOL)shouldCollapseForTraitCollection:(id)arg1 ;
-(void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITraitCollection *)traitCollectionForCollapsedMode;
-(void)setTraitCollectionForCollapsedMode:(UITraitCollection *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController *)masterViewController;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDetailViewController:(UIViewController *)arg1 ;
-(UIViewController *)detailViewController;
-(BOOL)collapsed;
-(BOOL)accessibilityPerformEscape;
-(void)setCollapsed:(BOOL)arg1 ;
@end

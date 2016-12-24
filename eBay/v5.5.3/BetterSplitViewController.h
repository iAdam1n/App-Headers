/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/ComplexContainerViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol BetterSplitButtonDelegate;
@class UIViewController, UIView, CALayer, UIPopoverController, UIBarButtonItem, NSString;

@interface BetterSplitViewController : ComplexContainerViewController <UIPopoverControllerDelegate> {

	UIViewController* master;
	UIViewController* detail;
	UIView* masterContainer;
	UIView* detailContainer;
	unsigned long long splitStyle;
	CALayer* bottomPip;
	CALayer* topPip;
	BOOL visible;
	UIPopoverController* popover;
	UIBarButtonItem* masterButton;
	id<BetterSplitButtonDelegate> buttonDelegate;

}

@property (nonatomic,retain) UIView * masterContainer; 
@property (nonatomic,retain) UIView * detailContainer; 
@property (nonatomic,retain) CALayer * bottomPip; 
@property (nonatomic,retain) CALayer * topPip; 
@property (nonatomic,retain) UIViewController * master; 
@property (nonatomic,retain) UIViewController * detail; 
@property (nonatomic,retain) UIPopoverController * popover; 
@property (nonatomic,retain) UIBarButtonItem * masterButton; 
@property (assign,nonatomic) unsigned long long splitStyle; 
@property (assign,nonatomic,__weak) id<BetterSplitButtonDelegate> buttonDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateBarButtonItem;
-(void)updateBarButtonItem;
-(void)setButtonDelegate:(id<BetterSplitButtonDelegate>)arg1 ;
-(void)presentMasterInPopover;
-(void)setMasterButton:(UIBarButtonItem *)arg1 ;
-(BOOL)masterIsInButton;
-(void)createBarButtonItem;
-(void)setMasterContainer:(UIView *)arg1 ;
-(void)setDetailContainer:(UIView *)arg1 ;
-(UIView *)masterContainer;
-(UIView *)detailContainer;
-(void)reconfigureForInterfaceOrientation:(long long)arg1 ;
-(void)popoverShouldDismiss:(id)arg1 ;
-(CGRect)containerPrimaryContentBounds;
-(CALayer *)bottomPip;
-(void)setBottomPip:(CALayer *)arg1 ;
-(CALayer *)topPip;
-(void)setTopPip:(CALayer *)arg1 ;
-(unsigned long long)splitStyle;
-(void)setSplitStyle:(unsigned long long)arg1 ;
-(UIBarButtonItem *)masterButton;
-(id<BetterSplitButtonDelegate>)buttonDelegate;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setDetail:(UIViewController *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(UIViewController *)detail;
-(void)dismissPopover;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(UIViewController *)master;
-(void)setMaster:(UIViewController *)arg1 ;
@end

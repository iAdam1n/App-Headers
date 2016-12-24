/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UINavigationController.h>
#import <Facebook/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Facebook/FBPaymentsExpandableItem.h>

@protocol FBPaymentsExpandableViewControllerExpandingDelegate;
@class NSString;

@interface FBPaymentsExpandableNavigationController : UINavigationController <FBPaymentsExpandableViewControllerExpandingDelegate, UINavigationControllerDelegate, FBPaymentsExpandableItem> {

	BOOL _isFirstTransitionAfterViewDidLoad;
	BOOL _isFirstViewDidLayoutSubviewsAfterViewWillTransitionToSize;
	BOOL _isTransitioning;
	long long _previousStatusBarStyle;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)_configureStatusBar;
-(void)_configureNavigationBarFrame;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

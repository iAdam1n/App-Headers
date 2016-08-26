/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate.h>
#import <Facebook/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBPaymentsExpandableItem.h>

@protocol FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsCheckoutConfirmationViewControllerDelegate;
@class FBPaymentsPINController, FBPaymentsTouchIDController, FBUserSession, FBPaymentsCheckoutConfirmationActionTableViewController, NSArray, NSString;

@interface FBPaymentsCheckoutConfirmationViewController : UIViewController <FBPaymentsCheckoutConfirmationActionTableViewControllerDelegate, FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsNavigationDelegate, FBPaymentsExpandableItem> {

	FBPaymentsPINController* _paymentsPINController;
	FBPaymentsTouchIDController* _touchIDController;
	FBUserSession* _session;
	FBPaymentsCheckoutConfirmationActionTableViewController* _actionTableViewController;
	NSArray* _confirmationActions;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<FBPaymentsCheckoutConfirmationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isLoading; 
@property (nonatomic,copy) NSString * loadingStatusText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(id)newNavigationController;
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(BOOL)isRootForHeight;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 paymentsPINController:(id)arg2 touchIDController:(id)arg3 ;
-(void)confirmationActionTableViewControllerDidUpdate:(id)arg1 ;
-(void)_updateConfirmationActionsWithConfirmationConfiguration:(id)arg1 paymentsPINController:(id)arg2 touchIDController:(id)arg3 ;
-(void)setIsLoading:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLoadingStatusText:(NSString *)arg1 ;
-(NSString *)loadingStatusText;
-(void)_updateNavigationBarActions;
-(void)setLoadingStatusText:(id)arg1 animated:(BOOL)arg2 ;
-(void)_onDone;
-(void)applyConfiguration:(id)arg1 withCheckoutResponse:(id)arg2 checkoutFlowCollectedData:(id)arg3 ;
-(void)setDelegate:(id<FBPaymentsCheckoutConfirmationViewControllerDelegate>)arg1 ;
-(id<FBPaymentsCheckoutConfirmationViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)_configureNavigationBar;
-(id)viewControllerForPresenting;
@end

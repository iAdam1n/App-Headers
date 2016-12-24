/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastBroadcasterFundraiserPickerTableViewControllerDelegate.h>
#import <Facebook/FBFundraiserBeneficiaryPickerDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol FBFacecastBroadcasterFundraiserPickerViewControllerDelegate;
@class FBFacecastBroadcasterDonationFunnelLogger, FBFacecastBroadcasterFundraiserPickerTableViewController, FBListViewController, UISearchBar, FBFundraiserSearchBarListenerAnnouncer, FBKeyboardObserver, FBKeyboardTracker, FBContentInsetTracker, NSString;

@interface FBFacecastBroadcasterFundraiserPickerViewController : UIViewController <FBFacecastBroadcasterFundraiserPickerTableViewControllerDelegate, FBFundraiserBeneficiaryPickerDelegate, FBKeyboardObserverDelegate, UISearchBarDelegate> {

	id<FBFacecastBroadcasterFundraiserPickerViewControllerDelegate> _delegate;
	FBFacecastBroadcasterDonationFunnelLogger* _funnelLogger;
	FBFacecastBroadcasterFundraiserPickerTableViewController* _tableViewController;
	BOOL _canSelectLightweightFundraiser;
	FBListViewController* _charitySearchViewController;
	UISearchBar* _searchBar;
	FBFundraiserSearchBarListenerAnnouncer* _searchTermAnnouncer;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	FBContentInsetTracker* _contentInsetTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_setNavigationAndStatusBarHidden:(BOOL)arg1 searchBar:(id)arg2 ;
-(void)didSelectBeneficiary:(id)arg1 fromSource:(long long)arg2 ;
-(id)initWithSession:(id)arg1 author:(id)arg2 delegate:(id)arg3 funnelLogger:(id)arg4 selectedFundraiser:(id)arg5 ;
-(void)_didTapNavigationCancelButton;
-(void)fundraiserPickerTableViewController:(id)arg1 didSelectFundraiser:(id)arg2 ;
-(void)updateContentAndScrollIndicatorInset;
-(void)setContentAndScrollIndicatorInset:(UIEdgeInsets)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
@end

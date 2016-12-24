/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBGoodFriendsComposerNuxViewControllerDelegate;
@class FBUserSession, UIView, UILabel, UIButton;

@interface FBGoodFriendsComposerNuxViewController : UIViewController {

	FBUserSession* _session;
	UIView* _originalView;
	UIView* _snapshotView;
	UILabel* _messageLabel;
	UIButton* _closeButton;
	UIButton* _doneButton;
	id<FBGoodFriendsComposerNuxViewControllerDelegate> _delegate;

}
-(id)initWithHighlightView:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(void)_tappedHighlightedView;
-(long long)preferredStatusBarStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_dismissViewController;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

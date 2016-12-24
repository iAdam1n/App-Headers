/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIScrollView, FBClashSessionTracker, FBContentInsetTracker, UILabel, FBButton;

@interface FBClashManagementSessionInspectorDebugViewController : UIViewController {

	UIScrollView* _scrollView;
	FBClashSessionTracker* _sessionTracker;
	FBContentInsetTracker* _contentInsetTracker;
	UILabel* _titleLabel;
	UILabel* _sessionTrackerStateLabel;
	UILabel* _takenClashUnitNameLabel;
	UILabel* _lastUnitShownLabel;
	FBButton* _clearStateButton;
	UILabel* _priorityListTitleLabel;
	UILabel* _priorityListLabel;

}
-(id)initWithSessionTracker:(id)arg1 ;
-(void)_handleClearStateButtonTap:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_layoutSubviews:(id)arg1 ;
@end

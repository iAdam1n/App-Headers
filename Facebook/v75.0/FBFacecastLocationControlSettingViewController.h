/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol FBFacecastLocationControlSettingViewControllerDelegate;
@class UITableViewCell;

@interface FBFacecastLocationControlSettingViewController : UITableViewController {

	UITableViewCell* _localControlIncludeCell;
	UITableViewCell* _localControlExcludeCell;
	id<FBFacecastLocationControlSettingViewControllerDelegate> _delegate;
	unsigned long long _selectedRowIndex;

}

@property (assign,nonatomic) unsigned long long selectedRowIndex;                                                     //@synthesize selectedRowIndex=_selectedRowIndex - In the implementation block
@property (assign,nonatomic,__weak) id<FBFacecastLocationControlSettingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLocationIncluded:(BOOL)arg1 ;
-(void)_didTapNavigationBackButton;
-(void)setDelegate:(id<FBFacecastLocationControlSettingViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBFacecastLocationControlSettingViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(unsigned long long)selectedRowIndex;
-(void)setSelectedRowIndex:(unsigned long long)arg1 ;
@end

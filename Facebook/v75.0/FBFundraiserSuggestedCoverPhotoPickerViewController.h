/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFundraiserCoverPhotoCropViewControllerDelegate.h>

@class FBListViewController, FBFundraiserCreateFlowToolbox;

@interface FBFundraiserSuggestedCoverPhotoPickerViewController : UIViewController <FBFundraiserCoverPhotoCropViewControllerDelegate> {

	FBListViewController* _listViewController;
	FBFundraiserCreateFlowToolbox* _toolbox;

}
-(void)_didTapClose;
-(id)initWithCharityID:(id)arg1 toolbox:(id)arg2 ;
-(void)didTapComponent:(id)arg1 withCoverPhoto:(id)arg2 ;
-(void)coverPhotoCropViewControllerDidCancel:(id)arg1 ;
-(void)coverPhotoCropViewController:(id)arg1 didCompleteCrop:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end

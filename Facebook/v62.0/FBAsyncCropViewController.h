/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaTopNavigationBarDelegation.h>

@protocol FBCropViewControllerDelegate;
@class FBMediaTopNavigationBar, FBImageDownloader, FBCropViewController, UIActivityIndicatorView, NSString;

@interface FBAsyncCropViewController : UIViewController <FBMediaTopNavigationBarDelegation> {

	CGRect _contentFrame;
	FBMediaTopNavigationBar* _topBar;
	id<FBCropViewControllerDelegate> _delegate;
	FBImageDownloader* _imageDownloader;
	FBCropViewController* _cropViewController;
	UIActivityIndicatorView* _loadingSpinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapLeftButton:(id)arg1 ;
-(id)initWithPhotoURL:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(void)didTapRightButton:(id)arg1 ;
-(void)_requestImageToDisplayWithURL:(id)arg1 ;
-(void)_presentLoadingSpinner;
-(void)_presentCropViewControllerWithImage:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

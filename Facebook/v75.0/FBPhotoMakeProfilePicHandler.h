/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBCropViewControllerDelegate.h>

@protocol FBNavigationCoordinator, FBPhotoActionSheetControllerDelegate;
@class UIView, FBUserSession, UIAlertView, FBProfilePicturePickerStatusView, FBViewerContext, FBMemPhoto, NSString;

@interface FBPhotoMakeProfilePicHandler : NSObject <UIAlertViewDelegate, FBCropViewControllerDelegate> {

	UIView* _presentingView;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;
	UIAlertView* _profilePrivacyAlertView;
	FBProfilePicturePickerStatusView* _profilePictureStatusView;
	FBViewerContext* _targetForMakingProfilePicture;
	id<FBPhotoActionSheetControllerDelegate> _actionSheetDelegate;
	FBMemPhoto* _photo;

}

@property (assign,nonatomic,__weak) id<FBPhotoActionSheetControllerDelegate> actionSheetDelegate;              //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
@property (nonatomic,retain) FBMemPhoto * photo;                                                               //@synthesize photo=_photo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendCropRequest:(CGRect)arg1 ;
-(void)cropViewControllerDidConfirmCrop:(id)arg1 ;
-(void)cropViewControllerDidCancelCrop:(id)arg1 ;
-(void)_showProfilePictureStatusView;
-(id)initWithPhoto:(id)arg1 presentingView:(id)arg2 actionSheetDelegate:(id)arg3 navigationCoordinator:(id)arg4 session:(id)arg5 ;
-(void)makeProfilePicButtonTap;
-(void)makeProfilePicForPageButtonTap;
-(void)_usePhotoAsProfilePicture;
-(void)_usePhotoAsProfilePictureForPage;
-(void)_usePhotoAsProfilePictureWithTarget:(id)arg1 ;
-(void)_presentCropViewControllerForProfilePicture;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setActionSheetDelegate:(id<FBPhotoActionSheetControllerDelegate>)arg1 ;
-(id<FBPhotoActionSheetControllerDelegate>)actionSheetDelegate;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBMemPhoto *)photo;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBPrivacyCheckupAppNoticeViewControllerDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@class UIWindow, FBPopoverController, NSString;

@interface FBPrivacyCheckupAppEditComponentController : CKComponentController <FBPrivacyCheckupAppNoticeViewControllerDelegate, FBPopoverControllerDelegate> {

	UIWindow* _window;
	FBPopoverController* _confirmationModal;
	FBPopoverController* _followupModal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)willRemount;
-(void)didTapAppDelete:(id)arg1 ;
-(id)_modalNoticeFromData:(id)arg1 toolbox:(id)arg2 ;
-(void)_resizeModalController:(id)arg1 ;
-(void)_didTapDeleteWithPosts:(BOOL)arg1 ;
-(void)appNoticeControllerDidTapPrimaryButton:(id)arg1 ;
-(void)appNoticeControllerDidTapSecondaryButton:(id)arg1 ;
-(void)appNoticeControllerDidTapCancelButton:(id)arg1 ;
@end

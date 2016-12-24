/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class FBAppReferralInteractor, FBAppReferralViewController, NSString;

@interface FBAppReferralPresenter : NSObject <FBAvatarPickerControllerDelegate, UITextViewDelegate> {

	FBAppReferralInteractor* _interactor;
	FBAppReferralViewController* _viewController;

}

@property (assign,nonatomic,__weak) FBAppReferralViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancel:(id)arg1 ;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerValueDidChange:(id)arg1 ;
-(id)initWithInteractor:(id)arg1 ;
-(void)_initializeNavigationBar;
-(void)_initializeNavigationItem;
-(void)_initializeMessageView;
-(void)_initializePreviewView;
-(void)_didTapSend:(id)arg1 ;
-(void)viewControllerWillAppear;
-(void)setViewController:(FBAppReferralViewController *)arg1 ;
-(FBAppReferralViewController *)viewController;
-(void)textViewDidChange:(id)arg1 ;
@end

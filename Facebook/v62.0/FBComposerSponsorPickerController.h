/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBSponsorAvatarPickerDefaultViewDelegate.h>
#import <Facebook/FBComposerPickerController.h>

@protocol FBComposerUpdateHandler;
@class FBAvatarPickerController, FBUserSession, NSString;

@interface FBComposerSponsorPickerController : NSObject <FBAvatarPickerControllerDelegate, FBSponsorAvatarPickerDefaultViewDelegate, FBComposerPickerController> {

	FBAvatarPickerController* _avatarPickerController;
	id<FBComposerUpdateHandler> _updateHandler;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(id)presentableViewController;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(void)_viewerDidCancel;
-(void)didTapPolicyLink:(id)arg1 event:(id)arg2 ;
-(id)initWithUpdateHandler:(id)arg1 session:(id)arg2 ;
@end

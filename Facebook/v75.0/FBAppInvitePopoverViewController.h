/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBAppInvitePopoverViewControllerDelegate;
@class FBMemApplicationRequest, FBUserSession;

@interface FBAppInvitePopoverViewController : UIViewController {

	FBMemApplicationRequest* _invite;
	BOOL _isApplicationInstalled;
	FBUserSession* _session;
	id<FBAppInvitePopoverViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAppInvitePopoverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)initWithInvite:(id)arg1 isApplicationInstalled:(BOOL)arg2 session:(id)arg3 ;
-(void)_chevronMenuDidTap:(id)arg1 ;
-(void)_deleteInviteButtonDidTap:(id)arg1 ;
-(void)_blockSenderButtonDidTap:(id)arg1 ;
-(void)_blockAppButtonDidTap:(id)arg1 ;
-(void)_reportInviteButtonDidTap:(id)arg1 ;
-(void)_installButtonDidTap:(id)arg1 ;
-(void)_senderDidTap:(id)arg1 ;
-(void)_previewImageDidTap:(id)arg1 ;
-(void)popViewController;
-(void)setDelegate:(id<FBAppInvitePopoverViewControllerDelegate>)arg1 ;
-(id<FBAppInvitePopoverViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
@end

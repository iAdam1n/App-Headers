/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNBotComposerShoppingBannerViewDelegate.h>

@protocol FBIntentHandler, MNUserInvalidating, MNBotComposerShoppingBannerViewControllerDelegate;
@class MNBotComposerShoppingBannerView, FBUserSession, FBBrowserExtensionResumeURLMutator, MNBotComposerShoppingBannerViewModel, NSString;

@interface MNBotComposerShoppingBannerViewController : UIViewController <MNBotComposerShoppingBannerViewDelegate> {

	MNBotComposerShoppingBannerView* _shoppingBannerView;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<MNUserInvalidating> _userInvalidator;
	FBBrowserExtensionResumeURLMutator* _resumeURLMutator;
	MNBotComposerShoppingBannerViewModel* _viewModel;
	id<MNBotComposerShoppingBannerViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) MNBotComposerShoppingBannerViewModel * viewModel;                                     //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNBotComposerShoppingBannerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 userInvalidator:(id)arg3 ;
-(void)_handleSuccessfulResumeURLMutationForPageID:(id)arg1 ;
-(void)botComposerShoppingBannerViewDidTapBanner:(id)arg1 ;
-(void)botComposerShoppingBannerViewDidTapDismissButton:(id)arg1 ;
-(void)setDelegate:(id<MNBotComposerShoppingBannerViewControllerDelegate>)arg1 ;
-(id<MNBotComposerShoppingBannerViewControllerDelegate>)delegate;
-(void)loadView;
-(MNBotComposerShoppingBannerViewModel *)viewModel;
-(void)setViewModel:(MNBotComposerShoppingBannerViewModel *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPageCTARequestTimeSetupInfoFetcherDelegate.h>

@protocol FBPageCTAViewControllerDelegate, FBPageCTARequestTimeNUXDelegate;
@class FBPageCTARequestTimeIntroContainerView, FBPageCTARequestTimeSetupInfoFetcher, NSString, FBPageCTARequestTimeSetupInfoDataModel, FBTransientViewStateManager, FBUserSession, UIAlertView;

@interface FBPageCTARequestTimeIntroViewController : UIViewController <FBPageCTARequestTimeSetupInfoFetcherDelegate> {

	FBPageCTARequestTimeIntroContainerView* _introContainerView;
	FBPageCTARequestTimeSetupInfoFetcher* _setupInfoFetcher;
	NSString* _pageId;
	FBPageCTARequestTimeSetupInfoDataModel* _setupInfoDataModel;
	FBTransientViewStateManager* _viewStateManager;
	FBUserSession* _userSession;
	id<FBPageCTAViewControllerDelegate> _delegate;
	NSString* _ctaLabel;
	BOOL _isForPrimaryCTA;
	id<FBPageCTARequestTimeNUXDelegate> _nuxDelegate;
	UIAlertView* _genericErrorAlertView;

}

@property (nonatomic,retain) UIAlertView * genericErrorAlertView;              //@synthesize genericErrorAlertView=_genericErrorAlertView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createButtonTapped;
-(id)initWithUserSession:(id)arg1 pageId:(id)arg2 delegate:(id)arg3 ctaLabel:(id)arg4 isForPrimaryCTA:(BOOL)arg5 nuxDelegate:(id)arg6 ;
-(UIAlertView *)genericErrorAlertView;
-(void)_pushNuxViewControllerWithNuxButtonType:(unsigned long long)arg1 ;
-(void)setGenericErrorAlertView:(UIAlertView *)arg1 ;
-(void)_tappedCancelButton;
-(void)_saveCTA;
-(void)_dismissCreateCTAViewController:(id)arg1 ;
-(void)_setUpViewStateManager;
-(void)didFetchRequestTimeSetupInfo:(id)arg1 ;
-(void)didFetchRequestTimeSetupInfoFailedWithError:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

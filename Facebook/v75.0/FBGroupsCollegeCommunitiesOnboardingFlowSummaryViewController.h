/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBGroupsCollegeCommunitiesOnboardingFlowDataListener.h>

@protocol FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate;
@class NSString, FBUserSession, FBGroupsCollegeCommunitiesOnboardingFlowDataListenerAnnouncer, FBListViewController;

@interface FBGroupsCollegeCommunitiesOnboardingFlowSummaryViewController : UIViewController <FBGroupsCollegeCommunitiesOnboardingFlowDataListener> {

	NSString* _emailAddress;
	FBUserSession* _session;
	FBGroupsCollegeCommunitiesOnboardingFlowDataListenerAnnouncer* _dataAnnouncer;
	FBListViewController* _listVC;
	id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)onboardingFlowDidUpdateEmailAddress:(id)arg1 ;
-(void)_didTapClose;
-(id)initWithEmailAddress:(id)arg1 dataAnnouncer:(id)arg2 session:(id)arg3 ;
-(BOOL)fb_viewControllerSuppressBackButton;
-(void)setDelegate:(id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate>)arg1 ;
-(id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator;
@class UIViewController, FBUserSession, NSString, FBProfileModelIntroCardItem, FBProfileToolbox;

@interface FBProfileIntroCardEditPageFlowController : NSObject {

	UIViewController* _hostingViewController;
	FBUserSession* _userSession;
	NSString* _targetPersonFBID;
	FBProfileModelIntroCardItem* _introCardItem;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBProfileToolbox* _toolbox;

}
-(void)_presentIntroCardViewControllerWithType:(long long)arg1 ;
-(void)_bootstrapIntroCardConnectionWithType:(long long)arg1 ;
-(void)handleFlowAfterEditViewClosedWithViewController:(id)arg1 ;
-(void)_handleDownloadedIntroCardWithType:(long long)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)presentIntroCardEditPageWithType:(long long)arg1 ;
-(id)initWithHostingViewController:(id)arg1 session:(id)arg2 targetPersonFBID:(id)arg3 introCardItem:(id)arg4 navigationCoordinator:(id)arg5 toolbox:(id)arg6 ;
@end

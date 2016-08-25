/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SLKDependencies, UIViewController, UIAlertController;

@interface SLKViewControllerSignoutHelper : NSObject {

	SLKDependencies* _dependencies;
	UIViewController* _viewController;
	UIAlertController* _alertController;

}

@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                //@synthesize alertController=_alertController - In the implementation block
-(id)initWithDependencies:(id)arg1 forViewController:(id)arg2 ;
-(void)startSignoutSequence;
-(void)showEnterpriseSignOutAlert:(id)arg1 ;
-(void)showTeamSignOutAlert:(id)arg1 ;
-(void)showCouldNotSignOutAlert;
-(void)runSignoutSequence;
-(void)showSignoutSpinner;
-(void)runLogoutSequence;
-(void)showSignoutErrorToast;
-(void)dismissSignoutSpinner:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)signOut;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end


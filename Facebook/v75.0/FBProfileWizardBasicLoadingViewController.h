/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBProfileWizardToolbox;
@class FBUserSession, UIViewController, FBMemPerson, FBScenePath, NSString;

@interface FBProfileWizardBasicLoadingViewController : UIViewController {

	FBUserSession* _session;
	UIViewController* _replacementViewController;
	FBMemPerson* _person;
	FBScenePath* _scenepath;
	NSString* _analyticsUUID;
	unsigned long long _wizardType;
	id<FBProfileWizardToolbox> _toolbox;

}
-(void)_didTapCancel;
-(id)_graphQLQueryWithQueryType:(unsigned long long)arg1 ;
-(id)_getStepsInfoFromResponse:(id)arg1 ;
-(void)_renderNewViewControllerWithNewViewController:(id)arg1 ;
-(id)_createFlowTypeWithStepsInfo:(id)arg1 ;
-(void)_fetchInfo;
-(id)initWithPerson:(id)arg1 session:(id)arg2 scenePath:(id)arg3 analyticsUUID:(id)arg4 wizardType:(unsigned long long)arg5 toolbox:(id)arg6 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)_handleResponse:(id)arg1 ;
@end

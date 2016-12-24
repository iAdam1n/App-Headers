/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNRequirePushViewDelegate.h>
#import <Messenger/MNPushPermissionRequestControllerDelegate.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol MNUserSetUpStepCompletion;
@class MNPushPermissionRequestController, FBMPushNotificationRequestContentConfiguration, MNRequirePushView, FBMobileConfigContextManager, NSNotificationCenter, NSString;

@interface MNRequirePushViewController : UIViewController <MNRequirePushViewDelegate, MNPushPermissionRequestControllerDelegate, MNUserSetUpStepViewController> {

	MNPushPermissionRequestController* _pushPermissionRequestController;
	FBMPushNotificationRequestContentConfiguration* _notificationRequestContentConfiguration;
	MNRequirePushView* _requirePushView;
	FBMobileConfigContextManager* _configManager;
	NSNotificationCenter* _notificationCenter;
	id<MNUserSetUpStepCompletion> completionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)pushPermissionRequestControllerDidCompleteRequest:(id)arg1 ;
-(void)requirePushViewDidClickCancel:(id)arg1 ;
-(void)requirePushViewDidClickOK:(id)arg1 ;
-(id)initWithPushPermissionRequestController:(id)arg1 configManager:(id)arg2 notificationRequestContentConfiguration:(id)arg3 ;
-(void)_presentRequirePushView;
-(void)_startListeningToApplicationLifecycleEvents:(id)arg1 ;
-(void)_stopListeningToApplicationLifecycleEvents:(id)arg1 ;
-(void)_completeRequirePushStep;
-(unsigned long long)preferredTransitionType;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end

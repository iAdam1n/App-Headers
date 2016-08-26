/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBWebViewControllerDelegate.h>
#import <Messenger/FBPaymentsPeerToPeerRiskViewControllerDelegate.h>
#import <Messenger/MNPaymentsPeerToPeerRiskFlowController.h>

@protocol MNNavigationPluginService;
@class FBPaymentsPeerToPeerRiskStateMap, FBUserSession, NSString, UINavigationController, FBPaymentsPeerToPeerFeatureGatingController;

@interface FBPaymentsPeerToPeerRiskVerificationController : NSObject <FBModalWebFlowDelegate, FBWebViewControllerDelegate, FBPaymentsPeerToPeerRiskViewControllerDelegate, MNPaymentsPeerToPeerRiskFlowController> {

	FBPaymentsPeerToPeerRiskStateMap* _riskStateMap;
	id<MNNavigationPluginService> _navigationPluginService;
	FBUserSession* _session;
	NSString* _transferFBID;
	long long _direction;
	UINavigationController* _navigationController;
	long long _currentStep;
	BOOL _isHelperWebOpen;
	/*^block*/id _cancellationBlock;
	/*^block*/id _completionBlock;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logEvent:(long long)arg1 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3 ;
-(id)initWithRiskStateMap:(id)arg1 featureGatingController:(id)arg2 navigationPluginService:(id)arg3 session:(id)arg4 ;
-(void)enterRiskFlowForTransferWithFBID:(id)arg1 direction:(long long)arg2 cancellationBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendRequestFromStep:(id)arg1 transferID:(id)arg2 userInput:(id)arg3 caller:(id)arg4 ;
-(void)_handleCanceledValidation;
-(void)_handleRiskState:(long long)arg1 ;
-(void)_showWebViewControllerForURL:(id)arg1 isWebHelper:(BOOL)arg2 ;
-(id)_createViewController:(long long)arg1 withScreenData:(id)arg2 ;
-(void)_showViewController:(id)arg1 verificationStep:(long long)arg2 ;
-(void)_performCancel;
-(void)_handleRequestResponse:(id)arg1 caller:(id)arg2 ;
-(void)_handleRequestError:(id)arg1 caller:(id)arg2 ;
-(void)didCompleteVerification:(id)arg1 ;
-(void)webViewControllerDidComplete:(id)arg1 ;
-(void)didCancelVerification:(id)arg1 ;
-(void)didTapOnNext:(id)arg1 fromStep:(long long)arg2 userInput:(id)arg3 ;
-(void)didTapOnLearnMore:(id)arg1 ;
-(void)_cleanup;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNPaymentsSendMoneyViewControllerDelegate.h>
#import <Messenger/MNPaymentsPostCheckoutFlowProcessorPaymentSendingDelegate.h>

@protocol MNThreadMessageSenderPluginService, MNNavigationPluginService, FBPaymentsPeerToPeerPaymentMethodsCoordinator, MNConnectionStatusPluginService, MNSoundPluginService;
@class FBUserSession, FBPaymentsPeerToPeerContactsService, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPeerToPeerPaymentPinController, FBPaymentsPeerToPeerPasscodeWorkflowController, FBPaymentsPeerToPeerViewerInfoController, FBPaymentsPeerToPeerTouchIDController, FBPaymentsPeerToPeerFeatureGatingController, FBPaymentsPeerToPeerAnalyticsService, FBPaymentsPeerToPeerCardFlowController, MNPaymentsExtensibleFlowMap, MNPaymentsFlowSessionController, NSMutableDictionary, MNUserSettings, NSString;

@interface FBPaymentsPeerToPeerSendFlowController : NSObject <MNPaymentsSendMoneyViewControllerDelegate, MNPaymentsPostCheckoutFlowProcessorPaymentSendingDelegate> {

	FBUserSession* _session;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	FBPaymentsPeerToPeerNavigationCoordinator* _peerToPeerNavigationCoordinator;
	FBPaymentsPeerToPeerPaymentPinController* _paymentPinController;
	FBPaymentsPeerToPeerPasscodeWorkflowController* _passcodeWorkflowController;
	FBPaymentsPeerToPeerViewerInfoController* _viewerInfoController;
	FBPaymentsPeerToPeerTouchIDController* _touchIDController;
	id<MNThreadMessageSenderPluginService> _threadMessageSenderService;
	id<MNNavigationPluginService> _navigationService;
	id<FBPaymentsPeerToPeerPaymentMethodsCoordinator> _paymentMethodCoordinator;
	id<MNConnectionStatusPluginService> _connectionStatusService;
	id<MNSoundPluginService> _soundService;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	FBPaymentsPeerToPeerAnalyticsService* _analyticsService;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	MNPaymentsFlowSessionController* _flowSessionController;
	NSMutableDictionary* _contextForAttachment;
	NSMutableDictionary* _validatorForFlowId;
	NSMutableDictionary* _flowEndingIdentifier;
	MNUserSettings* _userSettings;

}

@property (nonatomic,retain) MNUserSettings * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)paymentsPostCheckoutFlowProcessor:(id)arg1 didSendPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 ;
-(void)paymentsPostCheckoutFlowProcessor:(id)arg1 didFailSendingPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 error:(id)arg4 ;
-(void)presentPaymentsCheckoutFlowWithCheckoutDataModel:(id)arg1 flowId:(id)arg2 delegate:(id)arg3 ;
-(void)_dismissSendMoneyViewController:(id)arg1 forFlowId:(id)arg2 delegate:(id)arg3 ;
-(void)_dispatchCancelEventForFlowId:(id)arg1 collectedData:(id)arg2 delegate:(id)arg3 ;
-(void)_showCreatePaymentPinNuxIfNeeded;
-(void)_removeFlowWithId:(id)arg1 ;
-(void)_flowDidConfirmSendWithFlowId:(id)arg1 collectedData:(id)arg2 postProcessorProcessingDelegate:(id)arg3 ;
-(void)_showConfirmationIfNeeded:(BOOL)arg1 withFlowId:(id)arg2 ;
-(void)_cleanupFlowIfPossibleWithId:(id)arg1 withCompletionIdentifier:(unsigned long long)arg2 ;
-(void)sendMoneyViewController:(id)arg1 didTapCancelWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)sendMoneyViewController:(id)arg1 didTapPayActionWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)sendMoneyViewController:(id)arg1 didFinishCheckoutWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(id)initWithSession:(id)arg1 contactsService:(id)arg2 peerToPeerNavigationCoordinator:(id)arg3 paymentPinController:(id)arg4 passcodeWorkflowController:(id)arg5 peerToPeerViewerInfoController:(id)arg6 touchIDController:(id)arg7 threadMessageSenderService:(id)arg8 navigationService:(id)arg9 paymentMethodCoordinator:(id)arg10 connectionStatusService:(id)arg11 soundService:(id)arg12 featureGatingController:(id)arg13 analyticsService:(id)arg14 cardFlowController:(id)arg15 extensibleFlowMap:(id)arg16 flowSessionController:(id)arg17 ;
-(MNUserSettings *)userSettings;
@end


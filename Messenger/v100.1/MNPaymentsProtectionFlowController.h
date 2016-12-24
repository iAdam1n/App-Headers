/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsEventListener.h>

@protocol FBPaymentsNavigationDelegate;
@class MNPaymentsPINProtectionController, FBPaymentsTouchIDController, FBPaymentsPINController, FBPaymentsPasscodeWorkflowController, NSString;

@interface MNPaymentsProtectionFlowController : NSObject <FBPaymentsEventListener> {

	MNPaymentsPINProtectionController* _pinProtectionController;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPINController* _pinController;
	FBPaymentsPasscodeWorkflowController* _passcodeWorkflowController;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)initWithPinController:(id)arg1 pinProtectionController:(id)arg2 touchIDController:(id)arg3 connectionStatusProvider:(id)arg4 ;
-(void)switchProtectionForProfileWithId:(id)arg1 toStatus:(BOOL)arg2 ;
-(void)switchProtectionForPaymentsTo:(BOOL)arg1 ;
-(void)_showPasscodeViewControllerForPinAction:(long long)arg1 forProfile:(id)arg2 ;
-(void)_showCreateProtectionActionSheetForProfile:(id)arg1 ;
-(void)_turnOffProtectionForProfile:(id)arg1 ;
-(void)_handlePaymentsPinAction:(long long)arg1 passcode:(id)arg2 callbackSuccess:(BOOL)arg3 error:(id)arg4 cancelled:(BOOL)arg5 ;
-(void)_clearAllOptimisticValues;
-(void)_clearOptimisticValueForProfileId:(id)arg1 ;
-(void)_activateTouchIDForCreatingPinForProfile:(id)arg1 ;
-(void)_handlePinAction:(long long)arg1 forProfile:(id)arg2 passcode:(id)arg3 callbackSuccess:(BOOL)arg4 error:(id)arg5 cancelled:(BOOL)arg6 ;
-(void)_updatePinProtectionWithPasscode:(id)arg1 forProfile:(id)arg2 toProtectionStatus:(BOOL)arg3 shouldShowConfirmation:(BOOL)arg4 pinAction:(long long)arg5 isTouchIDActivation:(BOOL)arg6 ;
-(void)_showAlertViewForPinAction:(long long)arg1 callbackSuccess:(BOOL)arg2 isTouchIDActivation:(BOOL)arg3 error:(id)arg4 cancelled:(BOOL)arg5 ;
-(void)_updatePinProtectionForPaymentsWithPasscode:(id)arg1 pinAction:(long long)arg2 toProtectionStatus:(BOOL)arg3 shouldShowConfirmation:(BOOL)arg4 ;
-(void)_clearOptimisticValueForPaymentsProtection;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)_presentViewController:(id)arg1 ;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

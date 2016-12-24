/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBAdPaymentsInitializationAdAccountDetailsViewControllerDelegate.h>
#import <Facebook/FBAdPaymentsPrepayFundingViewControllerDelegate.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBNavigationCoordinator, FBAdPaymentsFlowContext, FBAdPaymentsPrepayPuxFlowControllerDelegate;
@class FBAdPaymentsFlowSession, FBPaymentsEventListenerAnnouncer, FBAdPaymentsPrepayPuxFlowLogger, FBAdPaymentsAdAccountDetailsDataController, FBAdPaymentsPaymentMethodsInfoDataController, FBAdPaymentsInitializationAdAccountDetailsViewController, FBAdPaymentsFlowToolbox, NSString;

@interface FBAdPaymentsPrepayPuxFlowController : NSObject <FBPaymentsEventListener, FBAdPaymentsInitializationAdAccountDetailsViewControllerDelegate, FBAdPaymentsPrepayFundingViewControllerDelegate, FBPaymentsEventAnnouncing> {

	FBAdPaymentsFlowSession* _flowSession;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	FBAdPaymentsPrepayPuxFlowLogger* _flowLogger;
	id<FBNavigationCoordinator> _flowNavigationCoordinator;
	FBAdPaymentsAdAccountDetailsDataController* _adAccountDetailsDataController;
	FBAdPaymentsPaymentMethodsInfoDataController* _paymentMethodsInfoDataController;
	FBAdPaymentsInitializationAdAccountDetailsViewController* _initializationViewController;
	id<FBAdPaymentsFlowContext> _flowContext;
	FBAdPaymentsFlowToolbox* _toolbox;
	id<FBAdPaymentsPrepayPuxFlowControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBAdPaymentsFlowContext> flowContext;                             //@synthesize flowContext=_flowContext - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFlowToolbox * toolbox;                                          //@synthesize toolbox=_toolbox - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdPaymentsPrepayPuxFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(FBAdPaymentsFlowToolbox *)toolbox;
-(id)initWithFlowContext:(id)arg1 toolbox:(id)arg2 ;
-(void)startPrepayFundingFlow;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id<FBAdPaymentsFlowContext>)flowContext;
-(void)_initiatePrepayFundingViewController;
-(void)initializationAdAccountDetailsViewControllerDidTapOnCancelBarButtonItem:(id)arg1 ;
-(void)initializationAdAccountDetailsViewController:(id)arg1 didLoadAdAccountDetails:(id)arg2 ;
-(void)adPaymentsPrepayFundingViewControllerDidFinish:(id)arg1 ;
-(void)adPaymentsPrepayFundingViewControllerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<FBAdPaymentsPrepayPuxFlowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAdPaymentsPrepayPuxFlowControllerDelegate>)delegate;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBAdPaymentsInitializationAdAccountDetailsViewControllerDelegate.h>
#import <Facebook/FBAdPaymentsSelectPaymentMethodsViewControllerDelegate.h>
#import <Facebook/FBAdPaymentsBrazilTaxIDViewControllerDelegate.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBNavigationCoordinator, FBAdPaymentsFlowContext, FBAdPaymentsSelectPaymentMethodsFlowControllerDelegate;
@class FBAdPaymentsFlowSession, FBPaymentsEventListenerAnnouncer, FBAdPaymentsSelectPaymentMethodsFlowLogger, FBAdPaymentsAdAccountDetailsDataController, FBAdPaymentsPaymentMethodsInfoDataController, FBAdPaymentsSaveTaxInfoDataController, FBAdPaymentsInitializationAdAccountDetailsViewController, FBAdPaymentsFlowToolbox, NSString;

@interface FBAdPaymentsSelectPaymentMethodsFlowController : NSObject <FBPaymentsEventListener, FBAdPaymentsInitializationAdAccountDetailsViewControllerDelegate, FBAdPaymentsSelectPaymentMethodsViewControllerDelegate, FBAdPaymentsBrazilTaxIDViewControllerDelegate, FBPaymentsEventAnnouncing> {

	FBAdPaymentsFlowSession* _flowSession;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	FBAdPaymentsSelectPaymentMethodsFlowLogger* _flowLogger;
	id<FBNavigationCoordinator> _flowNavigationCoordinator;
	FBAdPaymentsAdAccountDetailsDataController* _adAccountDetailsDataController;
	FBAdPaymentsPaymentMethodsInfoDataController* _paymentMethodsInfoDataController;
	FBAdPaymentsSaveTaxInfoDataController* _taxInfoDataController;
	FBAdPaymentsInitializationAdAccountDetailsViewController* _initializationViewController;
	id<FBAdPaymentsFlowContext> _flowContext;
	FBAdPaymentsFlowToolbox* _toolbox;
	id<FBAdPaymentsSelectPaymentMethodsFlowControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBAdPaymentsFlowContext> flowContext;                                        //@synthesize flowContext=_flowContext - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFlowToolbox * toolbox;                                                     //@synthesize toolbox=_toolbox - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdPaymentsSelectPaymentMethodsFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(FBAdPaymentsFlowToolbox *)toolbox;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)adPaymentsBrazilTaxIDViewControllerDidCancel:(id)arg1 ;
-(void)adPaymentsBrazilTaxIDViewControllerDidAddTaxID:(id)arg1 ;
-(void)adPaymentsBrazilTaxIDViewController:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(BOOL)_shouldInitiateWithBrazilTaxIDFlow:(id)arg1 ;
-(void)_initiateBrazilTaxFlow;
-(void)_initiateSelectPaymentMethodFlow;
-(void)_saveTaxCountry:(id)arg1 ;
-(id<FBAdPaymentsFlowContext>)flowContext;
-(id)initWithFlowContext:(id)arg1 flowSession:(id)arg2 toolbox:(id)arg3 ;
-(void)startSelectPaymentMethods;
-(void)initializationAdAccountDetailsViewControllerDidTapOnCancelBarButtonItem:(id)arg1 ;
-(void)initializationAdAccountDetailsViewController:(id)arg1 didLoadAdAccountDetails:(id)arg2 ;
-(void)adPaymentsSelectPaymentMethodsViewControllerDidCancel:(id)arg1 ;
-(void)adPaymentsSelectPaymentMethodsViewController:(id)arg1 didAddPaymentMethod:(id)arg2 extraInfo:(id)arg3 ;
-(void)adPaymentsSelectPaymentMethodsViewController:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(void)adPaymentsSelectPaymentMethodsViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 extraInfo:(id)arg3 ;
-(void)setDelegate:(id<FBAdPaymentsSelectPaymentMethodsFlowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAdPaymentsSelectPaymentMethodsFlowControllerDelegate>)delegate;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
@end


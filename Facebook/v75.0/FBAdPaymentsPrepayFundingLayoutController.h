/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBAdPaymentsBudgetCollectedData, FBAdPaymentsFundingAmountComponentController, FBAdPaymentsFundingAmountErrorComponentController, FBAdPaymentsSecurityCodeComponentController;

@interface FBAdPaymentsPrepayFundingLayoutController : NSObject {

	FBUserSession* _session;
	FBAdPaymentsBudgetCollectedData* _budgetCollectedData;
	FBAdPaymentsFundingAmountComponentController* _customAmountComponentController;
	FBAdPaymentsFundingAmountErrorComponentController* _customAmountErrorComponentController;
	FBAdPaymentsSecurityCodeComponentController* _securityCodeComponentController;

}

@property (nonatomic,readonly) FBAdPaymentsFundingAmountComponentController * customAmountComponentController;                        //@synthesize customAmountComponentController=_customAmountComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFundingAmountErrorComponentController * customAmountErrorComponentController;              //@synthesize customAmountErrorComponentController=_customAmountErrorComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsSecurityCodeComponentController * securityCodeComponentController;                         //@synthesize securityCodeComponentController=_securityCodeComponentController - In the implementation block
-(FBAdPaymentsSecurityCodeComponentController *)securityCodeComponentController;
-(void)_setupComponentController;
-(id)initWithSession:(id)arg1 budget:(id)arg2 ;
-(FBAdPaymentsFundingAmountComponentController *)customAmountComponentController;
-(FBAdPaymentsFundingAmountErrorComponentController *)customAmountErrorComponentController;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
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

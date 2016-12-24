/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBPaymentsKitPaymentMethodsRequestHandler : NSObject {

	FBUserSession* _session;
	long long _itemType;
	NSString* _countryCode;
	id _extraInfo;

}
-(id)initWithSession:(id)arg1 itemType:(long long)arg2 countryCode:(id)arg3 extraInfo:(id)arg4 ;
-(void)_validateExtraInfo;
-(id)_createGraphRequestForAddingCard:(id)arg1 ;
-(id)_createGraphRequestForUpdatingCard:(id)arg1 ;
-(void)_dispatchRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createGraphRequestForRemovingCard:(id)arg1 ;
-(id)_createGraphRequestForRemovingPaypalBillingAgreement:(id)arg1 ;
-(void)removeCreditCardWithCredentialID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePaypalBillingAgreementWithCredentialID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addCreditCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCreditCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePaymentMethod:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

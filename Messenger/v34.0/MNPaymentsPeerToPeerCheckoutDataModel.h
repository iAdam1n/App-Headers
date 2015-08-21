/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/MNPaymentsPayableDataModel.h>

@class FBMUser, NSArray, FBPaymentsCurrencyQuantity, FBMGroupThreadKey, NSString;

@interface MNPaymentsPeerToPeerCheckoutDataModel : FBValueObject <NSCopying, MNPaymentsPayableDataModel> {

	FBMUser* _paymentRecipient;
	NSArray* _threadInviteeIds;
	FBPaymentsCurrencyQuantity* _initialAmount;
	FBMGroupThreadKey* _groupThreadKey;
	NSString* _entryPoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * styleIdentifier; 
@property (nonatomic,copy,readonly) NSString * purposeIdentifier; 
@property (nonatomic,readonly) FBPaymentsCurrencyQuantity * payableAmount; 
@property (nonatomic,copy,readonly) FBMUser * paymentRecipient;                              //@synthesize paymentRecipient=_paymentRecipient - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threadInviteeIds;                              //@synthesize threadInviteeIds=_threadInviteeIds - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * initialAmount;              //@synthesize initialAmount=_initialAmount - In the implementation block
@property (nonatomic,copy,readonly) FBMGroupThreadKey * groupThreadKey;                      //@synthesize groupThreadKey=_groupThreadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;                                   //@synthesize entryPoint=_entryPoint - In the implementation block
-(NSString *)styleIdentifier;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(NSString *)purposeIdentifier;
-(FBPaymentsCurrencyQuantity *)initialAmount;
-(id)initWithPaymentRecipient:(id)arg1 threadInviteeIds:(id)arg2 initialAmount:(id)arg3 groupThreadKey:(id)arg4 entryPoint:(id)arg5 ;
-(FBMUser *)paymentRecipient;
-(FBMGroupThreadKey *)groupThreadKey;
-(NSArray *)threadInviteeIds;
-(NSString *)entryPoint;
@end


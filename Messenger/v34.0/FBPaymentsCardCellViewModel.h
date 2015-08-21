/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class UIImage, NSString, FBMemPeerToPeerPaymentMethod;

@interface FBPaymentsCardCellViewModel : FBValueObject <NSCopying> {

	BOOL _isDefaultForReceivingMoney;
	long long _association;
	UIImage* _associationImage;
	NSString* _associationAndNumberText;
	FBMemPeerToPeerPaymentMethod* _paymentMethod;

}

@property (nonatomic,readonly) long long association;                                          //@synthesize association=_association - In the implementation block
@property (nonatomic,copy,readonly) UIImage * associationImage;                                //@synthesize associationImage=_associationImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * associationAndNumberText;                       //@synthesize associationAndNumberText=_associationAndNumberText - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultForReceivingMoney;                                //@synthesize isDefaultForReceivingMoney=_isDefaultForReceivingMoney - In the implementation block
@property (nonatomic,copy,readonly) FBMemPeerToPeerPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
-(FBMemPeerToPeerPaymentMethod *)paymentMethod;
-(long long)association;
-(BOOL)isDefaultForReceivingMoney;
-(UIImage *)associationImage;
-(NSString *)associationAndNumberText;
-(id)initWithAssociation:(long long)arg1 associationImage:(id)arg2 associationAndNumberText:(id)arg3 isDefaultForReceivingMoney:(BOOL)arg4 paymentMethod:(id)arg5 ;
@end


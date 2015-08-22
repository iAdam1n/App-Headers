/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, MNBusinessLogoViewModel, MNCommerceListViewModel;

@interface MNMessageOrderReceiptViewModel : FBValueObject <NSCopying> {

	unsigned long long _type;
	NSString* _bubbleStyle;
	MNBusinessLogoViewModel* _companyLogo;
	MNCommerceListViewModel* _itemList;
	NSString* _totalPrice;
	NSString* _refundAmount;
	NSString* _receiptId;
	NSString* _paymentMethod;
	NSString* _address;

}

@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * bubbleStyle;                             //@synthesize bubbleStyle=_bubbleStyle - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLogoViewModel * companyLogo;              //@synthesize companyLogo=_companyLogo - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceListViewModel * itemList;                 //@synthesize itemList=_itemList - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalPrice;                              //@synthesize totalPrice=_totalPrice - In the implementation block
@property (nonatomic,copy,readonly) NSString * refundAmount;                            //@synthesize refundAmount=_refundAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * receiptId;                               //@synthesize receiptId=_receiptId - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentMethod;                           //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * address;                                 //@synthesize address=_address - In the implementation block
-(NSString *)receiptId;
-(NSString *)paymentMethod;
-(NSString *)bubbleStyle;
-(id)initWithType:(unsigned long long)arg1 bubbleStyle:(id)arg2 companyLogo:(id)arg3 itemList:(id)arg4 totalPrice:(id)arg5 refundAmount:(id)arg6 receiptId:(id)arg7 paymentMethod:(id)arg8 address:(id)arg9 ;
-(MNBusinessLogoViewModel *)companyLogo;
-(NSString *)totalPrice;
-(NSString *)refundAmount;
-(NSString *)address;
-(unsigned long long)type;
-(MNCommerceListViewModel *)itemList;
@end

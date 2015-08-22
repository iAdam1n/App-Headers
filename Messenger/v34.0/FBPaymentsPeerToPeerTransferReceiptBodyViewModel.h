/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, FBPaymentsPeerToPeerTransferStatusModelForTransferReceipt;

@interface FBPaymentsPeerToPeerTransferReceiptBodyViewModel : FBValueObject <NSCopying> {

	BOOL _hasPrimaryCardOnFile;
	NSString* _amountText;
	NSString* _descriptionText;
	NSString* _recipientName;
	FBPaymentsPeerToPeerTransferStatusModelForTransferReceipt* _statusModel;

}

@property (nonatomic,copy,readonly) NSString * amountText;                                                                //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                                                           //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientName;                                                             //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryCardOnFile;                                                                 //@synthesize hasPrimaryCardOnFile=_hasPrimaryCardOnFile - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsPeerToPeerTransferStatusModelForTransferReceipt * statusModel;              //@synthesize statusModel=_statusModel - In the implementation block
-(NSString *)recipientName;
-(FBPaymentsPeerToPeerTransferStatusModelForTransferReceipt *)statusModel;
-(BOOL)hasPrimaryCardOnFile;
-(id)initWithAmountText:(id)arg1 descriptionText:(id)arg2 recipientName:(id)arg3 hasPrimaryCardOnFile:(BOOL)arg4 statusModel:(id)arg5 ;
-(NSString *)amountText;
-(NSString *)descriptionText;
@end

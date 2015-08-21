/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/MNPaymentsPayableDataModel.h>

@class NSString, NSURL, FBPaymentsCurrencyQuantity;

@interface MNAgentSuggestedItemCheckoutDataModel : FBValueObject <NSCopying, MNPaymentsPayableDataModel> {

	NSString* _itemId;
	NSString* _itemTitle;
	NSString* _itemDescription;
	NSString* _sellerInfo;
	NSURL* _itemPreviewImageURL;
	FBPaymentsCurrencyQuantity* _initialAmount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * styleIdentifier; 
@property (nonatomic,copy,readonly) NSString * purposeIdentifier; 
@property (nonatomic,readonly) FBPaymentsCurrencyQuantity * payableAmount; 
@property (nonatomic,copy,readonly) NSString * itemId;                                       //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemTitle;                                    //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemDescription;                              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * sellerInfo;                                   //@synthesize sellerInfo=_sellerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSURL * itemPreviewImageURL;                             //@synthesize itemPreviewImageURL=_itemPreviewImageURL - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * initialAmount;              //@synthesize initialAmount=_initialAmount - In the implementation block
-(NSString *)styleIdentifier;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(NSString *)purposeIdentifier;
-(NSString *)sellerInfo;
-(id)initWithItemId:(id)arg1 itemTitle:(id)arg2 itemDescription:(id)arg3 sellerInfo:(id)arg4 itemPreviewImageURL:(id)arg5 initialAmount:(id)arg6 ;
-(NSURL *)itemPreviewImageURL;
-(FBPaymentsCurrencyQuantity *)initialAmount;
-(NSString *)itemTitle;
-(NSString *)itemId;
-(NSString *)itemDescription;
@end


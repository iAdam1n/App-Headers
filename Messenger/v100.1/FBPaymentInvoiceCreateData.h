/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBPaymentInvoiceCreateSelectedOptions;

@interface FBPaymentInvoiceCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _client;
	NSString* _sellerId;
	NSString* _buyerId;
	NSArray* _items;
	FBPaymentInvoiceCreateSelectedOptions* _selectedOptions;
	NSArray* _customShippingOptions;
	NSString* _notes;
	NSArray* _extraData;

}

@property (nonatomic,copy) NSString * clientMutationId;                                          //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                                   //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * client;                                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * sellerId;                                                  //@synthesize sellerId=_sellerId - In the implementation block
@property (nonatomic,copy) NSString * buyerId;                                                   //@synthesize buyerId=_buyerId - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) FBPaymentInvoiceCreateSelectedOptions * selectedOptions;              //@synthesize selectedOptions=_selectedOptions - In the implementation block
@property (nonatomic,copy) NSArray * customShippingOptions;                                      //@synthesize customShippingOptions=_customShippingOptions - In the implementation block
@property (nonatomic,copy) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSArray * extraData;                                                  //@synthesize extraData=_extraData - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setSelectedOptions:(FBPaymentInvoiceCreateSelectedOptions *)arg1 ;
-(void)setSellerId:(NSString *)arg1 ;
-(void)setBuyerId:(NSString *)arg1 ;
-(void)setCustomShippingOptions:(NSArray *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sellerId;
-(NSString *)buyerId;
-(NSArray *)customShippingOptions;
-(FBPaymentInvoiceCreateSelectedOptions *)selectedOptions;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)client;
-(void)setExtraData:(NSArray *)arg1 ;
-(void)setClient:(NSString *)arg1 ;
-(NSArray *)extraData;
@end

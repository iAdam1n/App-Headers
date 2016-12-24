/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPriceCurrencyAmount, NSNumber, NSArray;

@interface FBCommerceProductItemCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _name;
	NSString* _descriptionText;
	FBPriceCurrencyAmount* _productItemPrice;
	NSString* _currency;
	NSNumber* _price;
	NSArray* _imageIds;
	NSString* _groupId;
	NSString* _commerceFeaturedItem;
	NSString* _shareToTimeline;
	NSNumber* _inventory;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                                     //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                            //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBPriceCurrencyAmount * productItemPrice;              //@synthesize productItemPrice=_productItemPrice - In the implementation block
@property (nonatomic,copy) NSString * currency;                                   //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSNumber * price;                                      //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSArray * imageIds;                                    //@synthesize imageIds=_imageIds - In the implementation block
@property (nonatomic,copy) NSString * groupId;                                    //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,copy) NSString * commerceFeaturedItem;                       //@synthesize commerceFeaturedItem=_commerceFeaturedItem - In the implementation block
@property (nonatomic,copy) NSString * shareToTimeline;                            //@synthesize shareToTimeline=_shareToTimeline - In the implementation block
@property (nonatomic,copy) NSNumber * inventory;                                  //@synthesize inventory=_inventory - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(void)setProductItemPrice:(FBPriceCurrencyAmount *)arg1 ;
-(FBPriceCurrencyAmount *)productItemPrice;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)commerceFeaturedItem;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)imageIds;
-(void)setImageIds:(NSArray *)arg1 ;
-(void)setCommerceFeaturedItem:(NSString *)arg1 ;
-(NSString *)shareToTimeline;
-(void)setShareToTimeline:(NSString *)arg1 ;
-(NSNumber *)inventory;
-(void)setInventory:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)price;
-(void)setPrice:(NSNumber *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)currency;
@end

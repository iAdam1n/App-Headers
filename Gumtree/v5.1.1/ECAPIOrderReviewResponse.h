/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSArray, NSDecimalNumber;

@interface ECAPIOrderReviewResponse : ECAPIResponseBase {

	NSArray* _orders;
	NSArray* _promotionCodes;
	NSDecimalNumber* _discountAmount;

}

@property (nonatomic,retain) NSArray * orders;                              //@synthesize orders=_orders - In the implementation block
@property (nonatomic,retain) NSArray * promotionCodes;                      //@synthesize promotionCodes=_promotionCodes - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * discountAmount;              //@synthesize discountAmount=_discountAmount - In the implementation block
-(NSDecimalNumber *)discountAmount;
-(void)setDiscountAmount:(NSDecimalNumber *)arg1 ;
-(void)setOrders:(NSArray *)arg1 ;
-(void)setPromotionCodes:(NSArray *)arg1 ;
-(NSArray *)orders;
-(NSArray *)promotionCodes;
-(void)parseData:(id)arg1 ;
@end


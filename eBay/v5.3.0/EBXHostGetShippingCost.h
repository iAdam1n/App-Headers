/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBXHostCommand.h>

@class NSString, CurrencyAmount;

@interface EBXHostGetShippingCost : EBXHostCommand {

	NSString* _listingID;
	CurrencyAmount* _proposedPrice;
	long long _quantity;

}

@property (nonatomic,copy) NSString * listingID;                                        //@synthesize listingID=_listingID - In the implementation block
@property (nonatomic,retain) CurrencyAmount * proposedPrice;                            //@synthesize proposedPrice=_proposedPrice - In the implementation block
@property (assign) long long quantity;                                                  //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) CurrencyAmount * resultCost; 
@property (nonatomic,readonly) CurrencyAmount * resultConvertedCost; 
@property (nonatomic,readonly) NSString * resultCostAsHumanReadableString; 
-(CurrencyAmount *)resultCost;
-(CurrencyAmount *)resultConvertedCost;
-(NSString *)resultCostAsHumanReadableString;
-(void)setShippingResult:(BOOL)arg1 shippingCost:(id)arg2 convertedCost:(id)arg3 humanReadable:(id)arg4 ;
-(CurrencyAmount *)proposedPrice;
-(void)setProposedPrice:(CurrencyAmount *)arg1 ;
-(NSString *)listingID;
-(void)setListingID:(NSString *)arg1 ;
-(id)init;
-(void)setQuantity:(long long)arg1 ;
-(long long)quantity;
@end

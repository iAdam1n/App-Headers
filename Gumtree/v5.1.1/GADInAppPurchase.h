/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GADViewController, NSString, NSArray;

@interface GADInAppPurchase : NSObject {

	GADViewController* _adViewController;
	NSString* _productID;
	long long _quantity;
	NSArray* _reportingURLStringFormats;
	long long _purchaseStatus;

}

@property (nonatomic,copy) NSString * productID;                             //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) long long quantity;                             //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy) NSArray * reportingURLStringFormats;              //@synthesize reportingURLStringFormats=_reportingURLStringFormats - In the implementation block
@property (assign,nonatomic) long long purchaseStatus;                       //@synthesize purchaseStatus=_purchaseStatus - In the implementation block
+(id)stringForStatus:(long long)arg1 ;
+(BOOL)quantityIsValid:(long long)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(void)reportPurchaseStatus:(long long)arg1 ;
-(void)setPurchaseStatus:(long long)arg1 ;
-(NSArray *)reportingURLStringFormats;
-(id)expandedURLStringForURLStringFormat:(id)arg1 ;
-(void)pingReportingURLStrings:(id)arg1 ;
-(void)setReportingURLStringFormats:(NSArray *)arg1 ;
-(long long)purchaseStatus;
-(id)init;
-(id)description;
-(id)initWithViewController:(id)arg1 ;
-(void)setQuantity:(long long)arg1 ;
-(NSString *)productID;
-(long long)quantity;
@end


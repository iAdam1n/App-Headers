/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GADInAppPurchase : NSObject {

	NSString* _productID;
	long long _quantity;
	NSArray* _reportingURLStringFormats;
	long long _purchaseStatus;

}

@property (nonatomic,copy) NSString * productID;                             //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) long long quantity;                             //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy) NSArray * reportingURLStringFormats;              //@synthesize reportingURLStringFormats=_reportingURLStringFormats - In the implementation block
@property (assign,nonatomic) long long purchaseStatus;                       //@synthesize purchaseStatus=_purchaseStatus - In the implementation block
+(BOOL)quantityIsValid:(long long)arg1 ;
+(id)stringForStatus:(long long)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(void)reportPurchaseStatus:(long long)arg1 ;
-(void)setReportingURLStringFormats:(NSArray *)arg1 ;
-(void)setPurchaseStatus:(long long)arg1 ;
-(NSArray *)reportingURLStringFormats;
-(id)expandedURLStringForURLStringFormat:(id)arg1 ;
-(void)pingReportingURLStrings:(id)arg1 ;
-(BOOL)reportConversionWithError:(id*)arg1 ;
-(long long)purchaseStatus;
-(void)setQuantity:(long long)arg1 ;
-(id)init;
-(id)description;
-(long long)quantity;
-(NSString *)productID;
@end


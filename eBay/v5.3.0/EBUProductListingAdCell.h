/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUAdCellBase.h>

@class EBUProductListingAdView;

@interface EBUProductListingAdCell : EBUAdCellBase {

	EBUProductListingAdView* _productListingAdView;

}

@property (nonatomic,retain) EBUProductListingAdView * productListingAdView;              //@synthesize productListingAdView=_productListingAdView - In the implementation block
-(EBUProductListingAdView *)productListingAdView;
-(void)setProductListingAdView:(EBUProductListingAdView *)arg1 ;
-(void)setRtmContent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
@end

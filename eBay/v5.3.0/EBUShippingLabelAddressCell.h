/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUDynamicHeightViewTableCell.h>

@class EBUShippingLabelAddressView;

@interface EBUShippingLabelAddressCell : EBUDynamicHeightViewTableCell {

	EBUShippingLabelAddressView* _addressView;

}

@property (nonatomic,retain) EBUShippingLabelAddressView * addressView;              //@synthesize addressView=_addressView - In the implementation block
-(void)updateShippingLabel:(id)arg1 contact:(id)arg2 ;
-(void)setAddressView:(EBUShippingLabelAddressView *)arg1 ;
-(EBUShippingLabelAddressView *)addressView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


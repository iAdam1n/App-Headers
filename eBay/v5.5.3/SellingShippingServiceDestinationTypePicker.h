/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SimpleListPicker.h>

@class UIView;

@interface SellingShippingServiceDestinationTypePicker : SimpleListPicker {

	BOOL _firstShippingDestinationTypeDomestic;
	BOOL _enableShippingDestinationTypeDomestic;
	BOOL _enableShippingDestinationTypeInternational;
	unsigned long long _shippingDestinationType;
	UIView* _footerView;

}

@property (nonatomic,retain) UIView * footerView;                                          //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) unsigned long long shippingDestinationType;                   //@synthesize shippingDestinationType=_shippingDestinationType - In the implementation block
@property (assign,nonatomic) BOOL firstShippingDestinationTypeDomestic;                    //@synthesize firstShippingDestinationTypeDomestic=_firstShippingDestinationTypeDomestic - In the implementation block
@property (assign,nonatomic) BOOL enableShippingDestinationTypeDomestic;                   //@synthesize enableShippingDestinationTypeDomestic=_enableShippingDestinationTypeDomestic - In the implementation block
@property (assign,nonatomic) BOOL enableShippingDestinationTypeInternational;              //@synthesize enableShippingDestinationTypeInternational=_enableShippingDestinationTypeInternational - In the implementation block
-(unsigned long long)shippingDestinationType;
-(void)setShippingDestinationType:(unsigned long long)arg1 ;
-(BOOL)enableShippingDestinationTypeDomestic;
-(BOOL)enableShippingDestinationTypeInternational;
-(BOOL)firstShippingDestinationTypeDomestic;
-(void)setFirstShippingDestinationTypeDomestic:(BOOL)arg1 ;
-(void)setEnableShippingDestinationTypeDomestic:(BOOL)arg1 ;
-(void)setEnableShippingDestinationTypeInternational:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

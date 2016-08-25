/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>

@class NSMutableArray, UILabel, EBUShippingLabelPostageCostItemView;

@interface EBUShippingLabelPostageCostView : EBUDynamicHeightView {

	NSMutableArray* _postageCosts;
	UILabel* _separatorView;
	EBUShippingLabelPostageCostItemView* _postageCostView;
	NSMutableArray* _localConstraints;
	NSMutableArray* _accessibilityStrings;

}

@property (nonatomic,retain) NSMutableArray * postageCosts;                                      //@synthesize postageCosts=_postageCosts - In the implementation block
@property (nonatomic,retain) UILabel * separatorView;                                            //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) EBUShippingLabelPostageCostItemView * postageCostView;              //@synthesize postageCostView=_postageCostView - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;                                  //@synthesize localConstraints=_localConstraints - In the implementation block
@property (nonatomic,copy) NSMutableArray * accessibilityStrings;                                //@synthesize accessibilityStrings=_accessibilityStrings - In the implementation block
-(void)updateShippingLabel:(id)arg1 ;
-(void)setPostageCostView:(EBUShippingLabelPostageCostItemView *)arg1 ;
-(EBUShippingLabelPostageCostItemView *)postageCostView;
-(id)displayStringForPostageCost:(id)arg1 ;
-(NSMutableArray *)accessibilityStrings;
-(NSMutableArray *)postageCosts;
-(void)setAccessibilityStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(void)setPostageCosts:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(void)updateConstraints;
-(UILabel *)separatorView;
-(void)setSeparatorView:(UILabel *)arg1 ;
@end


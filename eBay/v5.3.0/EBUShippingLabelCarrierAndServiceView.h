/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>

@class UILabel, UIImageView, NSMutableArray;

@interface EBUShippingLabelCarrierAndServiceView : EBUDynamicHeightView {

	UILabel* _titleView;
	UIImageView* _carrierView;
	UILabel* _serviceView;
	UILabel* _packageView;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) UILabel * titleView;                            //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIImageView * carrierView;                      //@synthesize carrierView=_carrierView - In the implementation block
@property (nonatomic,retain) UILabel * serviceView;                          //@synthesize serviceView=_serviceView - In the implementation block
@property (nonatomic,retain) UILabel * packageView;                          //@synthesize packageView=_packageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
-(void)updateShippingLabel:(id)arg1 ;
-(void)setServiceView:(UILabel *)arg1 ;
-(UILabel *)serviceView;
-(void)setPackageView:(UILabel *)arg1 ;
-(UILabel *)packageView;
-(UIImageView *)carrierView;
-(void)setCarrierView:(UIImageView *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(void)updateConstraints;
@end


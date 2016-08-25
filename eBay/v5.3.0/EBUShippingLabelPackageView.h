/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>

@class UIImageView, UILabel, NSMutableArray;

@interface EBUShippingLabelPackageView : EBUDynamicHeightView {

	UIImageView* _selectedView;
	UILabel* _packageCost;
	UILabel* _packageType;
	UILabel* _packageInfo;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) UIImageView * selectedView;                     //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,retain) UILabel * packageCost;                          //@synthesize packageCost=_packageCost - In the implementation block
@property (nonatomic,retain) UILabel * packageType;                          //@synthesize packageType=_packageType - In the implementation block
@property (nonatomic,retain) UILabel * packageInfo;                          //@synthesize packageInfo=_packageInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
-(void)setSelectedView:(UIImageView *)arg1 ;
-(UILabel *)packageCost;
-(void)updateShippingLabel:(id)arg1 serviceName:(id)arg2 packageType:(id)arg3 selected:(BOOL)arg4 ;
-(void)setPackageCost:(UILabel *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(UILabel *)packageType;
-(void)setPackageType:(UILabel *)arg1 ;
-(UILabel *)packageInfo;
-(void)setPackageInfo:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIImageView *)selectedView;
@end


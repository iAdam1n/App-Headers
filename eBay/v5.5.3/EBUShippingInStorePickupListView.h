/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUAccessorizedExpandableView.h>

@class UILabel, EBUInStorePickupList, UIView;

@interface EBUShippingInStorePickupListView : EBUAccessorizedExpandableView {

	UILabel* _costLabel;
	UILabel* _titleLabel;
	UILabel* _detail1Label;
	UILabel* _detail2Label;
	EBUInStorePickupList* _storeTable;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UILabel * costLabel;                            //@synthesize costLabel=_costLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detail1Label;                         //@synthesize detail1Label=_detail1Label - In the implementation block
@property (nonatomic,retain) UILabel * detail2Label;                         //@synthesize detail2Label=_detail2Label - In the implementation block
@property (nonatomic,retain) EBUInStorePickupList * storeTable;              //@synthesize storeTable=_storeTable - In the implementation block
-(id)viewsDictionary;
-(double)storeTableHeight;
-(void)updateStoreTableHeight;
-(UILabel *)costLabel;
-(void)setCostLabel:(UILabel *)arg1 ;
-(UILabel *)detail1Label;
-(void)setDetail1Label:(UILabel *)arg1 ;
-(UILabel *)detail2Label;
-(void)setDetail2Label:(UILabel *)arg1 ;
-(EBUInStorePickupList *)storeTable;
-(void)setStoreTable:(EBUInStorePickupList *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UIView *)separatorView;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

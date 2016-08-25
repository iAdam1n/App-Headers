/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIButton;

@interface EPDViewItemSectionHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;
	UIButton* _topRatedSellerButton;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * topRatedSellerButton;              //@synthesize topRatedSellerButton=_topRatedSellerButton - In the implementation block
-(UIButton *)topRatedSellerButton;
-(void)setTopRatedSellerButton:(UIButton *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end


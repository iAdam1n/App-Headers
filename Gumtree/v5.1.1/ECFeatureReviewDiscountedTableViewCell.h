/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECFeatureReviewTableViewCell.h>

@class ECLabelListItemTitle, ECLabelListItemPrice, UIImageView;

@interface ECFeatureReviewDiscountedTableViewCell : ECFeatureReviewTableViewCell {

	ECLabelListItemTitle* _discountedTitleLabel;
	ECLabelListItemPrice* _discountedPriceLabel;
	UIImageView* _middleSeparatorImageView;

}

@property (nonatomic,retain) ECLabelListItemTitle * discountedTitleLabel;              //@synthesize discountedTitleLabel=_discountedTitleLabel - In the implementation block
@property (nonatomic,retain) ECLabelListItemPrice * discountedPriceLabel;              //@synthesize discountedPriceLabel=_discountedPriceLabel - In the implementation block
@property (nonatomic,retain) UIImageView * middleSeparatorImageView;                   //@synthesize middleSeparatorImageView=_middleSeparatorImageView - In the implementation block
+(double)cellHeight;
-(void)setupWithFeature:(id)arg1 isAvailable:(BOOL)arg2 selected:(BOOL)arg3 ;
-(ECLabelListItemTitle *)discountedTitleLabel;
-(ECLabelListItemPrice *)discountedPriceLabel;
-(UIImageView *)middleSeparatorImageView;
-(void)setDiscountedTitleLabel:(ECLabelListItemTitle *)arg1 ;
-(void)setDiscountedPriceLabel:(ECLabelListItemPrice *)arg1 ;
-(void)setMiddleSeparatorImageView:(UIImageView *)arg1 ;
-(void)setDefaults;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECFeatureBundleView.h>

@class UIButton, NSLayoutConstraint, ECThemedLabel;

@interface ECFeatureBundleDiscountedView : ECFeatureBundleView {

	UIButton* _featureDescription;
	NSLayoutConstraint* _descriptionHeight;
	ECThemedLabel* _discountedTitleLabel;
	ECThemedLabel* _discountedPriceLabel;

}

@property (nonatomic,retain) UIButton * featureDescription;                              //@synthesize featureDescription=_featureDescription - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * descriptionHeight;              //@synthesize descriptionHeight=_descriptionHeight - In the implementation block
@property (assign,nonatomic) ECThemedLabel * discountedTitleLabel;                       //@synthesize discountedTitleLabel=_discountedTitleLabel - In the implementation block
@property (assign,nonatomic) ECThemedLabel * discountedPriceLabel;                       //@synthesize discountedPriceLabel=_discountedPriceLabel - In the implementation block
-(void)setupWithFeature:(id)arg1 isAvailable:(BOOL)arg2 selected:(BOOL)arg3 ;
-(UIButton *)featureDescription;
-(NSLayoutConstraint *)descriptionHeight;
-(void)setFeatureDescription:(UIButton *)arg1 ;
-(void)setDescriptionHeight:(NSLayoutConstraint *)arg1 ;
-(ECThemedLabel *)discountedTitleLabel;
-(ECThemedLabel *)discountedPriceLabel;
-(void)setDiscountedTitleLabel:(ECThemedLabel *)arg1 ;
-(void)setDiscountedPriceLabel:(ECThemedLabel *)arg1 ;
-(CGSize)intrinsicContentSize;
@end


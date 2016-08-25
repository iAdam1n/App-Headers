/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseViewCell.h>

@class UILabel, UIImageView, UIView;

@interface ECAdListPromotedCell : ECAdListBaseViewCell {

	UILabel* _businessInfoLabel;
	UIImageView* _externalLinkImageView;
	UIView* _promotionBackgroundView;
	UILabel* _promotionLabel;

}

@property (nonatomic,retain) UILabel * businessInfoLabel;                      //@synthesize businessInfoLabel=_businessInfoLabel - In the implementation block
@property (nonatomic,retain) UIImageView * externalLinkImageView;              //@synthesize externalLinkImageView=_externalLinkImageView - In the implementation block
@property (nonatomic,retain) UIView * promotionBackgroundView;                 //@synthesize promotionBackgroundView=_promotionBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * promotionLabel;                         //@synthesize promotionLabel=_promotionLabel - In the implementation block
-(UIView *)promotionBackgroundView;
-(void)setAd:(id)arg1 metadata:(id)arg2 cellType:(unsigned long long)arg3 ;
-(UILabel *)promotionLabel;
-(UILabel *)businessInfoLabel;
-(UIImageView *)externalLinkImageView;
-(void)didTapSponsorLogo:(id)arg1 ;
-(void)setImageForAd:(id)arg1 ;
-(void)setBusinessInfoLabel:(UILabel *)arg1 ;
-(void)setExternalLinkImageView:(UIImageView *)arg1 ;
-(void)setPromotionBackgroundView:(UIView *)arg1 ;
-(void)setPromotionLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
@end


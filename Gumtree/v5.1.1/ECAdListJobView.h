/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class ECLabelListItemTitleTopAligned, ECLabelListItemAttribute, ECLabelListItemDetail, ECLabelListItemPrice, ECLabelListItemBadge, ECBannerView, UIImageView, UIView;

@interface ECAdListJobView : UIView {

	ECLabelListItemTitleTopAligned* _titleLabel;
	ECLabelListItemAttribute* _attribute1Label;
	ECLabelListItemAttribute* _attribute2Label;
	ECLabelListItemAttribute* _attribute3Label;
	ECLabelListItemDetail* _descriptionLabel;
	ECLabelListItemDetail* _statusLabel;
	ECLabelListItemPrice* _priceLabel;
	ECLabelListItemBadge* _badgeLabel;
	ECBannerView* _bannerView;
	UIImageView* _thumbnailImageView;
	UIView* _disabledOverView;

}

@property (assign,nonatomic,__weak) ECLabelListItemTitleTopAligned * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemAttribute * attribute1Label;               //@synthesize attribute1Label=_attribute1Label - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemAttribute * attribute2Label;               //@synthesize attribute2Label=_attribute2Label - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemAttribute * attribute3Label;               //@synthesize attribute3Label=_attribute3Label - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDetail * descriptionLabel;                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDetail * statusLabel;                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemPrice * priceLabel;                        //@synthesize priceLabel=_priceLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemBadge * badgeLabel;                        //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (assign,nonatomic,__weak) ECBannerView * bannerView;                                //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * thumbnailImageView;                         //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * disabledOverView;                                //@synthesize disabledOverView=_disabledOverView - In the implementation block
-(void)setAttribute1Label:(ECLabelListItemAttribute *)arg1 ;
-(void)setAttribute2Label:(ECLabelListItemAttribute *)arg1 ;
-(void)setAttribute3Label:(ECLabelListItemAttribute *)arg1 ;
-(ECLabelListItemBadge *)badgeLabel;
-(void)setBadgeLabel:(ECLabelListItemBadge *)arg1 ;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(UIView *)disabledOverView;
-(void)setDisabledOverView:(UIView *)arg1 ;
-(ECLabelListItemAttribute *)attribute1Label;
-(ECLabelListItemAttribute *)attribute2Label;
-(ECLabelListItemAttribute *)attribute3Label;
-(ECLabelListItemTitleTopAligned *)titleLabel;
-(void)setTitleLabel:(ECLabelListItemTitleTopAligned *)arg1 ;
-(void)setBannerView:(ECBannerView *)arg1 ;
-(ECBannerView *)bannerView;
-(UIImageView *)thumbnailImageView;
-(ECLabelListItemDetail *)descriptionLabel;
-(ECLabelListItemDetail *)statusLabel;
-(void)setStatusLabel:(ECLabelListItemDetail *)arg1 ;
-(ECLabelListItemPrice *)priceLabel;
-(void)setPriceLabel:(ECLabelListItemPrice *)arg1 ;
-(void)setDescriptionLabel:(ECLabelListItemDetail *)arg1 ;
@end


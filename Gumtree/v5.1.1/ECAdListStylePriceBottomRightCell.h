/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseCell.h>

@class ECLabelListItemTitleTopAligned, ECLabelListItemDetail, ECLabelListItemPrice;

@interface ECAdListStylePriceBottomRightCell : ECAdListBaseCell {

	ECLabelListItemTitleTopAligned* _titleLabel;
	ECLabelListItemDetail* _descriptionLabel;
	ECLabelListItemDetail* _statusLabel;
	ECLabelListItemPrice* _priceLabel;

}

@property (assign,nonatomic,__weak) ECLabelListItemTitleTopAligned * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDetail * descriptionLabel;                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDetail * statusLabel;                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemPrice * priceLabel;                        //@synthesize priceLabel=_priceLabel - In the implementation block
-(void)setupWithAd:(id)arg1 options:(unsigned long long)arg2 appConfig:(id)arg3 adManager:(id)arg4 placeHolderImageManager:(id)arg5 ;
-(ECLabelListItemTitleTopAligned *)titleLabel;
-(void)setTitleLabel:(ECLabelListItemTitleTopAligned *)arg1 ;
-(ECLabelListItemDetail *)descriptionLabel;
-(void)setDefaults:(id)arg1 ;
-(ECLabelListItemDetail *)statusLabel;
-(void)setStatusLabel:(ECLabelListItemDetail *)arg1 ;
-(ECLabelListItemPrice *)priceLabel;
-(void)setPriceLabel:(ECLabelListItemPrice *)arg1 ;
-(void)setDescriptionLabel:(ECLabelListItemDetail *)arg1 ;
@end

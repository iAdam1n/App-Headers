/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:19 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseCell.h>

@class ECLabelListItemTitleTopAligned, ECLabelListItemDetail, ECLabelListItemPrice, ECLabelListItemDistance, NSLayoutConstraint;

@interface ECAdListStylePriceAndDistanceCell : ECAdListBaseCell {

	ECLabelListItemTitleTopAligned* _titleLabel;
	ECLabelListItemDetail* _descriptionLabel;
	ECLabelListItemDetail* _statusLabel;
	ECLabelListItemPrice* _priceLabel;
	ECLabelListItemDistance* _distanceLabel;
	NSLayoutConstraint* _titleLabelTrailingConstraint;

}

@property (assign,nonatomic,__weak) ECLabelListItemTitleTopAligned * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDetail * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDetail * statusLabel;                            //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemPrice * priceLabel;                              //@synthesize priceLabel=_priceLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemDistance * distanceLabel;                        //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * titleLabelTrailingConstraint;              //@synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint - In the implementation block
-(ECLabelListItemDistance *)distanceLabel;
-(void)setDistanceLabel:(ECLabelListItemDistance *)arg1 ;
-(void)setupWithAd:(id)arg1 showDistance:(BOOL)arg2 appConfig:(id)arg3 adManager:(id)arg4 placeHolderImageManager:(id)arg5 ;
-(NSLayoutConstraint *)titleLabelTrailingConstraint;
-(void)setTitleLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(ECLabelListItemDetail *)descriptionLabel;
-(void)setDefaults:(id)arg1 ;
-(ECLabelListItemTitleTopAligned *)titleLabel;
-(void)setTitleLabel:(ECLabelListItemTitleTopAligned *)arg1 ;
-(ECLabelListItemDetail *)statusLabel;
-(void)setStatusLabel:(ECLabelListItemDetail *)arg1 ;
-(ECLabelListItemPrice *)priceLabel;
-(void)setPriceLabel:(ECLabelListItemPrice *)arg1 ;
-(void)setDescriptionLabel:(ECLabelListItemDetail *)arg1 ;
@end


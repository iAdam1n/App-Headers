/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECTableViewNibBasedCell.h>
#import <Gumtree/ECFeaturePromotionCellProtocol.h>

@class UIButton, UILabel, NSString;

@interface ECFeaturePromotionTableViewCell : ECTableViewNibBasedCell <ECFeaturePromotionCellProtocol> {

	UIButton* detailsButton;
	UIButton* _checkmark;
	UILabel* _titleLabel;
	UILabel* _priceLabel;
	UILabel* _descriptionLabel;
	/*^block*/id _onCheckmarkToggled;

}

@property (retain) UIButton * checkmark;                            //@synthesize checkmark=_checkmark - In the implementation block
@property (retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * priceLabel;                            //@synthesize priceLabel=_priceLabel - In the implementation block
@property (retain) UILabel * descriptionLabel;                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (copy) id onCheckmarkToggled;                             //@synthesize onCheckmarkToggled=_onCheckmarkToggled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UIButton * detailsButton; 
-(void)setupWithFeature:(id)arg1 canBeApplied:(BOOL)arg2 selected:(BOOL)arg3 ;
-(void)checkmarkStateChangedAction:(id)arg1 ;
-(id)onCheckmarkToggled;
-(void)detailsAction:(id)arg1 ;
-(void)setOnCheckmarkToggled:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDefaults;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)detailsButton;
-(void)setDetailsButton:(UIButton *)arg1 ;
-(UIButton *)checkmark;
-(void)setCheckmark:(UIButton *)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end


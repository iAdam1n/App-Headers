/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBayTableViewCell.h>

@class UILabel, EUIImageView, UIView, NSLayoutConstraint;

@interface EBUSearchTableViewCell : eBayTableViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	EUIImageView* _ebayImageView;
	UIView* _imageContainerView;
	UIView* _topSpacerView;
	UIView* _bottomSpacerView;
	NSLayoutConstraint* _imageContainerWidthConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) EUIImageView * ebayImageView;                                    //@synthesize ebayImageView=_ebayImageView - In the implementation block
@property (nonatomic,retain) UIView * imageContainerView;                                     //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UIView * topSpacerView;                                          //@synthesize topSpacerView=_topSpacerView - In the implementation block
@property (nonatomic,retain) UIView * bottomSpacerView;                                       //@synthesize bottomSpacerView=_bottomSpacerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageContainerWidthConstraint;              //@synthesize imageContainerWidthConstraint=_imageContainerWidthConstraint - In the implementation block
-(void)setupWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 placeholderImage:(id)arg4 ;
-(EUIImageView *)ebayImageView;
-(void)setEbayImageView:(EUIImageView *)arg1 ;
-(NSLayoutConstraint *)imageContainerWidthConstraint;
-(void)setImageContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTopSpacerView:(UIView *)arg1 ;
-(void)setBottomSpacerView:(UIView *)arg1 ;
-(UIView *)topSpacerView;
-(UIView *)bottomSpacerView;
-(UIView *)imageContainerView;
-(void)setImageContainerView:(UIView *)arg1 ;
@end

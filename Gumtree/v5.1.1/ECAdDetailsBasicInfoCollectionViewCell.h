/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdDetailsCollectionViewCell.h>
#import <Gumtree/ECAdDetailsViewCell.h>

@class UIView, ECAdDetailsView, UILabel, ECThemedLabelBase1TextPrimaryDarkBackground, ECThemedViewTextHintLightBackground, ECWatchlistButton, NSLayoutConstraint, UIImageView, NSAttributedString, NSString;

@interface ECAdDetailsBasicInfoCollectionViewCell : ECAdDetailsCollectionViewCell <ECAdDetailsViewCell> {

	UIView* _actionButtonsView;
	ECAdDetailsView* _detailsView;
	UILabel* _locationLabel;
	UILabel* _priceLabel;
	UILabel* _titleLabel;
	ECThemedLabelBase1TextPrimaryDarkBackground* _partnerLabel;
	ECThemedViewTextHintLightBackground* _partnerLabelBackground;
	ECWatchlistButton* _watchlistButton;
	NSLayoutConstraint* _watchlistButtonTrailingConstraint;
	UIImageView* _locationIconView;
	NSLayoutConstraint* _partnerLabelBackgroundTrailingConstraint;
	NSAttributedString* _priceString;
	UIView* _eBayView;
	UILabel* _eBayAdLabel;
	NSLayoutConstraint* _eBayViewTrailingConstraint;
	UILabel* _biddingLabel;

}

@property (assign,nonatomic,__weak) UIView * actionButtonsView;                                          //@synthesize actionButtonsView=_actionButtonsView - In the implementation block
@property (assign,nonatomic,__weak) ECAdDetailsView * detailsView;                                       //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                                    //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                                                       //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) ECThemedLabelBase1TextPrimaryDarkBackground * partnerLabel;                 //@synthesize partnerLabel=_partnerLabel - In the implementation block
@property (nonatomic,retain) ECThemedViewTextHintLightBackground * partnerLabelBackground;               //@synthesize partnerLabelBackground=_partnerLabelBackground - In the implementation block
@property (nonatomic,retain) ECWatchlistButton * watchlistButton;                                        //@synthesize watchlistButton=_watchlistButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * watchlistButtonTrailingConstraint;                     //@synthesize watchlistButtonTrailingConstraint=_watchlistButtonTrailingConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * locationIconView;                                             //@synthesize locationIconView=_locationIconView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * partnerLabelBackgroundTrailingConstraint;              //@synthesize partnerLabelBackgroundTrailingConstraint=_partnerLabelBackgroundTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSAttributedString * priceString;                                           //@synthesize priceString=_priceString - In the implementation block
@property (nonatomic,retain) UIView * eBayView;                                                          //@synthesize eBayView=_eBayView - In the implementation block
@property (nonatomic,retain) UILabel * eBayAdLabel;                                                      //@synthesize eBayAdLabel=_eBayAdLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * eBayViewTrailingConstraint;                            //@synthesize eBayViewTrailingConstraint=_eBayViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) UILabel * biddingLabel;                                                     //@synthesize biddingLabel=_biddingLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)customAppearance;
-(void)setItem:(id)arg1 isSizingCell:(BOOL)arg2 ;
-(void)setDetailsInfoView:(id)arg1 ;
-(void)didTapSponsorLogo:(id)arg1 ;
-(UIImageView *)locationIconView;
-(UILabel *)biddingLabel;
-(UIView *)actionButtonsView;
-(void)setUpWatchlistButtonTrailingConstraint;
-(void)setWatchlistButton:(ECWatchlistButton *)arg1 ;
-(void)setUpPartnerLabelAsVisible:(BOOL)arg1 ;
-(void)setUpEBayViewForAd:(id)arg1 ;
-(NSLayoutConstraint *)partnerLabelBackgroundTrailingConstraint;
-(ECThemedViewTextHintLightBackground *)partnerLabelBackground;
-(ECThemedLabelBase1TextPrimaryDarkBackground *)partnerLabel;
-(NSLayoutConstraint *)eBayViewTrailingConstraint;
-(UIView *)eBayView;
-(UILabel *)eBayAdLabel;
-(void)setUpBiddingViewWithText:(id)arg1 visible:(BOOL)arg2 ;
-(NSLayoutConstraint *)watchlistButtonTrailingConstraint;
-(void)locationAction:(id)arg1 ;
-(void)setPartnerLabel:(ECThemedLabelBase1TextPrimaryDarkBackground *)arg1 ;
-(void)setPartnerLabelBackground:(ECThemedViewTextHintLightBackground *)arg1 ;
-(void)setWatchlistButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLocationIconView:(UIImageView *)arg1 ;
-(void)setPartnerLabelBackgroundTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEBayView:(UIView *)arg1 ;
-(void)setEBayAdLabel:(UILabel *)arg1 ;
-(void)setEBayViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBiddingLabel:(UILabel *)arg1 ;
-(void)setActionButtonsView:(UIView *)arg1 ;
-(ECWatchlistButton *)watchlistButton;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSAttributedString *)priceString;
-(void)setPriceString:(NSAttributedString *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setDetailsView:(ECAdDetailsView *)arg1 ;
-(ECAdDetailsView *)detailsView;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
@end


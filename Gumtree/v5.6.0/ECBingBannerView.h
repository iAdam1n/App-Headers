/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIView, ECBingBanner, ECBingBannerAdsManagerConfiguration;

@interface ECBingBannerView : UIView {

	BOOL _displayThumbnail;
	BOOL _applyCornerRadius;
	BOOL _impressedWhenRendered;
	BOOL _constraintsAdded;
	long long _bannerStyle;
	UIImageView* _placeholderImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _urlLabel;
	UIImageView* _linkoutImageView;
	UIView* _adDisclosurePillView;
	ECBingBanner* _banner;
	ECBingBannerAdsManagerConfiguration* _configuration;

}

@property (nonatomic,retain) UIImageView * placeholderImageView;                               //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * urlLabel;                                               //@synthesize urlLabel=_urlLabel - In the implementation block
@property (nonatomic,retain) UIImageView * linkoutImageView;                                   //@synthesize linkoutImageView=_linkoutImageView - In the implementation block
@property (nonatomic,retain) UIView * adDisclosurePillView;                                    //@synthesize adDisclosurePillView=_adDisclosurePillView - In the implementation block
@property (nonatomic,retain) ECBingBanner * banner;                                            //@synthesize banner=_banner - In the implementation block
@property (nonatomic,retain) ECBingBannerAdsManagerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL displayThumbnail;                                            //@synthesize displayThumbnail=_displayThumbnail - In the implementation block
@property (assign,nonatomic) BOOL applyCornerRadius;                                           //@synthesize applyCornerRadius=_applyCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL impressedWhenRendered;                                       //@synthesize impressedWhenRendered=_impressedWhenRendered - In the implementation block
@property (assign,nonatomic) BOOL constraintsAdded;                                            //@synthesize constraintsAdded=_constraintsAdded - In the implementation block
@property (assign,nonatomic) long long bannerStyle;                                            //@synthesize bannerStyle=_bannerStyle - In the implementation block
-(id)initWithBingBanner:(id)arg1 withThumbnail:(BOOL)arg2 applyCornerRadius:(BOOL)arg3 impressedWhenRendered:(BOOL)arg4 configuration:(id)arg5 width:(double)arg6 withStyle:(long long)arg7 ;
-(void)vipScrollViewDidScrollNotification:(id)arg1 ;
-(double)compensatedCellHeight;
-(void)constructAllSubviews;
-(void)viewWasTapped:(id)arg1 ;
-(BOOL)applyCornerRadius;
-(BOOL)displayThumbnail;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(UIImageView *)placeholderImageView;
-(long long)bannerStyle;
-(void)setUrlLabel:(UILabel *)arg1 ;
-(UILabel *)urlLabel;
-(void)setLinkoutImageView:(UIImageView *)arg1 ;
-(void)setAdDisclosurePillView:(UIView *)arg1 ;
-(UIView *)adDisclosurePillView;
-(UIImageView *)linkoutImageView;
-(double)compensatedImageWidth;
-(BOOL)impressedWhenRendered;
-(void)setBannerStyle:(long long)arg1 ;
-(void)setDisplayThumbnail:(BOOL)arg1 ;
-(void)setApplyCornerRadius:(BOOL)arg1 ;
-(void)setImpressedWhenRendered:(BOOL)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)setConfiguration:(ECBingBannerAdsManagerConfiguration *)arg1 ;
-(ECBingBannerAdsManagerConfiguration *)configuration;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)constraintsAdded;
-(void)setConstraintsAdded:(BOOL)arg1 ;
-(ECBingBanner *)banner;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setBanner:(ECBingBanner *)arg1 ;
@end

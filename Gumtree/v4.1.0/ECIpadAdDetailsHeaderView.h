/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIImageView, UIView;

@interface ECIpadAdDetailsHeaderView : UIView {

	UILabel* _urgentLabel;
	UILabel* _titleLabel;
	UILabel* _locationLabel;
	UILabel* _priceLabel;
	UIButton* _galleryButton;
	UIButton* _shareButton;
	UIButton* _favoriteButton;
	UIImageView* _locationIconView;
	UIView* _highlightView;

}

@property (assign,nonatomic,__weak) UILabel * urgentLabel;                       //@synthesize urgentLabel=_urgentLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * locationLabel;                     //@synthesize locationLabel=_locationLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * priceLabel;                        //@synthesize priceLabel=_priceLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * galleryButton;                    //@synthesize galleryButton=_galleryButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * shareButton;                      //@synthesize shareButton=_shareButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * favoriteButton;                   //@synthesize favoriteButton=_favoriteButton - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * locationIconView;              //@synthesize locationIconView=_locationIconView - In the implementation block
@property (assign,nonatomic,__weak) UIView * highlightView;                      //@synthesize highlightView=_highlightView - In the implementation block
-(UIButton *)favoriteButton;
-(UILabel *)urgentLabel;
-(void)setupWithAd:(id)arg1 ;
-(UIButton *)galleryButton;
-(void)toggleStarIcon:(id)arg1 ;
-(void)setFavoriteButton:(UIButton *)arg1 ;
-(void)setUrgentLabel:(UILabel *)arg1 ;
-(void)showLocationForAd:(id)arg1 ;
-(void)updateGalleryButtonWithCount:(id)arg1 ;
-(UIImageView *)locationIconView;
-(void)setGalleryButton:(UIButton *)arg1 ;
-(void)setLocationIconView:(UIImageView *)arg1 ;
-(void)setShareButton:(UIButton *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(UIButton *)shareButton;
@end


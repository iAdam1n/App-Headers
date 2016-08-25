/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor, UIImageView, UILabel;

@interface ECBannerView : UIView {

	UIImage* _image;
	UIColor* _tintColorDefault;
	UIColor* _tintColorUrgent;
	UIColor* _tintColorReduced;
	UIColor* _tintColorTopAd;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIColor* _currentImageViewTintColor;
	CGPoint _offset;

}

@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIColor * currentImageViewTintColor;              //@synthesize currentImageViewTintColor=_currentImageViewTintColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) UIColor * tintColorDefault;                       //@synthesize tintColorDefault=_tintColorDefault - In the implementation block
@property (nonatomic,retain) UIColor * tintColorUrgent;                        //@synthesize tintColorUrgent=_tintColorUrgent - In the implementation block
@property (nonatomic,retain) UIColor * tintColorReduced;                       //@synthesize tintColorReduced=_tintColorReduced - In the implementation block
@property (nonatomic,retain) UIColor * tintColorTopAd;                         //@synthesize tintColorTopAd=_tintColorTopAd - In the implementation block
-(void)_UIAppearance_setTintColorTopAd:(id)arg1 ;
-(void)_UIAppearance_setTintColorUrgent:(id)arg1 ;
-(void)_UIAppearance_setTintColorReduced:(id)arg1 ;
-(void)_UIAppearance_setTintColorDefault:(id)arg1 ;
-(void)sharedSetup;
-(UIColor *)tintColorDefault;
-(void)setCurrentImageViewTintColor:(UIColor *)arg1 ;
-(UIColor *)currentImageViewTintColor;
-(void)HACK_configureImageViewColorWithFeatureTitle:(id)arg1 ;
-(UIColor *)tintColorUrgent;
-(UIColor *)tintColorTopAd;
-(UIColor *)tintColorReduced;
-(void)setTitleLabelText:(id)arg1 ;
-(void)setTintColorDefault:(UIColor *)arg1 ;
-(void)setTintColorUrgent:(UIColor *)arg1 ;
-(void)setTintColorReduced:(UIColor *)arg1 ;
-(void)setTintColorTopAd:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)sizeToFitImage;
@end


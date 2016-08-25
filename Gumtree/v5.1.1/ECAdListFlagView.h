/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class ECAd, NSString, UIColor, UIImageView, UILabel;

@interface ECAdListFlagView : UIView {

	ECAd* _ad;
	NSString* _title;
	UIColor* _backgroundColorDefault;
	UIColor* _backgroundColorPlus;
	UIColor* _backgroundColorFeatured;
	UIColor* _backgroundColorPremium;
	UIColor* _backgroundColorUrgent;
	UIColor* _backgroundColorReduced;
	UIColor* _backgroundColorTopAd;
	UIImageView* _backgroundImageView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) ECAd * ad;                                      //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorDefault;               //@synthesize backgroundColorDefault=_backgroundColorDefault - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorPlus;                  //@synthesize backgroundColorPlus=_backgroundColorPlus - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorFeatured;              //@synthesize backgroundColorFeatured=_backgroundColorFeatured - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorPremium;               //@synthesize backgroundColorPremium=_backgroundColorPremium - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorUrgent;                //@synthesize backgroundColorUrgent=_backgroundColorUrgent - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorReduced;               //@synthesize backgroundColorReduced=_backgroundColorReduced - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorTopAd;                 //@synthesize backgroundColorTopAd=_backgroundColorTopAd - In the implementation block
-(void)_UIAppearance_setBackgroundColorTopAd:(id)arg1 ;
-(void)_UIAppearance_setBackgroundColorUrgent:(id)arg1 ;
-(void)_UIAppearance_setBackgroundColorReduced:(id)arg1 ;
-(void)_UIAppearance_setBackgroundColorPremium:(id)arg1 ;
-(void)_UIAppearance_setBackgroundColorPlus:(id)arg1 ;
-(void)_UIAppearance_setBackgroundColorFeatured:(id)arg1 ;
-(void)_UIAppearance_setBackgroundColorDefault:(id)arg1 ;
-(void)setAd:(ECAd *)arg1 ;
-(void)configureSubviews;
-(UIColor *)backgroundColorDefault;
-(UIColor *)backgroundColorPremium;
-(UIColor *)backgroundColorFeatured;
-(UIColor *)backgroundColorTopAd;
-(UIColor *)backgroundColorPlus;
-(UIColor *)backgroundColorUrgent;
-(UIColor *)backgroundColorReduced;
-(void)setBackgroundColorDefault:(UIColor *)arg1 ;
-(void)setBackgroundColorPlus:(UIColor *)arg1 ;
-(void)setBackgroundColorFeatured:(UIColor *)arg1 ;
-(void)setBackgroundColorPremium:(UIColor *)arg1 ;
-(void)setBackgroundColorUrgent:(UIColor *)arg1 ;
-(void)setBackgroundColorReduced:(UIColor *)arg1 ;
-(void)setBackgroundColorTopAd:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImageView *)backgroundImageView;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(ECAd *)ad;
-(void)updateBackgroundColor;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end


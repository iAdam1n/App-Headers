/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AFAdSDKSashimiView.h>

@class UILabel, UIColor, AFAdSDKSashimiThinView;

@interface AFAdSDKSashimiMinimalView : AFAdSDKSashimiView {

	UILabel* _titleLabel;
	UILabel* _categoryLabel;
	UILabel* _taglineLabel;
	UIColor* _iconBorderColor;
	UIColor* _contentBackgroundColor;
	UILabel* _previousPriceLabel;
	unsigned long long _styleMode;
	AFAdSDKSashimiThinView* _sashimiThinView;
	UIColor* _lightBackgroundColor;
	UIColor* _darkBackgroundColor;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) unsigned long long styleMode;                          //@synthesize styleMode=_styleMode - In the implementation block
@property (nonatomic,retain) UIColor * contentBackgroundColor;                      //@synthesize contentBackgroundColor=_contentBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * iconBorderColor;                             //@synthesize iconBorderColor=_iconBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                            //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * categoryLabel;                               //@synthesize categoryLabel=_categoryLabel - In the implementation block
@property (nonatomic,retain) UILabel * taglineLabel;                                //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (nonatomic,retain) AFAdSDKSashimiThinView * sashimiThinView;              //@synthesize sashimiThinView=_sashimiThinView - In the implementation block
@property (nonatomic,retain) UILabel * previousPriceLabel;                          //@synthesize previousPriceLabel=_previousPriceLabel - In the implementation block
@property (nonatomic,retain) UIColor * lightBackgroundColor;                        //@synthesize lightBackgroundColor=_lightBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * darkBackgroundColor;                         //@synthesize darkBackgroundColor=_darkBackgroundColor - In the implementation block
-(void)setTaglineLabel:(UILabel *)arg1 ;
-(UILabel *)taglineLabel;
-(void)setStyleMode:(unsigned long long)arg1 ;
-(void)sashimiIsReadyForInitialization;
-(UIColor *)lightBackgroundColor;
-(UIColor *)darkBackgroundColor;
-(UIColor *)iconBorderColor;
-(void)setIconBorderColor:(UIColor *)arg1 ;
-(void)setCategoryLabel:(UILabel *)arg1 ;
-(UILabel *)categoryLabel;
-(void)setPreviousPriceLabel:(UILabel *)arg1 ;
-(UILabel *)previousPriceLabel;
-(void)sashimiDidUpdateProperties;
-(unsigned long long)styleMode;
-(AFAdSDKSashimiThinView *)sashimiThinView;
-(void)setSashimiThinView:(AFAdSDKSashimiThinView *)arg1 ;
-(void)setLightBackgroundColor:(UIColor *)arg1 ;
-(void)setDarkBackgroundColor:(UIColor *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBackgroundColor;
@end

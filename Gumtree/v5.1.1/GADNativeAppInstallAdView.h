/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class GADNativeAdViewPolicy, UIView, GADNativeAppInstallAd;

@interface GADNativeAppInstallAdView : UIView {

	GADNativeAdViewPolicy* _nativeAdViewPolicy;
	UIView* _headlineView;
	UIView* _callToActionView;
	UIView* _iconView;
	UIView* _bodyView;
	UIView* _storeView;
	UIView* _priceView;
	UIView* _imageView;
	UIView* _starRatingView;

}

@property (nonatomic,retain) GADNativeAppInstallAd * nativeAppInstallAd; 
@property (assign,nonatomic,__weak) UIView * headlineView;                            //@synthesize headlineView=_headlineView - In the implementation block
@property (assign,nonatomic,__weak) UIView * callToActionView;                        //@synthesize callToActionView=_callToActionView - In the implementation block
@property (assign,nonatomic,__weak) UIView * iconView;                                //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) UIView * bodyView;                                //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic,__weak) UIView * storeView;                               //@synthesize storeView=_storeView - In the implementation block
@property (assign,nonatomic,__weak) UIView * priceView;                               //@synthesize priceView=_priceView - In the implementation block
@property (assign,nonatomic,__weak) UIView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * starRatingView;                          //@synthesize starRatingView=_starRatingView - In the implementation block
-(void)setHeadlineView:(UIView *)arg1 ;
-(void)setBodyView:(UIView *)arg1 ;
-(void)setCallToActionView:(UIView *)arg1 ;
-(UIView *)headlineView;
-(UIView *)bodyView;
-(UIView *)callToActionView;
-(void)setNativeAppInstallAd:(GADNativeAppInstallAd *)arg1 ;
-(GADNativeAppInstallAd *)nativeAppInstallAd;
-(void)setStoreView:(UIView *)arg1 ;
-(void)setPriceView:(UIView *)arg1 ;
-(UIView *)storeView;
-(UIView *)priceView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(UIView *)imageView;
-(void)commonInit;
-(void)setImageView:(UIView *)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(UIView *)starRatingView;
-(void)setStarRatingView:(UIView *)arg1 ;
@end


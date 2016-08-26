/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class GADNativeAdViewPolicy, UIView, GADNativeContentAd;

@interface GADNativeContentAdView : UIView {

	GADNativeAdViewPolicy* _nativeAdViewPolicy;
	UIView* _headlineView;
	UIView* _bodyView;
	UIView* _imageView;
	UIView* _logoView;
	UIView* _callToActionView;
	UIView* _advertiserView;

}

@property (nonatomic,retain) GADNativeContentAd * nativeContentAd; 
@property (assign,nonatomic,__weak) UIView * headlineView;                      //@synthesize headlineView=_headlineView - In the implementation block
@property (assign,nonatomic,__weak) UIView * bodyView;                          //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic,__weak) UIView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * logoView;                          //@synthesize logoView=_logoView - In the implementation block
@property (assign,nonatomic,__weak) UIView * callToActionView;                  //@synthesize callToActionView=_callToActionView - In the implementation block
@property (assign,nonatomic,__weak) UIView * advertiserView;                    //@synthesize advertiserView=_advertiserView - In the implementation block
-(void)setBodyView:(UIView *)arg1 ;
-(void)setCallToActionView:(UIView *)arg1 ;
-(void)setHeadlineView:(UIView *)arg1 ;
-(void)setAdvertiserView:(UIView *)arg1 ;
-(void)setNativeContentAd:(GADNativeContentAd *)arg1 ;
-(GADNativeContentAd *)nativeContentAd;
-(UIView *)headlineView;
-(UIView *)bodyView;
-(UIView *)callToActionView;
-(UIView *)advertiserView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(UIView *)imageView;
-(void)commonInit;
-(void)setImageView:(UIView *)arg1 ;
-(UIView *)logoView;
-(void)setLogoView:(UIView *)arg1 ;
@end

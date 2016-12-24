/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class FBNativeAd, FBNativeAdViewAttributes, FBAdBodyView, UIImageView, UIButton, UILabel;

@interface FBNativeAdDetailsView : UIView {

	BOOL _loaded;
	BOOL _bodyTextEnabled;
	FBNativeAd* _nativeAd;
	FBNativeAdViewAttributes* _attributes;
	FBAdBodyView* _bodyView;
	UIImageView* _iconImageView;
	UIButton* _callToActionButton;
	UILabel* _bodyLabel;

}

@property (assign,nonatomic,__weak) FBNativeAd * nativeAd;                               //@synthesize nativeAd=_nativeAd - In the implementation block
@property (assign,nonatomic,__weak) FBNativeAdViewAttributes * attributes;               //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic,__weak) FBAdBodyView * bodyView;                             //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * iconImageView;                         //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * callToActionButton;                       //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * bodyLabel;                                 //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                //@synthesize loaded=_loaded - In the implementation block
@property (assign,getter=isBodyTextEnabled,nonatomic) BOOL bodyTextEnabled;              //@synthesize bodyTextEnabled=_bodyTextEnabled - In the implementation block
-(FBNativeAd *)nativeAd;
-(void)setNativeAd:(FBNativeAd *)arg1 ;
-(UIButton *)callToActionButton;
-(void)setCallToActionButton:(UIButton *)arg1 ;
-(void)updateView:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 nativeAd:(id)arg2 attributes:(id)arg3 ;
-(BOOL)isBodyTextEnabled;
-(void)setBodyTextEnabled:(BOOL)arg1 ;
-(void)reinitializeView;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(FBNativeAdViewAttributes *)attributes;
-(void)setAttributes:(FBNativeAdViewAttributes *)arg1 ;
-(BOOL)isLoaded;
-(FBAdBodyView *)bodyView;
-(void)setBodyView:(FBAdBodyView *)arg1 ;
-(void)resetView;
-(UILabel *)bodyLabel;
-(void)setLoaded:(BOOL)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)createView;
-(void)setBodyLabel:(UILabel *)arg1 ;
@end

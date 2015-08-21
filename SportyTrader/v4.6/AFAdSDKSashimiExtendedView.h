/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AFAdSDKSashimiView.h>

@class UILabel, UIColor, AFAdSDKSashimiThinView, AFAdSDKDeviceShapeView, UIView, UIImageView, UIImage, NSString;

@interface AFAdSDKSashimiExtendedView : AFAdSDKSashimiView {

	BOOL _isArtworkProvided;
	UILabel* _titleLabel;
	UILabel* _categoryLabel;
	UILabel* _taglineLabel;
	UIColor* _iconBorderColor;
	UIColor* _contentBackgroundColor;
	UILabel* _previousPriceLabel;
	unsigned long long _styleMode;
	UIColor* _artworkBlurOverlayColor;
	double _blurRadius;
	AFAdSDKSashimiThinView* _sashimiThinView;
	AFAdSDKDeviceShapeView* _deviceView;
	UIView* _artworkContentView;
	UIImageView* _screenshotView;
	UIImageView* _artworkImageView;
	UIImage* _artworkImage;
	dispatch_queue_sRef _imageProcessingQueue;
	NSString* _imageLoadingUID;
	UIColor* _lightBackgroundColor;
	UIColor* _darkBackgroundColor;
	UIColor* _lightScreenshotBlurOverlayColor;
	UIColor* _darkScreenshotBlurOverlayColor;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) unsigned long long styleMode;                           //@synthesize styleMode=_styleMode - In the implementation block
@property (nonatomic,retain) UIColor * contentBackgroundColor;                       //@synthesize contentBackgroundColor=_contentBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * iconBorderColor;                              //@synthesize iconBorderColor=_iconBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                             //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * categoryLabel;                                //@synthesize categoryLabel=_categoryLabel - In the implementation block
@property (nonatomic,retain) UILabel * taglineLabel;                                 //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (nonatomic,retain) UIColor * artworkBlurOverlayColor;                      //@synthesize artworkBlurOverlayColor=_artworkBlurOverlayColor - In the implementation block
@property (assign,nonatomic) double blurRadius;                                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,retain) AFAdSDKSashimiThinView * sashimiThinView;               //@synthesize sashimiThinView=_sashimiThinView - In the implementation block
@property (nonatomic,retain) AFAdSDKDeviceShapeView * deviceView;                    //@synthesize deviceView=_deviceView - In the implementation block
@property (nonatomic,retain) UIView * artworkContentView;                            //@synthesize artworkContentView=_artworkContentView - In the implementation block
@property (nonatomic,retain) UIImageView * screenshotView;                           //@synthesize screenshotView=_screenshotView - In the implementation block
@property (nonatomic,retain) UIImageView * artworkImageView;                         //@synthesize artworkImageView=_artworkImageView - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                 //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef imageProcessingQueue;               //@synthesize imageProcessingQueue=_imageProcessingQueue - In the implementation block
@property (nonatomic,retain) NSString * imageLoadingUID;                             //@synthesize imageLoadingUID=_imageLoadingUID - In the implementation block
@property (nonatomic,retain) UILabel * previousPriceLabel;                           //@synthesize previousPriceLabel=_previousPriceLabel - In the implementation block
@property (assign,nonatomic) BOOL isArtworkProvided;                                 //@synthesize isArtworkProvided=_isArtworkProvided - In the implementation block
@property (nonatomic,retain) UIColor * lightBackgroundColor;                         //@synthesize lightBackgroundColor=_lightBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * darkBackgroundColor;                          //@synthesize darkBackgroundColor=_darkBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * lightScreenshotBlurOverlayColor;              //@synthesize lightScreenshotBlurOverlayColor=_lightScreenshotBlurOverlayColor - In the implementation block
@property (nonatomic,retain) UIColor * darkScreenshotBlurOverlayColor;               //@synthesize darkScreenshotBlurOverlayColor=_darkScreenshotBlurOverlayColor - In the implementation block
-(void)setTaglineLabel:(UILabel *)arg1 ;
-(UILabel *)taglineLabel;
-(void)setStyleMode:(unsigned long long)arg1 ;
-(void)sashimiIsReadyForInitialization;
-(id)deviceViewForScreenshotType:(unsigned long long)arg1 orientation:(unsigned long long)arg2 ;
-(void)setImageLoadingUID:(NSString *)arg1 ;
-(UIColor *)lightBackgroundColor;
-(UIColor *)darkBackgroundColor;
-(UIColor *)iconBorderColor;
-(void)setIconBorderColor:(UIColor *)arg1 ;
-(NSString *)imageLoadingUID;
-(CGSize)sizeForScreenshotType:(unsigned long long)arg1 orientation:(unsigned long long)arg2 ;
-(void)setCategoryLabel:(UILabel *)arg1 ;
-(UILabel *)categoryLabel;
-(void)setPreviousPriceLabel:(UILabel *)arg1 ;
-(UILabel *)previousPriceLabel;
-(void)applyBlurringEffect;
-(UIColor *)artworkBlurOverlayColor;
-(void)sashimiDidUpdateProperties;
-(void)setScreenshotBlurOverlayColor:(id)arg1 ;
-(unsigned long long)styleMode;
-(void)setArtworkBlurOverlayColor:(UIColor *)arg1 ;
-(AFAdSDKSashimiThinView *)sashimiThinView;
-(void)setSashimiThinView:(AFAdSDKSashimiThinView *)arg1 ;
-(AFAdSDKDeviceShapeView *)deviceView;
-(void)setDeviceView:(AFAdSDKDeviceShapeView *)arg1 ;
-(UIView *)artworkContentView;
-(void)setArtworkContentView:(UIView *)arg1 ;
-(UIImageView *)screenshotView;
-(void)setScreenshotView:(UIImageView *)arg1 ;
-(void)setArtworkImageView:(UIImageView *)arg1 ;
-(dispatch_queue_sRef)imageProcessingQueue;
-(void)setImageProcessingQueue:(dispatch_queue_sRef)arg1 ;
-(BOOL)isArtworkProvided;
-(void)setIsArtworkProvided:(BOOL)arg1 ;
-(void)setLightBackgroundColor:(UIColor *)arg1 ;
-(void)setDarkBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)lightScreenshotBlurOverlayColor;
-(void)setLightScreenshotBlurOverlayColor:(UIColor *)arg1 ;
-(UIColor *)darkScreenshotBlurOverlayColor;
-(void)setDarkScreenshotBlurOverlayColor:(UIColor *)arg1 ;
-(UIImageView *)artworkImageView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)blurRadius;
-(void)setBlurRadius:(double)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBackgroundColor;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>

@class NSMutableArray, RTMContent, NSString, NSMutableDictionary, UILabel, ItemPictureView, UIColor, UIFont, NSArray;

@interface EBUProductListingAdView : EBUDynamicHeightView {

	NSMutableArray* _localConstraints;
	RTMContent* _rtmContent;
	NSString* _placementID;
	NSMutableDictionary* _viewsDictionary;
	UILabel* _titleLabel;
	UILabel* _priceLabel;
	UILabel* _strikethroughLabel;
	UILabel* _retailerNameLabel;
	ItemPictureView* _imageView;
	UIColor* _strikethroughPriceColor;
	UIFont* _strikethroughPriceFont;
	NSArray* _accsessibilityViews;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSMutableDictionary * viewsDictionary;              //@synthesize viewsDictionary=_viewsDictionary - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                               //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * strikethroughLabel;                       //@synthesize strikethroughLabel=_strikethroughLabel - In the implementation block
@property (nonatomic,retain) UILabel * retailerNameLabel;                        //@synthesize retailerNameLabel=_retailerNameLabel - In the implementation block
@property (nonatomic,retain) ItemPictureView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIColor * strikethroughPriceColor;                  //@synthesize strikethroughPriceColor=_strikethroughPriceColor - In the implementation block
@property (nonatomic,retain) UIFont * strikethroughPriceFont;                    //@synthesize strikethroughPriceFont=_strikethroughPriceFont - In the implementation block
@property (nonatomic,retain) NSArray * accsessibilityViews;                      //@synthesize accsessibilityViews=_accsessibilityViews - In the implementation block
@property (nonatomic,retain) RTMContent * rtmContent;                            //@synthesize rtmContent=_rtmContent - In the implementation block
@property (nonatomic,retain) NSString * placementID;                             //@synthesize placementID=_placementID - In the implementation block
-(id)newLabelWithColor:(id)arg1 font:(id)arg2 numberOfLines:(long long)arg3 ;
-(void)setAccsessibilityViews:(NSArray *)arg1 ;
-(void)invalidateConstraints;
-(UILabel *)strikethroughLabel;
-(id)contentDetails;
-(void)updateImageLoaderAPLSInfo:(id)arg1 ;
-(void)imageLoadCompleted:(id)arg1 loader:(id)arg2 ;
-(void)imageLoadFailed:(id)arg1 error:(id)arg2 ;
-(NSArray *)accsessibilityViews;
-(NSMutableDictionary *)viewsDictionary;
-(void)setViewsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setStrikethroughLabel:(UILabel *)arg1 ;
-(UILabel *)retailerNameLabel;
-(void)setRetailerNameLabel:(UILabel *)arg1 ;
-(UIColor *)strikethroughPriceColor;
-(void)setStrikethroughPriceColor:(UIColor *)arg1 ;
-(UIFont *)strikethroughPriceFont;
-(void)setStrikethroughPriceFont:(UIFont *)arg1 ;
-(NSString *)placementID;
-(void)setPlacementID:(NSString *)arg1 ;
-(RTMContent *)rtmContent;
-(void)setRtmContent:(RTMContent *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(CGSize)imageSize;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(ItemPictureView *)imageView;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setImageView:(ItemPictureView *)arg1 ;
-(id)metrics;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)loadImage;
-(void)refreshView;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
@end

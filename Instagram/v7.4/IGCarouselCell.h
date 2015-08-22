/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGMediaThumbnailView, UILabel, UIView;

@interface IGCarouselCell : UICollectionViewCell {

	IGMediaThumbnailView* _imageView;
	UILabel* _titleLabel;
	UIView* _overlayView;

}

@property (nonatomic,retain) IGMediaThumbnailView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                          //@synthesize overlayView=_overlayView - In the implementation block
-(void)setVideoIconVisible:(BOOL)arg1 ;
-(UIView *)overlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(IGMediaThumbnailView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(IGMediaThumbnailView *)arg1 ;
-(void)setImageURL:(id)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
@end

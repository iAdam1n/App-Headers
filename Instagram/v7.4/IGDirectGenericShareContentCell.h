/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class IGCoreTextView, UILabel, UIImageView, IGShareThumbnailView, NSArray;

@interface IGDirectGenericShareContentCell : IGDirectContentCell {

	IGCoreTextView* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _sideImageView;
	UIImageView* _chevronView;
	IGShareThumbnailView* _thumbnailViews;
	NSArray* _previewMediaPhotos;

}

@property (nonatomic,retain) IGCoreTextView * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                        //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                          //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) IGShareThumbnailView * thumbnailViews;              //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) NSArray * previewMediaPhotos;                       //@synthesize previewMediaPhotos=_previewMediaPhotos - In the implementation block
+(double)labelWidthForFrameWidth:(double)arg1 ;
+(id)titleStyledStringWithText:(id)arg1 ;
+(double)thumbnailWidthForFrameWidth:(double)arg1 ;
+(double)cellWidthForFrameWidth:(double)arg1 ;
+(double)sideImageWidth;
+(double)heightForCellWithTitleText:(id)arg1 andSubtitleText:(id)arg2 andWidth:(double)arg3 andThumbnails:(id)arg4 ;
+(id)subtitleStyledStringWithText:(id)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(id)previewMedia;
-(CGRect)tapTargetFrame;
-(UIImageView *)sideImageView;
-(void)setPreviewMediaPhotos:(NSArray *)arg1 ;
-(IGShareThumbnailView *)thumbnailViews;
-(NSArray *)previewMediaPhotos;
-(void)setSideImageView:(UIImageView *)arg1 ;
-(void)setThumbnailViews:(IGShareThumbnailView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGCoreTextView *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(IGCoreTextView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


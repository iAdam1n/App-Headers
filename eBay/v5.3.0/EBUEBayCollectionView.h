/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIView.h>

@class FeedCollection, EUIView, NSArray, EUIImageView, EUILineSeparatorView, EUILabel;

@interface EBUEBayCollectionView : EUIView {

	FeedCollection* _collection;
	EUIView* _imageViewContainer;
	NSArray* _imageViews;
	EUIImageView* _imageView1;
	EUIImageView* _imageView2;
	EUIImageView* _imageView3;
	EUILineSeparatorView* _verticalSeparatorView;
	EUILineSeparatorView* _horizontalSeparatorView;
	EUILabel* _titleLabel;
	EUILabel* _subtitleLabel;

}

@property (nonatomic,retain) EUIView * imageViewContainer;                                       //@synthesize imageViewContainer=_imageViewContainer - In the implementation block
@property (nonatomic,retain) NSArray * imageViews;                                               //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) EUIImageView * imageView1;                                          //@synthesize imageView1=_imageView1 - In the implementation block
@property (nonatomic,retain) EUIImageView * imageView2;                                          //@synthesize imageView2=_imageView2 - In the implementation block
@property (nonatomic,retain) EUIImageView * imageView3;                                          //@synthesize imageView3=_imageView3 - In the implementation block
@property (assign,nonatomic,__weak) EUILineSeparatorView * verticalSeparatorView;                //@synthesize verticalSeparatorView=_verticalSeparatorView - In the implementation block
@property (assign,nonatomic,__weak) EUILineSeparatorView * horizontalSeparatorView;              //@synthesize horizontalSeparatorView=_horizontalSeparatorView - In the implementation block
@property (nonatomic,retain) EUILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) EUILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) FeedCollection * collection;                                        //@synthesize collection=_collection - In the implementation block
+(id)eui_newDynamicSizeTemplate;
-(EUIImageView *)imageView2;
-(EUIImageView *)imageView1;
-(EUIImageView *)imageView3;
-(void)setImageView1:(EUIImageView *)arg1 ;
-(void)setImageView2:(EUIImageView *)arg1 ;
-(void)setImageView3:(EUIImageView *)arg1 ;
-(EUIView *)imageViewContainer;
-(void)setImageViewContainer:(EUIView *)arg1 ;
-(EUILineSeparatorView *)horizontalSeparatorView;
-(EUILineSeparatorView *)verticalSeparatorView;
-(void)setVerticalSeparatorView:(EUILineSeparatorView *)arg1 ;
-(void)setHorizontalSeparatorView:(EUILineSeparatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(EUILabel *)titleLabel;
-(void)prepareForReuse;
-(EUILabel *)subtitleLabel;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(void)setSubtitleLabel:(EUILabel *)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(FeedCollection *)collection;
-(void)setCollection:(FeedCollection *)arg1 ;
@end


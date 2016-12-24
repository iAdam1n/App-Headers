/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseView.h>

@class ScrollViewIndex, BaseImageView, BaseLabel;

@interface ScrollViewIndexBarIndicatorView : BaseView {

	ScrollViewIndex* _index;
	BaseImageView* _imageView;
	BaseLabel* _label;

}

@property (nonatomic,retain) ScrollViewIndex * index;                //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) BaseImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) BaseLabel * label;                      //@synthesize label=_label - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(BaseImageView *)imageView;
-(BaseLabel *)label;
-(void)setLabel:(BaseLabel *)arg1 ;
-(ScrollViewIndex *)index;
-(void)setImageView:(BaseImageView *)arg1 ;
-(void)setIndex:(ScrollViewIndex *)arg1 ;
@end

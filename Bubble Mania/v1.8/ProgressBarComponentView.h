/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel;

@interface ProgressBarComponentView : UIView {

	UIView* _mask;
	UIView* _fillShadowMask;
	UIImageView* _fillShadowView;
	UIImageView* _fillImageView;
	UIImageView* _fillBgImageView;
	UILabel* _label;
	UIView* _indicatorView;

}

@property (nonatomic,retain) UIView * mask;                              //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) UIView * fillShadowMask;                    //@synthesize fillShadowMask=_fillShadowMask - In the implementation block
@property (nonatomic,retain) UIImageView * fillShadowView;               //@synthesize fillShadowView=_fillShadowView - In the implementation block
@property (nonatomic,retain) UIImageView * fillImageView;                //@synthesize fillImageView=_fillImageView - In the implementation block
@property (nonatomic,retain) UIImageView * fillBgImageView;              //@synthesize fillBgImageView=_fillBgImageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * indicatorView;                     //@synthesize indicatorView=_indicatorView - In the implementation block
-(void)fillBar:(float)arg1 animated:(BOOL)arg2 ;
-(void)createMask;
-(UIImageView *)fillImageView;
-(void)setFillShadowMask:(UIView *)arg1 ;
-(UIView *)fillShadowMask;
-(void)setFillShadowView:(UIImageView *)arg1 ;
-(UIImageView *)fillShadowView;
-(UIImageView *)fillBgImageView;
-(void)createFillShadowMask;
-(void)createFillShadowView;
-(void)fillBar:(float)arg1 ;
-(void)setFillImageView:(UIImageView *)arg1 ;
-(void)setFillBgImageView:(UIImageView *)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(UIView *)mask;
-(void)setMask:(UIView *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)indicatorView;
-(void)setIndicatorView:(UIView *)arg1 ;
@end


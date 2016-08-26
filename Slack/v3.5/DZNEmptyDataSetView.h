/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, UIImageView, UIButton, UITapGestureRecognizer;

@interface DZNEmptyDataSetView : UIView {

	BOOL _fadeInOnDisplay;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIImageView* _imageView;
	UIButton* _button;
	UIView* _customView;
	UITapGestureRecognizer* _tapGesture;
	double _verticalOffset;
	double _verticalSpace;

}

@property (nonatomic,readonly) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIButton * button;                              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIView * customView;                              //@synthesize customView=_customView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;              //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic) double verticalOffset;                            //@synthesize verticalOffset=_verticalOffset - In the implementation block
@property (assign,nonatomic) double verticalSpace;                             //@synthesize verticalSpace=_verticalSpace - In the implementation block
@property (assign,nonatomic) BOOL fadeInOnDisplay;                             //@synthesize fadeInOnDisplay=_fadeInOnDisplay - In the implementation block
-(void)didTapButton:(id)arg1 ;
-(BOOL)canShowButton;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)setVerticalOffset:(double)arg1 ;
-(void)setFadeInOnDisplay:(BOOL)arg1 ;
-(BOOL)fadeInOnDisplay;
-(void)removeAllConstraints;
-(double)verticalOffset;
-(BOOL)canShowTitle;
-(BOOL)canShowDetail;
-(BOOL)canShowImage;
-(UIButton *)button;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(UIView *)contentView;
-(void)didMoveToSuperview;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(UIView *)customView;
-(void)setCustomView:(UIView *)arg1 ;
-(UILabel *)detailLabel;
-(void)setupConstraints;
-(void)setVerticalSpace:(double)arg1 ;
-(double)verticalSpace;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNFormHeaderView.h>

@class UIImageView, UILabel, UIView;

@interface MNPhoneVerificationHeaderView : MNFormHeaderView {

	BOOL _needsToUpdateLabelFontSizes;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _detailsLabel;
	UIView* _innerView;

}

@property (nonatomic,retain) UIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                        //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateLabelFontSizes;              //@synthesize needsToUpdateLabelFontSizes=_needsToUpdateLabelFontSizes - In the implementation block
@property (nonatomic,retain) UIView * innerView;                            //@synthesize innerView=_innerView - In the implementation block
-(void)setState:(unsigned long long)arg1 animateWithDuration:(double)arg2 andAnimationOptions:(unsigned long long)arg3 ;
-(id)_fontForTitleLabelToFitInWidth:(double)arg1 ;
-(id)_fontForDetailsLabelToFitInWidth:(double)arg1 ;
-(CGSize)_getInnerViewSizeForState:(unsigned long long)arg1 titleLabelSize:(CGSize)arg2 detailsLabelSize:(CGSize)arg3 andContainingSize:(CGSize)arg4 ;
-(void)_layoutTitleAndDetailsLabel:(CGSize)arg1 atY:(double)arg2 padding:(double)arg3 ;
-(id)_calculateFontForLabel:(id)arg1 withDefaultFont:(id)arg2 thatFitsSize:(CGSize)arg3 minFontSize:(double)arg4 ;
-(void)setDetailsText:(id)arg1 ;
-(BOOL)needsToUpdateLabelFontSizes;
-(void)setNeedsToUpdateLabelFontSizes:(BOOL)arg1 ;
-(UIView *)innerView;
-(void)setInnerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setTitleText:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(UILabel *)detailsLabel;
-(void)_layoutForState:(unsigned long long)arg1 ;
@end

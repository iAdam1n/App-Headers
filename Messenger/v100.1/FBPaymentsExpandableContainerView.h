/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CAShapeLayer;

@interface FBPaymentsExpandableContainerView : UIView {

	UIView* _backgroundView;
	CAShapeLayer* _contentMaskLayer;
	BOOL _isDisplayed;
	BOOL _isAnimating;
	BOOL _isContentViewAppeared;
	UIView* _contentView;
	double _contentViewHeight;
	/*^block*/id _tapBackgroundBlock;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double contentViewHeight;                //@synthesize contentViewHeight=_contentViewHeight - In the implementation block
@property (nonatomic,copy) id tapBackgroundBlock;                     //@synthesize tapBackgroundBlock=_tapBackgroundBlock - In the implementation block
@property (assign,nonatomic) BOOL isContentViewAppeared;              //@synthesize isContentViewAppeared=_isContentViewAppeared - In the implementation block
-(void)setTapBackgroundBlock:(id)arg1 ;
-(void)setContentViewHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setIsDisplayed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isContentViewAppeared;
-(void)_handleTapBackgroundView;
-(void)_updateBackgroundViewAlpha;
-(void)_setIsAnimating:(BOOL)arg1 ;
-(CGRect)_contentViewFrameInView;
-(void)_setIsContentViewAppeared:(BOOL)arg1 ;
-(void)_applyContentViewMaskLayer;
-(void)setContentViewHeight:(double)arg1 ;
-(double)contentViewHeight;
-(id)tapBackgroundBlock;
-(void)setIsContentViewAppeared:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)_layoutContentView;
-(void)_layoutBackgroundView;
@end

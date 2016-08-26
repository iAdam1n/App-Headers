/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBPaymentsExpandableContainerView : UIView {

	UIView* _backgroundView;
	BOOL _isDisplayed;
	BOOL _isContentViewAppeared;
	UIView* _contentView;
	double _contentViewHeight;
	/*^block*/id _tapBackgroundBlock;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double contentViewHeight;                //@synthesize contentViewHeight=_contentViewHeight - In the implementation block
@property (nonatomic,copy) id tapBackgroundBlock;                     //@synthesize tapBackgroundBlock=_tapBackgroundBlock - In the implementation block
@property (assign,nonatomic) BOOL isContentViewAppeared;              //@synthesize isContentViewAppeared=_isContentViewAppeared - In the implementation block
-(void)_layoutContentView;
-(double)contentViewHeight;
-(void)_layoutBackgroundView;
-(void)setTapBackgroundBlock:(id)arg1 ;
-(void)setContentViewHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setIsDisplayed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isContentViewAppeared;
-(void)_handleTapBackgroundView;
-(void)_updateBackgroundViewAlpha;
-(void)_setIsContentViewAppeared:(BOOL)arg1 ;
-(void)setContentViewHeight:(double)arg1 ;
-(id)tapBackgroundBlock;
-(void)setIsContentViewAppeared:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end

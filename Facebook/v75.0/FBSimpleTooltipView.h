/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <Facebook/FBNuxTooltipViewDelegate.h>

@class CAShapeLayer, FBNuxTooltipView, NSString;

@interface FBSimpleTooltipView : UIControl <FBNuxTooltipViewDelegate> {

	CAShapeLayer* _bubbleShapeLayer;
	FBNuxTooltipView* _nuxContentView;
	/*^block*/id _dismissBlock;
	double _arrowOffset;
	double _scaleAmount;
	CGPoint _arrowPosition;
	UIEdgeInsets _hitTestSlop;

}

@property (nonatomic,copy,readonly) NSString * titleText; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (assign,nonatomic) CGPoint arrowPosition;                          //@synthesize arrowPosition=_arrowPosition - In the implementation block
@property (assign,nonatomic) double arrowOffset;                             //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (assign,nonatomic) double scaleAmount;                             //@synthesize scaleAmount=_scaleAmount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestSlop;                       //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(void)setArrowPosition:(CGPoint)arg1 ;
-(id)initWithTitleText:(id)arg1 descriptionText:(id)arg2 dismissBlock:(/*^block*/id)arg3 ;
-(void)setScaleAmount:(double)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(void)_didTapBubble:(id)arg1 ;
-(void)tooltipViewDidTapCancelButton:(id)arg1 ;
-(CGPoint)arrowPosition;
-(double)scaleAmount;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(NSString *)titleText;
-(NSString *)descriptionText;
@end

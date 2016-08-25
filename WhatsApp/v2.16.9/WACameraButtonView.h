/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_group, WACameraButtonViewDelegate;
@class UIView, WACircleView, UILabel, NSObject, CAKeyframeAnimation, UIColor, NSString;

@interface WACameraButtonView : UIView {

	UIView* _outerRing;
	WACircleView* _innerRing;
	WACircleView* _circleShadow;
	UILabel* _textLabel;
	NSObject*<OS_dispatch_group> _animationDispatchGroup;
	CAKeyframeAnimation* _bounceAnimation;
	BOOL _isTrackingTouch;
	CGPoint _initialTouchPosition;
	float _initialNormalizedSwipeUpDistance;
	BOOL _initialNormalizedSwipeUpDistanceThresholdInEffect;
	BOOL _longPressing;
	float _normalizedSwipeUpDistance;
	id<WACameraButtonViewDelegate> _delegate;
	UIView* _contentView;

}

@property (nonatomic,retain) UIColor * buttonColor; 
@property (assign,nonatomic) float normalizedSwipeUpDistance;                             //@synthesize normalizedSwipeUpDistance=_normalizedSwipeUpDistance - In the implementation block
@property (assign,nonatomic,__weak) id<WACameraButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLongPressing,nonatomic,readonly) BOOL longPressing;                   //@synthesize longPressing=_longPressing - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
-(id)loopedBounceAnimationFrom:(double)arg1 to:(double)arg2 ;
-(void)endTrackingTouches:(id)arg1 ;
-(void)beginLongPress;
-(void)updateButtonHighlight;
-(BOOL)allowsLongPress;
-(void)setNormalizedSwipeUpDistance:(float)arg1 ;
-(void)performTransitionToReadyAnimation;
-(void)performTransitionToRecordAnimation;
-(float)normalizedSwipeUpDistance;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<WACameraButtonViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<WACameraButtonViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)awakeFromNib;
-(UIView *)contentView;
-(BOOL)isLongPressing;
-(void)setButtonColor:(UIColor *)arg1 ;
-(UIColor *)buttonColor;
@end


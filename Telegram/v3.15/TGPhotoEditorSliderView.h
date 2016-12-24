/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIImageView, UILabel, UIPanGestureRecognizer, UIColor, UIImage;

@interface TGPhotoEditorSliderView : UIControl {

	UIView* _backView;
	UIView* _trackView;
	UIView* _startView;
	UIImageView* _knobView;
	UILabel* _valueLabel;
	double _knobTouchStart;
	double _knobTouchCenterStart;
	double _knobDragCenter;
	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _showValue;
	/*^block*/id _interactionEnded;
	long long _interfaceOrientation;
	double _minimumValue;
	double _maximumValue;
	double _startValue;
	double _value;
	double _knobPadding;
	double _lineSize;

}

@property (nonatomic,copy) id interactionEnded;                           //@synthesize interactionEnded=_interactionEnded - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) double minimumValue;                         //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                         //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double startValue;                           //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL isTracking; 
@property (assign,nonatomic) double knobPadding;                          //@synthesize knobPadding=_knobPadding - In the implementation block
@property (assign,nonatomic) BOOL showValue;                              //@synthesize showValue=_showValue - In the implementation block
@property (assign,nonatomic) double lineSize;                             //@synthesize lineSize=_lineSize - In the implementation block
@property (nonatomic,retain) UIColor * backColor; 
@property (nonatomic,retain) UIColor * trackColor; 
@property (nonatomic,retain) UIImage * knobImage; 
-(void)setInteractionEnded:(id)arg1 ;
-(double)centerPositionForValue:(double)arg1 totalLength:(double)arg2 knobSize:(double)arg3 vertical:(BOOL)arg4 ;
-(id)_dotStringValue;
-(double)valueForCenterPosition:(double)arg1 totalLength:(double)arg2 knobSize:(double)arg3 vertical:(BOOL)arg4 ;
-(void)setLineSize:(double)arg1 ;
-(UIColor *)trackColor;
-(void)setTrackColor:(UIColor *)arg1 ;
-(double)knobPadding;
-(void)setKnobPadding:(double)arg1 ;
-(BOOL)showValue;
-(double)lineSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isTracking;
-(void)handlePan:(id)arg1 ;
-(double)minimumValue;
-(double)maximumValue;
-(void)setValue:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)setShowValue:(BOOL)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(UIImage *)knobImage;
-(void)setKnobImage:(UIImage *)arg1 ;
-(double)startValue;
-(id)interactionEnded;
-(UIColor *)backColor;
-(void)setBackColor:(UIColor *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@protocol MKSwitchDelegate;
@class UIColor, NSString, UIView, CAShapeLayer, CALayer, CATextLayer, MKSwitchStylesheet, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface MKSwitch : UIView {

	BOOL _on;
	BOOL _enabled;
	UIColor* _borderColor;
	UIColor* _thumbColor;
	UIColor* _thumbBorderColor;
	UIColor* _onBackgroundColor;
	UIColor* _offBackgroundColor;
	UIColor* _onForegroundColor;
	UIColor* _offForegroundColor;
	NSString* _onText;
	NSString* _offText;
	double _width;
	double _cornerRadius;
	id<MKSwitchDelegate> _delegate;
	/*^block*/id _valueChangedBlock;
	NSString* _accessibilityValueOn;
	NSString* _accessibilityValueOff;
	UIView* _thumbView;
	CAShapeLayer* _circleLayer;
	CALayer* _onStateLayer;
	CALayer* _onStateBehindThumbLayer;
	CALayer* _offStateLayer;
	CALayer* _offStateBehindThumbLayer;
	UIView* _trackView;
	CATextLayer* _onTextLayer;
	CATextLayer* _offTextLayer;
	double _factorForResizing;
	MKSwitchStylesheet* _stylesheet;
	UIPanGestureRecognizer* _thumbPanGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	CGPoint _origin;
	CGSize _size;

}

@property (nonatomic,retain) UIView * thumbView;                                              //@synthesize thumbView=_thumbView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circleLayer;                                      //@synthesize circleLayer=_circleLayer - In the implementation block
@property (nonatomic,retain) CALayer * onStateLayer;                                          //@synthesize onStateLayer=_onStateLayer - In the implementation block
@property (nonatomic,retain) CALayer * onStateBehindThumbLayer;                               //@synthesize onStateBehindThumbLayer=_onStateBehindThumbLayer - In the implementation block
@property (nonatomic,retain) CALayer * offStateLayer;                                         //@synthesize offStateLayer=_offStateLayer - In the implementation block
@property (nonatomic,retain) CALayer * offStateBehindThumbLayer;                              //@synthesize offStateBehindThumbLayer=_offStateBehindThumbLayer - In the implementation block
@property (nonatomic,retain) UIView * trackView;                                              //@synthesize trackView=_trackView - In the implementation block
@property (nonatomic,retain) CATextLayer * onTextLayer;                                       //@synthesize onTextLayer=_onTextLayer - In the implementation block
@property (nonatomic,retain) CATextLayer * offTextLayer;                                      //@synthesize offTextLayer=_offTextLayer - In the implementation block
@property (assign,nonatomic) CGSize size;                                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double factorForResizing;                                        //@synthesize factorForResizing=_factorForResizing - In the implementation block
@property (nonatomic,retain) MKSwitchStylesheet * stylesheet;                                 //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * thumbPanGestureRecognizer;              //@synthesize thumbPanGestureRecognizer=_thumbPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                   //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                           //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbColor;                                            //@synthesize thumbColor=_thumbColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbBorderColor;                                      //@synthesize thumbBorderColor=_thumbBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * onBackgroundColor;                                     //@synthesize onBackgroundColor=_onBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * offBackgroundColor;                                    //@synthesize offBackgroundColor=_offBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * onForegroundColor;                                     //@synthesize onForegroundColor=_onForegroundColor - In the implementation block
@property (nonatomic,retain) UIColor * offForegroundColor;                                    //@synthesize offForegroundColor=_offForegroundColor - In the implementation block
@property (nonatomic,retain) NSString * onText;                                               //@synthesize onText=_onText - In the implementation block
@property (nonatomic,retain) NSString * offText;                                              //@synthesize offText=_offText - In the implementation block
@property (assign,nonatomic) CGPoint origin;                                                  //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) double width;                                                    //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                             //@synthesize on=_on - In the implementation block
@property (assign,nonatomic,__weak) id<MKSwitchDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id valueChangedBlock;                                              //@synthesize valueChangedBlock=_valueChangedBlock - In the implementation block
@property (nonatomic,retain) NSString * accessibilityValueOn;                                 //@synthesize accessibilityValueOn=_accessibilityValueOn - In the implementation block
@property (nonatomic,retain) NSString * accessibilityValueOff;                                //@synthesize accessibilityValueOff=_accessibilityValueOff - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
-(void)mk_commonInit;
-(void)setThumbBorderColor:(UIColor *)arg1 ;
-(void)setThumbColor:(UIColor *)arg1 ;
-(void)setOnBackgroundColor:(UIColor *)arg1 ;
-(void)setOffBackgroundColor:(UIColor *)arg1 ;
-(void)setValueChangedBlock:(id)arg1 ;
-(id)valueChangedBlock;
-(double)factorForResizing;
-(UIColor *)thumbBorderColor;
-(UIColor *)thumbColor;
-(CAShapeLayer *)circleLayer;
-(void)setFactorForResizing:(double)arg1 ;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setupTrack;
-(void)setupThumb;
-(void)handleSwitchThumbPanGesture:(id)arg1 ;
-(void)setThumbPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)thumbPanGestureRecognizer;
-(UIView *)thumbView;
-(void)handleSwitchTapGesture:(id)arg1 ;
-(void)setOnForegroundColor:(UIColor *)arg1 ;
-(void)setOffForegroundColor:(UIColor *)arg1 ;
-(void)setTrackView:(UIView *)arg1 ;
-(void)setOnStateLayer:(CALayer *)arg1 ;
-(UIView *)trackView;
-(CALayer *)onStateLayer;
-(void)setOnStateBehindThumbLayer:(CALayer *)arg1 ;
-(CALayer *)onStateBehindThumbLayer;
-(void)setOffStateBehindThumbLayer:(CALayer *)arg1 ;
-(CALayer *)offStateBehindThumbLayer;
-(void)setOffStateLayer:(CALayer *)arg1 ;
-(CALayer *)offStateLayer;
-(void)setOnTextLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)onTextLayer;
-(void)setOffTextLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)offTextLayer;
-(void)setThumbView:(UIView *)arg1 ;
-(NSString *)onText;
-(void)centerText:(id)arg1 inLayer:(id)arg2 ;
-(NSString *)offText;
-(double)rangeForThumb;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 sendActions:(BOOL)arg3 ;
-(NSString *)accessibilityValueOn;
-(NSString *)accessibilityValueOff;
-(double)valueAtThumbPosition;
-(void)updateThumbPositionAnimated:(BOOL)arg1 ;
-(void)setOnText:(NSString *)arg1 ;
-(void)setOffText:(NSString *)arg1 ;
-(UIColor *)onBackgroundColor;
-(UIColor *)offBackgroundColor;
-(UIColor *)onForegroundColor;
-(UIColor *)offForegroundColor;
-(void)setAccessibilityValueOn:(NSString *)arg1 ;
-(void)setAccessibilityValueOff:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(BOOL)enabled;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MKSwitchDelegate>)arg1 ;
-(id<MKSwitchDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(double)width;
-(UIColor *)borderColor;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWidth:(double)arg1 ;
-(id)accessibilityValue;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(MKSwitchStylesheet *)stylesheet;
-(void)setStylesheet:(MKSwitchStylesheet *)arg1 ;
@end

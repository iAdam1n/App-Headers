/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBNuxFlyoutViewDelegate;
@class UIImageView, UILabel, UITapGestureRecognizer, UIColor, NSString;

@interface FBNuxFlyoutView_DEPRECATED : UIView <UIGestureRecognizerDelegate> {

	double _displayTime;
	double _automaticFadeoutDuration;
	double _minimumDisplayDuration;
	UIImageView* _iconImage;
	UILabel* _textLabel;
	UITapGestureRecognizer* _outsideTapGestureRecognizer;
	UITapGestureRecognizer* _insideTapGestureRecognizer;
	double _leftWidth;
	double _rightWidth;
	double _arrowMidpoint;
	BOOL _pointingUp;
	BOOL _fadingOut;
	UIColor* _outerStrokeColor;
	UIColor* _innerStrokeColor;
	UIColor* _fillColor;
	double _arrowHeight;
	double _textPadding;
	double _maximumTextWidth;
	double _verticalTextOffset;
	BOOL _shouldDismissFlyoutViewOnScreenTap;
	BOOL _shouldDismissFlyoutViewOnTextEditing;
	id<FBNuxFlyoutViewDelegate> _delegate;
	CGPoint _positionInView;

}

@property (assign,nonatomic,__weak) id<FBNuxFlyoutViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint positionInView;                                   //@synthesize positionInView=_positionInView - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissFlyoutViewOnScreenTap;                  //@synthesize shouldDismissFlyoutViewOnScreenTap=_shouldDismissFlyoutViewOnScreenTap - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissFlyoutViewOnTextEditing;                //@synthesize shouldDismissFlyoutViewOnTextEditing=_shouldDismissFlyoutViewOnTextEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGPathRef)_arrowMidpoint:(double)arg1 arrowHeight:(double)arg2 radius:(double)arg3 createUpPointingBubbleWithRect:(CGRect)arg4 ;
+(CGPathRef)_arrowMidpoint:(double)arg1 arrowHeight:(double)arg2 radius:(double)arg3 createDownPointingBubbleWithRect:(CGRect)arg4 ;
-(void)_onTextEditingEvent:(id)arg1 ;
-(void)_onTapInFlyout:(id)arg1 ;
-(void)_onTapInParentScreen:(id)arg1 ;
-(BOOL)shouldDismissFlyoutViewOnScreenTap;
-(void)scheduleFadeoutRespectingMinimumDisplayDuration;
-(BOOL)shouldDismissFlyoutViewOnTextEditing;
-(CGRect)_layoutSubviewsAndDetermineFrame;
-(CGPoint)positionInView;
-(void)setPositionInView:(CGPoint)arg1 ;
-(void)setAutomaticFadeoutDuration:(double)arg1 ;
-(void)scheduleAutomaticFadeout;
-(void)cancelAllScheduledFadeOutMethods;
-(void)_kickOffFadeIn;
-(void)_bounce1AnimationStopped;
-(void)_bounce2AnimationStopped;
-(void)bringNuxToFront;
-(id)initWithStyle:(int)arg1 message:(id)arg2 pointingUp:(BOOL)arg3 iconImage:(id)arg4 delegate:(id)arg5 ;
-(void)setNuxFocalPoint:(CGPoint)arg1 ;
-(void)setMinimumDisplayDuration:(double)arg1 ;
-(void)fadeIntoView:(id)arg1 ;
-(void)animateOffset:(CGPoint)arg1 andDuration:(double)arg2 ;
-(void)setShouldDismissFlyoutViewOnScreenTap:(BOOL)arg1 ;
-(void)setShouldDismissFlyoutViewOnTextEditing:(BOOL)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<FBNuxFlyoutViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<FBNuxFlyoutViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)dismiss;
-(void)fadeOut;
@end

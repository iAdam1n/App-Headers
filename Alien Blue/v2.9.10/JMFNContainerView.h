/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIViewController, UIImageView, UIView, UILabel, NSString;

@interface JMFNContainerView : UIView <UIGestureRecognizerDelegate> {

	UIViewController* _controller;
	UIImageView* _prePinchImageView;
	UIView* _innerView;
	UIView* _dividerView;
	UILabel* _closeInstructions;
	CGRect _prePinchFrame;

}

@property (retain) UIViewController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (assign) CGRect prePinchFrame;                            //@synthesize prePinchFrame=_prePinchFrame - In the implementation block
@property (retain) UIImageView * prePinchImageView;                 //@synthesize prePinchImageView=_prePinchImageView - In the implementation block
@property (retain) UIView * innerView;                              //@synthesize innerView=_innerView - In the implementation block
@property (retain) UIView * dividerView;                            //@synthesize dividerView=_dividerView - In the implementation block
@property (retain) UILabel * closeInstructions;                     //@synthesize closeInstructions=_closeInstructions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerViewWithController:(id)arg1 ;
-(void)handlePinchGesture:(id)arg1 ;
-(void)setInnerView:(UIView *)arg1 ;
-(UIView *)innerView;
-(void)setDividerView:(UIView *)arg1 ;
-(UIView *)dividerView;
-(CGRect)prePinchFrame;
-(UIImageView *)prePinchImageView;
-(void)hideBorder;
-(UILabel *)closeInstructions;
-(void)setCloseInstructions:(UILabel *)arg1 ;
-(void)setPrePinchFrame:(CGRect)arg1 ;
-(void)setPrePinchImageView:(UIImageView *)arg1 ;
-(void)createImageRepresentation;
-(void)resizeByFactor:(double)arg1 ;
-(void)createInstructionLabel;
-(void)animateCollapseOnComplete:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(void)popController;
-(void)updateBorder;
@end


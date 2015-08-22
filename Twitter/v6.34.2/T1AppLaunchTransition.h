/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1AppLaunchTransitionDelegate;
#import <Twitter/Twitter-Structs.h>
@class TFNShapeView, UIView, UIWindow;

@interface T1AppLaunchTransition : NSObject {

	BOOL _shouldAnimate;
	id<T1AppLaunchTransitionDelegate> _delegate;
	TFNShapeView* _mask;
	UIView* _hostView;
	UIView* _whiteBackgroundView;
	UIView* _blueBackgroundView;
	UIWindow* _window;
	CGPoint _logoOrigin;
	CGSize _logoSize;
	CGAffineTransform _initialHostViewTransform;

}

@property (assign,nonatomic,__weak) id<T1AppLaunchTransitionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNShapeView * mask;                                            //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) CGPoint logoOrigin;                                           //@synthesize logoOrigin=_logoOrigin - In the implementation block
@property (nonatomic,readonly) CGSize logoSize;                                              //@synthesize logoSize=_logoSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimate;                                           //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (nonatomic,retain) UIView * hostView;                                              //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,retain) UIView * whiteBackgroundView;                                   //@synthesize whiteBackgroundView=_whiteBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * blueBackgroundView;                                    //@synthesize blueBackgroundView=_blueBackgroundView - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                              //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) CGAffineTransform initialHostViewTransform;                     //@synthesize initialHostViewTransform=_initialHostViewTransform - In the implementation block
+(SCD_Struct_T110)metricsWithHostView:(id)arg1 ;
-(id)initWithWindow:(id)arg1 hostView:(id)arg2 ;
-(void)runTransition;
-(void)_setInitialTransforms;
-(CGAffineTransform)_applyInitialHostViewTransformToTransformIfNecessary:(CGAffineTransform)arg1 ;
-(UIView *)whiteBackgroundView;
-(CGAffineTransform)_transformFromTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)initialHostViewTransform;
-(CGPoint)logoOrigin;
-(void)setWhiteBackgroundView:(UIView *)arg1 ;
-(UIView *)blueBackgroundView;
-(void)setBlueBackgroundView:(UIView *)arg1 ;
-(void)setInitialHostViewTransform:(CGAffineTransform)arg1 ;
-(void)setHostView:(UIView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<T1AppLaunchTransitionDelegate>)arg1 ;
-(UIWindow *)window;
-(id<T1AppLaunchTransitionDelegate>)delegate;
-(void)setWindow:(UIWindow *)arg1 ;
-(TFNShapeView *)mask;
-(void)setMask:(TFNShapeView *)arg1 ;
-(void)_reset;
-(UIView *)hostView;
-(BOOL)shouldAnimate;
-(CGSize)logoSize;
@end

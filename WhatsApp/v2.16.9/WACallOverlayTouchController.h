/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol WACallOverlayTouchControllerDelegate;
@class NSDate, POPSpringAnimation, UITapGestureRecognizer, UIPanGestureRecognizer, UIView, NSString;

@interface WACallOverlayTouchController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _positionValid;
	NSDate* _lastDragTime;
	CGPoint _initialDragPosition;
	POPSpringAnimation* _moveToFinalPositionAnimation;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _dragRecognizer;
	BOOL _enabled;
	id<WACallOverlayTouchControllerDelegate> _delegate;
	UIView* _overlayView;
	CGRect _layoutBounds;

}

@property (assign,nonatomic,__weak) id<WACallOverlayTouchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                  //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) CGRect layoutBounds;                                                   //@synthesize layoutBounds=_layoutBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewTapped;
-(void)viewDragged:(id)arg1 ;
-(CGPoint)adjustOverlayViewCenter:(CGPoint)arg1 fromOverlayViewSize:(CGSize)arg2 toOverlayViewSize:(CGSize)arg3 fromOverallBounds:(CGRect)arg4 toOverallBounds:(CGRect)arg5 ;
-(CGPoint)defaultOverlayPosition;
-(void)cancelMoveToFinalAnimation;
-(CGPoint)adjustOverlayViewCenter:(CGPoint)arg1 overlayViewSize:(CGSize)arg2 toStayWithinBounds:(CGRect)arg3 ;
-(void)setLayoutBounds:(CGRect)arg1 ;
-(void)updateOverlayPositionFromOverlaySize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(BOOL)enabled;
-(void)setDelegate:(id<WACallOverlayTouchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isDragging;
-(id<WACallOverlayTouchControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(CGRect)layoutBounds;
@end


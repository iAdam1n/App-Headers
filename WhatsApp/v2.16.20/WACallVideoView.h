/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIPanGestureRecognizer, UITapGestureRecognizer, UIImage;

@interface WACallVideoView : UIView {

	UIView* _minimizedView;
	UIView* _fullScreenView;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	BOOL _maximized;
	BOOL _deviceOrientationHasEvenRotation;
	BOOL _peerVideoHasEvenRotation;
	UIImage* _microphoneImage;
	BOOL _previewVideoFullScreen;
	int _minimizedViewAnchorLocation;
	UIView* _peerVideoView;
	UIView* _previewVideoView;
	double _minimizedViewBottomOffset;
	double _minimizedViewTopOffset;

}

@property (nonatomic,readonly) UIView * peerVideoView;                                                     //@synthesize peerVideoView=_peerVideoView - In the implementation block
@property (nonatomic,readonly) UIView * previewVideoView;                                                  //@synthesize previewVideoView=_previewVideoView - In the implementation block
@property (assign,nonatomic) int minimizedViewAnchorLocation;                                              //@synthesize minimizedViewAnchorLocation=_minimizedViewAnchorLocation - In the implementation block
@property (assign,getter=isPreviewVideoFullScreen,nonatomic) BOOL previewVideoFullScreen;                  //@synthesize previewVideoFullScreen=_previewVideoFullScreen - In the implementation block
@property (assign,nonatomic) double minimizedViewBottomOffset;                                             //@synthesize minimizedViewBottomOffset=_minimizedViewBottomOffset - In the implementation block
@property (assign,nonatomic) double minimizedViewTopOffset;                                                //@synthesize minimizedViewTopOffset=_minimizedViewTopOffset - In the implementation block
@property (assign,getter=isPeerVideoMuted,nonatomic) BOOL peerVideoMuted; 
@property (assign,getter=isPeerVideoPausedByPeer,nonatomic) BOOL peerVideoPausedByPeer; 
@property (assign,getter=isPeerVideoPausedByNetwork,nonatomic) BOOL peerVideoPausedByNetwork; 
@property (assign,getter=isPeerCallInterrupted,nonatomic) BOOL peerCallInterrupted; 
@property (assign,getter=isCallReconnecting,nonatomic) BOOL callReconnecting; 
@property (assign,getter=isSelfMuted,nonatomic) BOOL selfMuted; 
-(UIView *)peerVideoView;
-(BOOL)isPreviewVideoFullScreen;
-(UIView *)previewVideoView;
-(int)minimizedViewAnchorLocation;
-(id)previewVideoSubview;
-(void)setPreviewVideoFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPreviewVideoFullScreen:(BOOL)arg1 ;
-(void)setPeerVideoPausedByPeer:(BOOL)arg1 ;
-(void)setSelfMuted:(BOOL)arg1 ;
-(void)rotateViews:(double)arg1 ;
-(id)peerVideoSubview;
-(void)setMinimizedViewBottomOffset:(double)arg1 ;
-(void)setMinimizedViewTopOffset:(double)arg1 ;
-(void)setPeerVideoPausedByNetwork:(BOOL)arg1 ;
-(void)setPeerVideoMuted:(BOOL)arg1 ;
-(void)setPeerCallInterrupted:(BOOL)arg1 ;
-(void)setCallReconnecting:(BOOL)arg1 ;
-(void)moveMinimizedWindow:(id)arg1 ;
-(void)switchMinimizedView:(id)arg1 ;
-(void)peerOrientationDidChange:(id)arg1 ;
-(void)resizeVideoViewsAnimated:(BOOL)arg1 ;
-(CGPoint)positionOfAnchor:(int)arg1 ;
-(void)animateMinimizedViewToPosition:(CGPoint)arg1 withVelocity:(CGPoint)arg2 ;
-(CGSize)minimizedFrameSize;
-(void)setPeerVideoFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setPreviewVideoFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(int)closestAnchorToPoint:(CGPoint)arg1 ;
-(WAFrameAnchors)generateAnchors;
-(double)minimizedViewBottomOffset;
-(double)minimizedViewTopOffset;
-(BOOL)isSelfMuted;
-(BOOL)isCallReconnecting;
-(BOOL)isPeerCallInterrupted;
-(BOOL)isPeerVideoMuted;
-(BOOL)isPeerVideoPausedByPeer;
-(BOOL)isPeerVideoPausedByNetwork;
-(void)setMinimizedViewAnchorLocation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)minimize;
-(void)maximize;
-(void)deviceOrientationDidChange:(id)arg1 ;
@end

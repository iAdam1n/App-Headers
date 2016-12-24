/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@protocol TGCameraPreviewLayerView;
@class UIView, PGCamera, AVCaptureConnection;

@interface TGCameraPreviewView : UIView {

	UIView*<TGCameraPreviewLayerView> _wrapperView;
	UIView* _fadeView;
	UIView* _snapshotView;
	PGCamera* _camera;

}

@property (nonatomic,readonly) PGCamera * camera; 
@property (nonatomic,readonly) AVCaptureConnection * captureConnection; 
-(AVCaptureConnection *)captureConnection;
-(void)beginTransitionWithSnapshotImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)endTransitionAnimated:(BOOL)arg1 ;
-(void)setupWithCamera:(id)arg1 ;
-(CGPoint)devicePointOfInterestForPoint:(CGPoint)arg1 ;
-(id)legacyPreviewLayer;
-(void)endResetTransitionAnimated:(BOOL)arg1 ;
-(void)fadeInAnimated:(BOOL)arg1 ;
-(void)beginResetTransitionAnimated:(BOOL)arg1 ;
-(void)fadeOutAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)invalidate;
-(id)displayLayer;
-(PGCamera *)camera;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class CAShapeLayer, UIImageView, MNMontageCameraCaptureButtonListenerAnnouncer, UIColor;

@interface MNMontageCameraCaptureButton : UIControl {

	CAShapeLayer* _fillLayer;
	CAShapeLayer* _outerLayer;
	CAShapeLayer* _progressLayer;
	UIImageView* _promoImageView;
	BOOL _expanded;
	MNMontageCameraCaptureButtonListenerAnnouncer* _announcer;
	BOOL _showsPromoImage;
	BOOL _isTouchDown;
	double _recordingProgress;
	UIColor* _ringColor;

}

@property (assign,nonatomic) double recordingProgress;                           //@synthesize recordingProgress=_recordingProgress - In the implementation block
@property (nonatomic,copy) UIColor * ringColor;                                  //@synthesize ringColor=_ringColor - In the implementation block
@property (assign,nonatomic) double innerFillAlpha; 
@property (assign,nonatomic) BOOL rendersShadow; 
@property (assign,nonatomic) BOOL showsPromoImage;                               //@synthesize showsPromoImage=_showsPromoImage - In the implementation block
@property (getter=isTouchDown,nonatomic,readonly) BOOL isTouchDown;              //@synthesize isTouchDown=_isTouchDown - In the implementation block
+(CGSize)intrinsicSize;
-(void)setInnerFillAlpha:(double)arg1 ;
-(void)setRendersShadow:(BOOL)arg1 ;
-(void)setPromoImageTransform:(CGAffineTransform)arg1 ;
-(void)setShowsPromoImage:(BOOL)arg1 ;
-(void)setPromoImage:(id)arg1 ;
-(void)didTouchCancel;
-(void)_updateOuterRingColor;
-(BOOL)rendersShadow;
-(double)innerFillAlpha;
-(double)recordingProgress;
-(BOOL)showsPromoImage;
-(void)setRecordingProgress:(double)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isTouchDown;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)didTouchDown;
-(void)didTouchUp;
-(void)setRingColor:(UIColor *)arg1 ;
-(UIColor *)ringColor;
@end

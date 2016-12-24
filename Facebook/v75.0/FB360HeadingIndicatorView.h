/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIView, CAShapeLayer;

@interface FB360HeadingIndicatorView : UIControl {

	UIImageView* _backgroundImageView;
	UIView* _compassWrapper;
	UIImageView* _compassImageView;
	CAShapeLayer* _fovLayer;
	CAShapeLayer* _poiMarker;
	BOOL _dimmed;
	double _heading;
	double _fieldOfView;
	double _pointOfInterestHeading;
	UIEdgeInsets _hitTestSlop;

}

@property (assign,nonatomic) double heading;                             //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double fieldOfView;                         //@synthesize fieldOfView=_fieldOfView - In the implementation block
@property (assign,nonatomic) double pointOfInterestHeading;              //@synthesize pointOfInterestHeading=_pointOfInterestHeading - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestSlop;                   //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(void)_setAlphasForViewDimmed:(BOOL)arg1 ;
-(void)_updateVisibleRegionShape;
-(void)_updatePointOfInterestMarkerShape;
-(void)setPointOfInterestHeading:(double)arg1 animated:(BOOL)arg2 ;
-(void)setPointOfInterestHeading:(double)arg1 ;
-(double)pointOfInterestHeading;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)heading;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHeading:(double)arg1 ;
-(void)_handleTap;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFieldOfView:(double)arg1 ;
-(double)fieldOfView;
@end

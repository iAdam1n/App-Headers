/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, FBLabelLayer;

@interface FBRouteCalloutView : UIView {

	CALayer* _arrowLayer;
	CALayer* _dotLayer;
	CALayer* _backgroundLayer;
	FBLabelLayer* _titleLabelLayer;
	FBLabelLayer* _subtitleLabelLayer;

}
-(void)updateForPosition:(CGPoint)arg1 title:(id)arg2 subtitle:(id)arg3 withinViewOfSize:(CGSize)arg4 avoidOverlapping:(CGRect)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

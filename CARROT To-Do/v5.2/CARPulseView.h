/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CARPulseView : UIView {

	CAShapeLayer* _layer;
	char _isAngry;

}
+(Class)layerClass;
-(void)attachAnimations;
-(void)setLayerProperties;
-(void)attachPathAnimation;
-(void)attachColorAnimationBlue;
-(void)attachColorAnimationPink;
-(void)attachColorAnimationRed;
-(void)redAnimationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)startupAnimationWithKeyPath:(id)arg1 ;
-(void)attachAngryAnimations;
-(void)pinkAnimationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)attachStartupPathAnimation;
-(void)dealloc;
-(void)layoutSubviews;
-(id)animationWithKeyPath:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)stopAnimations;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAShapeView.h>

@class WAShapeView, CAAnimation;

@interface WAPulsingCircleView : WAShapeView {

	WAShapeView* _innerCircle;
	double _innerCircleRadius;

}

@property (assign,nonatomic) double innerCircleRadius;                //@synthesize innerCircleRadius=_innerCircleRadius - In the implementation block
@property (nonatomic,copy) CAAnimation * pulseAnimation; 
-(void)setInnerCircleRadius:(double)arg1 ;
-(CAAnimation *)pulseAnimation;
-(void)setPulseAnimation:(CAAnimation *)arg1 ;
-(double)innerCircleRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAPaintBrushStrokeInterpolator.h>

@class NSMutableArray;

@interface WAPaintBrushNaturalStrokeInterpolator : WAPaintBrushStrokeInterpolator {

	float _smoothedSpeed;
	NSMutableArray* _prevSamplesBuffer;
	BOOL _isPrevSamplesBufferFull;
	unsigned long long _prevSamplesBufferIndex;
	float _stepInterval;

}
-(id)initWithColor:(float)arg1 pixelsPerUnit:(/*^block*/id)arg2 ;
-(BOOL)addPositionSample:(id)arg1 discardable:(BOOL)arg2 ;
-(void)drawQuadraticCurveWithControlPointsP0:(float)arg1 p1:(float)arg2 p2:(float)arg3 fromSpeed:(float)arg4 ;
-(void)finalize;
@end

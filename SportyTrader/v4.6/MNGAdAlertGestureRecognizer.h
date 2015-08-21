/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@interface MNGAdAlertGestureRecognizer : UIGestureRecognizer {

	BOOL _thresholdReached;
	int _currentAlertGestureState;
	long long _curNumZigZags;
	long long _numZigZagsForRecognition;
	double _minTrackedDistanceForZigZag;
	CGPoint _inflectionPoint;
	CGPoint _startingPoint;

}

@property (assign,nonatomic) long long numZigZagsForRecognition;              //@synthesize numZigZagsForRecognition=_numZigZagsForRecognition - In the implementation block
@property (assign,nonatomic) double minTrackedDistanceForZigZag;              //@synthesize minTrackedDistanceForZigZag=_minTrackedDistanceForZigZag - In the implementation block
@property (assign,nonatomic) int currentAlertGestureState;                    //@synthesize currentAlertGestureState=_currentAlertGestureState - In the implementation block
@property (assign,nonatomic) CGPoint inflectionPoint;                         //@synthesize inflectionPoint=_inflectionPoint - In the implementation block
@property (assign,nonatomic) BOOL thresholdReached;                           //@synthesize thresholdReached=_thresholdReached - In the implementation block
@property (assign,nonatomic) long long curNumZigZags;                         //@synthesize curNumZigZags=_curNumZigZags - In the implementation block
@property (assign,nonatomic) CGPoint startingPoint;                           //@synthesize startingPoint=_startingPoint - In the implementation block
-(void)setMinTrackedDistanceForZigZag:(double)arg1 ;
-(void)setNumZigZagsForRecognition:(long long)arg1 ;
-(void)resetToInitialState;
-(void)setInflectionPoint:(CGPoint)arg1 ;
-(void)setStartingPoint:(CGPoint)arg1 ;
-(void)updateAlertGestureStateWithTouches:(id)arg1 ;
-(int)currentAlertGestureState;
-(void)setCurrentAlertGestureState:(int)arg1 ;
-(void)setThresholdReached:(BOOL)arg1 ;
-(void)setCurNumZigZags:(long long)arg1 ;
-(CGPoint)inflectionPoint;
-(double)minTrackedDistanceForZigZag;
-(BOOL)thresholdReached;
-(long long)curNumZigZags;
-(long long)numZigZagsForRecognition;
-(BOOL)touchIsWithinBoundsForTouches:(id)arg1 ;
-(void)handleZigRightGestureStateWithTouches:(id)arg1 ;
-(void)handleZagLeftGestureStateWithTouches:(id)arg1 ;
-(CGPoint)startingPoint;
-(BOOL)validYAxisMovementForTouches:(id)arg1 ;
-(id)init;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)commonInit;
@end


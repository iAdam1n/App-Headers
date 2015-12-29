//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface SCCashLongPressGestureRecognizer : UIGestureRecognizer
{
    _Bool _waiting;
    double _minimumPressDuration;
    long long _numberOfTouchesRequired;
}

@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancelWaiting;
- (void)recognizeGesture;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

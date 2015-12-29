//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SKPAnimationDelegate : NSObject
{
    _Bool _goingToBackgroundCountsAsFinishing;
    CDUnknownBlockType _start;
    CDUnknownBlockType _stop;
    NSMutableDictionary *_progressCallbacks;
}

+ (id)animationDelegateWithStartHandler:(CDUnknownBlockType)arg1 stopHandler:(CDUnknownBlockType)arg2 goingToBackgroundCountsAsFinishing:(_Bool)arg3;
+ (id)animationDelegateWithStartHandler:(CDUnknownBlockType)arg1 stopHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *progressCallbacks; // @synthesize progressCallbacks=_progressCallbacks;
@property(nonatomic) _Bool goingToBackgroundCountsAsFinishing; // @synthesize goingToBackgroundCountsAsFinishing=_goingToBackgroundCountsAsFinishing;
@property(copy, nonatomic) CDUnknownBlockType stop; // @synthesize stop=_stop;
@property(copy, nonatomic) CDUnknownBlockType start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)addProgressCallback:(CDUnknownBlockType)arg1 forApproximateTime:(double)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end

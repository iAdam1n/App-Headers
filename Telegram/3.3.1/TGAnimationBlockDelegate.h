//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSNumber;

@interface TGAnimationBlockDelegate : NSObject
{
    _Bool _removeLayerOnCompletion;
    NSNumber *_opacityOnCompletion;
    CALayer *_layer;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak CALayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) NSNumber *opacityOnCompletion; // @synthesize opacityOnCompletion=_opacityOnCompletion;
@property(nonatomic) _Bool removeLayerOnCompletion; // @synthesize removeLayerOnCompletion=_removeLayerOnCompletion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end

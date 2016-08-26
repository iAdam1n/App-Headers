//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PGCustomToolValue.h"

@class NSString, PGCurvesValue;

@interface PGCurvesToolValue : NSObject <NSCopying, PGCustomToolValue>
{
    int _activeType;
    PGCurvesValue *_luminanceCurve;
    PGCurvesValue *_redCurve;
    PGCurvesValue *_greenCurve;
    PGCurvesValue *_blueCurve;
}

+ (id)defaultValue;
@property(nonatomic) int activeType; // @synthesize activeType=_activeType;
@property(retain, nonatomic) PGCurvesValue *blueCurve; // @synthesize blueCurve=_blueCurve;
@property(retain, nonatomic) PGCurvesValue *greenCurve; // @synthesize greenCurve=_greenCurve;
@property(retain, nonatomic) PGCurvesValue *redCurve; // @synthesize redCurve=_redCurve;
@property(retain, nonatomic) PGCurvesValue *luminanceCurve; // @synthesize luminanceCurve=_luminanceCurve;
- (void).cxx_destruct;
- (id)cleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

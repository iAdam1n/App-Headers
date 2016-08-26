//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PGPhotoTool.h"

@class PGPhotoProcessPassParameter;

@interface PGCurvesTool : PGPhotoTool
{
    PGPhotoProcessPassParameter *_rgbCurveParameter;
    PGPhotoProcessPassParameter *_redCurveParameter;
    PGPhotoProcessPassParameter *_greenCurveParameter;
    PGPhotoProcessPassParameter *_blueCurveParameter;
    PGPhotoProcessPassParameter *_skipToneParameter;
}

- (void).cxx_destruct;
- (id)shaderString;
- (id)stringValue;
- (id)ancillaryShaderString;
- (void)updateParameters;
- (id)parameters;
- (_Bool)shouldBeSkipped;
- (Class)valueClass;
- (id)itemControlViewWithChangeBlock:(CDUnknownBlockType)arg1;
- (id)itemAreaViewWithChangeBlock:(CDUnknownBlockType)arg1;
- (id)image;
- (id)title;
- (id)init;

@end

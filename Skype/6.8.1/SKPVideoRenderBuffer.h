//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface SKPVideoRenderBuffer : NSObject
{
    unsigned int _textureNames[3];
    _Bool _invalid;
    _Bool _texturesBound;
    int _textureWidth;
    int _textureHeight;
    float _texOffset;
    EAGLContext *_context;
    unsigned long long _imageStartTimestamp;
    unsigned long long _imagePresentationTimestamp;
    unsigned long long _imageFourcc;
    unsigned long long _imageBitsPerPixel;
    unsigned long long _imageStep;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
    long long _imageRotation;
    unsigned long long _displayWidth;
    unsigned long long _displayHeight;
    unsigned long long _generation;
    unsigned long long _numPlanes;
}

@property(nonatomic) _Bool texturesBound; // @synthesize texturesBound=_texturesBound;
@property(nonatomic) unsigned long long numPlanes; // @synthesize numPlanes=_numPlanes;
@property(nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(nonatomic) float texOffset; // @synthesize texOffset=_texOffset;
@property(nonatomic) int textureHeight; // @synthesize textureHeight=_textureHeight;
@property(nonatomic) int textureWidth; // @synthesize textureWidth=_textureWidth;
@property(nonatomic) unsigned long long displayHeight; // @synthesize displayHeight=_displayHeight;
@property(nonatomic) unsigned long long displayWidth; // @synthesize displayWidth=_displayWidth;
@property(nonatomic) long long imageRotation; // @synthesize imageRotation=_imageRotation;
@property(nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned long long imageStep; // @synthesize imageStep=_imageStep;
@property(nonatomic) unsigned long long imageBitsPerPixel; // @synthesize imageBitsPerPixel=_imageBitsPerPixel;
@property(nonatomic) unsigned long long imageFourcc; // @synthesize imageFourcc=_imageFourcc;
@property(nonatomic) unsigned long long imagePresentationTimestamp; // @synthesize imagePresentationTimestamp=_imagePresentationTimestamp;
@property(nonatomic) unsigned long long imageStartTimestamp; // @synthesize imageStartTimestamp=_imageStartTimestamp;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)transferVideoFrame:(id)arg1 withAbsoluteTime:(unsigned int)arg2;
- (void)invalidate;
- (void)unbind;
- (_Bool)bind;
- (void)resetState;
- (unsigned int *)textureNames;
- (void)dealloc;
- (id)init;

@end

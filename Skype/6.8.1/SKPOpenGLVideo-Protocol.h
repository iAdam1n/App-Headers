//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLSharegroup, SKPVideoRenderBuffer;

@protocol SKPOpenGLVideo <NSObject>
- (void)feedbackForTarget:(id)arg1 sourceSize:(struct CGSize)arg2 regionOfInterest:(struct CGRect)arg3 renderedSize:(struct CGSize)arg4 screenSize:(struct CGSize)arg5 maxFps:(unsigned long long)arg6;
- (SKPVideoRenderBuffer *)renderBuffer;
- (EAGLSharegroup *)sharegroup;
- (unsigned long long)renderingAPI;
@end

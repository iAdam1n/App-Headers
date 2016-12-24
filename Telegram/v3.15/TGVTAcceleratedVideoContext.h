/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class SQueue, EAGLContext;

@interface TGVTAcceleratedVideoContext : NSObject {

	SQueue* _queue;
	EAGLContext* _context;
	int _program;
	CVOpenGLESTextureCacheRef _videoTextureCache;
	int* _uniforms;

}

@property (nonatomic,readonly) CVOpenGLESTextureCacheRef videoTextureCache;              //@synthesize videoTextureCache=_videoTextureCache - In the implementation block
@property (nonatomic,readonly) int* uniforms;                                            //@synthesize uniforms=_uniforms - In the implementation block
@property (nonatomic,readonly) int program;                                              //@synthesize program=_program - In the implementation block
+(id)instance;
-(BOOL)_loadShaders;
-(BOOL)_compileShaderWithType:(int)arg1 outShader:(int*)arg2 ;
-(void)performAsynchronouslyWithContext:(/*^block*/id)arg1 ;
-(void)performSynchronouslyWithContext:(/*^block*/id)arg1 ;
-(CVOpenGLESTextureCacheRef)videoTextureCache;
-(id)init;
-(void)dealloc;
-(int*)uniforms;
-(int)program;
-(void)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2 ;
-(void)presentRenderbuffer:(unsigned long long)arg1 ;
@end

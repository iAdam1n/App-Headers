/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EAGLContext;

@interface IGSurface : NSObject {

	unsigned _texture;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	BOOL _generatedTexture;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _cvTexture;
	EAGLContext* _glContext;
	CAEAGLLayer* _layer;
	CGSize _size;
	BOOL _layerRenderBufferStorageNeedsRefresh;
	unsigned char _flipped;
	unsigned _textureTarget;
	CVBufferRef _pixelBuffer;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,readonly) unsigned texture; 
@property (nonatomic,readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer; 
@property (nonatomic,readonly) unsigned renderbuffer; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTexture:(unsigned)arg1 target:(unsigned)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithFramebuffer:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithIGTexture:(id)arg1 ;
-(CVBufferRef)pixelBuffer;
-(CGSize)size;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(id)initWithLayer:(CAEAGLLayer*)arg1 ;
-(unsigned)texture;
-(unsigned)textureTarget;
-(unsigned char)isFlipped;
-(unsigned)framebuffer;
-(unsigned)renderbuffer;
@end

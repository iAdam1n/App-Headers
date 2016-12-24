/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EAGLContext;

@interface MQSurface : NSObject {

	CVBufferRef _chromaCVTexture;
	CVBufferRef _lumaCVTexture;
	EAGLContext* _glContext;
	CVOpenGLESTextureCacheRef _textureCache;
	unsigned _chromaTexture;
	unsigned _chromaTextureTarget;
	unsigned _lumaTexture;
	unsigned _lumaTextureTarget;
	CVBufferRef _pixelBuffer;
	unsigned long long _bytesPerRow;
	CGSize _size;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer;                     //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned chromaTexture;                      //@synthesize chromaTexture=_chromaTexture - In the implementation block
@property (nonatomic,readonly) unsigned chromaTextureTarget;                //@synthesize chromaTextureTarget=_chromaTextureTarget - In the implementation block
@property (nonatomic,readonly) unsigned lumaTexture;                        //@synthesize lumaTexture=_lumaTexture - In the implementation block
@property (nonatomic,readonly) unsigned lumaTextureTarget;                  //@synthesize lumaTextureTarget=_lumaTextureTarget - In the implementation block
-(id)initWithPixelBuffer:(CVBufferRef)arg1 textureCache:(CVOpenGLESTextureCacheRef)arg2 ;
-(void)bindTextures;
-(unsigned)lumaTextureTarget;
-(unsigned)chromaTextureTarget;
-(CGSize)size;
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(unsigned long long)bytesPerRow;
-(unsigned)lumaTexture;
-(unsigned)chromaTexture;
@end

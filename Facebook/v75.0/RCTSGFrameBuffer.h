/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class EAGLContext;

@interface RCTSGFrameBuffer : NSObject {

	unsigned _frameBuffer;
	unsigned _texture;
	EAGLContext* _context;
	CGSize _size;
	RCTSGTextureOptions _textureOptions;

}

@property (nonatomic,readonly) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) RCTSGTextureOptions textureOptions;              //@synthesize textureOptions=_textureOptions - In the implementation block
@property (nonatomic,readonly) unsigned texture;                                //@synthesize texture=_texture - In the implementation block
-(void)generateTexture;
-(id)initWithContext:(id)arg1 size:(CGSize)arg2 textureOptions:(RCTSGTextureOptions)arg3 ;
-(void)generateFrameBuffer;
-(id)initWithContext:(id)arg1 size:(CGSize)arg2 inputTexture:(unsigned)arg3 ;
-(CGImageRef)getCGImageFromBuffer;
-(RCTSGTextureOptions)textureOptions;
-(id)initWithContext:(id)arg1 size:(CGSize)arg2 ;
-(void)activateFrameBuffer;
-(CGSize)size;
-(void)dealloc;
-(unsigned)texture;
@end

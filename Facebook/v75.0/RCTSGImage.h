/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTSGGroup.h>

@class NSString, NSDictionary;

@interface RCTSGImage : RCTSGGroup {

	unsigned long long _fragmentUID;
	unsigned long long _vertexUID;
	unsigned _program;
	int _samplerCount;
	NSString* _samplerBindingName[16];
	NSString* _samplerImageName[16];
	int _samplerGLTextureID[16];
	float _samplerGLTextureWidth[16];
	float _samplerGLTextureHeight[16];
	BOOL _zWrite;
	int _sortOrder;
	int _blendMode;
	int _ztestMode;
	NSString* _vertexProgram;
	NSString* _fragmentProgram;
	NSDictionary* _uniforms;

}

@property (assign,nonatomic) BOOL zWrite;                           //@synthesize zWrite=_zWrite - In the implementation block
@property (assign,nonatomic) int sortOrder;                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) int blendMode;                         //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int ztestMode;                         //@synthesize ztestMode=_ztestMode - In the implementation block
@property (nonatomic,copy) NSString * vertexProgram;                //@synthesize vertexProgram=_vertexProgram - In the implementation block
@property (nonatomic,copy) NSString * fragmentProgram;              //@synthesize fragmentProgram=_fragmentProgram - In the implementation block
@property (nonatomic,copy) NSDictionary * uniforms;                 //@synthesize uniforms=_uniforms - In the implementation block
-(void)updateProps:(id)arg1 ;
-(void)setSamplers:(id)arg1 ;
-(void)setZtestMode:(int)arg1 ;
-(void)renderGather:(RCTSGRenderContext*)arg1 sgview:(id)arg2 matrixStack:(RCTSGMatrix*)arg3 ;
-(void)setSamplerWithGLTexture:(int)arg1 binding:(id)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setSamplerWithBinding:(id)arg1 binding:(id)arg2 ;
-(void)setVertexProgram:(NSString *)arg1 ;
-(void)setFragmentProgram:(NSString *)arg1 ;
-(void)setZWrite:(BOOL)arg1 ;
-(BOOL)zWrite;
-(int)ztestMode;
-(NSString *)vertexProgram;
-(NSString *)fragmentProgram;
-(id)init;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(NSDictionary *)uniforms;
-(void)setProgram:(unsigned)arg1 ;
-(void)setUniforms:(NSDictionary *)arg1 ;
@end


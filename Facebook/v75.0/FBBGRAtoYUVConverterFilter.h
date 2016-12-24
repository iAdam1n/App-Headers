/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBOpenGLFilter.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Facebook/FBFilterCropping.h>

@class FBOpenGLProgram, NSString;

@interface FBBGRAtoYUVConverterFilter : FBOpenGLFilter <NSCopying, FBFilterCropping> {

	BOOL _flip;
	BOOL _needsConfigure;
	FBOpenGLProgram* _uvProgram;
	NSString* _fullFragmentShader;
	NSString* _fullVertexShader;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
@property (nonatomic,copy) NSString * fullFragmentShader;               //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
@property (nonatomic,copy) NSString * fullVertexShader;                 //@synthesize fullVertexShader=_fullVertexShader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(unsigned long long)inputPixelFormat;
-(NSString *)fullVertexShader;
-(NSString *)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(SCD_Struct_FB100)arg4 ;
-(void)configureProgram:(id)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(id)fullFragmentShaderUV;
-(void)_render:(id)arg1 to:(id)arg2 program:(id)arg3 framebuffer:(unsigned)arg4 framebufferSize:(CGSize)arg5 ;
-(void)setFlip:(BOOL)arg1 ;
-(BOOL)isIdentityFilter;
-(void)setFullFragmentShader:(NSString *)arg1 ;
-(void)setFullVertexShader:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)flip;
-(unsigned long long)outputPixelFormat;
@end

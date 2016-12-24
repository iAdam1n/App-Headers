/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Telegram/Telegram-Structs.h>
@class NSMutableDictionary, NSMutableArray, EAGLSharegroup, EAGLContext, GLProgram, NSObject, GPUImageFramebufferCache;

@interface GPUImageContext : NSObject {

	NSMutableDictionary* shaderProgramCache;
	NSMutableArray* shaderProgramUsageHistory;
	EAGLSharegroup* _sharegroup;
	EAGLContext* _context;
	GLProgram* _currentShaderProgram;
	NSObject*<OS_dispatch_queue> _contextQueue;
	CVOpenGLESTextureCacheRef _coreVideoTextureCache;
	GPUImageFramebufferCache* _framebufferCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> contextQueue;                    //@synthesize contextQueue=_contextQueue - In the implementation block
@property (nonatomic,retain) GLProgram * currentShaderProgram;                               //@synthesize currentShaderProgram=_currentShaderProgram - In the implementation block
@property (nonatomic,retain,readonly) EAGLContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CVOpenGLESTextureCacheRef coreVideoTextureCache;              //@synthesize coreVideoTextureCache=_coreVideoTextureCache - In the implementation block
@property (nonatomic,readonly) GPUImageFramebufferCache * framebufferCache;                  //@synthesize framebufferCache=_framebufferCache - In the implementation block
+(void)useImageProcessingContext;
+(BOOL)supportsFastTextureUpload;
+(id)sharedImageProcessingContext;
+(void)setActiveShaderProgram:(id)arg1 ;
+(id)sharedFramebufferCache;
+(id)sharedContextQueue;
+(void*)contextKey;
+(BOOL)deviceSupportsOpenGLESExtension:(id)arg1 ;
+(int)maximumTextureSizeForThisDevice;
+(int)maximumTextureUnitsForThisDevice;
+(int)maximumVaryingVectorsForThisDevice;
+(BOOL)deviceSupportsRedTextures;
+(BOOL)deviceSupportsFramebufferReads;
+(CGSize)sizeThatFitsWithinATextureForSize:(CGSize)arg1 ;
-(id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 ;
-(void)presentBufferForDisplay;
-(CVOpenGLESTextureCacheRef)coreVideoTextureCache;
-(GPUImageFramebufferCache *)framebufferCache;
-(NSObject*<OS_dispatch_queue>)contextQueue;
-(void)useAsCurrentContext;
-(void)setContextShaderProgram:(id)arg1 ;
-(GLProgram *)currentShaderProgram;
-(void)setCurrentShaderProgram:(GLProgram *)arg1 ;
-(void)useSharegroup:(id)arg1 ;
-(id)init;
-(EAGLContext *)context;
-(id)createContext;
@end

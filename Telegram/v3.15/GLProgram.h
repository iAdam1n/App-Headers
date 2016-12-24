/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GLProgram : NSObject {

	NSMutableArray* attributes;
	NSMutableArray* uniforms;
	unsigned program;
	unsigned vertShader;
	unsigned fragShader;
	BOOL _initialized;

}

@property (assign,nonatomic) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 string:(id)arg3 ;
-(id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 ;
-(id)logForOpenGLObject:(unsigned)arg1 infoCallback:(/*function pointer*/void*)arg2 logFunc:(/*function pointer*/void*)arg3 ;
-(id)initWithVertexShaderString:(id)arg1 fragmentShaderFilename:(id)arg2 ;
-(id)initWithVertexShaderFilename:(id)arg1 fragmentShaderFilename:(id)arg2 ;
-(unsigned)attributeIndex:(id)arg1 ;
-(unsigned)uniformIndex:(id)arg1 ;
-(id)vertexShaderLog;
-(id)fragmentShaderLog;
-(id)programLog;
-(void)dealloc;
-(void)use;
-(void)validate;
-(BOOL)link;
-(void)addAttribute:(id)arg1 ;
-(BOOL)initialized;
-(void)setInitialized:(BOOL)arg1 ;
@end

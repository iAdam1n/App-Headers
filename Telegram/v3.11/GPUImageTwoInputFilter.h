/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/GPUImageFilter.h>

@class GPUImageFramebuffer;

@interface GPUImageTwoInputFilter : GPUImageFilter {

	GPUImageFramebuffer* secondInputFramebuffer;
	int filterSecondTextureCoordinateAttribute;
	int filterInputTextureUniform2;
	int inputRotation2;
	SCD_Struct_PG102 firstFrameTime;
	SCD_Struct_PG102 secondFrameTime;
	BOOL hasSetFirstTexture;
	BOOL hasReceivedFirstFrame;
	BOOL hasReceivedSecondFrame;
	BOOL firstFrameWasVideo;
	BOOL secondFrameWasVideo;
	BOOL firstFrameCheckDisabled;
	BOOL secondFrameCheckDisabled;

}
-(void)newFrameReadyAtTime:(SCD_Struct_PG102)arg1 atIndex:(long long)arg2 ;
-(void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2 ;
-(long long)nextAvailableTextureIndex;
-(void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)setInputRotation:(int)arg1 atIndex:(long long)arg2 ;
-(id)initWithFragmentShaderFromString:(id)arg1 ;
-(id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2 ;
-(void)initializeAttributes;
-(void)renderToTextureWithVertices:(const float*)arg1 textureCoordinates:(const float*)arg2 ;
-(void)disableFirstFrameCheck;
-(void)disableSecondFrameCheck;
-(CGSize)rotatedSize:(CGSize)arg1 forIndex:(long long)arg2 ;
@end

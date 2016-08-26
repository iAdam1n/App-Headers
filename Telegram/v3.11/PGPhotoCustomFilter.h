/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/GPUImageFilter.h>

@interface PGPhotoCustomFilter : GPUImageFilter {

	int _intensityUniform;
	unsigned _filterSourceTexture2;
	unsigned _filterSourceTexture3;
	unsigned _filterSourceTexture4;
	unsigned _filterSourceTexture5;
	unsigned _filterSourceTexture6;
	int _filterInputTextureUniform2;
	int _filterInputTextureUniform3;
	int _filterInputTextureUniform4;
	int _filterInputTextureUniform5;
	int _filterInputTextureUniform6;
	double _intensity;

}

@property (assign,nonatomic) double intensity;              //@synthesize intensity=_intensity - In the implementation block
-(id)initWithFragmentShaderFromString:(id)arg1 ;
-(void)renderToTextureWithVertices:(const float*)arg1 textureCoordinates:(const float*)arg2 ;
-(void)addTextureWithImage:(id)arg1 textureIndex:(long long)arg2 ;
-(void)dealloc;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
@end

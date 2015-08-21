/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGLFilter.h>

@class NSData;

@interface IGStabilizationFilter : IGGLFilter {

	unsigned _vertexBuffer;
	unsigned _indexBuffer;
	unsigned long long _stripSize;
	GLKMatrix4 _projection;
	BOOL _needsRefresh;
	BOOL _needsMeshUpdate;
	long long _mode;
	double _zoom;
	NSData* _frameWarp;
	SCD_Struct_IG66 _cameraParameters;

}

@property (assign,nonatomic) SCD_Struct_IG66 cameraParameters;              //@synthesize cameraParameters=_cameraParameters - In the implementation block
@property (assign,nonatomic) long long mode;                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double zoom;                                   //@synthesize zoom=_zoom - In the implementation block
@property (nonatomic,retain) NSData * frameWarp;                            //@synthesize frameWarp=_frameWarp - In the implementation block
-(void)setCameraParameters:(SCD_Struct_IG66)arg1 ;
-(void)setFrameWarp:(NSData *)arg1 ;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)bindVertexBufferWithProgram:(id)arg1 ;
-(void)bindIndexBufferWithProgram:(id)arg1 ;
-(void)bindAttributeArrays:(id)arg1 ;
-(SCD_Struct_IG66)cameraParameters;
-(NSData *)frameWarp;
-(id)init;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
@end


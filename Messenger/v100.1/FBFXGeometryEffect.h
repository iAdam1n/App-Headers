/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFXEffect.h>

@interface FBFXGeometryEffect : FBFXEffect {

	FBFXGeometryEffectShader _shader;

}
-(unsigned)buildGeometryWithRect:(CGRect)arg1 texCoordExtent:(TexCoordExtent)arg2 requestVertexBuffer:(/*^block*/id)arg3 requestIndexBuffer:(/*^block*/id)arg4 ;
-(void)renderWithRect:(CGRect)arg1 transform:(tmat4x4<float>)arg2 texture:(unsigned)arg3 texCoordExtent:(TexCoordExtent)arg4 alpha:(float)arg5 ;
-(void)teardown;
@end

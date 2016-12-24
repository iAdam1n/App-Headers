/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGContext;

@interface IGGLShader : NSObject {

	unsigned _shaderId;
	IGContext* _context;

}

@property (assign,nonatomic,__weak) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned shaderId;                     //@synthesize shaderId=_shaderId - In the implementation block
-(id)initVertexShaderWithSource:(id)arg1 ;
-(id)initFragmentShaderWithSource:(id)arg1 ;
-(id)initShaderWithSource:(id)arg1 type:(long long)arg2 ;
-(unsigned)shaderId;
-(void)dealloc;
-(IGContext *)context;
-(void)setContext:(IGContext *)arg1 ;
@end
